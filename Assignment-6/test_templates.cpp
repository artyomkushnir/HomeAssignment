/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <gtest/gtest.h>
#include <vector>

template <typename T>
class MyClass {
private:
    T instance;
    int number;
    std::vector<float> vec;

public:
    MyClass(T obj, int num, std::vector<float> v) : instance(obj), number(num), vec(v) {}

    bool foo() {
        return instance.bar(number, vec);
    }
};

//Partial specialization for int
template <>
class MyClass<int> {
public:
    MyClass(int, int, std::vector<float>) {}

    bool foo() {
        return true;
    }
};

//Partial specialization for double
template <>
class MyClass<double> {
public:
    MyClass(double, int, std::vector<float>) {}

    bool foo() {
        return false;
    }
};

//test classes
class Class1 {
public:
    bool bar(int num, std::vector<float>&) {
        return num > 0;
    }

    int c_1_1() { return 1; }
    float c_1_2() { return 2.0f; }
    void c_1_3() {}
};

class Class2 {
public:
    bool bar(int, std::vector<float>& vec) {
        return !vec.empty();
    }

    int c_2_1() { return 1; }
    float c_2_2() { return 2.0f; }
    void c_2_3() {}
};

class Class3 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num == static_cast<int>(vec.size() * -1);
    }

    int c_3_1() { return 1; }
    float c_3_2() { return 2.0f; }
    void c_3_3() {}
};

//tests
TEST(MyClassTest, Class1True) {
    Class1 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    MyClass<Class1> myClass(obj, 1, vec);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, Class1False) {
    Class1 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    MyClass<Class1> myClass(obj, -1, vec);
    EXPECT_FALSE(myClass.foo());
}

TEST(MyClassTest, Class2True) {
    Class2 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    MyClass<Class2> myClass(obj, 0, vec);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, Class2False) {
    Class2 obj;
    std::vector<float> vec;
    MyClass<Class2> myClass(obj, 0, vec);
    EXPECT_FALSE(myClass.foo());
}

TEST(MyClassTest, Class3True) {
    Class3 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    MyClass<Class3> myClass(obj, -2, vec);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, Class3False) {
    Class3 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    MyClass<Class3> myClass(obj, 2, vec);
    EXPECT_FALSE(myClass.foo());
}

TEST(MyClassTest, IntSpecialization) {
    MyClass<int> myClass(0, 0, {});
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, DoubleSpecialization) {
    MyClass<double> myClass(0.0, 0, {});
    EXPECT_FALSE(myClass.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
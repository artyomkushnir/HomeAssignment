/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <gtest/gtest.h>
#include "main.cpp"

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

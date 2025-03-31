/* Artyom Kushnir st135665@student.spbu.ru
*/
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


#include <iostream>

class Person {
public:
    Person();
    Person(std::string name, std::size_t age);
    ~Person();

    void sayHello();
private:
    std::string name;
    std::size_t age;
};
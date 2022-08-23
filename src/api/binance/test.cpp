#include "test.h"

Person::Person(){
    name = "No Name";
    age = 0;
}

Person::Person(std::string name, std::size_t age) : name(name), age(age)
{
}

void Person::sayHello()
{
    std::cout << "Hello, my name is " << name;
}
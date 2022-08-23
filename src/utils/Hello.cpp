#include "Hello.h"

class Hello : public Printer
{
public:
    Hello(){this->setText("Hello");};
    void print(){std::cout<<this->getText()<<'\n';};
private:
};
#include <iostream>

class Printer
{
public:
    Printer(){};
    Printer(std::string text) : text(text) {};
    ~Printer();
    virtual void print()=0;
    std::string getText() {return text;};
    void setText(std::string text) {this->text = text;};
private:
    std::string text;
};
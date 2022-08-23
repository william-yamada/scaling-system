#include<iostream>

class HttpController {
public:
    HttpController(std::size_t value);
    ~HttpController();
    void initialize();
private:
    std::size_t serial_number;
};
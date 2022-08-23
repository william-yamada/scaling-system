#include <iostream>
#include <memory>
#include <Hello.h>
#include <binance/test.h>
#include <controller/http_controller.h>
// #include <Hello.h>
// #include <test.h>

int main (int argc, char* argv[])
{
    // auto printer = std::make_shared<Printer>(std::string("Hello"));
    
    std::cout << "Hello World\n";

    std::unique_ptr<HttpController> controller = std::make_unique<HttpController>(0);

    controller->initialize();

    return 0;
}
#include "http_controller.h"

HttpController::HttpController(std::size_t value) : serial_number(value) {}

HttpController::~HttpController(){}

void HttpController::initialize()
{
    std::cout << "Initialized Http controller\n";
}
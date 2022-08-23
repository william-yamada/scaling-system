add_library(cs.controller.lib SHARED http_controller.cpp)

target_include_directories(cs.controller.lib PUBLIC ../include/controller)
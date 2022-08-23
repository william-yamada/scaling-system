project(binance_api VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
                return_codes.cpp
                return_codes.h)

target_link_libraries(${PROJECT_NAME} PUBLIC utils)
add_executable(final_project main.cpp)

target_link_libraries(final_project test)
target_link_libraries(final_project cs.controller.lib)
target_include_directories(final_project PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "../utils"
                            "../api"
                            "../controller/include")
cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
find_package(OpenCV)

add_executable(cf main.cpp cvcalibinit3.cpp)
target_link_libraries(cf ${OpenCV_LIBS})



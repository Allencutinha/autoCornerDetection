cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(/home/allen/deps/OpenCV-3.4.14/include)
include(/home/allen/deps/OpenCV-3.4.14/share/OpenCV/OpenCVConfig.cmake)
add_executable(cf main.cpp cvcalibinit3.cpp corner_det.cpp)

target_link_libraries(cf ${OpenCV_LIBS})



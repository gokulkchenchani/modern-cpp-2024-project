cmake_minimum_required(VERSION 3.1)
project(modern-cpp-2024-project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Eigen3 REQUIRED)
find_package(Open3D REQUIRED HINTS ${CMAKE_CURRENT_SOURCE_DIR}/open3d/lib/cmake)

add_subdirectory(dataloader)
add_subdirectory(viewer)
add_subdirectory(apps)
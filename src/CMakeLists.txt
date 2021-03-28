cmake_minimum_required(VERSION 3.5)
message(STATUS "CMake version: ${CMAKE_VERSION}")

# OpenGL
find_package(OpenGL REQUIRED)

set(LIB_DIR "C:/DevTools/Libraries")

# GLFW
# set(glfw3_DIR "C:/DevTools/cmake_install/GLFW/lib/cmake/glfw3")
find_package(glfw3 3.3 REQUIRED)


include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${GLAD_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/include)

add_library(glLib glLib.cpp)
target_link_libraries(glLib glfw)
target_link_libraries(glLib glad)
target_link_libraries(glLib OpenGL::GL)


add_library(glApp glApp.cpp)
target_link_libraries(glApp glfw)
target_link_libraries(glApp glad)
target_link_libraries(glApp OpenGL::GL)


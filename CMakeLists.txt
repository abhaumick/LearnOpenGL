cmake_minimum_required(VERSION 3.5)
message(STATUS "CMake version: ${CMAKE_VERSION}")

set(CMAKE_BUILD_TYPE Debug)

# OpenGL
find_package(OpenGL REQUIRED)

set(LIB_DIR "C:/DevTools/Libraries")

# GLFW
set(glfw3_DIR "C:/DevTools/cmake_install/GLFW/lib/cmake/glfw3")
find_package(glfw3 3.3 REQUIRED)
# set(GLFW_DIR "${LIB_DIR}/glfw-3.3.3")
# set(GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "Build the GLFW example programs")
# set(GLFW_BUILD_TESTS OFF CACHE INTERNAL "Build the GLFW test programs")
# set(GLFW_BUILD_DOCS OFF CACHE INTERNAL "Build the GLFW documentation")
# set(GLFW_INSTALL OFF CACHE INTERNAL "Generate installation target")
# # add_subdirectory("${GLFW_DIR}")
# target_link_libraries(${PROJECT_NAME} "glfw" "${GLFW_LIBRARIES}")
# target_include_directories(${PROJECT_NAME} PRIVATE "${GLFW_DIR}/include")
# target_compile_definitions(${PROJECT_NAME} PRIVATE "GLFW_INCLUDE_NONE")

# glad
set(GLAD_DIR "${LIB_DIR}/glad-core-4.6")
set(GLAD_INCLUDE_DIR "${GLAD_DIR}/include")
# add_library("glad" STATIC "${GLAD_DIR}/src/glad.c")
# target_include_directories("glad" PUBLIC ${GLAD_INCLUDE_DIR})
# set_target_properties("glad" PROPERTIES LINKER_LANGUAGE CXX)
set(GLAD_LIBRARIES "${GLAD_DIR}/src")

# add_subdirectory("C:/DevTools/Libraries/glad-4.6")

# Project name and a few useful settings. Other commands can pick up the results
project(
  learnOpenGL
  VERSION 0.1
  DESCRIPTION "An simple project with OpenGL"
  LANGUAGES CXX)
  

# enable C++14 standard
set(CMAKE_CXX_STANDARD 14)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Add source files
file(GLOB_RECURSE SOURCE_FILES 
	${CMAKE_SOURCE_DIR}/src/*.c
	${CMAKE_SOURCE_DIR}/src/*.cpp)
	
# Add header files
file(GLOB_RECURSE HEADER_FILES 
  ${CMAKE_SOURCE_DIR}/include/*.h
	${CMAKE_SOURCE_DIR}/include/*.hpp
	${CMAKE_SOURCE_DIR}/src/*.h
	${CMAKE_SOURCE_DIR}/src/*.hpp)

# Add include folders
include_directories(${GLAD_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories
add_subdirectory(src)

# Add .lib files
link_directories(${CMAKE_SOURCE_DIR}/lib)
link_directories(${GLAD_DIR}/lib)


# # The compiled library code is here
# add_subdirectory(src)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


add_executable(test ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(test glfw ${GLFW_LIBRARIES} )
target_link_libraries(test glad )
target_link_libraries(test glLib)

# add_subdirectory("D:/Work/Self/OpenGL/glfw-3.3.3")

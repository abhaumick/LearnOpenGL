/**
 * @file HelloGL.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "glLib.hpp"
#include "glApp.hpp"

/* cSpell:disable */

int main (int argc, char ** argv) {

    std::cout << "Hello OpenGL \n";
    
    int retVal = appDrawWindow();
    return 0;
}


/**
 * @file glLib.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

#ifndef GL_LIB_H
#define GL_LIB_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <cstdlib>

extern void frameBufferSizeCallback (GLFWwindow* wndw, int width, int height);
extern void processInput (GLFWwindow* wndw);

#endif

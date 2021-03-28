/**
 * @file glLib.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "glLib.hpp"

void frameBufferSizeCallback (GLFWwindow* wndw, int width, int height) {
    glViewport(0, 0, width, height);
}

void processInput (GLFWwindow* wndw) {

    //  ESC
    if (glfwGetKey(wndw, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(wndw, true);
    }

    //  ENTER
    if (glfwGetKey(wndw, GLFW_KEY_ENTER) == GLFW_PRESS) {
        float c = (float)rand() / RAND_MAX; 
        float m = (float)rand() / RAND_MAX; 
        float y = (float)rand() / RAND_MAX; 
        float k = (float)rand() / RAND_MAX; 
        glClearColor(c, m, y, k);
        // glClear(GL_COLOR_BUFFER_BIT);
    }
}
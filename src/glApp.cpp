/**
 * @file glApp.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "glApp.hpp"

int appDrawTriangle () {

    return 0;
}

int appDrawWindow () {

    //  Init GLFW
    glfwInit();

    //  Select OpenGL Version & Profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    GLFWwindow* wndw = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (wndw == NULL) {
        std::cout << "Unable to create glfw window \n";
        glfwTerminate();
        return -2;
    }

    glfwMakeContextCurrent(wndw);

    //  Init GLAD
    if (! gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "GLAD - Init failed \n";
        return -1;
    }


    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(wndw, frameBufferSizeCallback);


    /*    Render Loop    */
    while (! glfwWindowShouldClose(wndw)) {
        // Input
        processInput(wndw);

        //  Render
        glClear(GL_COLOR_BUFFER_BIT);

        //  Check Events, Swap Buffers
        glfwPollEvents();
        glfwSwapBuffers(wndw);
    }

    glfwTerminate();

    return 0;
}


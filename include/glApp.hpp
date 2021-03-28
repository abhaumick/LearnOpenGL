/**
 * @file glApp.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#pragma once

#ifndef GL_APP_HPP
#define GL_APP_HPP

    #include <cstdlib>
    #include <iostream>

    #include <glad/glad.h>
    #include <GLFW/glfw3.h>

    #include "glLib.hpp"

    extern int appDrawWindow (void);
    extern int appDrawTriangle (void);

#endif
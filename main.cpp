#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>








int main()
{
    std::cout << "Hey, Zues!\n"; 
        std::cout << add(72.2, 73.8) << std::endl; 

    GLFWwindow *window; 



    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );

    while( !glfwWindowShouldClose(window) )
    {
    
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();








    return 0; 

}


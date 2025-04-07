/*
 *  As a first example of using OpenGL in C,
 *  https://math.hws.edu/graphicsbook/source/glut/first-triangle.c
 */
 
#include <GLUT/glut.h>   // freeglut.h might be a better alternative, if available. GLAD another option
#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>
#include "main.h"

void display(void) {  // Display function will draw the image.
    glClearColor( 0, 0, 0, 1 );  // (In fact, this is the default.)
    glClear( GL_COLOR_BUFFER_BIT );
    
    glBegin(GL_TRIANGLES);
    glColor3f( 1, 0, 0 ); // red
    glVertex2f( -1, -1 );
    glColor3f( 0, 1, 0 ); // green
    glVertex2f( 1, -1 );
    glColor3f( 0, 0, 1 ); // blue
    glVertex2f( 0, 1 );
    glEnd();
    
    //small inner triangle
    glBegin(GL_TRIANGLES);
    glColor3f( 0, 0, 1 ); // blue
    glVertex2f( -0.5, -0.5 );
    glColor3f( 0, 1, 0 ); // green
    glVertex2f( 0.5, -0.5 );
    glColor3f( 1, 0, 0 ); // red
    glVertex2f( 0, 0.5 );
    glEnd();
    
    glutSwapBuffers(); // Required to copy color buffer onto the screen.
}

int main( int argc, char** argv ) {  // Initialize GLUT and
    
    // print 4!
    printf("%i\n", factorial(4));
    
    // draw cube in the console
    draw_cube(4, 4);
    
    ///GL 3D drawing
    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE);    // Use single color buffer and no depth buffer.
//    glutInitWindowSize(500,500);         // Size of display area, in pixels.
//    glutInitWindowPosition(300,100);     // Location of window in screen coordinates.
    glutCreateWindow("Hello OpenGL 2024"); // Parameter is window title.
    glutDisplayFunc(display);            // Called when the window needs to be redrawn.
    
    glutMainLoop(); // Run the event loop!  This function does not return.
                    // Program ends when user closes the window.
    return EXIT_SUCCESS;
}


// #include "main.h"
//
// int r = add(23, 9);
// printf("result of sum is: %d\n", r);
// 
// draw_cube(10, 5);
// draw_cube(20, 10);
//

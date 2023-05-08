#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;



void myInit ()
{

    //glClearColor(0.0, 1.0, 0.0, 0.0);
    //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
    //glColor3f(0.0, 0.2, 0.0);
    glClearColor(39.0f/255.0f,162.0f/255.0f, 243.0f/255.0f, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // glEnable( GL_POINT_SMOOTH );

    // setting window dimension in X- and Y- direction
    glOrtho(0, 500, 0, 500, -10.0, 10.0); ///xlow, xhigh, ylow yhigh, zlow, zhigh

}

void display ()
{

    glClear(GL_COLOR_BUFFER_BIT);

//Triangle
    glBegin(GL_TRIANGLES);
    glColor3ub(25,117,43);
    glVertex2f( 100,300);
    glVertex2f( 300, 300);
    glVertex2f( 200, 400);
    glEnd();
// for squre
    glBegin(GL_POLYGON);
    glColor3ub(18,232,61);
    glVertex2f(100,100);
    glVertex2f(300, 100);
    glVertex2f(300, 300);
    glVertex2f(100,300);
    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 0);

    // Giving name to window
    glutCreateWindow("Houses");
    myInit();

    glutDisplayFunc(display);
    //glutTimerFunc(25, update, 0);

    glutMainLoop();
}

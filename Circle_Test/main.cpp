#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

int x=250;
int y=250;
bool right_side = true, left_side = false;
int a1=0, b1=0, a2=0, b2=0;

void myInit ()
{

    glClearColor(128.0f/255.0f,0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // setting window dimension in X- and Y- direction
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}
void circle(float x,float y)
{
    float x1,y1,x2,y2;
    float radius=100;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253,253,229);
    glVertex2f(x1,y1);
    float angle;
    for (angle=0; angle<=360; angle+=0.5)
    {
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}

void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);

    glColor3ub(96, 160, 233);

    glVertex2f( 0,0 );
    glVertex2f( 500, 0 );

//    glColor3ub(159, 185, 248);
    glVertex2f( 500, 500);
    glVertex2f( 0,500);
    glEnd();


//    x++;
//    if(x==446)
//    {
//        right_side = false;
//        left_side = true;
//    }
//    if(x==46){
//        right_side = true;
//        left_side = false;
//    }
//    if(right_side==true)
//    {
//        printf("%d %d\n",x, y);
//        x+=4;
//    }
//    else if(right_side==false ){
//         printf("%d %d\n",x, y);
//        x-=4;
//    }

    circle( x, y);
    glFlush();
}
void update(int val)
{
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 100);

    // Giving name to window
    glutCreateWindow("Bounce Ball");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    update(0);
    glutMainLoop();
}

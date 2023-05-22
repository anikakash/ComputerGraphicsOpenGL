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

int a1=0, b1=0, a2=0, b2=0;
int tri_x = 350, tri_y=150;
bool tri_fx=true, tri_fy=true;

void myInit ()
{

    //glClearColor(0.0, 1.0, 0.0, 0.0);
    //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
    //glColor3f(0.0, 0.2, 0.0);
    glClearColor(128.0f/255.0f,0, 0, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    // setting window dimension in X- and Y- direction
    glOrtho(0, 500, 0, 500, -10.0, 10.0);


}
void circle(float x,float y)
{
    float x1,y1,x2,y2;
    float radius=80;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(244, 252, 3);
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
void pac_man_mouth(){
    glBegin(GL_TRIANGLES);
    glColor3f(173.0/255.0, 25.0/255.0, 9.0/255.0);
    glVertex2f(150, tri_x);
    glVertex2f(250, 250);
    glVertex2f(150, tri_y);
    glEnd();
//    if(tri_fx){
//        tri_x--;
//        if(tri_x==250)tri_fx=false;
//    }
//    else if(!tri_fx){
//        tri_x++;
//        if(tri_x==350)tri_fx=true;
//    }
//
//    if(tri_fy){
//        tri_y++;
//        if(tri_y==250)tri_fy=false;
//    }
//    else if(!tri_fy){
//        tri_y--;
//        if(tri_y==150)tri_fy=true;
//    }
}

void display ()
{



    glClear(GL_COLOR_BUFFER_BIT);





    glBegin(GL_QUADS);
//   glColor3f(173.0/255.0, 25.0/255.0, 9.0/255.0);
    glColor3f(90.0/255.0, 252.0/255.0, 3.0/255.0);
    glVertex2f( a1+0,b1+0 );
    glVertex2f( a1+500, b1+0 );
//   glColor3f(173.0/255.0, 25.0/255.0, 9.0/255.0);
    glVertex2f( a2+500, b2+500);
    glVertex2f( a2+0, b2+500);
    glEnd();

//    circle( x, y);
//    glBegin(GL_TRIANGLES);
//    glColor3f(3, 252, 252);
//    glVertex2f( 250,500 );
//    glVertex2f( 250, 0 );
//    glEnd();

    circle( x, y);
    pac_man_mouth();

//    tri_x--;
//    printf("x = %d\n", tri_x); //250
//    tri_y++;
//    printf("y = %d\n", tri_y);
//    if()printf("%d\n", tri_y); //150



    /*



    ghash(50,-30,61,61,61);
    ghash(-100,-70,0,0,0);
    grave(100,80);


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(64,29,50);

    glVertex2f( 250, 250 );
    glVertex2f( 0,100 );
    glVertex2f( 0, 150 );
    glVertex2f( 250, 140 );
    glVertex2f( 350, 150 );
    glVertex2f( 500, 160 );
    glVertex2f( 500, 100 );
    glEnd();
    */




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
    glutInitWindowPosition(100, 0);

    // Giving name to window
    glutCreateWindow("bahubali 3");
    myInit();

    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    update(0);
    glutMainLoop();
}

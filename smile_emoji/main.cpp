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
    glClearColor(153.0f/255.0f, 156.0f/255.0f, 231.0f/255.0f, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    // setting window dimension in X- and Y- direction
    glOrtho(0, 1000, 0, 1000, -10.0, 10.0);


}


void Circle(float x,float y,float rx, float ry)
{
    float x1,y1,x2,y2;
    //float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255); //Center Color of Circle
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle++) //0,90,180,270
    {
        glColor3ub(255, 255, 255); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }

    glEnd();

}

void RingCircle(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
    //glColor3ub(0,0,255);
    glPointSize(10);
    glBegin(GL_POINTS);
    for(int i=1; i<=360; i++)   //360 kon
    {
        //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
    }                                                                      //3.14159*i/180   convert degree to radian
    glEnd();

    glFlush();

}

void circle(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 251, 0);
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle+=2)
    {
        glColor3ub(255, 251, 0);
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}
void circle_white(float x,float y,float r) // just for color
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle+=2)
    {
        glColor3ub(255, 255, 255);
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}
void circle_blue(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle+=2)
    {
        glColor3ub(136, 194, 238);

        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}
void circle_black(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle+=2)
    {
        glColor3ub(0, 0, 0);
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}

void circleghash(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(59, 102, 49);
    glVertex2f(x1,y1);
    int angle;
    for (angle=0; angle<=360; angle+=2)
    {
        glColor3ub(59, 102, 49);
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


}

//void ghash(float x, float y)
//{
//
//    circleghash(x,y,30);
//    circleghash(x+20,y-10,25);
//    circleghash(x-20,y-10,25);
//
//}

void circleRe()
{
    float x1,y1,x2,y2;
    float radiusx=40;
    float radiusy=35;
    x1=250;
    y1=180;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245,218,110);
    glVertex2f(x1,y1);
    int angle;
    for (angle=90; angle<=270; angle+=2)
    {
        int tx=rand() % 40;
        // int ty=rand() % 5;
        x2 = tx+x1+sin((angle*3.1416)/180)*radiusx;
        y2 = y1+cos((angle*3.1416)/180)*radiusy;
        glVertex2f(x2,y2);
    }

    glEnd();


}

void display ()
{



    glClear(GL_COLOR_BUFFER_BIT);
//
////Triangle
//
///*
////lines
//glBegin(GL_LINES);
//glColor3f(0,1,0);
//glVertex2f( 250,500 );
//glVertex2f( 250, 0 );
//glEnd();
//
////point
//
//glPointSize(100);
//glBegin(GL_POINTS);
//glColor3f(0,1,0);
//glVertex2f( 100,100 );
//glEnd();
//
////Quads
//glBegin(GL_QUADS);
//glColor3ub(128,0,0);
//glVertex2f( 0,0 );
//glVertex2f( 200, 0 );
//glVertex2f( 200, 200);
//glVertex2f( 0, 200);
//glEnd();
//
////polygon
//glBegin(GL_POLYGON);
//glColor3f(0,1,0);
//glVertex2f( 100,100 );
//glVertex2f( 100, 0 );
//glVertex2f( 50, 0 );
//glVertex2f( 10, 50 );
//glVertex2f( 50, 200 );
//
//glEnd();
//
//
//
//glBegin(GL_QUADS);
//glColor3ub(250,212,77);
//glVertex2f( 0,0 );
//glVertex2f( 500, 0 );
//
//glColor3ub(249,49,33);
//glVertex2f( 500, 500);
//glVertex2f( 0, 500);
//glEnd();
//
//
//
//cloud();
//circle(250,140);
//circleRe();
//
//glBegin(GL_POLYGON);
//glColor3ub(64,29,50);
//
//glVertex2f( 250, 110 );
//glVertex2f( 0,100 );
//glVertex2f( 0, 150 );
//glVertex2f( 250, 140 );
//glVertex2f( 350, 150 );
//glVertex2f( 500, 160 );
//glVertex2f( 500, 100 );
//glEnd();
//
//
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(64,29,50);
//glVertex2f( 200, 85 );
//glVertex2f( 200, 80 );
//glVertex2f( 180, 80 );
//glVertex2f( 160, 90 );
//glVertex2f( 200, 85 );
//glVertex2f( 220, 90 );
//glVertex2f( 210, 80 );
//glVertex2f( 180, 80 );
//
//glEnd();
//
//
//
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(166,128,65);
//glVertex2f( 200, 75);
//glVertex2f( 160, 75);
//glVertex2f( 180, 80);
//glVertex2f( 200, 80);
//glVertex2f( 210, 80);
//glVertex2f( 220, 75);
//glEnd();
//
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(0,0,0);
//glVertex2f( 200, 300);
//glVertex2f( 190, 290);
//glVertex2f( 150, 330);
//glVertex2f( 200, 305);
//glVertex2f( 250, 330);
//
//glEnd();
///*
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(64,29,50);
//
//glVertex2f( 250, 250 );
//glVertex2f( 0,100 );
//glVertex2f( 0, 150 );
//glVertex2f( 250, 140 );
//glVertex2f( 350, 150 );
//glVertex2f( 500, 160 );
//glVertex2f( 500, 100 );
//glEnd();
//*/
//glBegin(GL_QUADS);
//glColor3ub(250,212,77);
//glVertex2f( 0,0 );
//glVertex2f( 500, 0 );
//
//glColor3ub(250,49,33);
//glVertex2f( 500, 500);
//glVertex2f( 0, 500);
//glEnd();
//
//
//circle(250, 250,50);
//
//circleRe();
//
//ghash(200,200);
//ghash(250,200);
//ghash(300,200);
//ghash(350,200);
//ghash(150,200);
//ghash(100,200);
//ghash(50,200);
//ghash(0,200);
//ghash(400,200);
//ghash(450,200);
//ghash(460,200);
//
//
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(64,29,50);
//glVertex2f( 200, 85 );
//glVertex2f( 200, 80 );
//glVertex2f( 180, 80 );
//glVertex2f( 160, 90 );
//glVertex2f( 200, 85 );
//glVertex2f( 220, 90 );
//glVertex2f( 210, 80 );
//glVertex2f( 180, 80 );
//
//glEnd();
//
//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(166,128,65);
//glVertex2f( 200, 75);
//glVertex2f( 160, 75);
//glVertex2f( 180, 80);
//glVertex2f( 200, 80);
//glVertex2f( 210, 80);
//glVertex2f( 220, 75);
//glEnd();
//

    circle(500, 500 ,250);
//    circleRe();


    Circle(400, 555 ,70, 90);
    Circle(600, 555,70, 90);

    circle_blue(400, 550 ,60);
    circle_blue(600, 550 ,60);

//circle_white(400, 550 ,50);
//circle_white(600, 550 ,50);

    circle_black(400, 550 ,47);
    circle_black(600, 550 ,47);

    circle_white(385, 575 , 13);
    circle_white(585, 575 , 13);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(64,29,50);

    glVertex2f( 325, 400 );
//glVertex2f( 370, 380 );
    glVertex2f( 685, 400 );


    glVertex2f( 645, 355 );
    glVertex2f( 620, 335 );
    glVertex2f( 600, 320 );
    glVertex2f( 575, 308 );
    glVertex2f( 550, 300 );
    glVertex2f( 500, 295 );
    glVertex2f( 450, 300 );
    glVertex2f( 425, 308 );
    glVertex2f( 400, 320 );
    glVertex2f( 380, 335 );
    glVertex2f( 360, 355 );







    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 251, 0);

    glVertex2f( 325, 400 );
////glVertex2f( 370, 380 );
//
//
//glVertex2f( 500,  350 );
//
    glVertex2f( 685, 400 );

    glVertex2f( 640, 372 );
    glVertex2f( 600, 355 );
    glVertex2f( 550, 340 );
    glVertex2f( 500, 335 );
    glVertex2f( 450, 340 );
    glVertex2f( 400, 355 );
    glVertex2f( 360, 375 );
//glVertex2f( 340, 347 );


    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);

    glVertex2f( 500, 289 );
    glVertex2f( 500, 305 );
    glVertex2f( 500, 335 );
    glVertex2f( 464, 340 );
    glVertex2f( 463, 340 );
    glVertex2f( 460, 300 );
    glVertex2f( 462, 290 );
    glVertex2f( 478, 285 );
    glVertex2f( 481, 285 );

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);

    glVertex2f( 500, 289 );
    glVertex2f( 500, 305 );
    glVertex2f( 500, 335 );
    glVertex2f( 536, 340 );
    glVertex2f( 537, 340 );
    glVertex2f( 540, 300 );
    glVertex2f( 538, 290 );
    glVertex2f( 522, 285 );
    glVertex2f( 519, 285 );

    glEnd();

//    glBegin(GL_TRIANGLE_FAN);
//    glColor3ub(64,29,50);
//    glVertex2f( 200, 85 );
//    glVertex2f( 200, 80 );
//    glVertex2f( 180, 80 );
//    glVertex2f( 160, 90 );
//    glVertex2f( 200, 85 );
//    glVertex2f( 220, 90 );
//    glVertex2f( 210, 80 );
//    glVertex2f( 180, 80 );
//    glEnd();

//    glBegin(GL_TRIANGLE_FAN);
//    glColor3ub(64,29,50);
//    glVertex2f( 200, 710 );
//    glVertex2f( 200, 730 );
//    glVertex2f( 230, 730 );
//    glVertex2f( 250, 690 );
//    glVertex2f( 230, 730 );
//
//    glVertex2f( 180, 730 );
//    glVertex2f( 150, 680 );
//    glVertex2f( 180, 730 );
//    glVertex2f( 162, 700 );
//    glVertex2f( 240, 710 );
//    glEnd();

    glColor3ub(64,29,50);
    RingCircle(380,550,108,80);
    RingCircle(620,550,108,80);

//    glBegin(GL_TRIANGLE_FAN);
//    glColor3ub(64,29,50);
//    glVertex2f( 480, 590 );
//    glVertex2f( 520, 590 );
//    glVertex2f( 520, 570 );
//    glVertex2f( 480, 590 );
//    glVertex2f( 520, 590 );
//    glVertex2f( 480, 570 );
//    glVertex2f( 480, 590 );
//    glVertex2f( 520, 590 );
//    glVertex2f( 500, 595 );
//
//    glEnd();


        /// for gluess stand
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3ub(64,29,50);
//
//    glVertex2f( 720, 580 );
//    glVertex2f( 710, 600 );
//    glVertex2f( 740, 600 );
//    glVertex2f( 740, 580 );
//
//    glVertex2f( 730, 550 );
//    glVertex2f( 710, 580 );
//
//
//    glEnd();

//    glBegin(GL_TRIANGLE_FAN);
//    glColor3ub(64,29,50);
//
//    glVertex2f( 280, 580 );
//    glVertex2f( 290, 600 );
//    glVertex2f( 260, 600 );
//    glVertex2f( 260, 580 );
//
//    glVertex2f( 270, 550 );
//    glVertex2f( 290, 580 );
//
//
//    glEnd();

//glBegin(GL_TRIANGLE_FAN);
//glColor3ub(64,29,50);
//
//
//glVertex2f( 285, 600 );
//glVertex2f( 285, 525 );
//glVertex2f( 270, 525 );
//glVertex2f( 270, 600 );
//
//glEnd();

    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(750, 750);
    glutInitWindowPosition(100, 0);

    // Giving name to window
    glutCreateWindow("bahubali 3");
    myInit();

    glutDisplayFunc(display);
    //glutTimerFunc(25, update, 0);

    glutMainLoop();
}

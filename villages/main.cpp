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
	glClearColor(128.0f/255.0f,0, 0, 1.0f);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();


	// setting window dimension in X- and Y- direction
	glOrtho(0, 500, 0, 500, -10.0, 10.0);


}
void circle(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253,253,229);
glVertex2f(x1,y1);
int angle;
for (angle=0;angle<=360;angle+=2)
{
    glColor3ub(252,192,72);
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
for (angle=0;angle<=360;angle+=2)
{
    glColor3ub(59, 102, 49);
    x2 = x1+sin((angle*3.1416)/180)*radius;
    y2 = y1+cos((angle*3.1416)/180)*radius;
    glVertex2f(x2,y2);
}

glEnd();


}

void ghash(float x, float y)
{

  circleghash(x,y,30);
  circleghash(x+20,y-10,25);
  circleghash(x-20,y-10,25);

}

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
for (angle=90;angle<=270;angle+=2)
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

//Triangle

/*
//lines
glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f( 250,500 );
glVertex2f( 250, 0 );
glEnd();

//point

glPointSize(100);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glEnd();

//Quads
glBegin(GL_QUADS);
glColor3ub(128,0,0);
glVertex2f( 0,0 );
glVertex2f( 200, 0 );
glVertex2f( 200, 200);
glVertex2f( 0, 200);
glEnd();

//polygon
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glVertex2f( 100, 0 );
glVertex2f( 50, 0 );
glVertex2f( 10, 50 );
glVertex2f( 50, 200 );

glEnd();



glBegin(GL_QUADS);
glColor3ub(250,212,77);
glVertex2f( 0,0 );
glVertex2f( 500, 0 );

glColor3ub(249,49,33);
glVertex2f( 500, 500);
glVertex2f( 0, 500);
glEnd();



cloud();
circle(250,140);
circleRe();

glBegin(GL_POLYGON);
glColor3ub(64,29,50);

glVertex2f( 250, 110 );
glVertex2f( 0,100 );
glVertex2f( 0, 150 );
glVertex2f( 250, 140 );
glVertex2f( 350, 150 );
glVertex2f( 500, 160 );
glVertex2f( 500, 100 );
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(64,29,50);
glVertex2f( 200, 85 );
glVertex2f( 200, 80 );
glVertex2f( 180, 80 );
glVertex2f( 160, 90 );
glVertex2f( 200, 85 );
glVertex2f( 220, 90 );
glVertex2f( 210, 80 );
glVertex2f( 180, 80 );

glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(166,128,65);
glVertex2f( 200, 75);
glVertex2f( 160, 75);
glVertex2f( 180, 80);
glVertex2f( 200, 80);
glVertex2f( 210, 80);
glVertex2f( 220, 75);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);
glVertex2f( 200, 300);
glVertex2f( 190, 290);
glVertex2f( 150, 330);
glVertex2f( 200, 305);
glVertex2f( 250, 330);

glEnd();
/*
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
glBegin(GL_QUADS);
glColor3ub(250,212,77);
glVertex2f( 0,0 );
glVertex2f( 500, 0 );

glColor3ub(250,49,33);
glVertex2f( 500, 500);
glVertex2f( 0, 500);

glBegin(GL_POLYGON);
glColor3ub(64,29,50);

glEnd();


circle(250, 250,50);

circleRe();

ghash(200,200);
ghash(250,200);
ghash(300,200);
ghash(350,200);
ghash(150,200);
ghash(100,200);
ghash(50,200);
ghash(0,200);
ghash(400,200);
ghash(450,200);
ghash(460,200);


glBegin(GL_TRIANGLE_FAN);
glColor3ub(64,29,50);
glVertex2f( 200, 85 );
glVertex2f( 200, 80 );
glVertex2f( 180, 80 );
glVertex2f( 160, 90 );
glVertex2f( 200, 85 );
glVertex2f( 220, 90 );
glVertex2f( 210, 80 );
glVertex2f( 180, 80 );

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(166,128,65);
glVertex2f( 200, 75);
glVertex2f( 160, 75);
glVertex2f( 180, 80);
glVertex2f( 200, 80);
glVertex2f( 210, 80);
glVertex2f( 220, 75);
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
	glutCreateWindow("bahubali 3");
	myInit();

	glutDisplayFunc(display);
	//glutTimerFunc(25, update, 0);

	glutMainLoop();
}

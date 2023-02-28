#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 1.0f, 0.0f); //Green

    glBegin(GL_TRIANGLES);

    glVertex2d(320, 340);
    glVertex2d(220,240);
    glVertex2d(420, 240);

    glEnd();
    glBegin(GL_LINES); // left line
    glVertex2d(220,240);
    glVertex2d(220,100);
    glEnd();


    glBegin(GL_LINES); // right line
    glVertex2d(420, 240);
    glVertex2d(420, 100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(220,100);
    glVertex2d(420, 100);

//    glVertex2d(410, -100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2d(220,100);
    glVertex2d(420, 100);

//    glVertex2d(410, -100);
    glEnd();

    glFlush();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

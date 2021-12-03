#include <GL/gl.h>
#include <GL/glut.h>





void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);




    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.7, 0.3);
    glVertex2f(-0.1,0.2);
    glVertex2f(0.15,0.8);
    glVertex2f(0.25,0.6);
    glVertex2f(0.35,0.4);
    glVertex2f(0.45,0.8);
    glVertex2f(0.55,0.4);
    glVertex2f(0.65,0.6);
    glVertex2f(0.85,0.2);
    glEnd();


glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (255,255, 255, 0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();


glOrtho(0, 200, 0, 200, -10.0, 10.0);
}


int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize (1400, 800);
glutInitWindowPosition (100, 100);
glutCreateWindow ("School Scenario");
init ();
glutDisplayFunc(display);



glutMainLoop();


return 0;
}


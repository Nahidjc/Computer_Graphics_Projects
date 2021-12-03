#include <GL/gl.h>
#include <GL/glut.h>





void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    int i,j;
//HIghway road
    glBegin(GL_QUADS);
    glColor3ub(152, 156, 153);

    glVertex3f(0,60,0);
    glVertex3f(200,60,0);
    glVertex3f(200,100,0);
    glVertex3f(0,100,0);
    glEnd();


    for(i = 0; i <= 195; i=i+15)
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(i,80,0);
        glVertex3f(i+4,80,0);
        glVertex3f(i+4,81,0);
        glVertex3f(i,81,0);
        glEnd();
    }


    for(i=0,i<=30; i++)
    {

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(170,62+i,0);
        glVertex3f(172.5,62+i,0);
        glVertex3f(172.5,64+i,0);
        glVertex3f(170,64+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);

        glVertex3f(172.5,62,0);
        glVertex3f(175,62,0);
        glVertex3f(175,64,0);
        glVertex3f(172.5,64,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(175,62,0);
        glVertex3f(177.5,62,0);
        glVertex3f(175,64,0);
        glVertex3f(177.5,64,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);

        glVertex3f(177.5,62,0);
        glVertex3f(180,62,0);
        glVertex3f(180,64,0);
        glVertex3f(177.5,64,0);
        glEnd();



    }

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


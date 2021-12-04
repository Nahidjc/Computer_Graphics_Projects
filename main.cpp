#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>>
# define PI           3.14159265358979323846


#include <stdlib.h>
#include <math.h>

////Position for object
float sunX = 50;
float sunY = 50;

//////////////circle drawing function
void DrawCircle(float cx, float cy, float r, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

        float x = r * cosf(theta);//calculate x
        float y = r * sinf(theta);//calculate y

        glVertex2f(x + cx, y + cy);//output vertex

    }
    glEnd();
    glFlush();
}


//Draw Sun
void drawSun(int nasar)
{
    glColor3ub (250, 250, 0);
    DrawCircle(100, 190, 8, 500000);

    glEnd();
    glFlush();

}

//////////////////////sky
void sky()
{
    glColor3ub (90, 196, 242);
    glBegin(GL_QUADS);
    glVertex2i(0, 160);
    glVertex2i(200, 160);
    glVertex2i(200, 200);
    glVertex2i(0, 200);
    glEnd();
}







void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    int i,j;



    sky();
    drawSun(1);
    //School design
    glBegin(GL_QUADS);
    glColor3ub(115, 112, 112);

    glVertex3f(130,140,0);
    glVertex3f(145,140,0);
    glVertex3f(145,142,0);
    glVertex3f(130,142,0);
    glEnd();

    for(j=0; j<12; j=j+4)
    {

        glBegin(GL_QUADS);
        glColor3ub(49, 36, 82);

        glVertex3f(132+j,126,0);
        glVertex3f(134+j,126,0);
        glVertex3f(134+j,130,0);
        glVertex3f(132+j,130,0);
        glEnd();

    }

    //red mark
    glBegin(GL_QUADS);
    glColor3ub(232, 19, 19);

    glVertex3f(130,125,0);
    glVertex3f(145,125,0);
    glVertex3f(145,140,0);
    glVertex3f(130,140,0);
    glEnd();



    //Highway road
    glBegin(GL_QUADS);
    glColor3ub(152, 156, 153);

    glVertex3f(0,60,0);
    glVertex3f(200,60,0);
    glVertex3f(200,100,0);
    glVertex3f(0,100,0);
    glEnd();

    // Road divider line
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

    // Zebra Crossing
    for(i=0; i<=37; i=i+8)
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

        glVertex3f(172.5,62+i,0);
        glVertex3f(175,62+i,0);
        glVertex3f(175,64+i,0);
        glVertex3f(172.5,64+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(175,62+i,0);
        glVertex3f(177.5,62+i,0);
        glVertex3f(177.5,64+i,0);
        glVertex3f(175,64+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);

        glVertex3f(177.5,62+i,0);
        glVertex3f(180,62+i,0);
        glVertex3f(180,64+i,0);
        glVertex3f(177.5,64+i,0);
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
    glutInitWindowSize (840, 680);
    glutInitWindowPosition (100, 150);

    glutCreateWindow ("School Scenario");
    init ();
    glutDisplayFunc(display);


    glutMainLoop();


    return 0;
}


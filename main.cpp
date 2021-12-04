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
float meghX = 100;
float meghY = 0;
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


/////////////////////////////cloud
void cloud(int nasar)
{
    glColor3ub (200, 220, 220);
    DrawCircle(170, 540, 15, 2000);
    DrawCircle(186, 540, 22, 2000);
    DrawCircle(205, 540, 15, 2000);

    glColor3ub (200, 220, 220);
    DrawCircle(348, 540, 15, 2000);
    DrawCircle(366, 540, 21, 2000);
    DrawCircle(386, 540, 15, 2000);
    glEnd();
    glFlush();
}

//Draw Sun
void drawSun(int nasar)
{
    glColor3ub (255, 94, 0);
    DrawCircle(300, 570, 24, 500000);

    glEnd();
    glFlush();

}

//sky
void sky()
{
    glColor3ub (2, 193, 241);
    glBegin(GL_QUADS);
    glVertex2i(0, 480);
    glVertex2i(600, 480);
    glVertex2i(600, 600);
    glVertex2i(0, 600);
    glEnd();
}

void tree()
{
    //////////////////////////////////////pata
    glColor3ub (51, 204, 51);
    DrawCircle(455, 420, 27, 2000);//1
    DrawCircle(455, 450, 17, 3000);//1
    glEnd();
    glFlush();
    //Midle daal
    glColor3ub (180, 180, 40);
    glBegin(GL_QUADS);
    glVertex2i(450, 325);
    glVertex2i(460, 325);
    glVertex2i(460, 405);
    glVertex2i(450, 405);
    glEnd();
    //bam daal
    glColor3ub (180, 180, 40);
    glBegin(GL_QUADS);
    glVertex2i(450, 405);
    glVertex2i(455, 405);
    glVertex2i(450, 425);
    glVertex2i(445, 425);
    glEnd();
    //right daal
    glColor3ub (180, 180, 40);
    glBegin(GL_QUADS);
    glVertex2i(455, 405);
    glVertex2i(460, 405);
    glVertex2i(465, 425);
    glVertex2i(460, 425);
    glEnd();
    glFlush();

    glEnd();
}

void surface(void)
{
    glBegin(GL_QUADS);
    glColor3ub (122, 194, 153);

    glVertex3f(0,300,0);
    glVertex3f(600,300,0);
    glVertex3f(600,480,0);
    glVertex3f(0,480,0);
    glEnd();



}





void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    int i,j;


surface();
    sky();
    drawSun(1);
    cloud(1);
    tree();




    //Highway road
    glBegin(GL_QUADS);
    glColor3ub(152, 156, 153);

    glVertex3f(0,180,0);
    glVertex3f(600,180,0);
    glVertex3f(600,300,0);
    glVertex3f(0,300,0);
    glEnd();

    // Road divider line
    for(i = 0; i <= 600; i=i+35)
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(i,240,0);
        glVertex3f(i+10,240,0);
        glVertex3f(i+10,242,0);
        glVertex3f(i,242,0);
        glEnd();
    }

    // Zebra Crossing
    for(i=0; i<=110; i=i+20)
    {

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(410,186+i,0);
        glVertex3f(416,186+i,0);
        glVertex3f(416,191+i,0);
        glVertex3f(410,191+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);

        glVertex3f(416,186+i,0);
        glVertex3f(425,186+i,0);
        glVertex3f(425,191+i,0);
        glVertex3f(416,191+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);

        glVertex3f(425,186+i,0);
        glVertex3f(435,186+i,0);
        glVertex3f(435,191+i,0);
        glVertex3f(425,191+i,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);

        glVertex3f(435,186+i,0);
        glVertex3f(445,186+i,0);
        glVertex3f(445,191+i,0);
        glVertex3f(435,191+i,0);
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


    glOrtho(0, 600, 0, 600, -10.0, 10.0);
}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1600, 1980);
    glutInitWindowPosition (0, 0);

    glutCreateWindow ("School Scenario");
    init ();
    glutDisplayFunc(display);


    glutMainLoop();


    return 0;
}


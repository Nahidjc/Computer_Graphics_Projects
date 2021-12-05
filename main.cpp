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

void car(int h)
{
   /////////////////////left body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(15,20+h);
    glVertex2f(15,28+h);
    glVertex2f(58,28+h);
    glVertex2f(60,20+h);
    glEnd();


     /////////left body glass upper
     ////black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(20,62+h);
    glVertex2f(20,98+h);
    glVertex2f(190.3,98+h);
    glVertex2f(192.5,62+h);
    glEnd();

    ////sky blue glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(23,65+h);
    glVertex2f(23,95+h);
    glVertex2f(52,95+h);
    glVertex2f(52,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(53,65+h);
    glVertex2f(53,95+h);
    glVertex2f(76,95+h);
    glVertex2f(76,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(77,65+h);
    glVertex2f(77,95+h);
    glVertex2f(100,95+h);
    glVertex2f(100,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(101,65+h);
    glVertex2f(101,95+h);
    glVertex2f(124,95+h);
    glVertex2f(124,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(125,65+h);
    glVertex2f(125,95+h);
    glVertex2f(148,95+h);
    glVertex2f(148,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(149,65+h);
    glVertex2f(149,95+h);
    glVertex2f(172,95+h);
    glVertex2f(172,65+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(173,65+h);
    glVertex2f(173,95+h);
    glVertex2f(195.6,95+h);
    glVertex2f(196.7,65+h);
    glEnd();


     /////////left body green below
    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(20,20+h);
    glVertex2f(20,62+h);
    glVertex2f(192.5,62+h);
    glVertex2f(195,20+h);
    glEnd();


    /////////////////////right body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(190,104+h);
    glVertex2f(220,100+h);
    glVertex2f(222.9756,97.4321+h);
    glVertex2f(229.7981,87.1984+h);
    glVertex2f(232.3565,78.9546+h);
    glVertex2f(235.1992,70.7107+h);
    glVertex2f(237.4734,63.60395+h);
    glVertex2f(238.3262,56.4972+h);
    glVertex2f(238.3262,48.8219+h);
    glVertex2f(238.6105,36.0297+h);
    glVertex2f(238.7242,29.0367+h);
    glVertex2f(237.4734,23.0954+h);
    glVertex2f(232.7829,20.9065+h);
    glVertex2f(195,20+h);
    glEnd();

    //glass
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(190,98+h);
    glVertex2f(214,98+h);
    glVertex2f(217.9756,97.4321+h);
    glVertex2f(224.7981,87.1984+h);
    glVertex2f(227.3565,78.9546+h);
    glVertex2f(230.1992,70.7107+h);
    glVertex2f(232.4734,62+h);
     glVertex2f(192.5,62+h);
    glEnd();

    //sky glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(193,95+h);
    glVertex2f(209,94+h);
    glVertex2f(215.9756,95.4321+h);
    glVertex2f(222.7981,87.1984+h);
    glVertex2f(225.3565,78.9546+h);
    glVertex2f(228.1992,70.7107+h);
    glVertex2f(230.4734,65+h);
     glVertex2f(194.5,65+h);
    glEnd();

    //sky glass below green

    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(196,20+h);
    glVertex2f(193.5,62+h);
    glVertex2f(233.3262,62+h);
    glVertex2f(234.3262,45.8219+h);
    glVertex2f(234.6105,36.0297+h);
    glVertex2f(235.7242,29.0367+h);
    glVertex2f(233.4734,23.0954+h);
    glVertex2f(229.7829,20.7065+h);


    glEnd();


    /////////////

    glColor3ub (0,0,0);    ////////////////chakka
    DrawCircle(50, 20+h, 10, 6000);//1
    DrawCircle(71, 20+h, 10, 6000);//1
    DrawCircle(160, 20+h, 10, 6000);//1

    glColor3ub (255,255,255);
    DrawCircle(50, 20+h, 5, 6000);//1
    DrawCircle(71, 20+h, 5, 6000);//1
    DrawCircle(160, 20+h, 5, 6000);//1

    glColor3ub (0,0,0);
    DrawCircle(50, 20+h, 2, 6000);//1
    DrawCircle(71, 20+h, 2, 6000);//1
    DrawCircle(160, 20+h,2, 6000);//1
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


void road(){


    //Highway road
    glBegin(GL_QUADS);
    glColor3ub(152, 156, 153);

    glVertex3f(0,180,0);
    glVertex3f(600,180,0);
    glVertex3f(600,300,0);
    glVertex3f(0,300,0);
    glEnd();

    // Road divider line
    for(int i = 0; i <= 600; i=i+35)
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
    for(int i=0; i<=110; i=i+20)
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

    road();
    surface();
    sky();
    drawSun(1);
    cloud(1);
    tree();

car(240);



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


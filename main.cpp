#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <iostream>
#include<math.h>>
# define PI           3.14159265358979323846


////Position for object

float carX = 0;
float carY = 0;
float birdsX = 0;
float birdsY = 0;

float shipX = 0;
float shipY = 0;

float boatX = 0;
float boatY = 0;
//Dynamic position movement
int carStatus = 0;
int birdsStatus = 0;
int shipStatus = 0;
int boatStatus = 0;
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
    glColor3ub (255, 187, 0);
    DrawCircle(300, 570, 24, 50000);

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

// birds
void birds(int)
{
    //1st bird
    glColor3ub (0, 0, 0);
    DrawCircle(60, 500, 1.5, 1000);
    DrawCircle(62, 500, 1, 1000);
    glBegin(GL_LINES);
    glLineWidth(5);
    glVertex2i(60, 500);
    glVertex2i(62, 504);

    glVertex2i(60, 500);
    glVertex2i(58, 504);
    glEnd();
//2nd bird
    DrawCircle(70, 510, 1.5, 1000);
    DrawCircle(72, 510, 1, 1000);
    glBegin(GL_LINES);
    glVertex2i(70, 510);
    glVertex2i(72, 514);

    glVertex2i(70, 510);
    glVertex2i(68, 514);
    glEnd();
//3rd bird
    DrawCircle(80, 500, 1.5, 1000);
    DrawCircle(82, 500, 1, 1000);
    glBegin(GL_LINES);
    glVertex2i(80, 500);
    glVertex2i(82, 504);

    glVertex2i(80, 500);
    glVertex2i(78, 504);
    glEnd();

}


void school()
{
    glBegin(GL_QUADS);
    glColor3ub(203,83,68);

    glVertex3f(230,330,0);
    glVertex3f(380,330,0);
    glVertex3f(380,340,0);
    glVertex3f(230,340,0);
    glEnd();

    //main building shape
    glBegin(GL_QUADS);
    glColor3ub(203,83,68);

    glVertex3f(235,345,0);
    glVertex3f(375,345,0);
    glVertex3f(375,440,0);
    glVertex3f(235,440,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(203,83,68);

    glVertex3f(230,445,0);
    glVertex3f(380,445,0);
    glVertex3f(380,455,0);
    glVertex3f(230,455,0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(203,83,68);

    glVertex3f(245,455,0);
    glVertex3f(365,455,0);
    glVertex3f(305,505,0);
    glEnd();


    glColor3ub (190, 195, 199);
    DrawCircle(305, 465, 12, 500000);

    glEnd();
    glFlush();



}

void door()
{

    for(int i=0; i<=25; i=i+19)
    {

        glBegin(GL_QUADS);
        glColor3ub(78, 79, 75);

        glVertex3f(288+i,345,0);
        glVertex3f(306+i,345,0);
        glVertex3f(306+i,388,0);
        glVertex3f(288+i,388,0);
        glEnd();

    }


}

void window(int x,int y)
{
    int i,j;
    for(int i=6; i<=120; i=i+20)
    {

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i,355,0);
        glVertex3f(248+i,355,0);
        glVertex3f(248+i,370,0);
        glVertex3f(242+i,370,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i+x,355,0);
        glVertex3f(248+i+x,355,0);
        glVertex3f(248+i+x,370,0);
        glVertex3f(242+i+x,370,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i,355+y,0);
        glVertex3f(248+i,355+y,0);
        glVertex3f(248+i,370+y,0);
        glVertex3f(242+i,370+y,0);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i+x,355+y,0);
        glVertex3f(248+i+x,355+y,0);
        glVertex3f(248+i+x,370+y,0);
        glVertex3f(242+i+x,370+y,0);
        glEnd();

    }


    for(i=6,j=45; i<=120; i=i+20)
    {

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i,355+j,0);
        glVertex3f(248+i,355+j,0);
        glVertex3f(248+i,370+j,0);
        glVertex3f(242+i,370+j,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i+x,355+j,0);
        glVertex3f(248+i+x,355+j,0);
        glVertex3f(248+i+x,370+j,0);
        glVertex3f(242+i+x,370+j,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i,355+y+j,0);
        glVertex3f(248+i,355+y+j,0);
        glVertex3f(248+i,370+y+j,0);
        glVertex3f(242+i,370+y+j,0);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(251, 255, 0);

        glVertex3f(242+i+x,355+y+j,0);
        glVertex3f(248+i+x,355+y+j,0);
        glVertex3f(248+i+x,370+y+j,0);
        glVertex3f(242+i+x,370+y+j,0);
        glEnd();

    }






}

void flag()
{
    glBegin(GL_QUADS);
    glColor3ub(0,128,0);

    glVertex3f(180,405,0);
    glVertex3f(200,405,0);
    glVertex3f(200,420,0);
    glVertex3f(180,420,0);
    glEnd();

    glColor3ub (255, 0, 0);
    DrawCircle(190, 412, 5, 50000);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,26,26);
//flag stand
    glVertex3f(179,340,0);
    glVertex3f(180,340,0);
    glVertex3f(180,420,0);
    glVertex3f(179,420,0);
    glEnd();
    glFlush();


// ground stand

    glBegin(GL_QUADS);
    glColor3ub(198,190,195);

    glVertex3f(175,335,0);
    glVertex3f(185,335,0);
    glVertex3f(182,345,0);
    glVertex3f(178,345,0);

}

void car(int)
{
    int h=250;
    /////////////////////left body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(15/2,20/2+h);
    glVertex2f(15/2,104/2+h);
    glVertex2f(190/2,104/2+h);
    glVertex2f(195/2,20/2+h);
    glEnd();

    /////////left body glass upper
    ////black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(20/2,62/2+h);
    glVertex2f(20/2,98/2+h);
    glVertex2f(190/2,98/2+h);
    glVertex2f(192.5/2,62/2+h);
    glEnd();

    ////sky blue glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(24/2,65/2+h);
    glVertex2f(24/2,95/2+h);
    glVertex2f(52/2,95/2+h);
    glVertex2f(52/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(54/2,65/2+h);
    glVertex2f(54/2,95/2+h);
    glVertex2f(76/2,95/2+h);
    glVertex2f(76/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(78/2,65/2+h);
    glVertex2f(78/2,95/2+h);
    glVertex2f(100/2,95/2+h);
    glVertex2f(100/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(102/2,65/2+h);
    glVertex2f(102/2,95/2+h);
    glVertex2f(124/2,95/2+h);
    glVertex2f(124/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(126/2,65/2+h);
    glVertex2f(126/2,95/2+h);
    glVertex2f(148/2,95/2+h);
    glVertex2f(148/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150/2,65/2+h);
    glVertex2f(150/2,95/2+h);
    glVertex2f(172/2,95/2+h);
    glVertex2f(172/2,65/2+h);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(174/2,65/2+h);
    glVertex2f(174/2,95/2+h);
    glVertex2f(195.6/2,95/2+h);
    glVertex2f(196.7/2,65/2+h);
    glEnd();


    /////////left body green below
    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(20/2,20/2+h);
    glVertex2f(20/2,62/2+h);
    glVertex2f(192.5/2,62/2+h);
    glVertex2f(195/2,20/2+h);
    glEnd();


    /////////////////////right body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(190/2,104/2+h);
    glVertex2f(220/2,100/2+h);
    glVertex2f(222.9756/2,97.4321/2+h);
    glVertex2f(229.7981/2,87.1984/2+h);
    glVertex2f(232.3565/2,78.9546/2+h);
    glVertex2f(235.1992/2,70.7107/2+h);
    glVertex2f(237.4734/2,63.60395/2+h);
    glVertex2f(238.3262/2,56.4972/2+h);
    glVertex2f(238.3262/2,48.8219/2+h);
    glVertex2f(238.6105/2,36.0297/2+h);
    glVertex2f(238.7242/2,29.0367/2+h);
    glVertex2f(237.4734/2,23.0954/2+h);
    glVertex2f(232.7829/2,20.9065/2+h);
    glVertex2f(195/2,20/2+h);
    glEnd();

    //glass
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(190/2,98/2+h);
    glVertex2f(214/2,98/2+h);
    glVertex2f(217.9756/2,97.4321/2+h);
    glVertex2f(224.7981/2,87.1984/2+h);
    glVertex2f(227.3565/2,78.9546/2+h);
    glVertex2f(230.1992/2,70.7107/2+h);
    glVertex2f(232.4734/2,62/2+h);
    glVertex2f(192.5/2,62/2+h);
    glEnd();

    //sky glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(193/2,95/2+h);
    glVertex2f(209/2,94/2+h);
    glVertex2f(215.9756/2,95.4321/2+h);
    glVertex2f(222.7981/2,87.1984/2+h);
    glVertex2f(225.3565/2,78.9546/2+h);
    glVertex2f(228.1992/2,70.7107/2+h);
    glVertex2f(230.4734/2,65/2+h);
    glVertex2f(194.5/2,65/2+h);
    glEnd();

    //sky glass below green

    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(196/2,20/2+h);
    glVertex2f(193.5/2,62/2+h);
    glVertex2f(233.3262/2,62/2+h);
    glVertex2f(234.3262/2,45.8219/2+h);
    glVertex2f(234.6105/2,36.0297/2+h);
    glVertex2f(235.7242/2,29.0367/2+h);
    glVertex2f(233.4734/2,23.0954/2+h);
    glVertex2f(229.7829/2,20.7065/2+h);


    glEnd();


    /////////////

    glColor3ub (0,0,0);    ////////////////chakka
    DrawCircle(50/2, 20/2+h, 5, 6000);//1
    DrawCircle(71/2, 20/2+h, 5, 6000);//1
    DrawCircle(160/2, 20/2+h, 5, 6000);//1

    glColor3ub (255,255,255);
    DrawCircle(50/2, 20/2+h, 2.5, 6000);//1
    DrawCircle(71/2, 20/2+h, 2.5, 6000);//1
    DrawCircle(160/2, 20/2+h, 2.5, 6000);//1

    glColor3ub (0,0,0);
    DrawCircle(50/2, 20/2+h, 1, 6000);//1
    DrawCircle(71/2, 20/2+h, 1, 6000);//1
    DrawCircle(160/2, 20/2+h,1, 6000);//1
    glEnd();


}


void schoolRoad()
{
    glBegin(GL_QUADS);
    glColor3ub(242,212,167);

    glVertex3f(340,300,0);
    glVertex3f(360,300,0);
    glVertex3f(320,330,0);
    glVertex3f(300,330,0);
    glEnd();


}

void smallCar()
{


    //car main body
    glBegin(GL_QUADS);
    glColor3ub(245, 0, 16);

    glVertex3f(170,220,0);
    glVertex3f(205,220,0);
    glVertex3f(205,230,0);
    glVertex3f(170,230,0);
    glEnd();
    //car top body
    glBegin(GL_QUADS);
    glColor3ub(245, 0, 16);

    glVertex3f(175,230,0);
    glVertex3f(200,230,0);
    glVertex3f(195,240,0);
    glVertex3f(185,240,0);
    glEnd();

    //wheel
    glColor3ub (0,0,0);
    DrawCircle(180, 220, 4, 6000);
    //wheel
    glColor3ub (0,0,0);
    DrawCircle(195, 220, 4, 6000);

    //front glass
    glBegin(GL_QUADS);
    glColor3ub(194, 242, 241);

    glVertex3f(188,230,0);
    glVertex3f(198,230,0);
    glVertex3f(193,238,0);
    glVertex3f(188,238,0);
    glEnd();

    //front glass
    glBegin(GL_QUADS);
    glColor3ub(194, 242, 241);

    glVertex3f(177,230,0);
    glVertex3f(186.5,230,0);
    glVertex3f(186.5,238,0);
    glVertex3f(185,238,0);
    glEnd();



    // car 2

    //car main body
    glBegin(GL_QUADS);
    glColor3ub(196, 110, 250);

    glVertex3f(170+150,220,0);
    glVertex3f(205+150,220,0);
    glVertex3f(205+150,230,0);
    glVertex3f(170+150,230,0);
    glEnd();
    //car top body
    glBegin(GL_QUADS);
    glColor3ub(196, 110, 250);

    glVertex3f(175+150,230,0);
    glVertex3f(200+150,230,0);
    glVertex3f(195+150,240,0);
    glVertex3f(185+150,240,0);
    glEnd();

    //wheel
    glColor3ub (0,0,0);
    DrawCircle(180+150, 220, 4, 6000);
    //wheel
    glColor3ub (0,0,0);
    DrawCircle(195+150, 220, 4, 6000);

    //front glass
    glBegin(GL_QUADS);
    glColor3ub(194, 242, 241);

    glVertex3f(188+150,230,0);
    glVertex3f(198+150,230,0);
    glVertex3f(193+150,238,0);
    glVertex3f(188+150,238,0);
    glEnd();

    //front glass
    glBegin(GL_QUADS);
    glColor3ub(194, 242, 241);

    glVertex3f(177+150,230,0);
    glVertex3f(186.5+150,230,0);
    glVertex3f(186.5+150,238,0);
    glVertex3f(185+150,238,0);
    glEnd();


}


void smallTree()
{
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(220, 340);
    glVertex2i(220, 370);
    glEnd();

    glColor3ub (51, 204, 51);
    DrawCircle(220, 370, 9, 5000);//1
    DrawCircle(220, 378, 6, 5000);//1
    glEnd();
    glFlush();

    //2nd tree

    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(390, 340);
    glVertex2i(390, 370);
    glEnd();

    glColor3ub (51, 204, 51);
    DrawCircle(390, 370, 9, 5000);//1
    DrawCircle(390, 378, 6, 5000);//1
    glEnd();
    glFlush();

}

void field()
{
    glColor3ub (0,255,0);
    DrawCircle(80, 380, 70, 2000);//1


    glColor3ub (180, 180, 40);
    glBegin(GL_QUADS);
    glVertex2i(85, 360);
    glVertex2i(75, 360);
    glVertex2i(75, 400);
    glVertex2i(85, 400);
    glEnd();

}


void tree()
{
    //pata
    glColor3ub (51, 204, 51);
    DrawCircle(455, 420, 27, 2000);//1
    DrawCircle(455, 450, 17, 3000);//1
    glEnd();
    glFlush();
    //Middle daal
    glColor3ub (180, 180, 40);
    glBegin(GL_QUADS);
    glVertex2i(450, 325);
    glVertex2i(460, 325);
    glVertex2i(460, 405);
    glVertex2i(450, 405);
    glEnd();
    //left daal
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


void road()
{


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
        glColor3ub(210, 158, 63);

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

void traficStand()
{
    //light stand
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);

    glVertex3f(425,300,0);
    glVertex3f(426,300,0);
    glVertex3f(426,320,0);
    glVertex3f(425,320,0);
    glEnd();

    //stand box Red color
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex3f(421.5,318,0);
    glVertex3f(430,318,0);
    glVertex3f(432,325,0);
    glVertex3f(420,325,0);
    glEnd();

    //stand circle
    glColor3ub (255, 5, 5);
    DrawCircle(426, 321, 2, 2000);

    //stand box  color
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex3f(421.5,325,0);
    glVertex3f(430,325,0);
    glVertex3f(432,332,0);
    glVertex3f(420,332,0);
    glEnd();

    //stand circle
    glColor3ub (0, 255, 55);
    DrawCircle(426, 328, 2, 2000);

    //stand box green color
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);

    glVertex3f(421.5,332,0);
    glVertex3f(430,332,0);
    glVertex3f(432,339,0);
    glVertex3f(420,339,0);
    glEnd();

    //stand circle
    glColor3ub (0, 71, 2);
    DrawCircle(426, 335, 2, 2000);


}
void surface(void)
{
    glBegin(GL_QUADS);
    glColor3ub (199, 237, 214);
    glVertex3f(0,300,0);
    glVertex3f(600,300,0);
    glVertex3f(600,480,0);
    glVertex3f(0,480,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub (199, 237, 214);
    glVertex3f(0,150,0);
    glVertex3f(600,150,0);
    glVertex3f(600,180,0);
    glVertex3f(0,180,0);
    glEnd();

    for(int i=0; i<600; i=i+50)
    {
        glColor3ub (148, 124, 84);
        glBegin(GL_LINES);
        glVertex2i(20+i, 160);
        glVertex2i(20+i, 190);
        glEnd();


        glColor3ub (51, 204, 51);
        DrawCircle(20+i, 190, 9, 5000);
        DrawCircle(20+i, 198, 6, 5000);
        glEnd();
        glFlush();

    }



}


void buildingSurface()
{

    glBegin(GL_QUADS);
    glColor3ub (199, 237, 214);

    glVertex3f(0,0,0);
    glVertex3f(600,0,0);
    glVertex3f(600,200,0);
    glVertex3f(0,200,0);
    glEnd();

}

void buildingOne()
{

    //building shape
    glBegin(GL_QUADS);
    glColor3ub (133, 129, 129);

    glVertex3f(150,62,0);
    glVertex3f(225,62,0);
    glVertex3f(225,70,0);
    glVertex3f(150,70,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub (186, 184, 184);

    glVertex3f(220,70,0);
    glVertex3f(225,70,0);
    glVertex3f(225,177,0);
    glVertex3f(220,170,0);
    glEnd();

    //chad shape
    glBegin(GL_QUADS);
    glColor3ub (186, 184, 184);

    glVertex3f(150,170,0);
    glVertex3f(220,170,0);
    glVertex3f(225,177,0);
    glVertex3f(155,177,0);
    glEnd();


    //middle shape

    glBegin(GL_QUADS);
    glColor3ub (2, 247, 239);

    glVertex3f(180,70,0);
    glVertex3f(190,70,0);
    glVertex3f(190,170,0);
    glVertex3f(180,170,0);
    glEnd();

    //inside middle shape line

    glColor3ub (1255, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180,90);
    glVertex2i(190,90);
    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180,110);
    glVertex2i(190,110);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180,130);
    glVertex2i(190,130);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180,150);
    glVertex2i(190,150);
    glEnd();
    //main shape
    glBegin(GL_QUADS);
    glColor3ub (22, 204, 245);

    glVertex3f(150,70,0);
    glVertex3f(175,70,0);
    glVertex3f(175,170,0);
    glVertex3f(150,170,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub (22, 204, 245);

    glVertex3f(150+45,70,0);
    glVertex3f(175+45,70,0);
    glVertex3f(175+45,170,0);
    glVertex3f(150+45,170,0);
    glEnd();

    for(int j=0; j<50; j=j+45)
    {


        for(int i=5; i<=80; i=i+18)

        {
            //window
            glBegin(GL_QUADS);
            glColor3ub (255, 255, 255);

            glVertex3f(153+j,73+i,0);
            glVertex3f(161+j,73+i,0);
            glVertex3f(161+j,85+i,0);
            glVertex3f(153+j,85+i,0);
            glEnd();
            //line draw
            glColor3ub (145, 140, 140);
            glBegin(GL_LINES);
            glVertex2i(157+j, 73+i);
            glVertex2i(157+j, 85+i);
            glEnd();
            //line draw
            glColor3ub (145, 140, 140);
            glBegin(GL_LINES);
            glVertex2i(153+j, 79+i);
            glVertex2i(161+j, 79+i);
            glEnd();

            // Second Window

            glBegin(GL_QUADS);
            glColor3ub (255, 255, 255);

            glVertex3f(163+j,73+i,0);
            glVertex3f(171+j,73+i,0);
            glVertex3f(171+j,85+i,0);
            glVertex3f(163+j,85+i,0);
            glEnd();
            //line draw
            glColor3ub (145, 140, 140);
            glBegin(GL_LINES);
            glVertex2i(167+j, 73+i);
            glVertex2i(167+j, 85+i);
            glEnd();
            //line draw
            glColor3ub (145, 140, 140);
            glBegin(GL_LINES);
            glVertex2i(163+j, 79+i);
            glVertex2i(171+j, 79+i);
            glEnd();


        }


    }



}

void river()
{

    glColor3ub (142, 227, 227);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(600, 0);
    glVertex2i(600, 150);
    glVertex2i(0, 150);
    glEnd();

//water

    for(int i=0; i<600; i+=100)
    {

        glColor3ub (169, 242, 242);
        glBegin(GL_LINES);
        glVertex2i(100+i, 100);
        glVertex2i(120+i, 100);
        glEnd();

        glColor3ub (169, 242, 242);
        glBegin(GL_LINES);
        glVertex2i(140+i, 110);
        glVertex2i(155+i, 110);
        glEnd();

        glBegin(GL_LINES);
        glVertex2i(120+i, 60);
        glVertex2i(130+i, 60);
        glEnd();

        glBegin(GL_LINES);
        glVertex2i(80+i, 80);
        glVertex2i(100+i, 80);
        glEnd();
    }

}

void boat()
{

    for(int i=0; i<600; i=i+400)
    {

        glColor3ub (26, 23, 33);
        glBegin(GL_QUADS);
        glVertex2i(40+i, 60);
        glVertex2i(60+i, 60);
        glVertex2i(70+i, 70);
        glVertex2i(30+i, 70);
        glEnd();

        glColor3ub(0, 0, 153);
        glBegin(GL_TRIANGLES);
        glVertex2i(44+i, 72);
        glVertex2i(50+i,72);
        glVertex2i(50+i, 85);
        glEnd();

        glColor3ub(0, 0, 153);
        glBegin(GL_TRIANGLES);
        glVertex2i(51+i, 72);
        glVertex2i(60+i,72);
        glVertex2i(51+i, 94);
        glEnd();


    }


}

void ship()
{
    //floor part
    glColor3ub (84, 84, 84);
    glBegin(GL_QUADS);
    glVertex2i(250, 25);
    glVertex2i(350, 25);
    glVertex2i(360, 45);
    glVertex2i(240, 45);
    glEnd();


    //middle part

    glColor3ub (84, 84, 84);
    glBegin(GL_QUADS);
    glVertex2i(240, 48);
    glVertex2i(360, 48);
    glVertex2i(370, 68);
    glVertex2i(230, 68);
    glEnd();

    glColor3ub (84, 84, 84);
    glBegin(GL_QUADS);
    glVertex2i(350, 68);
    glVertex2i(370, 68);
    glVertex2i(375, 78);
    glVertex2i(350, 78);
    glEnd();


    //one floor

    glColor3ub (192, 217, 216);
    glBegin(GL_QUADS);
    glVertex2i(240, 68);
    glVertex2i(345, 68);
    glVertex2i(335, 98);
    glVertex2i(240, 98);
    glEnd();

    //window

    for(int i=0; i<80; i+=14)
    {
        glColor3ub (230, 231, 251);
        glBegin(GL_QUADS);
        glVertex2i(245+i, 76);
        glVertex2i(255+i, 76);
        glVertex2i(255+i, 89);
        glVertex2i(245+i, 89);
        glEnd();
    }


    //middle shape of floor
    glColor3ub (32, 34, 140);
    glBegin(GL_QUADS);
    glVertex2i(240, 98);
    glVertex2i(335, 98);
    glVertex2i(332, 103);
    glVertex2i(240, 103);
    glEnd();

    //Two floor

    glColor3ub (192, 217, 216);
    glBegin(GL_QUADS);
    glVertex2i(240, 103);
    glVertex2i(332, 103);
    glVertex2i(322, 133);
    glVertex2i(240, 133);
    glEnd();

    //window

    for(int i=0; i<80; i+=14)
    {
        glColor3ub (230, 231, 251);
        glBegin(GL_QUADS);
        glVertex2i(245+i, 108);
        glVertex2i(254+i, 108);
        glVertex2i(254+i, 120);
        glVertex2i(245+i, 120);
        glEnd();
    }


    //Top part
    glColor3ub (84, 84, 84);
    glBegin(GL_QUADS);
    glVertex2i(235, 133);
    glVertex2i(330, 133);
    glVertex2i(330, 138);
    glVertex2i(235, 138);
    glEnd();



}


//move car
void movecar()
{
    if (carStatus ==1)
    {
        carX += 2; //speed
    }
    if (carX>600)
    {
        carX = -20;
    }
    glPushMatrix();
    glTranslatef(carX, carY, 0);
    car(1);
    glPopMatrix();
}

void movebirds()
{

    if (birdsStatus == 1)
    {
        birdsX += 1;
    }
    if (birdsX>600)
    {
        birdsX = -200;
    }
    glPushMatrix();
    glTranslatef(birdsX, birdsY, 0);
    birds(1);
    glPopMatrix();
}


void moveShip()
{

    if (shipStatus == 1)
    {
        shipX += 2;
    }
    if (shipX>600)
    {
        shipX = -200;
    }
    glPushMatrix();
    glTranslatef(shipX, shipY, 0);
    ship();
    glPopMatrix();
}


void moveBoat()
{

    if (boatStatus == 1)
    {
        boatX += 0.5;
    }
    if (boatX>600)
    {
        boatX = -200;
    }
    glPushMatrix();
    glTranslatef(boatX, boatY, 0);
    boat();
    glPopMatrix();
}
void display(void)
{


    road();
    surface();
    sky();
    drawSun(1);
    cloud(1);
    tree();

    school();
    flag();
    window(7,17);
    door();
    schoolRoad();
    smallTree();
    smallCar();
    movebirds();

    movecar();
    traficStand();
    river();
    field();
    moveBoat();
    moveShip();

    glFlush ();
    glutPostRedisplay();
    glutSwapBuffers();

}



void keyboard(unsigned char key, int x, int y)

{









    if (key == 'Z' || key == 'z')  ////car start

    {
        carStatus = 1;
    }
    else if (key == 'X' || key == 'x')  //car stop

    {
        carStatus = 0;
    }



    else if (key == 'B' || key == 'b')  ////bird start

    {
        birdsStatus = 1;
    }
    else if (key == 'V' || key == 'v')  //bird stop

    {
        birdsStatus = 0;
    }

    else if (key == 'S' || key == 's')  ////ship start

    {
        shipStatus = 1;
    }
    else if (key == 'T' || key == 't')  //Ship stop

    {
        shipStatus = 0;
    }

    else if (key == 'N' || key == 'n')  ////boat start

    {
        boatStatus = 1;
    }
    else if (key == 'M' || key == 'm')  //boat stop

    {
        boatStatus = 0;
    }


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
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (840, 680);
    glutInitWindowPosition (0, 0);

    glutCreateWindow ("School Scenario");
    glutPostRedisplay();
    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);
    init ();

    glutMainLoop();


    return 0;
}


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
void birds(int x)
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

void door(){

for(int i=0;i<=25;i=i+19){

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
    for(int i=6;i<=120;i=i+20){

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


for(i=6,j=45;i<=120;i=i+20){

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
    DrawCircle(190, 412, 5, 500);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,26,26);

    glVertex3f(179,340,0);
    glVertex3f(180,340,0);
    glVertex3f(180,420,0);
    glVertex3f(179,420,0);
    glEnd();
    glFlush();


//flag stand

    glBegin(GL_QUADS);
    glColor3ub(198,190,195);

    glVertex3f(175,335,0);
    glVertex3f(185,335,0);
    glVertex3f(182,345,0);
    glVertex3f(178,345,0);

}

void car(int h)
{
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


void schoolRoad(){
    glBegin(GL_QUADS);
    glColor3ub(242,212,167);

    glVertex3f(340,300,0);
    glVertex3f(360,300,0);
    glVertex3f(320,330,0);
    glVertex3f(300,330,0);
    glEnd();


}

void smallCar(){


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


void smallTree(){
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
void surface(void)
{
    glBegin(GL_QUADS);
    glColor3ub (199, 237, 214);

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
    birds(1);

    car(250);
    school();
    flag();
    window(7,17);
    door();
    schoolRoad();
    smallTree();
    smallCar();


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


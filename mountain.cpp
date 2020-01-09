#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

void init(void)
{
glClearColor(0.15, 0.25, 0.75, 0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void buildHouse(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 0.0, 0.0);

glBegin(GL_POLYGON);  //start house
glColor3f(1.0, 1.0, 0.0);
glVertex2i(50, 35);
glColor3f(0.0, 1.0, 0.0);
glVertex2i(50, 100);
glColor3f(0.0, 1.0, 1.0);
glVertex2i(150, 100);
glColor3f(1.0, 1.0, 0.0);
glVertex2i(150, 35);
glEnd();   //end house

glBegin(GL_POLYGON);  //start window
glColor3f(0.3, 0.2, 0.0);
glVertex2i(60, 95);
glVertex2i(80, 95);
glVertex2i(80, 80);
glVertex2i(60, 80);
glEnd();   //end window

glBegin(GL_POLYGON);  //start window
glColor3f(0.3, 0.2, 0.0);
glVertex2i(120, 95);
glVertex2i(140, 95);
glVertex2i(140, 80);
glVertex2i(120, 80);
glEnd();   //end window

glBegin(GL_POLYGON); //start ceiling
glColor3f(0.8, 0.0, 0.0);
glVertex2i(50, 100);
glColor3f(0.5, 0.0, 0.3);
glVertex2i(150, 100);
glColor3f(1.0, 0.0, 0.0);
glVertex2i(100, 130);
glEnd(); //end ceiling

glBegin(GL_POLYGON);  //start door
glColor3f(0.3, 0.2, 0.0);
glVertex2i(80, 35);
glVertex2i(80, 65);
glVertex2i(120, 65);
glVertex2i(120,35);
glEnd();  //end door


glBegin(GL_POLYGON);  //start step1
glColor3f(0.5, 0.5, 0.5);
glVertex2i(70, 35);
glVertex2i(130, 35);
glVertex2i(130, 25);
glVertex2i(70, 25);
glEnd();   //end step1


glBegin(GL_POLYGON);  //start step1
glColor3f(0.7, 0.7, 0.7);
glVertex2i(80, 25);
glVertex2i(120, 25);
glVertex2i(120, 15);
glVertex2i(80, 15);
glEnd();   //end step1


glBegin(GL_POLYGON);  //start step3
glColor3f(0.9, 0.9, 0.9);
glVertex2i(90, 15);
glVertex2i(110, 15);
glVertex2i(110, 5);
glVertex2i(90, 5);
glEnd();   //end window




    glBegin(GL_POLYGON); //start mountain1
glColor3f(0.5859375f,  0.29296875f, 0.0f); // Brown
glVertex2i(0, 100);
glVertex2i(25, 100);
glVertex2i(12.5, 130);
glEnd(); //end ceiling

    glBegin(GL_POLYGON); //start mountain2
glColor3f(0.5859375f,  0.29296875f, 0.0f); // Brown
glVertex2i(25, 100);
glVertex2i(50, 100);
glVertex2i(37.5, 130);
glEnd(); //end ceiling


    glBegin(GL_POLYGON); //start mountain3
glColor3f(0.5859375f,  0.29296875f, 0.0f); // Brown
glVertex2i(150, 100);
glVertex2i(175, 100);
glVertex2i(162.5, 130);
glEnd(); //end ceiling

    glBegin(GL_POLYGON); //start mountain4
glColor3f(0.5859375f,  0.29296875f, 0.0f); // Brown
glVertex2i(175, 100);
glVertex2i(200, 100);
glVertex2i(187.5, 130);
glEnd(); //end ceiling

    glBegin(GL_POINTS);
    float x, y, i;
     
    for ( i = 0; i < (2 * pi); i += 0.001)
    {
        x = 5 * cos(i);
        y = 5 * sin(i);  
        glVertex2i(x, y);
    }
    glEnd();


glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50, 100);
glutInitWindowSize(500, 500);
glutCreateWindow("House Section OpenGL");
init();
glutDisplayFunc(buildHouse);
glutMainLoop();
return 0;
}


#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14


void myDisplay(void);

void lingkaran(float tx, float ty,
               float n, float rotAngel)

{
    GLfloat derajat = (360.0 / 6)* M_PI/180;
    GLfloat sudut = 0.00225-rotAngel;
    for (int a=60; a>=0; a-=3){
    glBegin(GL_LINE_LOOP);
    if(a>=0 && a<=20){
    glColor3f(1.0,1.0,0.3);
        for (int k=0; k<n; k++)
        {

            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    } else if (a>20 && a<30)
    {
        glColor3f(0.8, 0.8, 0.4);
        for (int k = 0; k<n; k++)
        {
            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    }else if (a>=30 && a<40)
    {
        glColor3f(0.6, 0.6, 0.6);
        for (int k = 0; k<n; k++)
        {
            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    }else if (a>=40 && a<50)
    {
        glColor3f(0.4, 0.4, 0.8);
        for (int k = 0; k<n; k++)
        {
            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    }else if (a>=50 && a<55)
    {
        glColor3f(0.2, 0.2, 1.0);
        for (int k = 0; k<n; k++)
        {
            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    }else
    {
        glColor3f(0.0, 0.0, 1.0);
        for (int k = 0; k<n; k++)
        {
            glVertex2f(tx+(a*cos(derajat)),ty+(a*sin(derajat)));
            derajat += sudut;
        }
    }

    glEnd();
    }

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    lingkaran(70, 70, 6, 200);

glutSwapBuffers();
}


int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500,400);
    glLineWidth(5.0);
    glutCreateWindow("Franly Salmon Pattiiha - 672018046");
    glutDisplayFunc(myDisplay);
    gluOrtho2D(-10,150.0,-10,150.0);
    glClearColor(0.0,0.0,0.0,0.0);
    glutMainLoop();

}


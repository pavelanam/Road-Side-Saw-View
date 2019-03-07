#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include <math.h>
#include<cstring>
#include<windows.h>
#include<mmsystem.h>

GLfloat position = 0.0f;
GLfloat speed = 0.01f;

void update(int value)
{

    if(position > 2.0)
    position = -1.0f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            speed += 0.01f;

        }
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        if (state == GLUT_UP)
        {
            speed -= 0.01f;

        }
    }

    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {


    switch (key)

    {

       case 's':
            speed = 0.0f;
            break;
       case 'r':
            speed += 0.01f;
            break;

        case 27:     /// ESC key
            exit(0);
            break;
        case 'd':    /// Day
            glClearColor(0.50, 1.0, 1.0, 0.0);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 330.0, 0.0, 240.0);
            break;
        case 'n':   /// Night
            glClearColor(0.0, 0.0, 0.0, 0.0);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(0.0, 330.0, 0.0, 240.0);
            break;

    }

    glutPostRedisplay();

}


float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}

float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    ///Cloud 1
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.7, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.66, 0.89, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.62, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.66, 0.81, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

///Cloud 2
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.2, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.16, 0.89, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.12, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.16, 0.81, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

///Cloud 3
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.7, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.66, 0.89, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.62, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.66, 0.81, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

///Cloud 4
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.3, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.26, 0.89, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.22, 0.85, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(0.26, 0.81, 0.0);
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.05;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
    glPushMatrix();

///House 1
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-600),getY(240));
    glVertex2f(getX(-600),getY(60));
    glVertex2f(getX(-500), getY(60));
    glVertex2f(getX(-500), getY(240));
    glEnd();

    ///Windows
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(-580),getY(180));
    glVertex2f(getX(-520),getY(180));
    glVertex2f(getX(-580),getY(120));
    glVertex2f(getX(-520),getY(120));
    glEnd();

///House 2
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-200),getY(210));
    glVertex2f(getX(-200),getY(60));
    glVertex2f(getX(-120),getY(60));
    glVertex2f(getX(-120),getY(210));
    glEnd();

    ///Windows
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(-180),getY(180));
    glVertex2f(getX(-140),getY(180));
    glVertex2f(getX(-180),getY(120));
    glVertex2f(getX(-140),getY(120));
    glEnd();

///House 3
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(20),getY(330));
    glVertex2f(getX(20),getY(60));
    glVertex2f(getX(120),getY(60));
    glVertex2f(getX(120),getY(330));
    glEnd();

    ///Windows line by
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(40),getY(300));
    glVertex2f(getX(40),getY(240));
    glVertex2f(getX(40),getY(180));
    glVertex2f(getX(40),getY(120));
    glVertex2f(getX(100),getY(300));
    glVertex2f(getX(100),getY(240));
    glVertex2f(getX(100),getY(180));
    glVertex2f(getX(100),getY(120));
    glEnd();

///House 4
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(340),getY(260));
    glVertex2f(getX(340),getY(60));
    glVertex2f(getX(480),getY(60));
    glVertex2f(getX(480),getY(260));
    glEnd();

    ///Windows line by
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(360),getY(240));
    glVertex2f(getX(360),getY(180));
    glVertex2f(getX(360),getY(120));
    glVertex2f(getX(410),getY(240));
    glVertex2f(getX(410),getY(180));
    glVertex2f(getX(410),getY(120));
    glVertex2f(getX(460),getY(240));
    glVertex2f(getX(460),getY(180));
    glVertex2f(getX(460),getY(120));
    glEnd();

///Shop 01
    glColor3f (1.0, .5, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-280),getY(130));
    glVertex2f(getX(-280),getY(60));
    glVertex2f(getX(-210),getY(60));
    glVertex2f(getX(-210),getY(130));
    glEnd();

    ///Gate
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(-245),getY(60));
    glEnd();

///Shop 02
    glColor3f (1.0, .5, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(140),getY(120));
    glVertex2f(getX(140),getY(60));
    glVertex2f(getX(200),getY(60));
    glVertex2f(getX(200),getY(120));
    glEnd();

    ///Gate
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(170),getY(60));
    glEnd();

///Shop 03
    glColor3f (1.0, .5, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(200),getY(180));
    glVertex2f(getX(200),getY(60));
    glVertex2f(getX(260),getY(60));
    glVertex2f(getX(260),getY(180));
    glEnd();

    ///Gate
    glColor3f (1.0, 1.0, 1.0);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(230),getY(60));
    glEnd();

///Shop 04
    glColor3f (1.0, .5, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(260),getY(120));
    glVertex2f(getX(260),getY(60));
    glVertex2f(getX(320),getY(60));
    glVertex2f(getX(320),getY(120));
    glEnd();

    ///Gate
    glColor3f (1.0, 1.0, 1.0);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(290),getY(60));
    glEnd();

    ///Window
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(20.0);
    glBegin(GL_POINTS);
    glVertex2f(getX(230),getY(150));
    glEnd();

///Tree#3
    glColor3f (0.6, 0.298, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(520),getY(210));
    glVertex2f(getX(520),getY(60));
    glVertex2f(getX(560),getY(60));
    glVertex2f(getX(560),getY(210));
    glEnd();

    ///Body
    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(540),getY(360));
    glVertex2f(getX(490),getY(180));
    glVertex2f(getX(590),getY(180));
    glEnd();

    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(540),getY(240));
    glVertex2f(getX(490),getY(120));
    glVertex2f(getX(590),getY(120));
    glEnd();

///Tree#2
    glColor3f (0.6, 0.298, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-80),getY(180));
    glVertex2f(getX(-80),getY(60));
    glVertex2f(getX(-40),getY(60));
    glVertex2f(getX(-40),getY(180));
    glEnd();

    ///Body
    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-60),getY(300));
    glVertex2f(getX(-100),getY(120));
    glVertex2f(getX(-20),getY(120));
    glEnd();

    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-60),getY(150));
    glVertex2f(getX(-100),getY(90));
    glVertex2f(getX(-20),getY(90));
    glEnd();

///Tree#3
    glColor3f (0.6, 0.298, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-360),getY(180));
    glVertex2f(getX(-360),getY(60));
    glVertex2f(getX(-320),getY(60));
    glVertex2f(getX(-320),getY(180));
    glEnd();

    ///Body
    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-340),getY(300));
    glVertex2f(getX(-380),getY(90));
    glVertex2f(getX(-300),getY(90));
    glEnd();

///Tree#4
    glColor3f (0.6, 0.298, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-460),getY(180));
    glVertex2f(getX(-460),getY(60));
    glVertex2f(getX(-420),getY(60));
    glVertex2f(getX(-420),getY(180));
    glEnd();

    ///Body
    glColor3f (0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-440),getY(300));
    glVertex2f(getX(-480),getY(90));
    glVertex2f(getX(-400),getY(90));
    glEnd();

/////////////////////////Pavel Part///////////////////////////////
///Saw Water
    glColor3ub(0,0,255);
    glPushMatrix();

    glBegin(GL_QUADS);
        glVertex2f(getX(-630),getY(-240));
        glVertex2f(getX(-630),getY(-380));
        glVertex2f(getX(210),getY(-380));
        glVertex2f(getX(210),getY(-240));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-450),getY(-160));
        glVertex2f(getX(-570),getY(-240));
        glVertex2f(getX(-450),getY(-240));
        glVertex2f(getX(-450),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-450),getY(-180));
        glVertex2f(getX(-450),getY(-240));
        glVertex2f(getX(-230),getY(-240));
        glVertex2f(getX(-330),getY(-180));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-450),getY(-160));
        glVertex2f(getX(-450),getY(-180));
        glVertex2f(getX(-430),getY(-180));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-410),getY(-160));
        glVertex2f(getX(-430),getY(-180));
        glVertex2f(getX(-390),getY(-180));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-370),getY(-160));
        glVertex2f(getX(-390),getY(-180));
        glVertex2f(getX(-330),getY(-180));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-90),getY(-160));
        glVertex2f(getX(-190),getY(-240));
        glVertex2f(getX(-90),getY(-240));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-90),getY(-160));
        glVertex2f(getX(-90),getY(-240));
        glVertex2f(getX(-70),getY(-240));
        glVertex2f(getX(-70),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-70),getY(-160));
        glVertex2f(getX(-70),getY(-240));
        glVertex2f(getX(-30),getY(-240));
        glVertex2f(getX(-30),getY(-200));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-30),getY(-200));
        glVertex2f(getX(-30),getY(-240));
        glVertex2f(getX(210),getY(-240));
        glVertex2f(getX(210),getY(-200));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(70),getY(-160));
        glVertex2f(getX(30),getY(-200));
        glVertex2f(getX(70),getY(-200));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(70),getY(-160));
        glVertex2f(getX(70),getY(-200));
        glVertex2f(getX(90),getY(-200));
        glVertex2f(getX(90),getY(-160));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(90),getY(-160));
        glVertex2f(getX(90),getY(-200));
        glVertex2f(getX(150),getY(-200));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(210),getY(-280));
        glVertex2f(getX(210),getY(-380));
        glVertex2f(getX(630),getY(-380));
        glVertex2f(getX(630),getY(-280));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(330),getY(-260));
        glVertex2f(getX(330),getY(-280));
        glVertex2f(getX(630),getY(-280));
        glVertex2f(getX(630),getY(-260));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(450),getY(-200));
        glVertex2f(getX(450),getY(-260));
        glVertex2f(getX(630),getY(-260));
        glVertex2f(getX(630),getY(-200));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(330),getY(-240));
        glVertex2f(getX(310),getY(-280));
        glVertex2f(getX(330),getY(-280));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(210),getY(-240));
        glVertex2f(getX(210),getY(-280));
        glVertex2f(getX(290),getY(-280));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(330),getY(-240));
        glVertex2f(getX(330),getY(-260));
        glVertex2f(getX(350),getY(-260));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(370),getY(-240));
        glVertex2f(getX(350),getY(-260));
        glVertex2f(getX(390),getY(-260));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(450),getY(-200));
        glVertex2f(getX(390),getY(-260));
        glVertex2f(getX(450),getY(-260));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(450),getY(-180));
        glVertex2f(getX(450),getY(-200));
        glVertex2f(getX(530),getY(-200));
        glVertex2f(getX(510),getY(-180));
    glEnd();
///Batch
    glColor3ub(255,255,145);
    glBegin(GL_QUADS);
        glVertex2f(getX(-630),getY(-60));
        glVertex2f(getX(-630),getY(-240));
        glVertex2f(getX(-570),getY(-240));
        glVertex2f(getX(-450),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-630),getY(-60));
        glVertex2f(getX(-450),getY(-160));
        glVertex2f(getX(630),getY(-160));
        glVertex2f(getX(630),getY(-60));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-450),getY(-160));
        glVertex2f(getX(-430),getY(-180));
        glVertex2f(getX(-410),getY(-160));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(-410),getY(-160));
        glVertex2f(getX(-390),getY(-180));
        glVertex2f(getX(-370),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-370),getY(-160));
        glVertex2f(getX(-230),getY(-240));
        glVertex2f(getX(-190),getY(-240));
        glVertex2f(getX(-90),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(-70),getY(-160));
        glVertex2f(getX(-30),getY(-200));
        glVertex2f(getX(30),getY(-200));
        glVertex2f(getX(70),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(70),getY(-160));
        glVertex2f(getX(130),getY(-200));
        glVertex2f(getX(450),getY(-200));
        glVertex2f(getX(450),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(210),getY(-200));
        glVertex2f(getX(210),getY(-240));
        glVertex2f(getX(410),getY(-240));
        glVertex2f(getX(450),getY(-200));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(210),getY(-240));
        glVertex2f(getX(290),getY(-280));
        glVertex2f(getX(310),getY(-280));
        glVertex2f(getX(330),getY(-240));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(330),getY(-240));
        glVertex2f(getX(350),getY(-260));
        glVertex2f(getX(370),getY(-240));
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(getX(370),getY(-240));
        glVertex2f(getX(390),getY(-260));
        glVertex2f(getX(410),getY(-240));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(450),getY(-160));
        glVertex2f(getX(450),getY(-180));
        glVertex2f(getX(630),getY(-180));
        glVertex2f(getX(630),getY(-160));
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(getX(510),getY(-180));
        glVertex2f(getX(530),getY(-200));
        glVertex2f(getX(630),getY(-200));
        glVertex2f(getX(630),getY(-180));
    glEnd();

///Ship
    glColor3ub(0,0,0);
    glPushMatrix();
        glTranslatef(position,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-570),getY(-360));
            glVertex2f(getX(-310),getY(-360));
            glVertex2f(getX(-290),getY(-340));
            glVertex2f(getX(-550),getY(-340));
        glEnd();
        glBegin(GL_QUADS);
            glVertex2f(getX(-570),getY(-320));
            glVertex2f(getX(-550),getY(-340));
            glVertex2f(getX(-290),getY(-340));
            glVertex2f(getX(-270),getY(-320));
        glEnd();
        glColor3ub(255,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-510),getY(-280));
            glVertex2f(getX(-530),getY(-320));
            glVertex2f(getX(-350),getY(-320));
            glVertex2f(getX(-370),getY(-280));
        glEnd();
        ///Window
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
            glVertex2f(getX(-390),getY(-280));
            glVertex2f(getX(-390),getY(-300));
            glVertex2f(getX(-360),getY(-300));
            glVertex2f(getX(-370),getY(-280));
        glEnd();
        glBegin(GL_TRIANGLES);
            glVertex2f(getX(-510),getY(-280));
            glVertex2f(getX(-520),getY(-300));
            glVertex2f(getX(-510),getY(-300));
        glEnd();
        glColor3ub(255,255,255);
        glBegin(GL_LINES);
            glVertex2f(getX(-550),getY(-340));
            glVertex2f(getX(-290),getY(-340));
        glEnd();

        ///Light
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-385),getY(-265));
            glVertex2f(getX(-385),getY(-280));
            glVertex2f(getX(-375),getY(-280));
            glVertex2f(getX(-375),getY(-265));
        glEnd();
        glBegin(GL_QUADS);
            glVertex2f(getX(-385),getY(-260));
            glVertex2f(getX(-385),getY(-265));
            glVertex2f(getX(-365),getY(-265));
            glVertex2f(getX(-365),getY(-260));
        glEnd();

        ///Flag
        glColor3ub(0,130,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-570),getY(-280));
            glVertex2f(getX(-570),getY(-300));
            glVertex2f(getX(-550),getY(-300));
            glVertex2f(getX(-550),getY(-280));
        glEnd();
        glColor3ub(0,0,0);
        glBegin(GL_LINES);
            glVertex2f(getX(-550),getY(-320));
            glVertex2f(getX(-550),getY(-280));
        glEnd();
        glColor3ub(255,0,0);
        glPointSize(10);
        glBegin(GL_POINTS);
            glVertex2f(getX(-560),getY(-290));
        glEnd();
    glPopMatrix();
///Road
        glPushMatrix();
        glColor3ub(110,110,110);
        glBegin(GL_QUADS);
            glVertex2f(getX(-630),getY(60));
            glVertex2f(getX(-630),getY(-60));
            glVertex2f(getX(630),getY(-60));
            glVertex2f(getX(630),getY(60));
        glEnd();
        ///Bodar
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-630),getY(-55));
            glVertex2f(getX(-630),getY(-60));
            glVertex2f(getX(630),getY(-60));
            glVertex2f(getX(630),getY(-55));
        glEnd();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
            glVertex2f(getX(-630),getY(55));
            glVertex2f(getX(-630),getY(60));
            glVertex2f(getX(630),getY(60));
            glVertex2f(getX(630),getY(55));
        glEnd();
        ///Line
        glColor3ub(255,242,9);
        glBegin(GL_LINES);
            glVertex2f(getX(-610),getY(0));
            glVertex2f(getX(-510),getY(0));
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(getX(-410),getY(0));
            glVertex2f(getX(-310),getY(0));
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(getX(-210),getY(0));
            glVertex2f(getX(-110),getY(0));
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(getX(110),getY(0));
            glVertex2f(getX(210),getY(0));
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(getX(310),getY(0));
            glVertex2f(getX(410),getY(0));
        glEnd();
        glBegin(GL_LINES);
            glVertex2f(getX(510),getY(0));
            glVertex2f(getX(610),getY(0));
        glEnd();
        ///Zebra Cross
        glPointSize(10.0);
        glBegin(GL_POINTS);
            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(50));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(50));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(50));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(50));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(50));

            glColor3ub(0,0,0);
            glVertex2f(getX(-20),getY(40));
            glColor3ub(0,0,0);
            glVertex2f(getX(-10),getY(40));
            glColor3ub(0,0,0);
            glVertex2f(getX(0),getY(40));
            glColor3ub(0,0,0);
            glVertex2f(getX(10),getY(40));
            glColor3ub(0,0,0);
            glVertex2f(getX(20),getY(40));

            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(30));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(30));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(30));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(30));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(30));

            glColor3ub(0,0,0);
            glVertex2f(getX(-20),getY(20));
            glColor3ub(0,0,0);
            glVertex2f(getX(-10),getY(20));
            glColor3ub(0,0,0);
            glVertex2f(getX(0),getY(20));
            glColor3ub(0,0,0);
            glVertex2f(getX(10),getY(20));
            glColor3ub(0,0,0);
            glVertex2f(getX(20),getY(20));

            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(10));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(10));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(10));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(10));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(10));

            glColor3ub(0,0,0);
            glVertex2f(getX(-20),getY(0));
            glColor3ub(0,0,0);
            glVertex2f(getX(-10),getY(0));
            glColor3ub(0,0,0);
            glVertex2f(getX(0),getY(0));
            glColor3ub(0,0,0);
            glVertex2f(getX(10),getY(0));
            glColor3ub(0,0,0);
            glVertex2f(getX(20),getY(0));

            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(-10));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(-10));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(-10));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(-10));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(-10));

            glColor3ub(0,0,0);
            glVertex2f(getX(-20),getY(-20));
            glColor3ub(0,0,0);
            glVertex2f(getX(-10),getY(-20));
            glColor3ub(0,0,0);
            glVertex2f(getX(0),getY(-20));
            glColor3ub(0,0,0);
            glVertex2f(getX(10),getY(-20));
            glColor3ub(0,0,0);
            glVertex2f(getX(20),getY(-20));

            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(-30));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(-30));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(-30));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(-30));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(-30));

            glColor3ub(0,0,0);
            glVertex2f(getX(-20),getY(-40));
            glColor3ub(0,0,0);
            glVertex2f(getX(-10),getY(-40));
            glColor3ub(0,0,0);
            glVertex2f(getX(0),getY(-40));
            glColor3ub(0,0,0);
            glVertex2f(getX(10),getY(-40));
            glColor3ub(0,0,0);
            glVertex2f(getX(20),getY(-40));

            glColor3ub(255,255,255);
            glVertex2f(getX(-20),getY(-50));
            glColor3ub(255,255,255);
            glVertex2f(getX(-10),getY(-50));
            glColor3ub(255,255,255);
            glVertex2f(getX(-0),getY(-50));
            glColor3ub(255,255,255);
            glVertex2f(getX(10),getY(-50));
            glColor3ub(255,255,255);
            glVertex2f(getX(20),getY(-50));
        glEnd();
        glPopMatrix();


            ///car by koushik
                ///Car


///botton

    glPushMatrix();

    glTranslatef(position,0,0);
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-460),getY(0));
    glVertex2f(getX(-460),getY(-30));
    glVertex2f(getX(-240),getY(-30));
    glVertex2f(getX(-240),getY(0));
    glEnd();


          glColor3ub(0, 255, 255);
        glBegin(GL_QUADS);
            glVertex2f(getX(-240),getY(-10));
            glVertex2f(getX(-240),getY(-20));
            glVertex2f(getX(-220),getY(-20));
            glVertex2f(getX(-220),getY(-10));


            //glVertex2f(getX(-360),getY(-30));
        glEnd();



    ///top part
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-420),getY(0));
    glVertex2f(getX(-400),getY(30));
    glVertex2f(getX(-320),getY(30));
    glVertex2f(getX(-280),getY(0));
    glEnd();

    ///window
     glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-390),getY(20));
    glVertex2f(getX(-405),getY(0));
    glVertex2f(getX(-370),getY(0));
    glVertex2f(getX(-370),getY(20));
    glEnd();


    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(-340),getY(20));
    glVertex2f(getX(-340),getY(0));
    glVertex2f(getX(-300),getY(0));
    glVertex2f(getX(-340),getY(20));
    glEnd();

    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-360),getY(30));
    glVertex2f(getX(-360),getY(-30));
    glEnd();


      glColor3f (0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(getX(-340),getY(20));
            glVertex2f(getX(-340),getY(0));
            glVertex2f(getX(-300),getY(0));
            glVertex2f(getX(-340),getY(20));
        glEnd();

        glColor3f (0.0, 0.0, 0.0);
        glBegin(GL_LINE_LOOP);
            glVertex2f(getX(-360),getY(30));
            glVertex2f(getX(-360),getY(-30));
        glEnd();
        glPopMatrix();




        /// Wheel 1
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.67, -0.09, 0.0);
        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.022;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        ///Wheel 2
        glPushMatrix();
        glTranslatef(position,0,0);
        glTranslatef(-0.45, -0.09, 0.0);
        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
            for(int i=0;i<600;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.022;
                float x = r * cos(A);
                float y = r * sin(A);
                    glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

glPopMatrix();


        glutSwapBuffers();
}

void myInit (void)
{
    glClearColor(0.50, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 330.0, 0.0, 240.0);
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1260, 760);
	glutCreateWindow("Road Side Saw View");
	glutDisplayFunc(drawScene);
	sndPlaySound("Beach Soundscape.wav",SND_ASYNC);
	glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);
	myInit();
	glutMainLoop();
	return 0;
}


#ifndef MAMMOTH_H_INCLUDED
#define MAMMOTH_H_INCLUDED
#include <GL/glut.h>
#include "sc2environment.h"

GLfloat posX =-40, posY =-50,posZ=0,posX1=-149,posX2=100,posX3=600;

void drawmammothbody()
{
    glBegin(GL_POLYGON);
    glColor3f(0.545098,0.270588,0.0745098);
    glVertex2f(216,222);
    glVertex2f(238,189);
    glVertex2f(191,180);
    glVertex2f(167,184);
    glVertex2f(168,190);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.545098,0.270588,0.0745098);
    glVertex2f(226,189);
    glVertex2f(234,143);
    glVertex2f(212,110);
    glVertex2f(210,113);
    glVertex2f(213,116);
    glVertex2f(213,120);
    glVertex2f(200,136);
    glVertex2f(191,146);
    glVertex2f(189,143);
    glVertex2f(168,174);
    glVertex2f(167,184);
//trunk part
glVertex2f(227,107);
    glVertex2f(226,90);
    glVertex2f(220,68);
    glVertex2f(213,59);
    glVertex2f(204,55);
    glVertex2f(201,57);
    glVertex2f(202,59);
    glVertex2f(203,57);
    glVertex2f(205,56);
//bodypart of the mammoth
    glVertex2f(225,102);
    glVertex2f(187,202);
    glVertex2f(177,207);
    glVertex2f(150,193);
    glVertex2f(147,193);
    glVertex2f(128,184);
    glVertex2f(88,146);
    glVertex2f(75,145);
    glVertex2f(80,109);
    glVertex2f(100,78);
    glVertex2f(118,84);
    glVertex2f(185,135);

    glVertex2f(170,124);
    glVertex2f(192,119);

    glEnd();
//tusks for the animal
    glBegin(GL_POLYGON);
    glColor3f(0.9803921,0.9215686,0.843137);
    glVertex2f(212,110);
    glVertex2f(210,114);
    glVertex2f(214,118);
    glVertex2f(200,136);
    glVertex2f(192,119);
    glVertex2f(195,106);
    glVertex2f(208,98);
    glVertex2f(223,103);
    glVertex2f(234,117);
    glVertex2f(242,144);
    glVertex2f(250,151);
    glVertex2f(238,149);
    glVertex2f(223,120);

    glVertex2f(226,100);
    glVertex2f(229,98);
    glVertex2f(249,100);
    glVertex2f(260,111);
    glVertex2f(270,131);
    glVertex2f(281,137);
    glVertex2f(272,138);
    glVertex2f(250,125);
    glVertex2f(262,126);
    glVertex2f(249,100);
    glVertex2f(200,107);
    glVertex2f(220,109);

glEnd();

	glColor3f(255.0, 255.0, 255.0);
	drawCircle(5,213,185);

	glPointSize(7.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(213,185);
	glEnd();

}

void drawlegfront1()
{
 glBegin(GL_POLYGON);
    glColor3f(0.55555,0.277777,0.0745098);
   glVertex2f(185,135);
   glVertex2f(168,109);
   glVertex2f(163,70);
   glVertex2f(165,58);
   glVertex2f(135,59);
   glVertex2f(134,74);
   glVertex2f(117,84);
   glEnd();

}

void drawlegfront2()
{

glBegin(GL_POLYGON);
glColor3f(0.4,0.270588,0.1);
glVertex2f(164,59);
glVertex2f(170,58);
glVertex2f(173,68);
glVertex2f(174,88);
glVertex2f(188,120);
glVertex2f(192,119);
glVertex2f(181,123);
glVertex2f(163,82);
glEnd();
}
void drawbackleg2()
{
  glBegin(GL_POLYGON);
  glColor3f(0.4,0.270588,0.1);
  glVertex2f(126,82);
  glVertex2f(125,82);
  glVertex2f(118,85);
  glVertex2f(113,84);
  glVertex2f(127,63);
  glVertex2f(118,61);
  glVertex2f(109,62);
  glVertex2f(102,83);

  glEnd();

}

void drawbackleg1()
{
glBegin(GL_POLYGON);
glColor3f(0.55555,0.277777,0.0745098);
glVertex2f(77,144);
glVertex2f(70,92);
glVertex2f(89,60);
glVertex2f(110,58);
glVertex2f(102,78);
glEnd();
}

void drawtail()
{

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(76,84);
glVertex2f(74,79);
glVertex2f(74,81);
glVertex2f(70,76);
glVertex2f(75,74);
glVertex2f(82,79);
glVertex2f(72,97);
glVertex2f(69,93);
glEnd();
}
void drawmammoth()
{
   glPushMatrix();
    glTranslatef(0,0,0);
    drawbackleg1();
    drawbackleg2();
    drawlegfront1();
    drawlegfront2();

    glPopMatrix();

	glPushMatrix();

    glTranslatef(126,82,0);
    glRotatef(angle3,0,0,1);
    glTranslatef(-126,-82,0);
	drawbackleg2();
	drawlegfront2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,0,0);
	drawmammothbody();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(185,135,0);
	glRotatef(angle3,0,0,1);
	glTranslatef(-185,-135,0);
	drawbackleg1();
	drawlegfront1();
	glPopMatrix();

    drawtail();
}


#endif // MAMMOTH_H_INCLUDED

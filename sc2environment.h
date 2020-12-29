#ifndef SC2ENVIRONMENT_H_INCLUDED
#define SC2ENVIRONMENT_H_INCLUDED
#include <GL/glut.h>
#include "dino.h"
#include <unistd.h>

void drawCloudS2()
{
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND );
   // glBegin(GL_POLYGON);
	glColor4f(1,1,1,0.005);
	drawCircle(30,380,400);
	drawCircle(30,410,430);
	drawCircle(30,450,430);
	drawCircle(30,480,400);
	drawCircle(30,430,400);
	drawCircle(30,410,370);
	drawCircle(30,450,370);
	glDisable(GL_BLEND);
}

void drawSunS2()
{
    glEnable(GL_BLEND);
 glColor4f(1,1,1,0.03);
 drawCircle(25,40,425);
 glDisable(GL_BLEND);

}

void drawSkyS2()
{
    glColor4f(0.5294112,0.8078431,1,1);
    glEnable(GL_BLEND );
    glBegin(GL_POLYGON);
    glColor4f(0.5294112,0.8078431,1,1);
    glVertex2f(0,500);
    glVertex2f(600,500);
    glColor4f(0.5294112,0.8078431,1,0.2);
    glVertex2f(600,260);
    glVertex2f(0,260);
    glEnd();
    //glRectf(0,260,600,500);
    glDisable(GL_BLEND);
}


void drawSnow(){
    GLint xPos[300],yPos[300],snowcntr;
    for(snowcntr =0;snowcntr<300;snowcntr+=3){
        xPos[snowcntr]=rand()%1000;
        yPos[snowcntr]=rand()%1000;

        if(xPos[snowcntr]<600 && xPos[snowcntr]>0 &&yPos[snowcntr]<500 && yPos[snowcntr]>280)
    {
        glColor3f(1,1,1);
        glPointSize(5);
        glBegin(GL_POINTS);
        glVertex2f(xPos[snowcntr],yPos[snowcntr]);
        glEnd();
        Sleep(8);
    }
   }
}

void drawGroundS2()
{

   glColor3f(1,1,1);
   //glRectf(0,0,600,260);
   glEnable(GL_BLEND);
    glBegin(GL_POLYGON);
    glColor4ub(255,255,255,225);
    glVertex2f(0,0);
    glVertex2f(600,0);
    glColor4ub(87,59,12,255);
    glVertex2f(600,150);
    glVertex2f(0,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(87,59,12,255);
    glVertex2f(0,150);
    glVertex2f(600,150);
    glColor4ub(255,255,255,225);
    glVertex2f(600,260);
    glVertex2f(0,260);
    glEnd();
    glDisable(GL_BLEND);
}

void drawMountainsS2()
{ glBegin(GL_POLYGON);
  glColor3f(1,0.9803921,0.9137254);
  glVertex2f(0,260);
  glVertex2f(12.5,275);
  glVertex2f(25,300);
  glVertex2f(50,325);
  glVertex2f(60,350);
  glVertex2f(75,375);
  glVertex2f(100,400);
  glVertex2f(125,425);
  glVertex2f(150,400);
  glVertex2f(175,375);
  glVertex2f(210,355.5);
  glVertex2f(225,263);
  glVertex2f(235,260);
  glEnd();
  glBegin(GL_POLYGON);
  glColor3f(1,0.9803921,0.9137254);
  glVertex2f(220,260);
  glVertex2f(210.5,300);
  glVertex2f(225,325);
  glVertex2f(250,350);
  glVertex2f(275,375);
  glVertex2f(300,400);
  glVertex2f(325,420);
  glVertex2f(337.5,400);
  glVertex2f(350,375);
  glVertex2f(375,325);
  glVertex2f(400,300);
  glVertex2f(410.5,260.5);
  glVertex2f(425,260);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3f(1,0.9803921,0.9137254);
   glVertex2f(410,260);
   glVertex2f(437.5,260.5);
   glVertex2f(450,300);
   glVertex2f(475,325);
   glVertex2f(500,375);
   glVertex2f(525,400);
   glVertex2f(550,425);
   glVertex2f(575,400);
   glVertex2f(600,375);
   glVertex2f(600,260);
   glEnd();

}

void stone()
{
 glBegin(GL_POLYGON);
 glColor4f(0.3803921,0.324590196,0.27450980,0.85);
 glVertex2f(132,254);
 glVertex2f(143,279);
 glVertex2f(152,299);
 glVertex2f(162,306);
 glVertex2f(180,308);
 glVertex2f(201,314);
 glVertex2f(208,310);
 glVertex2f(214,295);
 glVertex2f(216,268);
 glVertex2f(224,270);
 glVertex2f(226,265);
 glVertex2f(227,257);
 glVertex2f(186,250);
 glVertex2f(179,255);
 glVertex2f(160,254);
 glVertex2f(132,254);
 glEnd();
}

void treelog()
{
  glBegin(GL_POLYGON);
  glColor4f(0.3686274,0.21960784,0.1410196,0.9);
  glVertex2f(70,226);
  glVertex2f(163,206);
  glVertex2f(174,207);
  glVertex2f(190,207);
  glVertex2f(206,214);
  glVertex2f(191,217);
  glVertex2f(172,222);
  glVertex2f(165,230);
  glVertex2f(185,233);
  glVertex2f(154,237);
  glVertex2f(140,229);
  glVertex2f(116,234);
  glVertex2f(89,234);
  glVertex2f(70,226);
  glEnd();
}


#endif // SC2ENVIRONMENT_H_INCLUDED

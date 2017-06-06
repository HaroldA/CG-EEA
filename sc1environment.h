#ifndef SC1ENVIRONMENT_H_INCLUDED
#define SC1ENVIRONMENT_H_INCLUDED
#include <GL/glut.h>

GLfloat cloud1Pos=-180,cloud2Pos=75;

void drawLand(){
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glBegin(GL_POLYGON);
    glColor4f(0.3398,0.4951,0.1650,1);
    glVertex2f(0,0);
    glVertex2f(600,0);
    glColor4f(0,0,0,0.9);
    glVertex2f(600,260);
    glVertex2f(0,260);
    glEnd();
    glDisable(GL_BLEND);
}

void drawSky(){
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND );
    glBegin(GL_POLYGON);
    glColor4f(0.196078,0.6,0.8,1);
    glVertex2f(0,500);
    glVertex2f(600,500);
    glColor4f(0.196078,0.6,0.8,0.2);
    glVertex2f(600,260);
    glVertex2f(0,260);
    glEnd();
    //glRectf(0,260,600,500);
    glDisable(GL_BLEND);
}



void mountains() {
   glColor3f(1,1,1);
   glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
   glEnable(GL_BLEND );
   glBegin(GL_TRIANGLES);
   glColor4f(0.8,0.8,0.8,1);
   glVertex2f(50,375);
   glColor4f(0.4,0.4,0.4,0.8);
   glVertex2f(0,325);
   glVertex2f(112.5,325);
   glEnd();
   glDisable(GL_BLEND);
   glEnable(GL_BLEND );
   glBegin(GL_TRIANGLES);
    glColor4f(0.8,0.8,0.8,1);
   glVertex2f(200,370);
   glColor4f(0.4,0.4,0.4,0.8);
   glVertex2f(137.5,325);
   glVertex2f(255,325);
   glEnd();
   glDisable(GL_BLEND);
    glEnable(GL_BLEND );
   glBegin(GL_TRIANGLES);
    glColor4f(0.8,0.8,0.8,1);
   glVertex2f(450,362.5);
   glColor4f(0.4,0.4,0.4,0.8);
   glVertex2f(300,325);
   glVertex2f(600,325);
   glEnd();
   glDisable(GL_BLEND);

     //front mount here
     glEnable(GL_BLEND );
   glBegin(GL_POLYGON);
    glColor4f(0.1,0.1,0.1,0.95);
   glVertex2f(137.5,360);
   glVertex2f(130,362.5);
   glColor4f(0.3,0.3,0.3,1);
   glVertex2f(75,325);
   glVertex2f(175,325);
   glEnd();

   glBegin(GL_TRIANGLES);
    glColor4f(0.1,0.1,0.1,0.95);
   glVertex2f(300,385);
   glColor4f(0.3,0.3,0.3,1);
   glVertex2f(375,325);
   glVertex2f(212.5,325);
   glEnd();

   glBegin(GL_POLYGON);
     glColor4f(0.1,0.1,0.1,0.95);
   glVertex2f(385,335);
  glColor4f(0.3,0.3,0.3,1);
   glVertex2f(412.5,360);
   glVertex2f(462.5,325);
   glVertex2f(375,325);
   glEnd();

   glBegin(GL_TRIANGLES);
     glColor4f(0.1,0.1,0.1,0.95);
   glVertex2f(530,375);
  glColor4f(0.3,0.3,0.3,1);
   glVertex2f(600,325);
   glVertex2f(462.5,325);
   glEnd();
   glDisable(GL_BLEND);

}

void river(){
    glColor3f(0.196078,0.6,0.8);
    glEnable(GL_BLEND);
    glBegin(GL_POLYGON);
    glColor4f(0.196078,0.6,0.8,1);
    glVertex2f(300,325);
    glVertex2f(350,300);
    glVertex2f(325,287.5);
    glVertex2f(350,275);
    glVertex2f(362.5,270);
    glColor4f(0.196078,0.6,0.8,0.6);
    glVertex2f(500,240);
    glVertex2f(600,215);
    glVertex2f(600,325);
    glEnd();
    glDisable(GL_BLEND);

}

void drawCloud() {
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
	glColor4f(1.000, 1.000, 1.000, 0.01);
	drawCircle(30, 400, 400);
	drawCircle(30, 430, 430);
	drawCircle(30, 470, 430);
	drawCircle(30, 500, 400);
	drawCircle(30, 450, 400);
	drawCircle(30, 430, 370);
	drawCircle(30, 470, 370);
	glDisable(GL_BLEND);
}

void drawSun() {
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glColor4f(1,1,0,0.03);
    drawCircle(40 ,300, 400);
    glDisable(GL_BLEND);
    }

void drawBranch() {
    glColor3ub(185,122,87);
    glBegin(GL_POLYGON);
    glVertex2f(200,0);
    glVertex2f(360,0);
    glVertex2f(330,20);
    glVertex2f(320,50);
    glVertex2f(320,190);
    glVertex2f(330,200);
    glVertex2f(310,250);
    glVertex2f(290,230);
    glVertex2f(280,210);
    glVertex2f(250,260);
    glVertex2f(270,220);
    glVertex2f(190,240);
    glVertex2f(210,230);
    glVertex2f(230,200);
    glVertex2f(250,190);
    glVertex2f(250,110);
    glVertex2f(240,90);
    glVertex2f(220,50);
    glVertex2f(200,0);
    glEnd();
}

void drawLeaf(){
    glColor3f(0.158,0.98,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(230,200);
    glVertex2f(140,130);
    glVertex2f(90,130);
    glVertex2f(50,140);
    glVertex2f(30,190);
    glVertex2f(50,260);
    glVertex2f(40,330);
    glVertex2f(40,430);
    glVertex2f(150,500);
    glVertex2f(240,500);
    glVertex2f(330,480);
    glVertex2f(380,410);
    glVertex2f(440,360);
    glVertex2f(510,250);
    glVertex2f(490,170);
    glVertex2f(430,110);
    glVertex2f(380,110);
    glVertex2f(270,270);
    glEnd();
}

void drawTree(){
    drawBranch();
    drawLeaf();
}



#endif // SC1ENVIRONMENT_H_INCLUDED

#ifndef DINO_H_INCLUDED
#define DINO_H_INCLUDED
#include <GL/glut.h>

GLfloat dino1Pos=-20,dino2Pos=240,dino3Pos=50,angle=30,i=0,dinoPosY=-40,dino3PosY=200,dino2PosY=-90,longdinoposX=150,longdinoposY=220,angle3=2,angle4=-2;;
GLfloat angle1 = 10;
GLfloat angle2 = -10;
GLfloat x,y;

void drawCircle(int r, int  xc, int yc) {
	int x = 0, y = r;
	int d;
	d = 1 - r;

	while (x < y)
	{
		glBegin(GL_POLYGON);
		glVertex2i(y + xc, x + yc);
		glVertex2i(x + xc, y + yc);
		glVertex2i(x + xc, -y + yc);
		glVertex2i(y + xc, -x + yc);
		glVertex2i(-y + xc, -x + yc);
		glVertex2i(-x + xc, -y + yc);
		glVertex2i(-x + xc, y + yc);
		glVertex2i(-y + xc, x + yc);
		glEnd();

		if (d < 0)
		{
			x = x + 1;
			d = d + 2 * x + 1;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d = d + ((2 * x) + 1) - (2 * y);
		}
	}//end while
}//end drawCircle

void drawEllipse(int rx, int ry, int xc, int yc) {
	float a = rx;
	float b = ry;
	float x = 0;
	float y = ry;
	float d2;
	float d1 = b - (a*a*ry) + (a*a*0.25);

	while (2 * b*b*x < 2 * a*a*y)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d1 < 0)
		{
			x = x + 1;
			d1 = d1 + (2 * b*b*x) + (b*b);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d1 = d1 + (2 * b*b*x) - (2 * a*a*y) + (b*b);
		}
	}//end while

	d2 = b*b*((x + 0.5)*(x + 0.5)) + (a*a*((y - 1)*(y - 1))) - (a*a*b*b);
	while (y > 0 || y < 0)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d2 > 0)
		{
			y = y - 1;
			d2 = d2 - (2 * a*a*y) + (a*a);
		}
		else
		{
			x = x + 1; y = y - 1;
			d2 = d2 + (2 * b*b*x) - (2 * a*a*y) + (a*a);
		}
	}
}

void drawDinoLeftArm() {
	glColor3f(0.666, 0.266, 0);
	drawEllipse(10, 10, 260, 250);
	glBegin(GL_POLYGON);
	glVertex2f(260, 250);
	glVertex2f(270, 250);
	glVertex2f(280, 240);
	glVertex2f(290, 240);
	glVertex2f(290, 230);
	glVertex2f(270, 230);
	glVertex2f(260, 240);
	glVertex2f(260, 250);
	glEnd();

	drawEllipse(10, 10, 290, 235);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(295, 230);
	glVertex2f(300, 225);
	glVertex2f(295, 220);
	glVertex2f(295, 225);
	glVertex2f(290, 225);
	glVertex2f(290, 230);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(300, 235);
	glVertex2f(305, 230);
	glVertex2f(300, 225);
	glVertex2f(300, 230);
	glVertex2f(295, 230);
	glVertex2f(295, 235);
	glEnd();
}

void drawDinoRightArm() {
	glColor3f(0.0, 0.0, 0);
	drawEllipse(10, 10, 270, 250);
	glBegin(GL_POLYGON);
	glVertex2f(270, 250);
	glVertex2f(280, 250);
	glVertex2f(290, 240);
	glVertex2f(300, 240);
	glVertex2f(300, 230);
	glVertex2f(280, 230);
	glVertex2f(270, 240);
	glVertex2f(270, 250);
	glEnd();

	drawEllipse(10, 10, 300, 235);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(305, 230);
	glVertex2f(310, 225);
	glVertex2f(305, 220);
	glVertex2f(305, 225);
	glVertex2f(300, 225);
	glVertex2f(300, 230);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(310, 235);
	glVertex2f(315, 230);
	glVertex2f(310, 225);
	glVertex2f(310, 230);
	glVertex2f(305, 230);
	glVertex2f(305, 235);
	glEnd();
}

void drawDinoHeadAndNeck() {

	glBegin(GL_POLYGON);
	glColor3f(0.666, 0.266, 0);
	glVertex2f(300, 350);
	glVertex2f(350, 340);
	glVertex2f(360, 330);
	glVertex2f(360, 320);
	glVertex2f(350, 320);
	glVertex2f(320, 310);
	glVertex2f(340, 310);
	glVertex2f(360, 310);
	glVertex2f(350, 300);
	glVertex2f(360, 310);
	glVertex2f(310, 290);
	glVertex2f(300, 300);
	glVertex2f(300, 290);
	glVertex2f(270, 245);
	glVertex2f(270, 300);
	glVertex2f(300, 350);
	glEnd();

	drawEllipse(10, 30, 270, 270);

	glColor3f(255.0, 255.0, 255.0);
	drawCircle(5, 310, 340);

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(310, 340);
	glEnd();
}

void drawDinoBody() {
	glBegin(GL_POLYGON);
	glColor3f(0.501, 0.2, 0);
	glVertex2f(270, 300);
	glVertex2f(270, 240);
	glVertex2f(250, 230);
	glVertex2f(160, 250);
	glVertex2f(180, 310);
	glVertex2f(260, 310);
	glVertex2f(270, 300);
	glEnd();
}

void drawDinoTail() {
	glBegin(GL_POLYGON);
	glColor3f(0.501, 0.2, 0);
	glVertex2f(30, 300);
	glVertex2f(150, 300);
	glVertex2f(180, 310);
	glVertex2f(160, 250);
	glVertex2f(150, 250);
	glVertex2f(150, 270);
	glVertex2f(30, 300);
	glEnd();
}

void drawDinoLegLeft() {
	glColor3f(0.666, 0.266, 0);


	drawEllipse(30, 30, 195, 250);
    glBegin(GL_POLYGON);
	//glColor3f(0.0, 0.0, 0);
	glVertex2f(225, 245);
	glVertex2f(200, 200);
	glVertex2f(170, 200);
	glVertex2f(190, 245);
	glVertex2f(180, 180);
	glVertex2f(170, 180);
	glVertex2f(170, 160);
	glVertex2f(170, 200);
	glEnd();

	drawEllipse(15, 10, 185, 165);

	//Feet Claws
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(200, 160);
	glVertex2f(195, 165);
	glVertex2f(190, 165);
	glVertex2f(190, 160);
	glVertex2f(200, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(205, 165);
	glVertex2f(200, 170);
	glVertex2f(195, 170);
	glVertex2f(195, 165);
	glVertex2f(205, 165);
	glEnd();
}

void drawDinoLegRight() {
	glColor3f(0.666, 0.366, 0.0);

	drawEllipse(30, 30, 205, 250);


	glBegin(GL_POLYGON);
	//glColor3f(0.0, 0.0, 0);
	//glVertex2f(235, 245);
	x = 245;
	y = 345;
	glVertex2f(265, 255);
	glVertex2f(230, 220);
	glVertex2f(180, 200);
	glVertex2f(200, 245);
	glVertex2f(190, 180);
	glVertex2f(180, 180);
	glVertex2f(180, 160);
	glVertex2f(180, 200);
	glVertex2f(265, 255);
	glEnd();

	drawEllipse(15, 10, 195, 165);

	//Feet Claws
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(210, 160);
	glVertex2f(205, 165);
	glVertex2f(200, 165);
	glVertex2f(200, 160);
	glVertex2f(210, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(215, 165);
	glVertex2f(210, 170);
	glVertex2f(200, 170);
	glVertex2f(200, 165);
	glVertex2f(210, 165);
	glEnd();
}

void drawDino()
{

	glPushMatrix();

	 glTranslatef(x,y ,0);
        glRotatef(angle1,0,0,1);
        glTranslatef(-x,-y , 0);

	drawDinoLegRight();
	glPopMatrix();
	drawDinoRightArm();
	drawDinoTail();
    drawDinoBody();
	drawDinoHeadAndNeck();
	glPushMatrix();
	 glTranslatef(x+10 ,y ,0);
        glRotatef(angle2,0,0,1);
        glTranslatef(-x +10,-y , 0);

	drawDinoLegLeft();
	glPopMatrix();
	drawDinoLeftArm();
}

void drawlongneckLegRight(){
    glColor3ub(34, 73, 0);
    glBegin(GL_POLYGON);
    glVertex2f(215,202);
    glVertex2f(244,36);
    glVertex2f(232,23);
    glVertex2f(241,18);
    glVertex2f(263,24);
    glVertex2f(282,186);
    glVertex2f(215,202);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(345,174);
    glVertex2f(396,40);
    glVertex2f(388,24);
    glVertex2f(413,25);
    glVertex2f(417,40);
    glVertex2f(407,90);
    glVertex2f(419,120);
    glVertex2f(422,128);
    glVertex2f(345,174);
    glEnd();
}

void drawlongneckLegLeft(){
    glBegin(GL_POLYGON);
    glVertex2f(227,183);
    glVertex2f(192,42);
    glVertex2f(182,29);
    glVertex2f(210,23);
    glVertex2f(256,115);
     glVertex2f(227,183);
     glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(345,107);
    glVertex2f(364,44);
    glVertex2f(355,22);
    glVertex2f(382,31);
    glVertex2f(387,107);
    glEnd();

}

void drawlongneckdinobody()
{
    glColor3ub(34, 73, 0);
    //tail
    glBegin(GL_POLYGON);
    glVertex2f(600,22);
    glVertex2f(541,55);
    glVertex2f(457,157);
    glVertex2f(445,102);
    glEnd();

     glPushMatrix();
	glTranslatef(215 ,202 ,0);
     glRotatef(angle4,0,0,1);
     glTranslatef(-215 ,-202 , 0);
     drawlongneckLegLeft();
     glPopMatrix();

    //body
    glBegin(GL_POLYGON);
    glVertex2f(457,157);
    glVertex2f(360,226);
    glVertex2f(239,267);
    glVertex2f(193,215);
    glVertex2f(213,143);
    glVertex2f(245,113);
    glVertex2f(296,105);
     glVertex2f(445,102);
     glEnd();

      glPushMatrix();
     glTranslatef(215 ,202 ,0);
     glRotatef(angle3,0,0,1);
     glTranslatef(-215 ,-202 , 0);
     drawlongneckLegRight();
     glPopMatrix();

     glColor3ub(34, 73, 0);
        //neck
     glBegin(GL_POLYGON);
     glVertex2f(239,267);
     glVertex2f(202,297);
     glVertex2f(148,449);
     glVertex2f(117,440);
     glVertex2f(159,271);
     glVertex2f(193,215);
     glVertex2f(239,267);
     glEnd();

     //head
     glBegin(GL_POLYGON);
     glVertex2f(148,449);
     glVertex2f(92,490);
     glVertex2f(62,472);
     glVertex2f(73,452);
     glVertex2f(117,440);
     glVertex2f(148,449);
     glEnd();

     //eyes
     glColor3ub(255,255,255);
     glPointSize(3);
     glBegin(GL_POINTS);
     glVertex2f(90,475);
     glEnd();

     glColor3ub(0,0,0);
     glPointSize(1);
     glBegin(GL_POINTS);
     glVertex2f(90,475);
     glEnd();

}

#endif // DINO_H_INCLUDED

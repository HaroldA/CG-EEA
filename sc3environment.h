#ifndef SC3ENVIRONMENT_H_INCLUDED
#define SC3ENVIRONMENT_H_INCLUDED

GLfloat a=0,b=0,c,d,e,f,angle_human_leg3=20,angle_human_leg4=-20,angle_human_hand3=20,angle_human_hand4=-20,man3PosX=0,stickPosX=0;

void drawskyS3()
{
    glBegin(GL_POLYGON);
    glColor4f(0.5607843137,0.5490196078,0.7803921569,1);
    glVertex2f(0,500);
    glVertex2f(600,500);
    glColor4f(0.9903921569,0.8492156863,0.6570588,1);
    glVertex2f(600,250);
    glVertex2f(0,250);
    glEnd();
}

void drawgroundS3()
{
    glBegin(GL_POLYGON);
    glColor4f(0.62745098,0.3215686,0.17647058,0.5);
    glVertex2f(0,250);
    glVertex2f(600,250);
    glColor4f(0.62745098,0.3215686,0.17647058,1);
    glVertex2f(600,0);
    glVertex2f(0,0);
    glEnd();
}

void drawstones()
{
    glBegin(GL_POLYGON);
    glColor4f(0.7215686,0.69019607,0.60784313,1);
    glVertex2f(20,250);
    glVertex2f(25,275);
    glVertex2f(27.5,262.5);
    glVertex2f(25,275);
    glVertex2f(17.5,280);
    glVertex2f(20,287.5);
    glVertex2f(37.5,289.5);
    glVertex2f(50,287.5);
    glVertex2f(47.5,267.5);
    glVertex2f(50,260);
    glVertex2f(50,250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor4f(1,1,1,0.4);
    glVertex2f(42.5,250);
    glVertex2f(37.5,260);
    glVertex2f(40.5,270);
    glVertex2f(32.5,270);
    glVertex2f(32.5,255);
    glVertex2f(30,250);
    glEnd();
    glBegin(GL_POLYGON);  // stone 2
    glColor4f(0.7215686,0.69019607,0.60784313,1);
    glVertex2f(87.5,250);
    glVertex2f(87.5,262.5);
    glVertex2f(85,267.5);
    glVertex2f(87.5,275);
    glVertex2f(85,285);
    glVertex2f(87.5,300);
    glVertex2f(87.5,325);
    glVertex2f(75,325);
    glVertex2f(85,337.5);
    glVertex2f(87.5,337.5);
    glVertex2f(107.5,337.5);
    glVertex2f(125,342.5);
    glVertex2f(155,330);
    glVertex2f(157.5,325);
    glVertex2f(155,322.5);
    glVertex2f(150,322.5);
    glVertex2f(145,312.5);
    glVertex2f(150,297.5);
    glVertex2f(150,275);
    glVertex2f(150,250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor4f(1,1,1,0.5);
    glVertex2f(137.5,250);
    glVertex2f(139.5,275);
    glVertex2f(140,287.5);
    glVertex2f(135,312.5);
    glVertex2f(137.5,325);
    glVertex2f(100,325);
    glVertex2f(100,300);
    glVertex2f(102.5,295);
    glVertex2f(102.5,277.5);
    glVertex2f(107.5,267.5);
    glVertex2f(107.5,262.5);
    glVertex2f(107.5,250);
    glVertex2f(97.5,250);
    glEnd();
}

void Mountains1()
{
    glBegin(GL_TRIANGLES);
    glColor4f(0.1,0.1,0.1,1);
    glVertex2f(0,250);
    glVertex2f(225,250);
    glColor4f(0.5,0.5,0.5,1);
    glVertex2f(112.5,387.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(0.4,0.4,0.4,1);
    glVertex2f(300,250);
    glColor4f(0.4,0.4,0.4,1);
    glVertex2f(450,370);
    glColor4f(0.4,0.4,0.4,1);
    glVertex2f(600,250);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(0.4,0.4,0.4,1);
    glVertex2f(200,250);
    glVertex2f(350,250);
    glColor4f(0.2,0.2,0.2,1);
    glVertex2f(275,300);
    glEnd();
}

void drawcave()
{
   glBegin(GL_POLYGON);
   glColor4f(0.4117647059,0.4117647059,0.4117647059,1);
   glVertex2f(287,63);
   glVertex2f(295,98);
   glVertex2f(319,144);
   glVertex2f(314,152);
   glVertex2f(344,153);
   glVertex2f(379,166);
   glVertex2f(463,152);
   glVertex2f(501,121);
   glVertex2f(505,63);
   glEnd();
   glBegin(GL_POLYGON);
   glColor4f(0,0,0,0.75);
   glVertex2f(453,63);
   glVertex2f(432,86);
   glVertex2f(427,118);
   glVertex2f(414,122);
   glVertex2f(396,118);
   glVertex2f(372,121);
   glVertex2f(353,109);
   glVertex2f(341,79);
   glVertex2f(340,63);
   glEnd();
}

void diagram()
{
   glBegin(GL_POLYGON);
   glColor3ub(219,219,219);
   glVertex2f(490,110);
   glVertex2f(491,113);
   glVertex2f(491,116);
   glVertex2f(492,113);
   glVertex2f(491,110);
   glVertex2f(494,110);
   glVertex2f(495,107);
   glVertex2f(490,107);
   glVertex2f(491,106);
   glVertex2f(488,106);
   glVertex2f(488,98);
   glVertex2f(490,96);
   glVertex2f(493,94);
   glVertex2f(494,93);
   glVertex2f(493,93);
   glVertex2f(490,95);
   glVertex2f(488,95);
   glVertex2f(486,93);
   glVertex2f(480,92);
   glVertex2f(474,90);
   glVertex2f(475,84);
   glVertex2f(476,88);
   glVertex2f(471,91);
   glVertex2f(468,91);
   glVertex2f(468,86);
   glVertex2f(464,86);
   glVertex2f(464,85);
   glVertex2f(464,87);
   glVertex2f(466,87);
   glVertex2f(466,91);
   glVertex2f(463,97);
   glVertex2f(462,97);
   glVertex2f(462,94);
   glVertex2f(459,94);
   glVertex2f(459,91);
   glVertex2f(461,94);
   glVertex2f(461,98);
   glVertex2f(462,98);
   glVertex2f(465,101);
   glVertex2f(479,101);
   glVertex2f(483,105);
   glVertex2f(484,109);
   glVertex2f(483,110);
   glVertex2f(483,114);
   glVertex2f(483,111);
   glVertex2f(485,110);
   glVertex2f(488,110);
   glVertex2f(490,110);
   glEnd();
}

void drawlog()
{
   glBegin(GL_POLYGON);
   glColor3ub(229,112,16);
   glVertex2f(411,51);
   glVertex2f(406,50);
   glVertex2f(403,48);
   glVertex2f(404,46);
   glVertex2f(404,45);
   glVertex2f(391,50);
   glVertex2f(378,46);
   glVertex2f(378,50);
   glVertex2f(375,52);
   glVertex2f(371,53);
   glVertex2f(401,60);
   glVertex2f(405,59);
   glVertex2f(406,56);
   glVertex2f(406,54);
   glVertex2f(401,53);
   glVertex2f(397,46);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(156,73,3);
   glVertex2f(385,56);
   glVertex2f(379,57);
   glVertex2f(377,57);
   glVertex2f(375,55);
   glVertex2f(378,54);
   glVertex2f(391,50);
   glVertex2f(404,45);
   glVertex2f(404,48);
   glVertex2f(407,51);
   glVertex2f(410,52);
   glVertex2f(402,53);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(239,184,83);
   glVertex2f(378,46);
   glVertex2f(374,45);
   glVertex2f(371,45);
   glVertex2f(367,48);
   glVertex2f(367,51);
   glVertex2f(370,53);
   glVertex2f(374,53);
   glVertex2f(378,50);
   glVertex2f(378,46);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(240,213,136);
   glVertex2f(404,45);
   glVertex2f(411,45);
   glVertex2f(414,47);
   glVertex2f(415,50);
   glVertex2f(411,52);
   glVertex2f(405,51);
   glVertex2f(404,49);
   glVertex2f(404,45);
   glEnd();
}

void drawfire()
{
    glBegin(GL_POLYGON);
    glColor3ub(248,159,31);
    glVertex2f(390,60);
    glVertex2f(395,60);
    glVertex2f(399,61);
    glVertex2f(406,68);
    glVertex2f(406,77);
    glVertex2f(405,78);
    glVertex2f(404,79);
    glVertex2f(402,77);
    glVertex2f(399,76);
    glVertex2f(399,72);
    glVertex2f(399,77);
    glVertex2f(402,80);
    glVertex2f(402,82);
    glVertex2f(398,88);
    glVertex2f(396,88);
    glVertex2f(397,85);
    glVertex2f(396,80);
    glVertex2f(395,80);
    glVertex2f(394,82);
    glVertex2f(393,83);
    glVertex2f(393,87);
    glVertex2f(394,88);
    glVertex2f(394,92);
    glVertex2f(389,97);
    glVertex2f(389,91);
    glVertex2f(386,88);
    glVertex2f(386,82);
    glVertex2f(383,87);
    glVertex2f(380,89);
    glVertex2f(381,82);
    glVertex2f(379,80);
    glVertex2f(380,73);
    glVertex2f(378,76);
    glVertex2f(376,81);
    glVertex2f(374,76);
    glVertex2f(372,75);
    glVertex2f(372,69);
    glVertex2f(380,62);
    glVertex2f(385,60);
    glVertex2f(390,60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(252,212,19);
    glVertex2f(390,63);
    glVertex2f(394,64);
    glVertex2f(397,69);
    glVertex2f(393,69);
    glVertex2f(392,74);
    glVertex2f(390,77);
    glVertex2f(387,73);
    glVertex2f(386,69);
    glVertex2f(383,69);
    glVertex2f(385,65);
    glVertex2f(390,63);
    glEnd();
}


//incl here

//1st caveman here

void drawface()
{ glBegin(GL_POLYGON);
  glColor4f(0.5450980,0.4666667,0.3960784,1);
  glVertex2f(357,429);
  glVertex2f(360,434);
  glVertex2f(370,432);
  glVertex2f(375,435);
  glVertex2f(376,431);
  glVertex2f(391,432);
  glVertex2f(394,429);
  glVertex2f(394,416);
  glVertex2f(391,401);
  glVertex2f(380,393);
  glVertex2f(372,391);
  glVertex2f(362,395);
  glVertex2f(356,400);
  glVertex2f(355,408);
  glVertex2f(357,423);
  glVertex2f(362,428);
  glEnd();
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(373,427);
  glVertex2f(380,424);
  glVertex2f(386,418);
  glVertex2f(389,414);
  glVertex2f(384,409);
  glVertex2f(362,410);
  glVertex2f(359,413);
  glVertex2f(366,423);
  glVertex2f(368,421);
  glVertex2f(373,427);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glColor4f(0,0,0,1);
  glLineWidth(1);
//glPointsize(0.5);
  glVertex2f(363,417);
  glVertex2f(384,417);
  glEnd();
  glPointSize(3);
  glBegin(GL_POINTS);
  //glPointSize(10);
  glColor3f(0,0,0);
  glVertex2f(368,416);
  glEnd();
  glPointSize(3);
  glBegin(GL_POINTS);
  glColor3f(0,0,0);
  glVertex2f(378,416);
  glEnd();
}

void drawBody() // first caveman
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  //lVertex2f(392,404);
  glVertex2f(399,401);
  glVertex2f(401,389);
  glVertex2f(405,379);
  glVertex2f(411,374);
  glVertex2f(414,369);
  glVertex2f(414,366);
  glVertex2f(413,366);
  glVertex2f(411,369);
  glVertex2f(411,363);
  glVertex2f(410,362);
  glVertex2f(409,364);
  glVertex2f(407,368);
  glVertex2f(407,363);
  glVertex2f(403,363);
  glVertex2f(404,365);
  glVertex2f(403,368);
  glVertex2f(402,364);
  glVertex2f(401,363);
  glVertex2f(399,360);
  glVertex2f(400,372);
  glVertex2f(399,377);
  glVertex2f(395,388);
  glVertex2f(392,392);
  glVertex2f(390,383);
  glVertex2f(395,366);
  glVertex2f(392,361);
  glVertex2f(389,366);
  glVertex2f(385,361);
  glVertex2f(384,366);
  glVertex2f(382,359);
  glVertex2f(365,366);
  glVertex2f(378,366);
  glVertex2f(376,361);
  glVertex2f(373,365);
  glVertex2f(371,361);
  glVertex2f(367,367);
  glVertex2f(366,360);
  glVertex2f(361,365);
  glVertex2f(360,361);
  glVertex2f(353,362);
  glVertex2f(350,369);
  glVertex2f(355,384);
  glVertex2f(353,392);
  glVertex2f(346,378);
  glVertex2f(347,368);
  glVertex2f(338,367);
  glVertex2f(335,373);
  glVertex2f(332,370);
  glVertex2f(334,375);
  glVertex2f(339,379);
  glVertex2f(345,393);
  glVertex2f(346,402);
  glVertex2f(347,403);
  glVertex2f(351,404);
  glVertex2f(355,404);

  glEnd();
}

void drawcloth()
{
   glBegin(GL_POLYGON);
   glColor4f(0.168627451,0.1137254902,0.0549019608,0.9);
   glVertex2f(355,384);
   glVertex2f(362,383);
   glVertex2f(369,385);
   glVertex2f(368,384);
   glVertex2f(372,385);
   glVertex2f(376,389);
   glVertex2f(377,391);
   glVertex2f(382,393);
   glVertex2f(389,396);
   glVertex2f(388,388);
   glVertex2f(390,384);
   glVertex2f(392,374);
   glVertex2f(394,365);
   glVertex2f(392,361);
   glVertex2f(389,366);
  glVertex2f(385,361);
  glVertex2f(384,366);
  glVertex2f(382,359);
  glVertex2f(365,366);
  glVertex2f(378,366);
  glVertex2f(376,361);
  glVertex2f(373,365);
  glVertex2f(371,361);
  glVertex2f(367,367);
  glVertex2f(366,360);
  glVertex2f(361,365);
  glVertex2f(360,361);
  glVertex2f(353,362);
  glVertex2f(350,369);
  glVertex2f(355,384);
  glEnd();
}

  void drawlega()
  {glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(368,362);
  glVertex2f(368,347);
  glVertex2f(351,348);
  glVertex2f(360,353);
  glVertex2f(360,362);
  glEnd();
}

  void drawlegb()
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(376,363);
  glVertex2f(376,348);
  glVertex2f(393,347);
  glVertex2f(383,353);
  glVertex2f(385,361);
  glEnd();
}

void drawclub()
  {
      glBegin(GL_POLYGON);
      glColor4f(1,0.5490196078,0,0.9);
      glVertex2f(333,372);
      glVertex2f(319,370);
      glVertex2f(306,368);
      glVertex2f(295,365);
      glVertex2f(287,362);
      glVertex2f(285,359);
      glVertex2f(285,352);
      glVertex2f(289,347);
      glVertex2f(295,345);
      glVertex2f(298,345);
      glVertex2f(306,347);
      glVertex2f(314,352);
      glVertex2f(321,356);
      glVertex2f(328,361);
      glVertex2f(338,369);
      glEnd();
}

void drawman() // first caveman
{
    drawBody();
    drawface();
    drawcloth();
    drawlega();
    drawlegb();
    drawclub();
}

// second caveman

void drawBody2()
{
  glBegin(GL_POLYGON);
  glColor4f(0.168627451,0.1137254902,0.0549019608,0.9);
  glVertex2f(528,90);
  glVertex2f(521,89);
  glVertex2f(516,90);
  glVertex2f(511,93);
  glVertex2f(510,96);
  glVertex2f(511,110);
  glVertex2f(511,104);
  glVertex2f(515,109);
  glVertex2f(510,110);
  glVertex2f(511,111);
  glVertex2f(514,115);
  glVertex2f(510,112);
  glVertex2f(514,115);
  glVertex2f(518,113);
  glVertex2f(524,114);
  glVertex2f(524,111);
  glVertex2f(531,113);
  glVertex2f(535,113);
  glVertex2f(538,111);
  glVertex2f(540,107);
  glVertex2f(539,102);
  glVertex2f(537,90);
  glVertex2f(534,91);
  glVertex2f(527,89);
  glEnd();

  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(528,87);
  glVertex2f(535,87);
  glVertex2f(536,82);
  glVertex2f(532,77);
  glVertex2f(538,67);
  glVertex2f(538,55);
  glVertex2f(535,67);
  glVertex2f(534,54);
  glVertex2f(530,62);
  glVertex2f(526,56);
  glVertex2f(520,60);
  glVertex2f(515,55);
  glVertex2f(513,61);
  glVertex2f(510,56);
  glVertex2f(510,66);
  glVertex2f(512,70);
  glVertex2f(516,75);
  glVertex2f(515,79);
  glVertex2f(506,67);
  glVertex2f(506,65);
  glVertex2f(503,59);
  glVertex2f(502,63);
  glVertex2f(500,60);
  glVertex2f(498,63);
  glVertex2f(495,61);
  glVertex2f(497,65);
  glVertex2f(494,64);
  glVertex2f(498,69);
  glVertex2f(502,69);
  glVertex2f(511,85);
  glVertex2f(513,86);
  glVertex2f(519,87);
  glVertex2f(521,89);
  glEnd();


 /* glLineWidth(5);
    glBegin(GL_LINES);
    glColor4f(0,0,0,1);
    glVertex2f(503,91);
    glVertex2f(492,99);
    glEnd();
    glFlush();*/
}

void drawhand()
{
    glBegin(GL_POLYGON);
    glColor4f(1,0.8941176,0.768627451,1);
    glVertex2f(510,83);
    glVertex2f(507,86);
    glVertex2f(501,87);
    glVertex2f(500,87);
    glVertex2f(500,93);
    glEnd();

     glBegin(GL_POLYGON);
    glColor4f(1,0.8941176,0.768627451,1);
    glVertex2f(501,93);
    glVertex2f(502,89);
    glVertex2f(505,89);
    glVertex2f(504,93);
    glVertex2f(501,95);
    glVertex2f(508,94);
    glVertex2f(509,88);
    glVertex2f(513,85);
    glEnd();
}

void stick()
{
     glLineWidth(4);
     glBegin(GL_LINE_LOOP);
     glColor4f(1,1,1,1);
     glVertex2f(503,92);
     glVertex2f(493,100);
     glVertex2f(503,92);
     glEnd();
     glLineWidth(2);
}


void leg2a()
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(534,56);
  glVertex2f(533,48);
  glVertex2f(532,45);
  glVertex2f(521,46);
  glVertex2f(528,49);
  glVertex2f(527,59);
  glVertex2f(533,62);
  glEnd();
}

void leg2b()
{
    glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(515,58);
  glVertex2f(509,46);
  glVertex2f(499,46);
  glVertex2f(505,49);
  glVertex2f(510,60);
  glEnd();
}


void drawcloth1()
{
    glBegin(GL_POLYGON);
    glColor4f(0.54509803,0.270588235,0.07450980,0.9);
    glVertex2f(529,86);
    glVertex2f(531,86);
    glVertex2f(531,84);
    glVertex2f(530,82);
    glVertex2f(533,81);
    glVertex2f(535,81);
    glVertex2f(532,76);
    glVertex2f(532,77);
    glVertex2f(532,77);
    glVertex2f(538,67);
    glVertex2f(538,55);
    glVertex2f(535,67);
    glVertex2f(534,54);
    glVertex2f(530,62);
    glVertex2f(526,56);
    glVertex2f(520,60);
    glVertex2f(515,55);
    glVertex2f(513,61);
    glVertex2f(510,56);
    glVertex2f(510,66);
    glVertex2f(512,70);
    glVertex2f(516,75);
    glVertex2f(514,80);
    glVertex2f(516,83);
    glVertex2f(516,86);
    glVertex2f(517,86);
    glVertex2f(520,84);
    glVertex2f(524,82);
    glVertex2f(529,83);
    glVertex2f(529,86);
    glEnd();
}


void drawman2()
{
    glPushMatrix();
    glTranslatef(c,d,0);
    drawBody2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c,d,0);
    drawhand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c,d,0);
    leg2a();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c,d,0);
    leg2b();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c,d,0);
    drawcloth1();
    glPopMatrix();

    glPushMatrix();
    stick();
    glPopMatrix();
}

// for human 3
// draw third person

void leg3()
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(487,209);
  glVertex2f(487,193);
  glVertex2f(475,193);
  glVertex2f(482,197);
  glVertex2f(482,211);
  glEnd();
}

void leg4()
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(502,211);
  glVertex2f(503,197);
  glVertex2f(499,194);
  glVertex2f(508,194);
  glVertex2f(507,213);
  glEnd();
}
void drawbody3()
{
  glBegin(GL_POLYGON);
  glColor3ub(140,58,0);
  glVertex2f(479,254);
  glVertex2f(476,255);
  glVertex2f(479,259);
  glVertex2f(481,259);
  glVertex2f(483,258);
  glVertex2f(488,261);
  glVertex2f(499,260);
  glVertex2f(506,254);
  glVertex2f(510,247);
  glVertex2f(512,240);
  glVertex2f(507,240);
  glVertex2f(506,236);
  glVertex2f(502,232);
  glVertex2f(498,229);
  glVertex2f(487,229);
  glVertex2f(479,236);
  glVertex2f(478,249);
  glVertex2f(478,250);
  glVertex2f(479,254);
  glEnd();
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(482,251);
  glVertex2f(485,250);
  glVertex2f(485,253);
  glVertex2f(489,255);
  glVertex2f(494,254);
  glVertex2f(498,250);
  glVertex2f(498,243);
  glVertex2f(491,242);
  glVertex2f(490,241);
  glVertex2f(487,240);
  glVertex2f(482,240);
  glVertex2f(480,242);
  glVertex2f(480,249);
  glVertex2f(482,251);
  glEnd();

 glBegin(GL_POLYGON);
 glColor4f(1,0.8941176,0.768627451,1);
 glVertex2f(507,239);
 glVertex2f(508,209);
 glVertex2f(483,208);
 glVertex2f(482,233);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(92,27,5);
 glVertex2f(508,239);
 glVertex2f(508,220);
 glVertex2f(511,215);
 glVertex2f(511,205);
 glVertex2f(504,207);
 glVertex2f(496,204);
 glVertex2f(488,206);
 glVertex2f(480,203);
 glVertex2f(481,216);
 glVertex2f(486,220);
 glVertex2f(495,222);
 glVertex2f(501,231);
 glVertex2f(508,239);
 glEnd();
}


void hand3()
{
   glBegin(GL_POLYGON);
   glColor4f(1,0.8941176,0.768627451,1);
   glVertex2f(508,234);
   glVertex2f(522,221);
   glVertex2f(523,217);
   glVertex2f(526,214);
   glVertex2f(525,219);
   glVertex2f(535,215);
   glVertex2f(531,219);
   glVertex2f(538,218);
   glVertex2f(533,221);
   glVertex2f(540,220);
   glVertex2f(532,228);
   glVertex2f(531,226);
   glVertex2f(528,227);
   glVertex2f(511,239);
   glEnd();
}

void hand4()
{
  glBegin(GL_POLYGON);
  glColor4f(1,0.8941176,0.768627451,1);
  glVertex2f(483,229);
  glVertex2f(465,231);
  glVertex2f(458,240);
  glVertex2f(455,251);
  glVertex2f(456,245);
  glVertex2f(458,246);
  glVertex2f(459,247);
  glVertex2f(457,249);
  glVertex2f(463,246);
  glVertex2f(463,241);
  glVertex2f(470,236);
  glVertex2f(479,236);
  glEnd();
}

void hammer()
{
    glBegin(GL_POLYGON);
    glColor3ub(159,95,8);
    glVertex2f(461,257);
    glVertex2f(448,239);
    glVertex2f(450,237);
    glVertex2f(452,237);
    glVertex2f(465,256);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(168,173,167);
    glVertex2f(471,257);
    glVertex2f(471,259);
    glVertex2f(454,274);
    glVertex2f(449,272);
    glVertex2f(445,269);
    glVertex2f(443,265);
    glVertex2f(445,260);
    glVertex2f(461,257);
    glVertex2f(471,257);
    glEnd();
}


void draweyes()
{
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor4f(0,0,0,1);
    glVertex2f(496,249);
    glVertex2f(481,246);
    glEnd();

    glPointSize(2);
    glBegin(GL_POINTS);
    glColor4f(0,0,0,1);
    glVertex2f(486,245);
    glVertex2f(491,246);
    glEnd();
}

void drawman3()
{
       glPushMatrix();
       glTranslatef(485,210,0);
       glRotatef(angle_human_leg3,0,0,1);
       glTranslatef(-485,-210,0);
       //glTranslatef(e,f,0);
       leg3();
       glPopMatrix();

       glPushMatrix();
        glTranslatef(504,212,0);
       glRotatef(angle_human_leg4,0,0,1);
       glTranslatef(-504,-212,0);
       //glTranslatef(e,f,0);
       leg4();
       glPopMatrix();


       glPushMatrix();
       glTranslatef(e,f,0);
       drawbody3();
       glPopMatrix();

       glPushMatrix();
        glTranslatef(508,234,0);
       glRotatef(angle_human_hand3,0,0,1);
       glTranslatef(-508,-234,0);
       glTranslatef(e,f,0);
       hand3();
       glPopMatrix();

       glPushMatrix();
        glTranslatef(483,229,0);
       glRotatef(angle_human_hand4,0,0,1);
       glTranslatef(-483,-229,0);
       //glTranslatef(e,f,0);
       hand4();
       hammer();
       glPopMatrix();



        draweyes();
}

void treestone()
{ glBegin(GL_POLYGON);
  glColor3ub(91,71,2);
  glVertex2f(175,54);
  glVertex2f(209,54);
  glVertex2f(189,79);
  glVertex2f(189,93);
  glVertex2f(215,115);
  glVertex2f(213,123);
  glVertex2f(178,112);
  glEnd();
  glBegin(GL_POLYGON);
// glVertex2f(175,54);
  glColor3ub(91,71,2);
  //glVertex2f(175,54);
  glVertex2f(181,112);
  glVertex2f(201,129);
  glVertex2f(199,134);
  glVertex2f(179,120);
  glVertex2f(179,131);
  glVertex2f(171,135);
  glVertex2f(170,105);
  glVertex2f(167,104);
  glVertex2f(158,111);
  glVertex2f(154,135);
  glVertex2f(147,131);
  glVertex2f(148,113);
  glVertex2f(127,118);
  glVertex2f(121,111);
  glVertex2f(162,96);
  glVertex2f(163,70);
  glVertex2f(143,55);
  glVertex2f(175,55);
  glVertex2f(148,110);
  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(133,175,51);
  glVertex2f(184,111);
  glVertex2f(186,108);
  glVertex2f(189,107);
  glVertex2f(200,109);
  glVertex2f(211,111);
  glVertex2f(225,107);
  glVertex2f(237,107);
  glVertex2f(245,113);
  glVertex2f(244,122);
  glVertex2f(258,121);
  glVertex2f(270,136);
  glVertex2f(271,146);
  glVertex2f(201,158);
  glVertex2f(266,162);
  glVertex2f(201,158);
  glVertex2f(266,162);
  glVertex2f(267,173);
  glVertex2f(255,184);
  glVertex2f(252,185);
  glVertex2f(251,195);
  glVertex2f(233,208);
  glVertex2f(221,210);
  glVertex2f(220,221);
  glVertex2f(220,221);
  glVertex2f(210,229);
  glVertex2f(197,227);
  glVertex2f(185,234);
  glVertex2f(169,232);
  glVertex2f(160,224);
  glVertex2f(158,221);
  glVertex2f(143,226);
  glVertex2f(129,219);
  glVertex2f(128,214);
  glVertex2f(113,219);
  glVertex2f(95,207);
  glVertex2f(93,196);
  glVertex2f(95,191);
  glVertex2f(83,184);
  glVertex2f(79,178);
  glVertex2f(82,167);
  glVertex2f(86,163);
  glVertex2f(75,155);
  glVertex2f(72,143);
  glVertex2f(83,129);
  glVertex2f(88,128);
  glVertex2f(96,127);
  glVertex2f(97,118);
  glVertex2f(109,108);
  glVertex2f(126,109);
  glVertex2f(127,118);
  glEnd();
}

#endif // SC3ENVIRONMENT_H_INCLUDED

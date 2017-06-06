#ifndef SC4ENVIRONMENT_H_INCLUDED
#define SC4ENVIRONMENT_H_INCLUDED
#include "dino.h"
#include <time.h>

void delay(float secs)
{
	float end = clock()/CLOCKS_PER_SEC + secs;
	while((clock()/CLOCKS_PER_SEC) < end);
}

GLfloat redCar1Pos = 500,blueCar1Pos=-200,pinkCar1Pos=-300,dblueCar1Pos=300,windmill_blades_angle =0,colorR=254,colorG=68,colorB=52,heliPosX=250,heli_angle=40,heliPosY=80,dronePosX=-350,dronePosY=150;
GLint flag_carcol=0,IF_HELI_LANDED=0;

void buildinghelipad(){
    glColor3ub(254,209,43);
    glRectf(405,80,365,270);

    glColor3ub(219,105,38);
    glRectf(395,270,375,275);

    glColor3ub(219,105,38);
    glRectf(405,275,365,280);

    glColor3ub(85,51,100);
    glRectf(378,120,373,265);

    glPushMatrix();
    glColor3ub(85,51,100);
    glTranslatef(10,0,0);
    glRectf(378,120,373,265);
    glTranslatef(10,0,0);
    glRectf(378,120,373,265);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,245,130);
    glTranslatef(0,-170,0);
    glRectf(405,275,365,285);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(73,104,106);
    glTranslatef(0,-160,0);
    glRectf(395,270,375,275);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,238,176);
    glTranslatef(0,-190,0);
    glRectf(395,270,375,295);
    glPopMatrix();
}

void pavement(){
    glColor3ub(68,17,102);
    glRectf(10,78,590,90);

    glPushMatrix();
    glTranslatef(-3,8,0);
    glBegin(GL_POLYGON);
    glVertex2f(14,82);
    glVertex2f(12,81);
    glVertex2f(10,79);
    glVertex2f(10,76);
    glVertex2f(11,72);
    glVertex2f(16,73);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(13,8,0);
    glBegin(GL_POLYGON);
    glVertex2f(577,71);
    glVertex2f(580,73);
    glVertex2f(580,80);
    glVertex2f(577,83);
    glEnd();
    glPopMatrix();

}

void road(){
    glColor3ub(48,126,146);
    glRectf(0,0,600,85);

    glColor3ub(34,102,119);
    glBegin(GL_POLYGON);
    glVertex2f(0,56);
    glVertex2f(81,56);
    glVertex2f(86,59);
    glVertex2f(86,64);
    glVertex2f(81,68);
    glVertex2f(0,68);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(600,47);
    glVertex2f(518,46);
    glVertex2f(515,50);
    glVertex2f(515,54);
    glVertex2f(518,58);
    glVertex2f(600,58);
    glEnd();
}

void sky_city(){
    glColor3ub(132,217,243);
    glRectf(0,85,600,500);
}

void green_building(){
    glColor3ub(85,153,85);
    glRectf(37,80,85,292);

    glColor3ub(255,255,255);
    glRectf(41,98,80,103);

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,28,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,55,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,80,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,109,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,140,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef(0,171,0);
    glRectf(41,98,80,103);
    glPopMatrix();

    glColor3ub(254,209,43);
    glRectf(68,125,75,132);

    glPushMatrix();
    glColor3ub(254,209,43);
    glTranslatef(-5,112,0);
    glRectf(68,125,75,132);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(254,209,43);
    glTranslatef(0,52,0);
    glRectf(68,125,75,132);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(254,85,102);
    glTranslatef(-18,52,0);
    glRectf(68,125,75,132);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(254,85,102);
    glTranslatef(-17,143,0);
    glRectf(68,125,75,132);
    glPopMatrix();

    glColor3ub(85,153,85);
    glRectf(41,292,80,300);

    glColor3ub(85,153,85);
    glRectf(48,300,73,309);

    glPushMatrix();
    glLineWidth(2);
    glColor3ub(85,153,85);
    glBegin(GL_LINES);
    glVertex2f(59,309);
    glVertex2f(59,347);
    glEnd();
    glPopMatrix();

}

void red_building(){
    glColor3ub(204,51,17);
    glRectf(109,80,158,340);

    glColor3ub(207,120,104);
    glRectf(111,80,136,105);

    glColor3ub(221,221,221);
    glRectf(117,222,123,238);

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(14,0,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(27,0,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(0,32,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(14,32,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(14,32,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(27,32,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(0,66,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(14,66,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(221,221,221);
    glTranslatef(27,66,0);
    glRectf(117,222,123,238);
    glPopMatrix();

    glColor3ub(43,41,41);
    glRectf(111,109,136,111);

    glColor3ub(255,255,255);
    glRectf(117,106,125,117);

    glColor3ub(0,187,153);
    glRectf(114,340,153,348);

    glColor3ub(204,51,17);
    glBegin(GL_POLYGON);
    glVertex2f(120,348);
    glVertex2f(123,352);
    glVertex2f(130,356);
    glVertex2f(137,356);
    glVertex2f(141,354);
    glVertex2f(146,351);
    glVertex2f(148,348);
    glVertex2f(120,348);
    glEnd();
}

void yellowbuilding(){

    glColor3ub(254,220,104);
    glRectf(157,80,219,185);
    glRectf(163,185,212,291);

    glBegin(GL_POLYGON);
    glVertex2f(173,291);
    glVertex2f(174,334);
    glVertex2f(178,339);
    glVertex2f(180,343);
    glVertex2f(183,344);
    glVertex2f(186,345);
    glVertex2f(190,345);
    glVertex2f(195,343);
    glVertex2f(198,340);
    glVertex2f(201,337);
    glVertex2f(202,333);
    glVertex2f(203,329);
    glVertex2f(203,291);
    glVertex2f(173,291);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(177,338);
    glVertex2f(177,356);
    glVertex2f(178,358);
    glVertex2f(180,360);
    glVertex2f(181,362);
    glVertex2f(183,363);
    glVertex2f(194,363);
    glVertex2f(197,360);
    glVertex2f(198,357);
    glVertex2f(199,355);
    glVertex2f(199,138);
    glVertex2f(177,338);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(182,361);
    glVertex2f(182,376);
    glVertex2f(183,378);
    glVertex2f(185,379);
    glVertex2f(191,379);
    glVertex2f(193,378);
    glVertex2f(195,376);
    glVertex2f(195,363);
    glVertex2f(182,361);
    glEnd();

    glRectf(185,379,191,387);

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(188,387);
    glVertex2f(188,400);
    glEnd();

    glColor3ub(238,102,90);
    glBegin(GL_POLYGON);
    glVertex2f(163,185);
    glVertex2f(174,185);
    glVertex2f(174,287);
    glVertex2f(169,283);
    glVertex2f(165,276);
    glVertex2f(163,269);
    glVertex2f(163,266);
    glVertex2f(163,185);
    glEnd();

    glColor3ub(238,102,90);
    glBegin(GL_POLYGON);
    glVertex2f(203,185);
    glVertex2f(203,287);
    glVertex2f(208,280);
    glVertex2f(210,276);
    glVertex2f(211,271);
    glVertex2f(212,269);
    glVertex2f(212,265);
    glVertex2f(212,185);
    glVertex2f(203,185);
    glEnd();

    glRectf(179,80,182,288);
    glRectf(194,80,198,288);

    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(195,291);
    glVertex2f(193,295);
    glVertex2f(191,296);
    glVertex2f(186,296);
    glVertex2f(182,292);
    glVertex2f(181,291);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(183,344);
    glVertex2f(185,346);
    glVertex2f(190,346);
    glVertex2f(192,345);
    glVertex2f(194,344);
    glVertex2f(194,352);
    glVertex2f(192,354);
    glVertex2f(190,355);
    glVertex2f(186,355);
    glVertex2f(184,354);
    glVertex2f(183,352);
    glVertex2f(182,350);
    glVertex2f(183,344);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(179,300);
    glVertex2f(179,328);
    glVertex2f(182,328);
    glVertex2f(182,303);
    glVertex2f(179,300);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(194,328);
    glVertex2f(197,328);
    glVertex2f(197,300);
    glVertex2f(194,303);
    glVertex2f(194,328);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(181,328);
    glVertex2f(182,332);
    glVertex2f(185,334);
    glVertex2f(191,334);
    glVertex2f(194,336);
    glVertex2f(196,326);
    glEnd();
}

void green_rttriangletopbuilding(){
    glColor3ub(17,136,102);
    glBegin(GL_POLYGON);
    glVertex2f(208,80);
    glVertex2f(208,365);
    glVertex2f(248,310);
    glVertex2f(248,80);
    glEnd();

    glPushMatrix();
    glTranslatef(0,15,0);
    glColor3ub(204,221,223);
    glRectf(219,96,248,103);

    glColor3ub(43,41,41);
    glRectf(228,99,246,103);
    glPopMatrix();

    glColor3ub(133,187,189);
    glRectf(223,80,234,111);

    glColor3ub(73,136,149);
    glRectf(234,80,245,111);

    glLineWidth(3);
    glColor3ub(221,221,221);
    glBegin(GL_LINES);
    glVertex2f(217,236);
    glVertex2f(217,334);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(227,283);
    glVertex2f(227,309);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(227,172);
    glVertex2f(227,271);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(241,210);
    glVertex2f(241,307);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(241,138);
    glVertex2f(241,172);
    glEnd();

}

void blue_buildingstore(){
    glColor3ub(48,126,146);
    glBegin(GL_POLYGON);
    glVertex2f(266,80);
    glVertex2f(305,80);
    glVertex2f(305,330);
    glVertex2f(266,300);
    glVertex2f(266,80);
    glEnd();

    glColor3ub(17,38,108);
    glRectf(262,141,292,158);
    glRectf(262,183,292,200);
    glRectf(262,226,292,243);
    glRectf(262,265,292,281);

    glRectf(264,118,305,128);

    glColor3ub(96,184,208);
    glRectf(275,80,285,118);
    glColor3ub(80,145,181);
    glRectf(282,80,293,118);
}

void brown_building(){
    glColor3ub(187,137,120);
    glRectf(298,80,340,334);

    glBegin(GL_POLYGON);
    glVertex2f(307,338);
    glVertex2f(310,342);
    glVertex2f(314,345);
    glVertex2f(323,345);
    glVertex2f(328,342);
    glVertex2f(331,338);
    glVertex2f(307,338);
    glEnd();

    glColor3ub(87,67,53);
    glRectf(300,334,338,338);

    glColor3ub(221,221,221);
    glRectf(326,220,332,237);

    glPushMatrix();
    glTranslatef(-11,0,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,0,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,25,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11,25,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,25,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,50,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11,50,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,50,0);
    glRectf(326,220,332,237);
    glPopMatrix();

    glColor3ub(219,105,38);
    glRectf(307,114,341,122);

    glColor3ub(43,41,41);
    glRectf(314,113,336,119);

    glColor3ub(153,102,85);
    glRectf(312,80,323,111);

    glColor3ub(148,116,140);
    glRectf(323,80,332,111);

}

void windmill_blades(){
     glColor3ub(255,255,255);
     glLineWidth(2);
     glBegin(GL_LINES);
     glVertex2f(434,291);
     glVertex2f(445,277);
     glEnd();

     glBegin(GL_LINES);
     glVertex2f(434,291);
     glVertex2f(440,309);
     glEnd();

     glBegin(GL_LINES);
     glVertex2f(434,291);
     glVertex2f(419,289);
     glEnd();
}

void windmill_blades1(){
    glColor3ub(255,255,255);
     glLineWidth(2);
     glBegin(GL_LINES);
     glVertex2f(455,277);
     glVertex2f(447,271);
     glEnd();

     glBegin(GL_LINES);
     glVertex2f(455,277);
     glVertex2f(453,293);
     glEnd();

     glBegin(GL_LINES);
     glVertex2f(455,277);
     glVertex2f(467,277);
     glEnd();
}

void building_withwindmill(){
    glColor3ub(242,221,212);
    glRectf(405,80,480,241);

    glColor3ub(218,135,34);
    glRectf(409,241,475,246);

    //windows
    glColor3ub(99,87,159);
    glRectf(430,148,409,154);
    glRectf(417,167,439,170);
    glRectf(422,190,444,195);
    glRectf(413,210,435,211);
    glRectf(413,224,435,226);
    glRectf(447,227,470,232);

    glColor3ub(170,187,188);
    glRectf(411,115,440,121);

    //windmill section

    glColor3ub(37,9,51);
    glBegin(GL_TRIANGLES);
    glVertex2f(432,246);
    glVertex2f(436,246);
    glVertex2f(434,288);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(454,246);
    glVertex2f(457,246);
    glVertex2f(456,276);
    glEnd();

    glPushMatrix();
    glTranslatef(434,291,0);
    glRotatef(windmill_blades_angle,0,0,1);
    glTranslatef(-434,-291,0);
    windmill_blades();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455,277,0);
    glRotatef(windmill_blades_angle,0,0,1);
    glTranslatef(-455,-277,0);
    windmill_blades1();
    glPopMatrix();


}

void bluebuilding_underconstruction(){
    glColor3ub(48,126,146);
    glRectf(446,80,514,214);

    glColor3ub(17,68,68);
    glRectf(453,214,507,216);

    //window
    glColor3ub(136,170,187);
    glRectf(456,125,476,131);
    glRectf(486,125,504,131);
    glRectf(456,143,476,148);
    glRectf(486,143,504,148);
    glRectf(456,157,476,162);
    glRectf(486,157,504,162);
    glRectf(456,171,476,176);
    glRectf(486,171,504,176);
    glRectf(456,184,476,189);
    glRectf(486,184,504,189);

    //door
    glPushMatrix();
    glTranslatef(0,8,0);
    glColor3ub(3,34,49);
    glRectf(452,103,514,111);

    glColor3ub(204,221,223);
    glRectf(473,103,497,106);



    glColor3ub(136,170,187);
    glRectf(472,80,481,101);

    glColor3ub(103,152,171);
    glRectf(481,80,492,101);
    glPopMatrix();
}

void building_extremeright(){

    glColor3ub(253,161,119);
    glRectf(481,80,554,367);

    glColor3ub(204,85,84);
    glRectf(500,367,541,380);


    //window
    glColor3ub(187,137,120);
    glRectf(519,129,543,135);
    glRectf(523,218,542,225);
    glRectf(523,291,540,295);

    glColor3ub(189,102,102);
    glRectf(501,246,515,253);
    glRectf(521,291,522,295);
    glRectf(497,307,518,315);
    glRectf(495,346,514,354);
}

void shadow_building(){
    glColor3ub(196,196,197);

    glBegin(GL_POLYGON);
    glVertex2f(0,80);
    glVertex2f(0,327);
    glVertex2f(18,327);
    glVertex2f(18,275);
    glVertex2f(40,275);
    glVertex2f(40,80);
    glVertex2f(0,80);
    glEnd();

    glRectf(110,310,40,80);
    glRectf(40,300,89,379);
    glRectf(31,379,89,384);

    glBegin(GL_TRIANGLES);
    glVertex2f(89,379);
    glVertex2f(92,378);
    glVertex2f(89,384);
    glEnd();

    glRectf(156,305,217,80);
    glRectf(173,348,209,288);
    glRectf(246,80,268,255);
    glRectf(400,80,600,294);
    glRectf(353,80,370,327);
    glRectf(400,294,441,377);
    glRectf(441,294,574,308);
    glRectf(553,308,574,320);
    glRectf(553,320,562,348);

    glColor3ub(170,204,221);
    glRectf(339,80,353,209);
}

void red_car1(){
    glPushMatrix();
    glColor3ub(colorR,colorG,colorB);
    if(redCar1Pos < -630){
        redCar1Pos = 500;
    }
    glTranslatef(redCar1Pos,10,0);
    glBegin(GL_POLYGON);
    glVertex2f(473,56);
    glVertex2f(471,60);
    glVertex2f(471,67);
    glVertex2f(473,69);
    glVertex2f(491,69);
    glVertex2f(494,78);
    glVertex2f(512,78);
    glVertex2f(516,69);
    glVertex2f(517,58);
    glVertex2f(515,56);
    glEnd();

    glColor3ub(37,9,51);
    glRectf(495,69,500,76);

    glBegin(GL_TRIANGLES);
    glVertex2f(495,69);
    glVertex2f(489,69);
    glVertex2f(495,76);
    glEnd();

    glColor3ub(136,135,141);
    glRectf(470,58,474,61);
    glRectf(514,58,518,61);

    glColor3ub(255,255,255);
    glRectf(470,64,472,67);

    glColor3ub(254,209,43);
    glRectf(515,62,517,65);

    glColor3f(0,0,0);
    drawCircle(4.2,481,57);
    drawCircle(4.2,508,57);

    glPopMatrix();
}

void helicopter(){
    glColor3ub(17,34,136);
    glBegin(GL_POLYGON);
    glVertex2f(378,312);
    glVertex2f(391,324);
    glVertex2f(402,319);
    glVertex2f(401,310);
    glVertex2f(397,306);
    glVertex2f(394,305);
    glEnd();

    glColor3ub(18,180,180);
    glBegin(GL_POLYGON);
    glVertex2f(377,312);
    glVertex2f(377,323);
    glVertex2f(382,327);
    glVertex2f(387,327);
    glVertex2f(391,324);
    glEnd();

    drawCircle(6,430,305);

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(412,319);
    glVertex2f(375,335);
    glEnd();

    glColor3ub(85,51,100);
    glBegin(GL_POLYGON);
    glVertex2f(400,310);
    glVertex2f(402,319);
    glVertex2f(406,318);
    glVertex2f(405,310);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(402,316);
    glVertex2f(430,305);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(377,310);
    glVertex2f(400,301);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(382,308);
    glVertex2f(383,310);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(391,304);
    glVertex2f(392,306);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(393,323);
    glVertex2f(396,325);
    glEnd();

}

void helicopter_rot(){
    glPushMatrix();
    glTranslatef(400,301,0);
    if (heliPosX <0)
        heli_angle=40;
    if(heliPosY<75){
        heli_angle=20;
    }
    if(heliPosY<-20){
         IF_HELI_LANDED=1;
         delay(1);
    }
    if(IF_HELI_LANDED==1 && heliPosX<-600){
         heliPosX=250;heli_angle=40;heliPosY=80;IF_HELI_LANDED=0;
        }
    glRotatef(heli_angle,0,0,1);
    glTranslatef(-400,-301,0);
    helicopter();
    glPopMatrix();
}

void helicopter_anim(){
    glPushMatrix();
    glTranslatef(heliPosX,heliPosY,0);
    helicopter_rot();
    glPopMatrix();
}

void construction_equipment(){
    glColor3ub(189,102,102);
    glBegin(GL_LINES);
    glVertex2f(494,214);
    glVertex2f(494,281);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(500,214);
    glVertex2f(500,281);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(500,281);
    glVertex2f(494,274);
    glVertex2f(500,269);
    glVertex2f(494,264);
    glVertex2f(500,259);
    glVertex2f(494,255);
    glVertex2f(500,250);
    glVertex2f(494,244);
    glVertex2f(500,240);
    glVertex2f(494,235);
    glVertex2f(500,230);
    glVertex2f(494,225);
    glVertex2f(500,220);
    glVertex2f(494,216);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(539,281);
    glVertex2f(539,136);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(541,133);
    glVertex2f(544,127);
    glEnd();

    glColor3ub(37,9,51);
    glBegin(GL_LINE_LOOP);
    glVertex2f(468,280);
    glVertex2f(542,280);
    glVertex2f(497,304);
    glEnd();

    glRectf(529,127,549,114);

    glPointSize(6);
    glBegin(GL_POINTS);
    glVertex2f(539,133);
    glEnd();

    glColor3ub(189,102,102);
    glBegin(GL_LINES);
    glVertex2f(537,133);
    glVertex2f(533,127);
    glEnd();
}

void leftof_ctree(){
    glBegin(GL_POLYGON);
    glVertex2f(567,100);
    glVertex2f(561,100);
    glVertex2f(557,105);
    glVertex2f(556,108);
    glVertex2f(556,118);
    glVertex2f(558,126);
    glVertex2f(560,130);
    glVertex2f(561,137);
    glVertex2f(567,141);
    glVertex2f(567,100);
    glEnd();
}

void rightof_ctree(){
    glBegin(GL_POLYGON);
    glVertex2f(567,100);
    glVertex2f(570,100);
    glVertex2f(575,104);
    glVertex2f(578,108);
    glVertex2f(578,118);
    glVertex2f(576,121);
    glVertex2f(576,126);
    glVertex2f(574,130);
    glVertex2f(573,138);
    glVertex2f(570,141);
    glVertex2f(567,140);
    glEnd();
}

void ctree_branch(){
    glColor3ub(37,9,51);
    glBegin(GL_LINES);
    glVertex2f(567,82);
    glVertex2f(567,121);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(567,110);
    glVertex2f(562,113);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(567,114);
    glVertex2f(571,118);
    glEnd();
}
void ctree(){

    //1st tree
    glColor3ub(204,221,104);
    leftof_ctree();

    glColor3ub(123,147,104);
    rightof_ctree();

    ctree_branch();

    //2nd tree
    glPushMatrix();
    glTranslatef(-157,0,0);

    glColor3ub(1,85,68);
    leftof_ctree();

    glColor3ub(17,136,102);
    rightof_ctree();

    ctree_branch();

    glPopMatrix();

    //3rd tree

    glPushMatrix();
    glTranslatef(-405,0,0);

    glColor3ub(1,85,68);
    leftof_ctree();

    glColor3ub(17,136,102);
    rightof_ctree();

    ctree_branch();

    glPopMatrix();

    //4thTree

    glPushMatrix();
    glTranslatef(-531,0,0);

    glColor3ub(17,69,101);
    leftof_ctree();

    glColor3ub(34,119,136);
    rightof_ctree();

    ctree_branch();

    glPopMatrix();

}

void city_trees(){
    ctree();
}

void blue_car(){
    glPushMatrix();

    if(blueCar1Pos>630)
        blueCar1Pos=-300;

    glTranslatef(blueCar1Pos,0,0);
    glColor3ub(105,238,237);
    glBegin(GL_POLYGON);
    glVertex2f(171,54);
    glVertex2f(168,58);
    glVertex2f(168,64);
    glVertex2f(173,69);
    glVertex2f(177,74);
    glVertex2f(179,75);
    glVertex2f(183,78);
    glVertex2f(191,77);
    glVertex2f(197,74);
    glVertex2f(201,71);
    glVertex2f(202,67);
    glVertex2f(209,67);
    glVertex2f(212,64);
    glVertex2f(212,56);
    glVertex2f(210,54);
    glVertex2f(171,54);
    glEnd();

    glColor3ub(0,0,0);
    drawCircle(4.2,176,54);
    drawCircle(4.2,204,54);

    glColor3ub(37,9,51);
    glBegin(GL_POLYGON);
    glVertex2f(177,68);
    glVertex2f(183,74);
    glVertex2f(186,74);
    glVertex2f(185,68);
    glEnd();

    glColor3ub(37,9,51);
    glBegin(GL_POLYGON);
    glVertex2f(189,68);
    glVertex2f(189,74);
    glVertex2f(191,74);
    glVertex2f(197,68);
    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3ub(136,135,141);
    glVertex2f(211,57);
    glVertex2f(169,57);
    glColor3ub(254,220,104);
    glVertex2f(168,61);
    glVertex2f(212,61);
    glEnd();

    glPopMatrix();

}

void dblue_car1(){
    glPushMatrix();
    glColor3ub(0,0,138);
    if(dblueCar1Pos < -600){
        dblueCar1Pos = 400;
    }
    glTranslatef(dblueCar1Pos,-15,0);
    glBegin(GL_POLYGON);
    glVertex2f(473,56);
    glVertex2f(471,60);
    glVertex2f(471,67);
    glVertex2f(473,69);
    glVertex2f(491,69);
    glVertex2f(494,78);
    glVertex2f(512,78);
    glVertex2f(516,69);
    glVertex2f(517,58);
    glVertex2f(515,56);
    glEnd();

    glColor3ub(37,9,51);
    glRectf(495,69,500,76);

    glBegin(GL_TRIANGLES);
    glVertex2f(495,69);
    glVertex2f(489,69);
    glVertex2f(495,76);
    glEnd();

    glColor3ub(136,135,141);
    glRectf(470,58,474,61);
    glRectf(514,58,518,61);

    glColor3ub(255,255,255);
    glRectf(470,64,472,67);

    glColor3ub(254,209,43);
    glRectf(515,62,517,65);

    glColor3f(0,0,0);
    drawCircle(4.2,481,57);
    drawCircle(4.2,508,57);

    glPopMatrix();
}

void drone(){
    glColor3ub(239,216,182);
    glRectf(273,363,299,378);

    glColor3ub(17,69,101);
    glRectf(280,385,292,391);

    glColor3ub(34,119,136);
    glRectf(284,394,288,400);

    glColor3ub(255,255,255);
    glRectf(285,392,287,393);
    glRectf(285,401,287,402);
    glRectf(285,383,287,384);

    glBegin(GL_LINES);
    glVertex2f(287,397);
    glVertex2f(305,388);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(287,397);
    glVertex2f(308,398);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(265,397);
    glVertex2f(283,398);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(283,399);
    glVertex2f(272,405);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(280,386);
    glVertex2f(272,382);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(272,382);
    glVertex2f(272,376);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(281,384);
    glVertex2f(275,378);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(291,385);
    glVertex2f(297,378);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(291,387);
    glVertex2f(299,381);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(299,375);
    glVertex2f(299,381);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(262,400);
    glVertex2f(263,404);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(270,408);
    glVertex2f(271,412);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(307,390);
    glVertex2f(308,394);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(310,401);
    glVertex2f(311,405);
    glEnd();

    glPointSize(6);
    glColor3ub(48,126,146);
    glBegin(GL_POINTS);
    glVertex2f(262,397);
    glVertex2f(270,406);
    glVertex2f(308,387);
    glVertex2f(310,399);
    glEnd();

    glColor3ub(35,98,116);
    glBegin(GL_LINES);
    glVertex2f(256,404);
    glVertex2f(269,404);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(265,411);
    glVertex2f(276,411);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(304,404);
    glVertex2f(316,404);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(302,393);
    glVertex2f(314,393);
    glEnd();
}

void drone_anim(){
    if(dronePosX>50 &&  dronePosY<-200){
        dronePosX=-350;
        dronePosY=150;
    }
    glPushMatrix();
    glTranslatef(dronePosX,dronePosY,0);
    glScalef(0.8,0.8,0);
    drone();
    glPopMatrix();
}

void city_bench1(){
    glColor3ub(17,68,68);
    glBegin(GL_LINES);
    glVertex2f(321,84);
    glVertex2f(346,84);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(321,86);
    glVertex2f(346,87);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(321,88);
    glVertex2f(346,88);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(321,89);
    glVertex2f(346,89);
    glEnd();

}

void pink_car(){
    glPushMatrix();

    if(pinkCar1Pos>660)
        pinkCar1Pos=-380;

    glTranslatef(pinkCar1Pos,-40,0);
    glColor3ub(227, 28, 121);
    glBegin(GL_POLYGON);
    glVertex2f(171,54);
    glVertex2f(168,58);
    glVertex2f(168,64);
    glVertex2f(173,69);
    glVertex2f(177,74);
    glVertex2f(179,75);
    glVertex2f(183,78);
    glVertex2f(191,77);
    glVertex2f(197,74);
    glVertex2f(201,71);
    glVertex2f(202,67);
    glVertex2f(209,67);
    glVertex2f(212,64);
    glVertex2f(212,56);
    glVertex2f(210,54);
    glVertex2f(171,54);
    glEnd();

    glColor3ub(0,0,0);
    drawCircle(4.2,176,54);
    drawCircle(4.2,204,54);

    glColor3ub(37,9,51);
    glBegin(GL_POLYGON);
    glVertex2f(177,68);
    glVertex2f(183,74);
    glVertex2f(186,74);
    glVertex2f(185,68);
    glEnd();

    glColor3ub(37,9,51);
    glBegin(GL_POLYGON);
    glVertex2f(189,68);
    glVertex2f(189,74);
    glVertex2f(191,74);
    glVertex2f(197,68);
    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3ub(136,135,141);
    glVertex2f(211,57);
    glVertex2f(169,57);
    glColor3ub(254,220,104);
    glVertex2f(168,61);
    glVertex2f(212,61);
    glEnd();

    glPopMatrix();

}

#endif // SC4ENVIRONMENT_H_INCLUDED

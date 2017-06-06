#include <stdio.h>
#include <GL/glut.h>
#include "dino.h"
#include "mammoth.h"
#include "sc1environment.h"
#include "sc2environment.h"
#include "sc3environment.h"
#include "sc4environment.h"
#include <math.h>

int flag =0,cntr=0;
bool isLeftKeyPressed=false,isRightKeyPressed=false;
GLfloat cloudPosXS2=0;
GLsizei wh=500,ww=600;

void print(int x, int y,int z,void *font, char *string)
{
//set the position of the text in the window using the x and y coordinates
glRasterPos2f(x,y);
//get the length of the string to display
int len = (int) strlen(string);

//loop to display character by character
for (int i = 0; i < len; i++)
{
glutBitmapCharacter(font,string[i]);
}
};

void printstroketext(char *string,float x,float y,float colorr,float colorg,float colorb,float line_width,float scale){
    char *c;
    glPushMatrix();
    glColor3f(colorr,colorg,colorb);
    glEnable(GL_BLEND);
    glTranslatef(x,y,0);
    glScalef(scale,scale,0);
    glLineWidth(line_width);
    for(c=string; *c != '\0'; c++){
        glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
    }
    glDisable(GL_BLEND);
    glPopMatrix();
    glEnd();
}

void windowResized(int w,int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        gluOrtho2D(0,600,0,500*(GLfloat)(h/w));
    else
        gluOrtho2D(0,600*(GLfloat)(w/h),0,500);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}



void handleSpecialKeypress(int key, int x, int y) {
 switch (key) {
 case GLUT_KEY_LEFT:
  isLeftKeyPressed = true;
  if (!isRightKeyPressed) {
        if (flag ==11)
            flag=0;
        else if (flag==1)
            flag=11;
        else if (flag==12)
            flag=1;
        else if(flag==2)
            flag=12;
        else if(flag==13)
            flag=2;
        else if (flag==3)
            flag=13;
        else if (flag==14)
            flag=3;
        else if(flag==4)
                flag=14;
        else if(flag==99)
                flag=4;
  }
  break;
 case GLUT_KEY_RIGHT:
  isRightKeyPressed = true;
  if (!isLeftKeyPressed) {
        if(flag==0)
            flag=11;
        else if (flag==11)
            flag=1;
            else if(flag==1)
            flag=12;
        else if (flag==12)
            flag=2;
        else if (flag==2)
            flag=13;
        else if (flag==13)
            flag=3;
        else if (flag==3)
            flag=14;
        else if (flag==14)
            flag=4;
        else if (flag==4)
            flag=99;
  }
  break;
 }
}

void handleSpecialKeyReleased(int key, int x, int y) {
 switch (key) {
 case GLUT_KEY_LEFT:
  isLeftKeyPressed = false;
  break;
 case GLUT_KEY_RIGHT:
  isRightKeyPressed = false;
  break;
 }
}



void menu(int value){
	switch(value)
	{
	    case 0 :flag=0;break;
        case 1 :flag=1;break;
        case 2 :flag=2;break;
        case 3 :flag=3;break;
        case 4 :flag=4;break;
        case 11 :flag=11;break;
        case 12 :flag=12;break;
        case 13 :flag=13;break;
        case 14 :flag=14;break;
        case 99 :flag=99;break;
        case 5 :exit(0);break;
        //case 6 :scene_auto_trans=0;break;
        //case 7 :scene_auto_trans=1;break;
        default:break;
	}
}

void onMouseClick(int button, int state ,int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        y=wh-y;
        if(flag==99){
            if(x>1137 && y>-186 && x<1274 && y<-143)
                exit(0);
            if(x>956 && y>-186 && x<1092 && y<-143){
                flag=0;
               // printf("\t%d\t",x);
                //printf("%d",y);
            }
        }
    }
}

void onKeyPress(unsigned char theKey, int mouseX, int mouseY)
{
    switch(theKey){
        case '1':   flag=1; glutPostRedisplay();
                    break;
        case '2':   flag=2; glutPostRedisplay();
                    break;
        case '3':   flag=3; glutPostRedisplay();
                    break;
        case '4':   flag=4; glutPostRedisplay();
                    break;
        default:
                    break;					 // do nothing
    }
}

void myTimer(int n){
    if(flag==1){
    dino1Pos+=1;
    dino2Pos+=1;
    dino3Pos+=0.5;
    longdinoposX-=1;
    if(cloud1Pos<0)
    cloud1Pos+=1;
    else if(cloud1Pos>=-180)
        cloud1Pos-=1;

    }

    glutTimerFunc(200,myTimer,0);
}

void myTimer2(int n){

    cloud1Pos+=0.1;
    cloud2Pos-=0.1;
    if(flag==2){
    if(cloudPosXS2 <=0 && cloudPosXS2 >=-300)
        cloudPosXS2-=0.5;
    else if(cloudPosXS2 <= -300)
        while(cntr<600)
        {
            cloudPosXS2+=0.5;
            cntr++;
        }
    }

    if(flag==2){
        posX+=0.50;
        posX3-=0.50;
    }

    if(flag==3){
        man3PosX-=0.1;
        stickPosX-=0.05;
    }


    if(flag==4){
     redCar1Pos-=0.4;
     blueCar1Pos+=0.4;
     dblueCar1Pos-=0.4;
     pinkCar1Pos+=0.4;
    if(IF_HELI_LANDED==0){
        if(heliPosX>0){
            heliPosX-=0.4;
        }else if(heliPosX<0){
            if(heliPosY>=-20)
                heliPosY-=0.4;
        }
     }
     if(IF_HELI_LANDED==1){
        if(heliPosY<80)
            heliPosY+=0.4;
        else if(heliPosX>-600){
                heliPosX-=0.4;
        }
     }
     if(windmill_blades_angle <=360)
        windmill_blades_angle+=1;
     else
        windmill_blades_angle =0;

     if(dronePosX<=50){
            dronePosX+=0.4;
     }
     if(dronePosX>50){
        if(dronePosY>-210)
            dronePosY-=0.4;
     }
    }
    for(int i =0;i<1000000;i++);
    glutPostRedisplay();
    glutTimerFunc(1,myTimer2,0);
}

void myTimer1(int n){
    if(flag==1){
    if(dinoPosY==-40){
        dinoPosY=-45;
    }else if(dinoPosY==-45){
        dinoPosY=-40;
    }
    if(dino3PosY==200){
        dino3PosY==195;
    }else if(dino3PosY==195){
        dino3PosY=200;
    }
    if(dino2PosY==-90){
        dino2PosY==-95;
    }else if(dino2PosY==-95){
        dino2PosY=-90;
    }
    if(angle1 == 10 && angle2 ==-10){
        angle1 = -10;
        angle2 = 10;
	}else if(angle1 = -10 && angle2 == 10){
        angle1 = 10;
        angle2 = -10;
	}
	}
	if(angle3 == 2 && angle4 ==-2){
        angle3 = -2;
        angle4 = 2;
	}else if(angle3 == -2 && angle4 ==2){
        angle3 = 2;
        angle4 = -2;
	}


     if(flag==3){
        if(angle_human_leg3==20)
            angle_human_leg3=-20;
        else if(angle_human_leg3==-20)
            angle_human_leg3=20;

        if(angle_human_leg4==20)
            angle_human_leg4=-20;
        else if(angle_human_leg4==-20)
            angle_human_leg4=20;

             if(angle_human_hand3==20)
            angle_human_hand3=-20;
        else if(angle_human_hand3==-20)
            angle_human_hand3=20;

        if(angle_human_hand4==20)
            angle_human_hand4=-20;
        else if(angle_human_hand4==-20)
            angle_human_hand4=20;
    }


    glutTimerFunc(400,myTimer1,0);
}

void mytimer78(int n)
{
    if(flag==0)
    {
         flag=1;
         if(n==0)
    glutTimerFunc(5000,mytimer78,0);
    }else if(flag==1)
    {
         flag=2;
          if(n==0)
    glutTimerFunc(15000,mytimer78,0);
    }else if(flag==2)
    {
         flag=3;
          if(n==0)
    glutTimerFunc(5000,mytimer78,0);
    }else if(flag==3)
    {
         flag=4;
          if(n==0)
    glutTimerFunc(10000,mytimer78,0);
    }
    else if(flag==4)
    {
        flag=0;
         if(n==0)
    glutTimerFunc(10000,mytimer78,0);
    }

}

void scene0_displaycallfunc(){
         glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(36,49,168,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glDisable(GL_BLEND);
         glPushMatrix();
         glColor3f(1,1,1);
         printstroketext("COMPUTER GRAPHICS PROJECT ON",175,370,1,1,1,1.5,0.11);
         printstroketext("EVOLUTION OF EARTH THROUGH THE AGES",135,300,1,1,1,1.5,0.11);
         glPopMatrix();
}
void scene11_displaycallfunc(){
         glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(36,49,168,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glColor4f(1,1,1,0.1);
         glRectf(235,420,590,30);
         glPushMatrix();
         glTranslatef(60,-50,0);
         glRotatef(30,0,0,1);
         drawDino();
         glPopMatrix();
        glDisable(GL_BLEND);
        printstroketext("JURASSIC AGE",240,400,1,1,1,1.5,0.11);
        printstroketext("Facts:",240,380,1,1,1,1.3,0.09);
        printstroketext("Jurassic period is also known as \"The Age of Reptiles\". ",240,360,1,1,1,1.3,0.09);
        printstroketext("The Jurassic lasted for 64 million years, from about 208",240,340,1,1,1,1.3,0.09);
        printstroketext("to 144 million years ago. The period is named for rock",240,320,1,1,1,1.3,0.09);
        printstroketext("strata found in the Jura Mountains on the border between",240,300,1,1,1,1.3,0.09);
        printstroketext("between Switzerland and France.",240,280,1,1,1,1.3,0.09);
        printstroketext("The Jurassic period is known for an increase in the",240,240,1,1,1,1.3,0.09);
        printstroketext("numbers and diversity of dinosaurs.At the beginning of the",240,220,1,1,1,1.3,0.09);
        printstroketext("period, dinosaurs such as the bipedal and carnivorous",240,200,1,1,1,1.3,0.09);
        printstroketext("theropods were small and lightly boned, feeding on insects",240,180,1,1,1,1.3,0.09);
        printstroketext("or other small dinosaurs. By the close of the period, ",240,160,1,1,1,1.3,0.09);
        printstroketext("massive predators like Tyrannosaurus Rex, Allosaurus and",240,140,1,1,1,1.3,0.09);
        printstroketext("Ceratosaurus had appeared. These dinosaurs had heavy",240,120,1,1,1,1.3,0.09);
        printstroketext("bodies, powerful hind legs, front limbs used for grasping",240,100,1,1,1,1.3,0.09);
        printstroketext("and holding prey, and long, sharp teeth for spearing and",240,80,1,1,1,1.3,0.09);
        printstroketext("stabbing. The largest of all dinosaurs, the plant-eating",240,60,1,1,1,1.3,0.09);
        printstroketext("sauropods, also developed during the Jurassic.",240,40,1,1,1,1.3,0.09);
        printstroketext("Use '<--' and '-->' Keys to Switch Between The Scenes",10,10,1,1,1,1.3,0.09);
        printstroketext("Right Click To Access Menu",10,40,1,1,1,1.3,0.09);
}

void scene1_displaycallfunc(){
    drawLand();
    drawSky();
    drawSun();

    glPushMatrix();
    glTranslatef(cloud1Pos,120,0);
    if(cloud1Pos>-20)
        cloud1Pos=-180;
    glScalef(0.6,0.6,0);
    drawCloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2Pos,150,0);
    if(cloud2Pos<0)
        cloud2Pos=175;
    glScalef(0.6,0.6,0);
    drawCloud();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(0,-65,0);
    //glScalef(0.6,0.6,0);
    mountains();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-65,0);
    river();
    glPopMatrix();
     /*glPushMatrix();
    glScalef(0.30,0.3,0);
    glTranslatef(1400,700,0);
    drawTree();
    glPopMatrix();*/

    if(dino1Pos>700)
    {
        dino1Pos=-500;
    }
    if(dino2Pos>600)
    {
        dino2Pos=-500;
    }
    if(dino3Pos>800)
    {
        dino3Pos=-500;
    }
    glPushMatrix();
    glTranslatef(dino1Pos,dinoPosY,0);
    glScalef(0.4,0.4,0);
    drawDino();
    glTranslatef(dino3Pos,dino3PosY,0);
    drawDino();
    glTranslatef(dino2Pos,dino2PosY,0);
    drawDino();
    glPopMatrix();
    if(longdinoposX<-200)
        longdinoposX=150;
    glPushMatrix();
    glTranslatef(longdinoposX,longdinoposY,0);
    glScalef(0.25,0.25,0);
    drawlongneckdinobody();
    glPopMatrix();
}

void scene12_displaycallfunc(){
     glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(36,49,168,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glColor4f(1,1,1,0.1);
         glRectf(235,420,597,60);
         glDisable(GL_BLEND);
         glPushMatrix();
         glTranslatef(-90,50,0);
         glScalef(1.5,1.5,0);
         glRotatef(20,0,0,1);
         drawmammoth();
         glPopMatrix();
          printstroketext("ICE AGE",240,400,1,1,1,1.5,0.11);
        printstroketext("Facts:",240,380,1,1,1,1.3,0.09);
        printstroketext("The ice age began 2.6 million years ago at the start of",240,360,1,1,1,1.3,0.09);
        printstroketext("the Pleistocene epoch, because the Greenland, Arctic, and",240,340,1,1,1,1.3,0.09);
        printstroketext("Antarctic ice sheets still exist.",240,320,1,1,1,1.3,0.09);
        printstroketext("An ice age is a period of colder global temperatures and",240,280,1,1,1,1.3,0.09);
        printstroketext("recurring glacial expansion capable of lasting hundreds of",240,260,1,1,1,1.3,0.09);
        printstroketext("millions of years. Wooly Mammoth is the major land",240,240,1,1,1,1.3,0.09);
        printstroketext("animal found during this period. There have been at least",240,220,1,1,1,1.3,0.09);
        printstroketext("five significant ice ages in Earth’s history.Outside these ages,",240,200,1,1,1,1.3,0.09);
        printstroketext("the Earth seems to have been ice-free even in high",240,180,1,1,1,1.3,0.09);
        printstroketext("latitudes. Humans developed significantly during the most",240,160,1,1,1,1.3,0.09);
        printstroketext("recent glaciation period, emerging as the dominant land",240,140,1,1,1,1.3,0.09);
        printstroketext("animal afterward as megafauna such as the wooly",240,120,1,1,1,1.3,0.09);
        printstroketext("mammoth went extinct.The reasons for the disappearance of",240,100,1,1,1,1.3,0.09);
        printstroketext("these giants,from human hunting to disease is a mystery.",240,80,1,1,1,1.3,0.09);
}

void scene2_displaycallfunc(){


        drawSkyS2();
        drawGroundS2();

        drawSunS2();

        glPushMatrix();
        glTranslatef(cloudPosXS2,0,0);
        drawCloudS2();
        glPopMatrix();

        drawMountainsS2();

        glEnable(GL_BLEND);
        glPushMatrix();
        glTranslatef(410,70,0);
        glScalef(0.5,0.5,0);
        stone();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(310,60,0);
        glScalef(0.8,0.8,0);
        treelog();
        glPopMatrix();
        glDisable(GL_BLEND);


        glPushMatrix();
        glTranslatef(posX,140,0);
        glScalef(0.7,0.7,0);
        drawmammoth();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(posX+180,95,0);
        glScalef(0.7,0.7,0);
        drawmammoth();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(posX,-10,0);
        glScalef(0.9,0.9,0);
        drawmammoth();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(posX3,-10,0);
        glScalef(0.9,0.9,0);
        glRotatef(180,0,1,0);
        drawmammoth();
        glPopMatrix();

        drawSnow();
}

void scene13_displaycallfunc(){
     glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(36,49,168,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glColor4f(1,1,1,0.1);
         glRectf(235,420,597,30);
         glPushMatrix();
         glTranslatef(-600,-500,0);
         glScalef(2,2,0);
         drawman();
         glPopMatrix();
         glDisable(GL_BLEND);
         printstroketext("STONE AGE",240,400,1,1,1,1.5,0.11);
         printstroketext("Facts:",240,380,1,1,1,1.3,0.09);
         printstroketext("The Stone Age began about 3.7 million years ago, and",240,360,1,1,1,1.3,0.09);
         printstroketext("lasted until about 2000 BC.",240,340,1,1,1,1.3,0.09);
         printstroketext("Archaeologists divide the Stone Age into three periods:",240,300,1,1,1,1.3,0.09);
         printstroketext("Paleolithic, Mesolithic and then Neolithic. About 99 percent",240,280,1,1,1,1.3,0.09);
         printstroketext("of humans’ time on earth took place during the Paleolithic",240,260,1,1,1,1.3,0.09);
         printstroketext("period.The Paleolithic age saw humans use stones to bash,",240,240,1,1,1,1.3,0.09);
         printstroketext("hit and scrape. By the end of the Paleolithic era, humans",240,220,1,1,1,1.3,0.09);
         printstroketext("had learned to make sharp tools, and lived together in",240,200,1,1,1,1.3,0.09);
         printstroketext("small groups.One of the oldest stone tools found is about",240,180,1,1,1,1.3,0.09);
         printstroketext("3.4 million years old and was found in Africa. The first",240,160,1,1,1,1.3,0.09);
         printstroketext("man-made structure was also built in Africa, about",240,140,1,1,1,1.3,0.09);
         printstroketext("2 million years ago. Stone Age people lived in huts made",240,120,1,1,1,1.3,0.09);
         printstroketext("of wood or stone, often covered with animal skins, or clay.",240,100,1,1,1,1.3,0.09);
         printstroketext("Some huts were also made from huge bones of woolly",240,80,1,1,1,1.3,0.09);
         printstroketext("mammoths. Stone Age people ate wild plants, nuts, berries",240,60,1,1,1,1.3,0.09);
         printstroketext("and grains, as well as animals.",240,40,1,1,1,1.3,0.09);
}

void scene3_displaycallfunc(){
    glEnable(GL_BLEND);
    drawskyS3();
    drawgroundS3();
    glPushMatrix();
    Mountains1();
    glPopMatrix();
    Mountains1();
    //glPushMatrix();
    drawstones();
   // glPopMatrix();
    //glPushMatrix();
    //glTranslatef(0,-75,0);
    glPushMatrix();
    glTranslatef(-150,50,0);
    glScalef(0.8,0.8,0);
    Mountains1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(150,50,0);
    glScalef(0.8,0.8,0);
    drawstones();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,75,0);
    glScalef(0.7,0.7,0);
    Mountains1();
    glPopMatrix();

    drawstones();

    drawcave();

    diagram();


    glPushMatrix();
    glTranslatef(-150,-7,0);
    drawlog();
    drawfire();
    glPopMatrix();



    if(stickPosX<-30){
        Sleep(500);
        stickPosX=0;
        }
    glPushMatrix();
    glTranslatef(stickPosX,0,0);
    stick();
    drawman2();
    glPopMatrix();

    if(man3PosX<-550)
        man3PosX=200;

    glPushMatrix();
    glTranslatef(man3PosX,20,0);
    drawman3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,60,0);
    glScalef(0.8,0.8,0);
    treestone();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100,-230,0);
    glScalef(0.8,0.8,0);
    drawman();
    glPopMatrix();

    glDisable(GL_BLEND);


}

void scene14_displaycallfunc(){
      glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(90,39,41,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glColor4f(1,1,1,0.1);
         glRectf(235,420,597,190);
         glPushMatrix();
         glTranslatef(-800,-650,0);
         glScalef(2.4,2.4,0);
         helicopter();
         glPopMatrix();
         glPushMatrix();
         glTranslatef(-100,-450,0);
         glScalef(1.5,1.5,0);
         drone();
         glPopMatrix();
         glDisable(GL_BLEND);
          printstroketext("MODERN AGE",240,400,1,1,1,1.5,0.11);
          printstroketext("Facts:",240,380,1,1,1,1.3,0.09);
          printstroketext("With the growth in human intellect, people started building",240,360,1,1,1,1.3,0.09);
          printstroketext("cities,as more people were educated the rise in technology",240,340,1,1,1,1.3,0.09);
          printstroketext("took place.The introduction of cars,copters and drone are",240,320,1,1,1,1.3,0.09);
          printstroketext("some of the invention's of the Modern Age.",240,300,1,1,1,1.3,0.09);
          printstroketext("The Modern Age is a period in human history which",240,260,1,1,1,1.3,0.09);
          printstroketext("spans from the 20th century beginning with the period",240,240,1,1,1,1.3,0.09);
          printstroketext("after the end of First World War and ending with the",240,220,1,1,1,1.3,0.09);
          printstroketext("advent of the Digital revolution.",240,200,1,1,1,1.3,0.09);
}

void scene4_displaycallfunc(){
    sky_city();
    road();
    shadow_building();
    drone_anim();
    buildinghelipad();
    green_building();
    red_building();
    green_rttriangletopbuilding();
    brown_building();
    building_withwindmill();
    building_extremeright();
    bluebuilding_underconstruction();
    blue_buildingstore();
    glPushMatrix();
    glColor3ub(255,255,255);
    //print(275,120,0,GLUT_BITMAP_HELVETICA_10,"store");
    glPopMatrix();
    yellowbuilding();
    construction_equipment();
    pavement();
    helicopter_anim();
    city_trees();
    red_car1();
    blue_car();
    dblue_car1();
    pink_car();
    //city_bench1();

}

void display(){
    if (flag ==0){
         glClearColor(0,0,0,1);
         glClear(GL_COLOR_BUFFER_BIT);
         scene0_displaycallfunc();
         glFlush();
         glutSwapBuffers();
    }else if(flag==11){
        glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene11_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }
    else if (flag ==1){
        glClearColor(1,1,1,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene1_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }else if(flag==12){
         glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene12_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }
    else if(flag ==2){
        glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene2_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }else if(flag==13){
         glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene13_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }else if(flag==3){
         glClearColor(1,1,1,1);
         glClear(GL_COLOR_BUFFER_BIT);
         scene3_displaycallfunc();
         glFlush();
         glutSwapBuffers();
    }else if(flag==14){
         glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        scene14_displaycallfunc();
        glFlush();
        glutSwapBuffers();
    }else if(flag==4){
         glClearColor(0,0,0,1);
         glClear(GL_COLOR_BUFFER_BIT);
         scene4_displaycallfunc();
         glFlush();
         glutSwapBuffers();
    }else if(flag==99){
         glClearColor(0,0,0,1);
         glClear(GL_COLOR_BUFFER_BIT);
          glEnable(GL_BLEND);
         glBegin(GL_POLYGON);
         glColor4ub(36,49,168,255);
         glVertex2f(0,0);
         glVertex2f(600,0);
         glColor4ub(0,0,0,255);
         glVertex2f(600,500);
         glVertex2f(0,500);
         glEnd();
         glDisable(GL_BLEND);
         printstroketext("THE END",100,230,1,1,1,10,0.7);
         printstroketext("EXIT",520,30,1,1,1,2,0.07);
         printstroketext("START",435,30,1,1,1,2,0.07);
         glEnable(GL_BLEND);
         glColor4f(1,1,1,0.3);
         glBegin(GL_POLYGON);
         glVertex2f(500,20);
         glVertex2f(500,50);
         glVertex2f(560,50);
         glVertex2f(560,20);
         glEnd();
         glDisable(GL_BLEND);

         glEnable(GL_BLEND);
         glColor4f(1,1,1,0.3);
         glBegin(GL_POLYGON);
         glVertex2f(420,20);
         glVertex2f(420,50);
         glVertex2f(480,50);
         glVertex2f(480,20);
         glEnd();
         glDisable(GL_BLEND);

         glFlush();
         glutSwapBuffers();
    }
}

void my_menu(){
    int changeScene = glutCreateMenu(menu);
	glutAddMenuEntry("Intro",0);
	glutAddMenuEntry("Intro - Scene 1",11);
	glutAddMenuEntry("Scene 1",1);
	glutAddMenuEntry("Intro - Scene 2",12);
	glutAddMenuEntry("Scene 2",2);
	glutAddMenuEntry("Intro - Scene 3",13);
	glutAddMenuEntry("Scene 3",3);
    glutAddMenuEntry("Intro - Scene 4",14);
    glutAddMenuEntry("Scene 4",4);
    glutAddMenuEntry("End",99);

	//int sceneTransition = glutCreateMenu(menu);
	//glutAddMenuEntry("Enable",6);
	//glutAddMenuEntry("Disable",7);

	glutCreateMenu(menu);
	glutAddSubMenu("Select Scene",changeScene);
	//glutAddSubMenu("Scene Auto Transition",sceneTransition);
	glutAddMenuEntry("Exit",5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitWindowSize(1358,705);
    glutInitWindowPosition(0,60);
    glutCreateWindow("Evolution of Earth Through the Ages");
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutDisplayFunc(display);
    glutReshapeFunc(windowResized);
    my_menu();
    glutTimerFunc(200,myTimer,0);
    glutTimerFunc(400,myTimer1,0);
    glutTimerFunc(2,myTimer2,0);
    //if(scene_auto_trans==0)
    //glutTimerFunc(10000,mytimer78,0);
    //else
    //     glutTimerFunc(10000,mytimer78,1);
    //glutKeyboardFunc(onKeyPress);
    glutMouseFunc(onMouseClick);

    glutSpecialFunc(handleSpecialKeypress);
    glutSpecialUpFunc(handleSpecialKeyReleased);
    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_POINT_SMOOTH);
    glEnable(GL_COLOR_MATERIAL_FACE);
    glutMainLoop();
}

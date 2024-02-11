#include <GL/gl.h>
#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>

float bp1 = 0.0, bp2 = 480.0, bp3 = 960.0, bp4 = 1440.0, bp5 = 1920;

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}

void mainBackground(void){
    /// main backgound starts
    glBegin(GL_POLYGON);
    glColor3ub(19, 25, 135); //blue
    glVertex3f(0.0, 0.0, 0.0 );

    glColor3ub(19, 25, 135); //blue
    glVertex3f(1920.0, 0.0, 0.0 );

    glColor3ub(60, 150, 48); //greenish yellow
    glVertex3f(1920.0, 1080.0, 0.0 );

    glColor3ub(60, 150, 48); //grenish yellow
    glVertex3f(0.0, 1080.0, 0.0);
    glEnd();

    ///main background ends
}


void backgorund(void){

    ///moving background 1 starts
    glBegin(GL_POLYGON);
    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp1, 0.0, 0.0 );

    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp2, 0.0, 0.0 );

    glColor3ub(171, 171, 48); //red-yello
    glVertex3f( bp2, 1080.0, 0.0 );

    glColor3ub(60, 150, 48); //green
    glVertex3f(bp1, 1080.0, 0.0);
    glEnd();

    ///moving background 1 ends




    ///moving background 2 starts

    glBegin(GL_POLYGON);
    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp2, 0.0, 0.0 );

    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp3, 0.0, 0.0 );

    glColor3ub(60, 150, 48); //green
    glVertex3f(bp3, 1080.0, 0.0 );

    glColor3ub(171, 171, 48); //red-yello
    glVertex3f(bp2, 1080.0, 0.0);
    glEnd();

    ///moving background 2 ends

    ///moving background 3 starts
    glBegin(GL_POLYGON);
    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp3, 0.0, 0.0 );

    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp4, 0.0, 0.0 );

    glColor3ub(171, 171, 48); //red-yello
    glVertex3f(bp4, 1080.0, 0.0 );

    glColor3ub(60, 150, 48); //green
    glVertex3f(bp3, 1080.0, 0.0);
    glEnd();

    ///moving background 3 ends

    ///moving background 4 starts

    glBegin(GL_POLYGON);
    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp4, 0.0, 0.0 );

    glColor3ub(11, 11, 125); //blue
    glVertex3f(bp5, 0.0, 0.0 );

    glColor3ub(60, 150, 48); //green
    glVertex3f(bp5, 1080.0, 0.0 );

    glColor3ub(171, 171, 48); //red-yello
    glVertex3f(bp4, 1080.0, 0.0);
    glEnd();

    ///moving background 4 ends

    ///background moving starts

        if(bp1<=1920){
        bp1=bp1+0.05;
        bp2=bp2+0.05;
        bp3=bp3+0.05;
        bp4=bp4+0.05;
        }


        else {
            bp1 = 0.0;
            bp2 = 480.0;
            bp3 = 960.0;
            bp4 = 1440.0;
            bp5 = 1920;
    }

    ///background moving ends
}

void star(void){
    ///star starts
    glColor3ub(255, 255, 255);
    circle(1, 1, 1632, 919);
    circle(2, 2,410 , 2);
    circle(1, 1, 1345, 7);
    circle(3,3 , 722, 491);
    circle(3,3 ,543 , 1006);
    circle(1, 1, 412, 770);
    circle(2, 2,1147 , 721);
    circle(3, 3, 1009, 523);
    circle(2, 2,320 , 538);
    circle(1, 1, 1032, 763);
    circle(1, 1, 119, 365);
    circle(3, 3, 673, 104);
    circle(2, 2,285 , 771);
    circle(1, 1,1843 , 461);
    circle(3, 3,1649 , 622);
    circle(1, 1,1344 , 709);
    circle(2, 2, 1361, 70);
    circle(3, 3, 384, 683);
    circle(3, 3, 1317, 569);
    circle(3, 3,937 , 794);
    circle(1, 1,1383 , 38);
    circle(1, 1,1464 , 117);
    circle(2, 2,1681 , 926);
    circle(3, 3, 1733, 580);
    circle(1, 1, 834, 900);
    circle(3, 3, 1572, 57);
    circle(2, 2, 821, 162);
    circle(1, 1,498 , 937);
    circle(1, 1,1605 , 694);
    circle(2, 2, 1405, 712);
    circle(3, 3,1418 , 148);
    circle(3, 3, 831, 980);
    circle(2,2 , 514, 344);
    circle(2, 2, 286, 1022);
    circle(3, 3,1515 , 562);
    circle(2, 2,0 , 588);
    circle(1, 1, 557, 1019);
    circle(3, 3, 194, 249);
    circle(2,2 ,1561 , 265);
    circle(1, 1,1108 , 1011);
    circle(1,1 , 1472, 156);
    circle(1,1 , 782, 450);
    circle(3, 3,1667 , 411);
    circle(3, 3,506 , 110);
    circle(3, 3,863 , 241);
    circle(2, 2,1348 , 791);
    circle(1, 1,52 , 372);
    circle(2, 2,768 , 92);
    circle(2, 2, 248, 1047);
    circle(3, 3, 977, 539);
    circle(1, 1, 552, 155);
    circle(2, 2, 973, 231);
    circle(3, 3,1087 , 1067);
    circle(1, 1,664 , 108);
    circle(1,1 ,1205 , 229);
    circle(2,2 , 209, 450);


    ///star ends
}
void moon(void){
    ///moon starts
    glColor3ub(237, 236, 223);
    circle(60, 60, 1800, 920);
    ///moon ends
}

void mountain(void){
    ///mountain starts

    //right big mountain
    glBegin(GL_POLYGON);
    //glColor3ub(31, 59, 38);
    glColor3ub(255, 255, 255);
    glVertex3f(1920.0, 500.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1800.0, 500.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1700.0, 500.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1500.0, 600.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1200.0, 600.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1000.0, 400.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(900.0, 400.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(600.0, 0.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1920.0, 00.0, 0.0);
    glEnd();

    //right small mountain
    glBegin(GL_POLYGON);
    //glColor3ub(33, 130, 57);
    glColor3ub(0, 0, 0);
    glVertex3f(1000.0, 0.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1100.0, 200.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1250.0, 300.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1550.0, 300.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1650.0, 250.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1750.0, 200.0, 0.0);
    glColor3ub(0, 0, 0);
    glVertex3f(1950.0, 0.0, 0.0);
    glEnd();


    ///mountain ends
}
void waterFall(void){
    ///water fall starts
    //back mounain water fall part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(1300.0, 300.0, 0.0);
    glVertex3f(1500.0, 300.0, 0.0);
    glVertex3f(1450.0, 600.0, 0.0);
    glVertex3f(1320.0, 600.0, 0.0);
    glEnd();

    //front mounain water fall part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(1350.0, 0.0, 0.0);
    glVertex3f(1600.0, 0.0, 0.0);
    glVertex3f(1500.0, 300.0, 0.0);
    glVertex3f(1300.0, 300.0, 0.0);
    glEnd();

    //upper water fall black line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1305.0, 438.0, 0.0);
    glVertex3f(1475.0, 455.0, 0.0);
    glEnd();

    //mounain dividing black line water fall part
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1300.0, 300.0, 0.0);
    glVertex3f(1500.0, 300.0, 0.0);
    glEnd();

    //water fall vertical black lines

    //back mountain left bottom line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1320.0, 300.0, 0.0);
    glVertex3f(1330.0, 430.0, 0.0);
    glEnd();

    //back mountain left upper line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1360.0, 450.0, 0.0);
    glVertex3f(1370.0, 550.0, 0.0);
    glEnd();

    //back mountain middle lower line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1400.0, 340.0, 0.0);
    glVertex3f(1400.0, 440.0, 0.0);
    glEnd();

    //back mountain right line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1460.0, 360.0, 0.0);
    glVertex3f(1440.0, 550.0, 0.0);
    glEnd();


    //front mountain left line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1370.0, 100.0, 0.0);
    glVertex3f(1340.0, 280.0, 0.0);
    glEnd();

    //front mountain middle line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1450.0, 100.0, 0.0);
    glVertex3f(1420.0, 230.0, 0.0);
    glEnd();

    //front mountain right line water fall
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(1550.0, 50.0, 0.0);
    glVertex3f(1480.0, 250.0, 0.0);
    glEnd();
   ///water fall ends
}

void houseLand(void){
    ///house land starts
    glBegin(GL_POLYGON);
    glColor3ub(78, 186, 63);
    glVertex3f(0.0, 180.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(150.0, 250.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(650.0, 250.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(750.0, 230.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(800.0, 200.0, 0.0);
    glColor3ub(255, 255, 255);
    glVertex3f(1000.0, 200.0, 0.0);
    glColor3ub(78, 186, 63);
    glVertex3f(1100.0, 150.0, 0.0);
    glVertex3f(1200.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();

    //left bttom house front line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(50.0, 50.0, 0.0);
    glVertex3f(600.0, 50.0, 0.0);
    glEnd();

    //left upper house front line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(80.0, 100.0, 0.0);
    glVertex3f(450.0, 100.0, 0.0);
    glEnd();

    //right upper house front line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(400.0, 150.0, 0.0);
    glVertex3f(1000.0, 150.0, 0.0);
    glEnd();

    //right middle house front line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(550.0, 90.0, 0.0);
    glVertex3f(900.0, 90.0, 0.0);
    glEnd();

    //right bottom house front line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(650.0, 30.0, 0.0);
    glVertex3f(1100.0, 30.0, 0.0);
    glEnd();
    ///house land ends
}

float ps1 = 600;

float ps2 = 650;

float ps3 = 700;
void steam(void){
    ///steam starts
    glColor3ub(255, 255, 255);
    circle(30, 5, 565, ps1);
    circle(25, 4, 565, ps2);
    circle(20, 3, 565, ps3);

    if(ps1<=700){
        ps1=ps1+0.005;
        ps2=ps2+0.005;
        ps3 = ps3 + 0.005;
        }


        else {
            ps1 = 600;
            ps2 = 650;
            ps3 = 700;
    }

    ///steam ends
}

void house(void){
    ///house starts

    //house front part
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex3f(300.0, 230.0, 0.0);
    glVertex3f(650.0, 230.0, 0.0);
    glVertex3f(650.0, 380.0, 0.0);
    glVertex3f(300.0, 380.0, 0.0);
    glEnd();

    //house side part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex3f(250.0, 240.0, 0.0);
    glVertex3f(300.0, 230.0, 0.0);
    glVertex3f(300.0, 380.0, 0.0);
    glVertex3f(250.0, 390.0, 0.0);
    glEnd();

    //front roof
    glBegin(GL_POLYGON);
    glColor3ub(245, 242, 242);
    glVertex3f(300.0, 380.0, 0.0);
    glVertex3f(650.0, 380.0, 0.0);
    glVertex3f(600.0, 450.0, 0.0);
    glVertex3f(350.0, 450.0, 0.0);
    glEnd();

    //side roof
    glBegin(GL_POLYGON);
    glColor3ub(168, 168, 165);
    glVertex3f(300.0, 380.0, 0.0);
    glVertex3f(350.0, 450.0, 0.0);
    glVertex3f(250.0, 390.0, 0.0);
    glEnd();

    //front door
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(360.0, 230.0, 0.0);
    glVertex3f(410.0, 230.0, 0.0);
    glVertex3f(410.0, 320.0, 0.0);
    glVertex3f(360.0, 320.0, 0.0);
    glEnd();

    //front door coross vertical line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(385.0, 230.0, 0.0);
    glVertex3f(385.0, 320.0, 0.0);
    glEnd();

    //front door coross horizontal line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(360.0, 275.0, 0.0);
    glVertex3f(410.0, 275.0, 0.0);
    glEnd();

    //front window left
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(470.0, 265.0, 0.0);
    glVertex3f(520.0, 265.0, 0.0);
    glVertex3f(520.0, 295.0, 0.0);
    glVertex3f(470.0, 295.0, 0.0);
    glEnd();

    //front window left cross horizontal
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(470.0, 280.0, 0.0);
    glVertex3f(520.0, 280.0, 0.0);
    glEnd();


    //front window left cross vertical
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(495.0, 265.0, 0.0);
    glVertex3f(495.0, 295.0, 0.0);
    glEnd();

    //front window right
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(570.0, 265.0, 0.0);
    glVertex3f(620.0, 265.0, 0.0);
    glVertex3f(620.0, 295.0, 0.0);
    glVertex3f(570.0, 295.0, 0.0);
    glEnd();

    //front window right cross horizontal
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(570.0, 280.0, 0.0);
    glVertex3f(620.0, 280.0, 0.0);
    glEnd();


    //front window right cross vertical
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(595.0, 265.0, 0.0);
    glVertex3f(595.0, 295.0, 0.0);
    glEnd();

    //front window right
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(260.0, 280.0, 0.0);
    glVertex3f(290.0, 270.0, 0.0);
    glVertex3f(290.0, 310.0, 0.0);
    glVertex3f(260.0, 310.0, 0.0);
    glEnd();

    //front window right cross horizontal
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(260.0, 295.0, 0.0);
    glVertex3f(290.0, 292.0, 0.0);
    glEnd();


    //front window right cross vertical
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(275.0, 275.0, 0.0);
    glVertex3f(275.0, 310.0, 0.0);
    glEnd();

    //fire chimney tube/pipe
    glBegin(GL_POLYGON);
    glColor3ub(140, 123, 123);
    glVertex3f(545.0, 450.0, 0.0);
    glVertex3f(580.0, 450.0, 0.0);
    glVertex3f(580.0, 550.0, 0.0);
    glVertex3f(545.0, 550.0, 0.0);

    glEnd();

    //fire chimney cap
    glBegin(GL_POLYGON);
    glColor3ub(82, 59, 59);
    glVertex3f(538.0, 550.0, 0.0);
    glVertex3f(588.0, 550.0, 0.0);
    glVertex3f(563.0, 600.0, 0.0);
    glEnd();

    ///house ends


}
void abiesGenus(void){
    ///tree begin

    //tree main branch
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(850.0, 180.0, 0.0);
    glVertex3f(920.0, 180.0, 0.0);
    glVertex3f(900.0, 350.0, 0.0);
    glVertex3f(870.0, 350.0, 0.0);
    glEnd();

    //tree main branch vertical line
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(895.0, 190.0, 0.0);
    glVertex3f(895.0, 350.0, 0.0);
    glEnd();

    //tree leaf bottom 0
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(810.0, 250.0, 0.0);
    glVertex3f(960.0, 250.0, 0.0);
    glVertex3f(885, 300.0, 0.0);
    glEnd();

    //tree leaf bottom 1
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(815.0, 270.0, 0.0);
    glVertex3f(955.0, 270.0, 0.0);
    glVertex3f(885, 320.0, 0.0);
    glEnd();

    //tree leaf bottom 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(820.0, 290.0, 0.0);
    glVertex3f(950.0, 290.0, 0.0);
    glVertex3f(885, 340.0, 0.0);
    glEnd();

    //tree leaf bottom 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(825.0, 310.0, 0.0);
    glVertex3f(945.0, 310.0, 0.0);
    glVertex3f(885, 360.0, 0.0);
    glEnd();

    //tree leaf bottom 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(830.0, 330.0, 0.0);
    glVertex3f(940.0, 330.0, 0.0);
    glVertex3f(885, 380.0, 0.0);
    glEnd();

    //tree leaf bottom 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(835.0, 350.0, 0.0);
    glVertex3f(935.0, 350.0, 0.0);
    glVertex3f(885, 400.0, 0.0);
    glEnd();

    //tree leaf bottom 6
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(840.0, 370.0, 0.0);
    glVertex3f(930.0, 370.0, 0.0);
    glVertex3f(885, 420.0, 0.0);
    glEnd();

    //tree leaf bottom 7
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(845.0, 390.0, 0.0);
    glVertex3f(925.0, 390.0, 0.0);
    glVertex3f(885, 440.0, 0.0);
    glEnd();


    //tree leaf bottom 8
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(850.0, 410.0, 0.0);
    glVertex3f(920.0, 410.0, 0.0);
    glVertex3f(885, 460.0, 0.0);
    glEnd();

    //tree leaf bottom 7
    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 0);
    glVertex3f(855.0, 430.0, 0.0);
    glVertex3f(915.0, 430.0, 0.0);
    glVertex3f(885, 480.0, 0.0);
    glEnd();

    ///tree ends
}

void display(void)

{

/* clear all pixels */

    glClear (GL_COLOR_BUFFER_BIT);

    mainBackground();
    backgorund();
    star();
    moon();
    mountain();
    waterFall();
    houseLand();
    house();
    steam();
    abiesGenus();


    glutPostRedisplay();
	//start processing buffered OpenGL routines
    glutSwapBuffers ();

}

void init (void)

{

    glClearColor (1.000, 1.000, 1.000, 0.0); /* select clearing (background) color */
    glMatrixMode(GL_PROJECTION);/* initialize viewing values */
    glLoadIdentity();


    glOrtho(0.0, 1920.0, 0.0, 1080.0, -1.0, 0.0);

}

int main(int argc, char** argv)

{
    PlaySound("Lapland Aroura Sound.wav", NULL, SND_ASYNC|SND_FILENAME);
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1920, 1080);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("CG Lab Project: Aurora 173-15-10268 Md Shafiul Alam");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}

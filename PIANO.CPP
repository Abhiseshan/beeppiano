/*
 BEEP PIANO 1.0
 Abhiseshan
*/

# include <iostream.h>
# include <dos.h>
# include <conio.h>
# include <stdio.h>
# include <process.h>
# include <graphics.h>

void ui(char key)
{
rectangle(0,400,100,200);
rectangle(50,400,50,200);
rectangle(100,400,50,200);
rectangle(150,400,50,200);
rectangle(200,400,50,200);
rectangle(250,400,50,200);
rectangle(300,400,50,200);
rectangle(350,400,50,200);
rectangle(400,400,50,200);
rectangle(450,400,50,200);
rectangle(400,400,50,200);
rectangle(450,400,50,200);
rectangle(500,400,50,200);
rectangle(550,400,50,200);
setfillstyle(SOLID_FILL,WHITE);
bar(0,150,550,198);
if(key=='a' || key=='A') { setfillstyle(SOLID_FILL,WHITE); bar(0,400,50,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(0,449,49,201); rectangle(0,400,50,200);}
if(key=='s' || key=='S') { setfillstyle(SOLID_FILL,WHITE); bar(50,400,100,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(51,401,99,199);  rectangle(100,400,50,200);}
if(key=='d' || key=='D') { setfillstyle(SOLID_FILL,WHITE); bar(100,400,150,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(101,401,149,199);  rectangle(150,400,50,200);}
if(key=='f' || key=='F') { setfillstyle(SOLID_FILL,WHITE);bar(150,400,200,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(151,401,199,199);  rectangle(200,400,50,200);}
if(key=='g' || key=='G') { setfillstyle(SOLID_FILL,WHITE);bar(200,400,250,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(201,401,249,199);  rectangle(250,400,50,200);}
if(key=='h' || key=='H') { setfillstyle(SOLID_FILL,WHITE);bar(250,400,300,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(251,401,299,199);  rectangle(300,400,50,200);}
if(key=='j' || key=='J') { setfillstyle(SOLID_FILL,WHITE);bar(300,400,350,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(301,401,349,199);  rectangle(350,400,50,200);}
if(key=='k' || key=='K') { setfillstyle(SOLID_FILL,WHITE);bar(350,400,400,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(351,401,399,199);  rectangle(400,400,50,200);}
if(key=='l' || key=='L') { setfillstyle(SOLID_FILL,WHITE);bar(400,400,450,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(401,401,449,199);  rectangle(450,400,50,200);}
if(key==';') { setfillstyle(SOLID_FILL,WHITE);bar(450,400,500,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(451,401,499,199);  rectangle(500,400,50,200);}
if(key=='\'') { setfillstyle(SOLID_FILL,WHITE);bar(500,400,550,200);  delay(200); setfillstyle(EMPTY_FILL,WHITE); bar(501,401,549,199);  rectangle(550,400,50,200);}
}

void uimusic1()
{
cleardevice();
outtextxy(100, 90, " ||||                  ");
outtextxy(100, 100, "  |||||               ");
outtextxy(100, 110, "  ||  ||              ");
outtextxy(100, 120, "   ||  ||             ");
outtextxy(100, 130, "    || |||            ");
outtextxy(100, 140, "    || |||            ");
outtextxy(100, 150, "     |||||            ");
outtextxy(100, 160, "     ||||             ");
outtextxy(100, 170, "    ||||              ");
outtextxy(100, 180, "   ||| ||  |||        ");
outtextxy(100, 190, "  |||   |||||||||     ");
outtextxy(100, 200, " ||||  ||||   ||||    ");
outtextxy(100, 210, " |||  |||| ||| |||    ");
outtextxy(100, 220, "||||  |||||||||  |||  ");
outtextxy(100, 230, " |||  ||| ||  |  |||  ");
outtextxy(100, 240, " ||||  ||||||||  ||   ");
outtextxy(100, 250, "  ||||    |||  |||    ");
outtextxy(100, 260, "   ||||||   |||||     ");
outtextxy(100, 270, "     ||||||||||       ");
outtextxy(100, 280, "        ||| |||       ");
outtextxy(100, 290, "       ||||| ||       ");
outtextxy(100, 300, "       |||   ||       ");
outtextxy(100, 310, "         |||||        ");
outtextxy(300, 150, "Now Playing");
outtextxy(320, 160, "Super Mario Brothers");
}

void uimusic2(){
cleardevice();
outtextxy(100, 120, "          ||          ");
outtextxy(100, 130, "          ||          ");
outtextxy(100, 140, "         ||||         ");
outtextxy(100, 150, "         |||||        ");
outtextxy(100, 160, "         ||  ||       ");
outtextxy(100, 170, "         ||  ||       ");
outtextxy(100, 180, "         || |||       ");
outtextxy(100, 190, "  |||| ||  ||         ");
outtextxy(100, 200, " ||||||||| ||         ");
outtextxy(100, 210, "   ||||||||           ");
outtextxy(100, 220, "    ||||||            ");
outtextxy(270, 150, "Now Playing");
outtextxy(290, 160, "Imperial March");
}

void uimusic3(){
cleardevice();
outtextxy(100, 100, "                     ||| ");
outtextxy(100, 110, "                 ||||||  ");
outtextxy(100, 120, "              |||||||||  ");
outtextxy(100, 130, "           |||||||   ||  ");
outtextxy(100, 140, "       ||||||||      ||  ");
outtextxy(100, 150, "    ||||||||||       ||  ");
outtextxy(100, 160, "  ||||||||   ||       || ");
outtextxy(100, 170, "   |||||     ||   |||||| ");
outtextxy(100, 180, "   ||        ||  ||||||| ");
outtextxy(100, 190, "  |||     ||||   |||||   ");
outtextxy(100, 200, "    ||   ||||||          ");
outtextxy(100, 210, "    ||   ||||||          ");
outtextxy(100, 220, "     ||  ||||            ");
outtextxy(100, 230, " ||||||                  ");
outtextxy(100, 240, "|||||||                  ");
outtextxy(100, 250, "||||||                   ");
outtextxy(350, 150, "Now Playing");
outtextxy(370, 160, "Pink Panther");
}

void uimusic4(){
cleardevice();
outtextxy(100, 90, "            #####             ");
outtextxy(100, 100, "             ####             ");
outtextxy(100, 110, "             ###              ");
outtextxy(100, 120, "             ###              ");
outtextxy(100, 130, "             ###              ");
outtextxy(100, 140, "             ###              ");
outtextxy(100, 150, "             ###              ");
outtextxy(100, 160, "             ###              ");
outtextxy(100, 170, "             ###  ##          ");
outtextxy(100, 180, "             ###  #  #        ");
outtextxy(100, 190, "             ###   #  #       ");
outtextxy(100, 200, "             ###   #   #      ");
outtextxy(100, 210, "             ###   #    #     ");
outtextxy(100, 220, "       ##    ###  #    #      ");
outtextxy(100, 230, "      #  #  ######    #       ");
outtextxy(100, 240, "       #   ##     #   ###     ");
outtextxy(100, 250, "       #    #####    ##       ");
outtextxy(100, 260, "        #           ####      ");
outtextxy(100, 270, "         #         ###        ");
outtextxy(100, 280, "         ##       ###         ");
outtextxy(100, 290, "        ##         ###");
outtextxy(100, 300, "       ##           ###");
outtextxy(100, 310, "      ##      ##     ##");
outtextxy(100, 320, "     ##     #     #   ##");
outtextxy(100, 330, "     ##      ####      ##");
outtextxy(100, 340, "      ###                ##");
outtextxy(100, 350, "      ##               ###");
outtextxy(100, 360, "       ###            ###");
outtextxy(100, 370, "         ####        ###");
outtextxy(100, 380, "           ##########");
outtextxy(350, 250, "Now Playing");
outtextxy(370, 260, "Sweet Child Of Mine");
}

void uiquit()
{
cleardevice();
outtextxy(100, 120, "                              ()");
outtextxy(100, 130, "                           () |");
outtextxy(100, 140, "                    _      |  |");
outtextxy(100, 150, "                   |       |.'                         THANK YOU");
outtextxy(100, 160, "                   |       '");
outtextxy(100, 170, "      __          ()   \    ");
outtextxy(100, 180, "    ('__`>           .  \  | / ");
outtextxy(100, 190, "    // -(         ,   `. \ |");
outtextxy(100, 200, "    /:_ /        /   ___________");
outtextxy(100, 210, "     /_;\       /____\__________)____________");
outtextxy(100, 220, "    / ) \\,-_  /                       \\  \ `.");
outtextxy(100, 230, "    | |  \\(\\J                        \\  \  |");
outtextxy(100, 240, "    |  \_J,)|~                         \\  \  ;");
outtextxy(100, 250, "     \._/' `|_______________,------------+-+-'");
outtextxy(100, 260, "      `.___.  \     ||| /                | |");
outtextxy(100, 270, "     |_..__.'. \    |||/                 | |");
outtextxy(100, 280, "       ||  || \_\__ |||                  `.|");
outtextxy(100, 290, "       ||  ||  \_-'=|||                   ||");
delay(2000);
}

void mario()
{
sound(660);  delay(100);  nosound();
delay(150);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(510);  delay(100);  nosound();
delay(100);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(770);  delay(100);  nosound();
delay(550);  nosound();
sound(380);  delay(100);  nosound();
delay(575);  nosound();

sound(510);  delay(100);  nosound();
delay(450);  nosound();
sound(380);  delay(100);  nosound();
delay(400);  nosound();
sound(320);  delay(100);  nosound();
delay(500);  nosound();
sound(440);  delay(100);  nosound();
delay(300);  nosound();
sound(480);  delay(80);  nosound();
delay(330);  nosound();
sound(450);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(200);  nosound();
sound(660);  delay(80);  nosound();
delay(200);  nosound();
sound(760);  delay(50);  nosound();
delay(150);  nosound();
sound(860);  delay(100);  nosound();
delay(300);  nosound();
sound(700);  delay(80);  nosound();
delay(150);  nosound();
sound(760);  delay(50);  nosound();
delay(350);  nosound();
sound(660);  delay(80);  nosound();
delay(300);  nosound();
sound(520);  delay(80);  nosound();
delay(150);  nosound();
sound(580);  delay(80);  nosound();
delay(150);  nosound();
sound(480);  delay(80);  nosound();
delay(500);  nosound();

sound(510);  delay(100);  nosound();
delay(450);  nosound();
sound(380);  delay(100);  nosound();
delay(400);  nosound();
sound(320);  delay(100);  nosound();
delay(500);  nosound();
sound(440);  delay(100);  nosound();
delay(300);  nosound();
sound(480);  delay(80);  nosound();
delay(330);  nosound();
sound(450);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(200);  nosound();
sound(660);  delay(80);  nosound();
delay(200);  nosound();
sound(760);  delay(50);  nosound();
delay(150);  nosound();
sound(860);  delay(100);  nosound();
delay(300);  nosound();
sound(700);  delay(80);  nosound();
delay(150);  nosound();
sound(760);  delay(50);  nosound();
delay(350);  nosound();
sound(660);  delay(80);  nosound();
delay(300);  nosound();
sound(520);  delay(80);  nosound();
delay(150);  nosound();
sound(580);  delay(80);  nosound();
delay(150);  nosound();
sound(480);  delay(80);  nosound();
delay(500);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(150);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(100);  nosound();
sound(570);  delay(100);  nosound();
delay(220);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(200);  nosound();
delay(300);  nosound();

sound(1020);  delay(80);  nosound();
delay(300);  nosound();
sound(1020);  delay(80);  nosound();
delay(150);  nosound();
sound(1020);  delay(80);  nosound();
delay(300);  nosound();

sound(380);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(150);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(100);  nosound();
sound(570);  delay(100);  nosound();
delay(420);  nosound();

sound(585);  delay(100);  nosound();
delay(450);  nosound();

sound(550);  delay(100);  nosound();
delay(420);  nosound();

sound(500);  delay(100);  nosound();
delay(360);  nosound();

sound(380);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(150);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(100);  nosound();
sound(570);  delay(100);  nosound();
delay(220);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(200);  nosound();
delay(300);  nosound();

sound(1020);  delay(80);  nosound();
delay(300);  nosound();
sound(1020);  delay(80);  nosound();
delay(150);  nosound();
sound(1020);  delay(80);  nosound();
delay(300);  nosound();

sound(380);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(760);  delay(100);  nosound();
delay(100);  nosound();
sound(720);  delay(100);  nosound();
delay(150);  nosound();
sound(680);  delay(100);  nosound();
delay(150);  nosound();
sound(620);  delay(150);  nosound();
delay(300);  nosound();

sound(650);  delay(150);  nosound();
delay(300);  nosound();
sound(380);  delay(100);  nosound();
delay(150);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();

sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(430);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(100);  nosound();
sound(570);  delay(100);  nosound();
delay(420);  nosound();

sound(585);  delay(100);  nosound();
delay(450);  nosound();

sound(550);  delay(100);  nosound();
delay(420);  nosound();

sound(500);  delay(100);  nosound();
delay(360);  nosound();

sound(380);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();
sound(500);  delay(100);  nosound();
delay(150);  nosound();
sound(500);  delay(100);  nosound();
delay(300);  nosound();

sound(500);  delay(60);  nosound();
delay(150);  nosound();
sound(500);  delay(80);  nosound();
delay(300);  nosound();
sound(500);  delay(60);  nosound();
delay(350);  nosound();
sound(500);  delay(80);  nosound();
delay(150);  nosound();
sound(580);  delay(80);  nosound();
delay(350);  nosound();
sound(660);  delay(80);  nosound();
delay(150);  nosound();
sound(500);  delay(80);  nosound();
delay(300);  nosound();
sound(430);  delay(80);  nosound();
delay(150);  nosound();
sound(380);  delay(80);  nosound();
delay(600);  nosound();

sound(500);  delay(60);  nosound();
delay(150);  nosound();
sound(500);  delay(80);  nosound();
delay(300);  nosound();
sound(500);  delay(60);  nosound();
delay(350);  nosound();
sound(500);  delay(80);  nosound();
delay(150);  nosound();
sound(580);  delay(80);  nosound();
delay(150);  nosound();
sound(660);  delay(80);  nosound();
delay(550);  nosound();

sound(870);  delay(80);  nosound();
delay(325);  nosound();
sound(760);  delay(80);  nosound();
delay(600);  nosound();

sound(500);  delay(60);  nosound();
delay(150);  nosound();
sound(500);  delay(80);  nosound();
delay(300);  nosound();
sound(500);  delay(60);  nosound();
delay(350);  nosound();
sound(500);  delay(80);  nosound();
delay(150);  nosound();
sound(580);  delay(80);  nosound();
delay(350);  nosound();
sound(660);  delay(80);  nosound();
delay(150);  nosound();
sound(500);  delay(80);  nosound();
delay(300);  nosound();
sound(430);  delay(80);  nosound();
delay(150);  nosound();
sound(380);  delay(80);  nosound();
delay(600);  nosound();

sound(660);  delay(100);  nosound();
delay(150);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(510);  delay(100);  nosound();
delay(100);  nosound();
sound(660);  delay(100);  nosound();
delay(300);  nosound();
sound(770);  delay(100);  nosound();
delay(550);  nosound();
sound(380);  delay(100);  nosound();
delay(575);  nosound();
cleardevice();
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,700,100);
outtextxy(0,0,"Enter the note to Play the Piano (a to ' on the keyboard)");
outtextxy(0,20,"    Songs Avaliable");
outtextxy(0,30,"    Super Mario - Press M");
outtextxy(0,40,"    Imperial March - Press I");
outtextxy(0,50,"    Pink Panther - Press P");
outtextxy(0,60,"    Sweet Child Of Mine - Press U");
outtextxy(0,80,"To quit - Press Q");}

void imp_march()
{
sound(500); delay(500); nosound();
delay(500); nosound();

sound(500); delay(500); nosound();
delay(500); nosound();

sound(500); delay(500); nosound();
delay(500); nosound();

sound(400); delay(500); nosound();
delay(400); nosound();

sound(600); delay(200); nosound();
delay(100); nosound();

sound(500); delay(500); nosound();
delay(500); nosound();

sound(400); delay(500); nosound();
delay(400); nosound();

sound(600); delay(200); nosound();
delay(100); nosound();

sound(500); delay(500); nosound();
delay(1000); nosound();



sound(750); delay(500); nosound();
delay(500); nosound();

sound(750); delay(500); nosound();
delay(500); nosound();

sound(750); delay(500); nosound();
delay(500); nosound();

sound(810); delay(500); nosound();
delay(400); nosound();

sound(600); delay(200); nosound();
delay(100); nosound();

sound(470); delay(500); nosound();
delay(500); nosound();

sound(400); delay(500); nosound();
delay(400); nosound();

sound(600); delay(200); nosound();
delay(100); nosound();

sound(500); delay(500); nosound();
delay(1000); nosound();
cleardevice();
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,700,100);
outtextxy(0,0,"Enter the note to Play the Piano (a to ' on the keyboard)");
outtextxy(0,20,"    Songs Avaliable");
outtextxy(0,30,"    Super Mario - Press M");
outtextxy(0,40,"    Imperial March - Press I");
outtextxy(0,50,"    Pink Panther - Press p");
outtextxy(0,60,"    Sweet Child Of Mine - Press U");
outtextxy(0,80,"To quit - Press Q");}

void pink()
{
sound(233); delay(250); nosound();
sound(246); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(2800); nosound();
sound(261); delay(900); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(233); delay(250); nosound();
sound(246); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(2800); nosound();
sound(261); delay(900); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(246); delay(250); nosound();
sound(246); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(246); delay(250); nosound();
sound(220); delay(2800); nosound();
sound(220); delay(900); nosound();
sound(220); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(233); delay(250); nosound();
sound(246); delay(450); nosound();
sound(30000); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(2800); nosound();
sound(261); delay(900); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(261); delay(250); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(261); delay(250); nosound();
sound(261); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(675); nosound();
sound(493); delay(250); nosound();
sound(392); delay(675); nosound();
sound(261); delay(250); nosound();
sound(329); delay(675); nosound();
sound(392); delay(250); nosound();
sound(369); delay(900); nosound();
sound(392); delay(250); nosound();
sound(349); delay(250); nosound();
sound(329); delay(250); nosound();
sound(261); delay(250); nosound();
sound(246); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(900); nosound();
sound(30000); delay(787); nosound();
sound(261); delay(250); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(261); delay(250); nosound();
sound(261); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(675); nosound();
sound(493); delay(250); nosound();
sound(392); delay(675); nosound();
sound(261); delay(250); nosound();
sound(329); delay(675); nosound();
sound(587); delay(250); nosound();
sound(554); delay(2800); nosound();
sound(554); delay(900); nosound();
sound(30000); delay(787); nosound();
sound(277); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(450); nosound();
sound(30000); delay(675); nosound();
sound(261); delay(250); nosound();
sound(261); delay(675); nosound();
sound(293); delay(250); nosound();
sound(329); delay(675); nosound();
sound(493); delay(250); nosound();
sound(392); delay(675); nosound();
sound(261); delay(250); nosound();
sound(329); delay(675); nosound();
sound(392); delay(250); nosound();
sound(369); delay(900); nosound();
sound(392); delay(250); nosound();
sound(349); delay(250); nosound();
sound(329); delay(250); nosound();
sound(261); delay(250); nosound();
sound(246); delay(250); nosound();
sound(261); delay(250); nosound();
sound(261); delay(900); nosound();
sound(30000); delay(1350); nosound();
sound(587); delay(675); nosound();
sound(523); delay(250); nosound();
sound(392); delay(675); nosound();
sound(349); delay(250); nosound();
sound(329); delay(675); nosound();
sound(261); delay(250); nosound();
sound(369); delay(250); nosound();
sound(349); delay(675); nosound();
sound(369); delay(250); nosound();
sound(349); delay(675); nosound();
sound(369); delay(250); nosound();
sound(349); delay(675); nosound();
sound(369); delay(250); nosound();
sound(349); delay(675); nosound();
sound(329); delay(250); nosound();
sound(261); delay(250); nosound();
sound(246); delay(250); nosound();
sound(261); delay(450); nosound();
sound(261); delay(450); nosound();
sound(261); delay(900); nosound();
sound(30000); delay(900); nosound();
sound(329); delay(250); nosound();
sound(261); delay(250); nosound();
sound(246); delay(250); nosound();
sound(261); delay(450); nosound();
sound(261); delay(450); nosound();
sound(261); delay(900); nosound();
sound(30000); delay(900); nosound();
sound(329); delay(250); nosound();
sound(261); delay(250); nosound();
sound(246); delay(250); nosound();
sound(261); delay(450); nosound();
sound(261); delay(450); nosound();
sound(261); delay(900); nosound();
cleardevice();
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,700,100);
outtextxy(0,0,"Enter the note to Play the Piano (a to ' on the keyboard)");
outtextxy(0,20,"    Songs Avaliable");
outtextxy(0,30,"    Super Mario - Press M");
outtextxy(0,40,"    Imperial March - Press I");
outtextxy(0,50,"    Pink Panther - Press P");
outtextxy(0,60,"    Sweet Child Of Mine - Press U");
outtextxy(0,80,"To quit - Press Q");
}

void swc()
{
sound(554.37); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(739.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(544.37); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(544.37); delay(3300); nosound();
sound(415.30); delay(3030); nosound();
sound(369.99); delay(3300); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(1108.73); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(733.99); delay(200); nosound();
sound(1479.98); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(1396.91); delay(200); nosound();
sound(838.61); delay(200); nosound();
sound(622.25); delay(200); nosound();
sound(227.18); delay(500); nosound();
cleardevice();
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,700,100);
outtextxy(0,0,"Enter the note to Play the Piano (a to ' on the keyboard)");
outtextxy(0,20,"    Songs Avaliable");
outtextxy(0,30,"    Super Mario - Press M");
outtextxy(0,40,"    Imperial March - Press I");
outtextxy(0,50,"    Pink Panther - Press P");
outtextxy(0,60,"    Sweet Child Of Mine - Press U");
outtextxy(0,80,"To quit - Press Q");
}

void main()
{
clrscr();
char note;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,700,100);
outtextxy(0,0,"Enter the note to Play the Piano (a to ' on the keyboard)");
outtextxy(0,20,"     Songs Avaliable");
outtextxy(0,30,"     Super Mario - Press M");
outtextxy(0,40,"     Imperial March - Press I");
outtextxy(0,50,"     Pink Panther - Press p");
outtextxy(0,60,"     Sweet Child Of Mine - Press U");
outtextxy(0,80,"To quit - Press Q");
do{
note = getch();
if (note=='a' || note == 'A') { sound (261);  delay(200);  nosound(); ui(note);}
if (note=='s' || note == 'S') { sound (293);  delay(200);  nosound(); ui(note);}
if (note=='d' || note == 'D') { sound (329);  delay(200);  nosound(); ui(note);}
if (note=='f' || note == 'F') { sound (349);  delay(200);  nosound(); ui(note);}
if (note=='g' || note == 'G') { sound (392);  delay(200);  nosound(); ui(note);}
if (note=='h' || note == 'H') { sound (440);  delay(200);  nosound(); ui(note);}
if (note=='j' || note == 'J') { sound (493);  delay(200);  nosound(); ui(note);}
if (note=='k' || note == 'K') { sound (523);  delay(200);  nosound(); ui(note);}
if (note=='l' || note == 'L') { sound (587);  delay(200);  nosound(); ui(note);}
if (note==';') { sound (659);  delay(200);  nosound(); ui(note);}
if (note=='\'') { sound (698);  delay(200);  nosound(); ui(note);}
if (note=='m' || note == 'M') { uimusic1(); mario();}
if (note=='i' || note == 'I') { uimusic2(); imp_march();}
if (note=='p' || note == 'P') { uimusic3(); pink();}
if (note=='u' || note == 'U') { uimusic4(); swc();}
if (note=='q' || note == 'Q') { uiquit(); exit(0);}
}while (note!='q' || note!='Q');
closegraph();
cout<<"Thank you for using"<<endl;
}
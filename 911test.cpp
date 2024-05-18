#include<graphics.h>

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,(char*)"");



    //plane
    //plane color
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(105,105,WHITE);

    //Body
    line(100,100,200,100);
    line(100,130,200,130);
    ellipse(200,110,0,100,25,10);
    ellipse(200,120,265,320,30,11);
    ellipse(224,118,270,90,10,9);
    ellipse(235,118,120,240,10,9);
    //Back
    ellipse(95,125,80,145,50,25);
    ellipse(95,106,215,280,50,25);
    ellipse(55,115,75,290,5,5);

    //Windows
    ellipse(205,95,250,325,20,20);
    ellipse(205,95,250,325,25,25);
    line(197,113,197,118);
    line(208,114,208,119);
    line(216,111,216,115);
    for (int i = 0; i <= 72; i=i+12) {
        circle(113+i, 115,4);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(113+i, 115, WHITE);
    }

    //Wings
    //front
    line(180,125,120,175);
    line(140,125,100,175);
    line(100,175,120,175);
    line(180,125,140,125);

    line(178,100,155,70);
    line(155,100,140,70);
    line(140,70,155,70);

    //back
    line(80,120,50,145);
    line(65,120,40,145);
    line(40,145,50,145);
    line(65,120,80,120);

    line(60,107,55,75);
    line(75,101,65,75);
    line(55,75,65,75);

    line(58,101,50,95);
    line(57,95,50,95);

    //fans
    line(132,165,152,165);
    line(143,155,152,155);
    ellipse(152,160,270,90,5,6);
    circle(151,160,4);

    line(155,145,172,145);
    line(163,140,172,140);
    ellipse(172,143,270,90,2,3);
    circle(170,143,2);

    line(166,85,173,85);
    ellipse(171,88,305,45,5,4);


    //tree
    //trunk
    rectangle(70,320,80,400);
    //branches
     line(80,340,100,300);
     line(80,350,100,310);
     line(100,300,100,310);

     line(70,350,58,320);
     line(70,360,50,320);
     line(50,320,58,320);
    //leaves
    circle(75,300,40);
    circle(100,305,25);
    circle(45,320,25);
    //color
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(75,350,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(75,325,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(70,300,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(70,330,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(70,300,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(102,305,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(120,305,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(45,320,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(40,320,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(5,5,WHITE);

    rectangle(220,320,230,400);
    //branches
     line(230,340,250,300);
     line(230,350,250,310);
     line(250,300,250,310);

     line(220,350,208,320);
     line(220,360,200,320);
     line(200,320,208,320);
    //leaves
    circle(225,300,40);
    circle(250,305,25);
    circle(195,320,25);
    //color
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(225,350,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(225,325,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(220,300,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(220,330,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(220,305,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(260,305,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(270,305,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(195,320,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(190,320,WHITE);

    //For Roads and Road lines
           	setcolor(WHITE);
        	line(1,450,700,450);

	       	rectangle(10,425,50,425);
           	rectangle(100,425,140,425);
        	rectangle(190,425,230,425);
        	rectangle(280,425,320,425);
        	rectangle(370,425,410,425);
        	rectangle(450,425,490,425);
        	rectangle(530,425,570,425);
        	rectangle(620,425,660,425);

    int plane_x = 0;

    while (plane_x<=110) {
        cleardevice(); // Clear previous frame

        //Cars
        line(270,370,300,370);
        line(270,370,265,377);
        line(300,370,305,377);

        line(255,382,265,377);
        line(255,382,255,395);
        line(255,395,265,395);

        line(315,382,305,377);
        line(315,382,315,395);
        line(315,395,305,395);

        line(275,395,295,395);
        line(285,390,285,375);
        //car window
        line(272,373,270,377);
        line(270,377,280,377);
        line(280,377,280,373);
        line(272,373,280,373);

        line(298,373,300,377);
        line(300,377,290,377);
        line(290,377,290,373);
        line(298,373,290,373);
        //car color
        setfillstyle(SOLID_FILL, RED);
        floodfill(290, 385, WHITE);

        //car wheel
        circle(270,395,5);
        circle(300,395,5);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(270, 395, WHITE);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(300, 395, WHITE);


        //cloud
        line(500-plane_x,48,580-plane_x,48);
        ellipse(505-plane_x,49,50,180,5,10);
        ellipse(510-plane_x,43,50,180,5,10);
        ellipse(520-plane_x,38,40,180,10,10);
        ellipse(540-plane_x,38,30,160,20,20);
        ellipse(550-plane_x,38,15,90,15,10);
        ellipse(560-plane_x,42,10,80,15,10);
        ellipse(575-plane_x,48,0,120,5,10);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(510-plane_x,45,WHITE);




        //plane color
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        floodfill(105 + plane_x, 105, WHITE);

        // Draw the plane
        // Body
        line(100 + plane_x, 100, 200 + plane_x, 100);
        line(100 + plane_x, 130, 200 + plane_x, 130);
        ellipse(200 + plane_x, 110, 0, 100, 25, 10);
        ellipse(200 + plane_x, 120, 265, 320, 30, 11);
        ellipse(224 + plane_x, 118, 270, 90, 10, 9);
        ellipse(235 + plane_x, 118, 120, 240, 10, 9);
        // Back
        ellipse(95 + plane_x, 125, 80, 145, 50, 25);
        ellipse(95 + plane_x, 106, 215, 280, 50, 25);
        ellipse(55 + plane_x, 115, 75, 290, 5, 5);

        // Windows
        ellipse(205 + plane_x, 95, 250, 325, 20, 20);
        ellipse(205 + plane_x, 95, 250, 325, 25, 25);
        line(197 + plane_x, 113, 197 + plane_x, 118);
        line(208 + plane_x, 114, 208 + plane_x, 119);
        line(216 + plane_x, 111, 216 + plane_x, 115);
        for (int i = 0; i <= 72; i = i + 12) {
            circle(113 + i + plane_x, 115, 4);
            setfillstyle(SOLID_FILL, BLUE);
            floodfill(113 + i + plane_x, 115, WHITE);
        }

        // Wings
        // Front
        line(180 + plane_x, 125, 120 + plane_x, 175);
        line(140 + plane_x, 125, 100 + plane_x, 175);
        line(100 + plane_x, 175, 120 + plane_x, 175);
        line(180 + plane_x, 125, 140 + plane_x, 125);

        line(178 + plane_x, 100, 155 + plane_x, 70);
        line(155 + plane_x, 100, 140 + plane_x, 70);
        line(140 + plane_x, 70, 155 + plane_x, 70);

        // Back
        line(80 + plane_x, 120, 50 + plane_x, 145);
        line(65 + plane_x, 120, 40 + plane_x, 145);
        line(40 + plane_x, 145, 50 + plane_x, 145);
        line(65 + plane_x, 120, 80 + plane_x, 120);

        line(60 + plane_x, 107, 55 + plane_x, 75);
        line(75 + plane_x, 101, 65 + plane_x, 75);
        line(55 + plane_x, 75, 65 + plane_x, 75);

        line(58 + plane_x, 101, 50 + plane_x, 95);
        line(57 + plane_x, 95, 50 + plane_x, 95);

        // Fans
        line(132 + plane_x, 165, 152 + plane_x, 165);
        line(143 + plane_x, 155, 152 + plane_x, 155);
        ellipse(152 + plane_x, 160, 270, 90, 5, 6);
        circle(151 + plane_x, 160, 4);

        line(155 + plane_x, 145, 172 + plane_x, 145);
        line(163 + plane_x, 140, 172 + plane_x, 140);
        ellipse(172 + plane_x, 143, 270, 90, 2, 3);
        circle(170 + plane_x, 143, 2);

        line(166 + plane_x, 85, 173 + plane_x, 85);
        ellipse(171 + plane_x, 88, 305, 45, 5, 4);

        // Move the plane to the right
        plane_x += 2;

        // Delay to control the speed of the animation
        delay(30);

        // Redraw the updated frame
        // tree
        // trunk
        rectangle(70, 320, 80, 400);
        // branches
        line(80, 340, 100, 300);
        line(80, 350, 100, 310);
        line(100, 300, 100, 310);

        line(70, 350, 58, 320);
        line(70, 360, 50, 320);
        line(50, 320, 58, 320);
        // leaves
        circle(75, 300, 40);
        circle(100, 305, 25);
        circle(45, 320, 25);
        // color
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(75, 350, WHITE);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(75, 325, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(70, 300, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(70, 330, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(70, 300, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(102, 305, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(120, 305, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(45, 320, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(40, 320, WHITE);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(5, 5, WHITE);

        rectangle(220, 320, 230, 400);
        // branches
        line(230, 340, 250, 300);
        line(230, 350, 250, 310);
        line(250, 300, 250, 310);

        line(220, 350, 208, 320);
        line(220, 360, 200, 320);
        line(200, 320, 208, 320);
        // leaves
        circle(225, 300, 40);
        circle(250, 305, 25);
        circle(195, 320, 25);
        // color
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(225, 350, WHITE);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(225, 325, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(220, 300, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(220, 330, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(220, 305, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(260, 305, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(270, 305, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(195, 320, WHITE);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(190, 320, WHITE);
        //buildings
        rectangle(340,400,390,120);
        line(390,120,400,130);
        line(400,130,400,400);

        rectangle(440,400,490,125);
        line(490,125,500,135);
        line(500,135,500,400);

        rectangle(368,120,371,80);

          //building1
      rectangle(345,140,355,130);
      rectangle(360,140,370,130);
      rectangle(375,140,385,130);

      rectangle(345,160,355,150);
      rectangle(360,160,370,150);
      rectangle(375,160,385,150);

      rectangle(345,180,355,170);
      rectangle(360,180,370,170);
      rectangle(375,180,385,170);

      rectangle(345,200,355,190);
      rectangle(360,200,370,190);
      rectangle(375,200,385,190);

      rectangle(345,220,355,210);
      rectangle(360,220,370,210);
      rectangle(375,220,385,210);

      rectangle(345,240,355,230);
      rectangle(360,240,370,230);
      rectangle(375,240,385,230);

      rectangle(345,260,355,250);
      rectangle(360,260,370,250);
      rectangle(375,260,385,250);

      rectangle(345,280,355,270);
      rectangle(360,280,370,270);
      rectangle(375,280,385,270);

      rectangle(345,300,355,290);
      rectangle(360,300,370,290);
      rectangle(375,300,385,290);

      rectangle(345,320,355,310);
      rectangle(360,320,370,310);
      rectangle(375,320,385,310);

      rectangle(345,340,355,330);
      rectangle(360,340,370,330);
      rectangle(375,340,385,330);

      rectangle(345,360,355,350);
      rectangle(360,360,370,350);
      rectangle(375,360,385,350);

      rectangle(345,380,355,370);
      rectangle(360,380,370,370);
      rectangle(375,380,385,370);

      //building2
      rectangle(445,145,455,135);
      rectangle(460,145,470,135);
      rectangle(475,145,485,135);

      rectangle(445,165,455,155);
      rectangle(460,165,470,155);
      rectangle(475,165,485,155);

      rectangle(445,185,455,175);
      rectangle(460,185,470,175);
      rectangle(475,185,485,175);

      rectangle(445,205,455,195);
      rectangle(460,205,470,195);
      rectangle(475,205,485,195);

      rectangle(445,225,455,215);
      rectangle(460,225,470,215);
      rectangle(475,225,485,215);

      rectangle(445,245,455,235);
      rectangle(460,245,470,235);
      rectangle(475,245,485,235);

      rectangle(445,265,455,255);
      rectangle(460,265,470,255);
      rectangle(475,265,485,255);

      rectangle(445,285,455,275);
      rectangle(460,285,470,275);
      rectangle(475,285,485,275);

      rectangle(445,305,455,295);
      rectangle(460,305,470,295);
      rectangle(475,305,485,295);

      rectangle(445,325,455,315);
      rectangle(460,325,470,315);
      rectangle(475,325,485,315);

      rectangle(445,345,455,335);
      rectangle(460,345,470,335);
      rectangle(475,345,485,335);

      rectangle(445,365,455,355);
      rectangle(460,365,470,355);
      rectangle(475,365,485,355);

      rectangle(445,385,455,375);
      rectangle(460,385,470,375);
      rectangle(475,385,485,375);



        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(345,390,WHITE);
        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(455,390,WHITE);


        //bg buildings
          rectangle(530, 200, 610, 400); // Coordinates for building
          line(530,230,610,230);
          line (530,260,610,260);
          line (530,290,610,290);
          rectangle(560,350,580,400);


          rectangle(540,210,550,220);
          rectangle(545,210,555,220);
          rectangle(550,210,560,220);
          rectangle(555,210,565,220);
          rectangle(560,210,570,220);
          rectangle(565,210,575,220);
          rectangle(570,210,580,220);
          rectangle(575,210,585,220);
          rectangle(580,210,590,220);
          rectangle(585,210,595,220);
          rectangle(590,210,600,220);


          rectangle(540,240,550,250);
          rectangle(545,240,555,250);
          rectangle(550,240,560,250);
          rectangle(555,240,565,250);
          rectangle(560,240,570,250);
          rectangle(565,240,575,250);
          rectangle(570,240,580,250);
          rectangle(575,240,585,250);
          rectangle(580,240,590,250);
          rectangle(585,240,595,250);
          rectangle(590,240,600,250);


          rectangle(540,270,550,280);
          rectangle(545,270,555,280);
          rectangle(550,270,560,280);
          rectangle(555,270,565,280);
          rectangle(560,270,570,280);
          rectangle(565,270,575,280);
          rectangle(570,270,580,280);
          rectangle(575,270,585,280);
          rectangle(580,270,590,280);
          rectangle(585,270,595,280);
          rectangle(590,270,600,280);

          setfillstyle(SOLID_FILL,LIGHTRED);
          floodfill(605,395,WHITE);
          setfillstyle(SOLID_FILL,LIGHTRED);
          floodfill(605,285,WHITE);
          setfillstyle(SOLID_FILL,LIGHTRED);
          floodfill(605,255,WHITE);
          setfillstyle(SOLID_FILL,LIGHTRED);
          floodfill(605,225,WHITE);





        // For Roads and Road lines
        setcolor(WHITE);
        line(1, 450, 700, 450);

        rectangle(10, 425, 50, 425);
        rectangle(100, 425, 140, 425);
        rectangle(190, 425, 230, 425);
        rectangle(280, 425, 320, 425);
        rectangle(370, 425, 410, 425);
        rectangle(450, 425, 490, 425);
        rectangle(530, 425, 570, 425);
        rectangle(620, 425, 660, 425);
        line(1,400,700,400);


        // Refresh the screen
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}

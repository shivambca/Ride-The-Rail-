#include   <stdio.h>
#include   <conio.h>
#include<graphics.h>
#include     <dos.h>
void main()
	{
	clrscr();
	gotoxy(400,50);
	printf("\t\t\t/*=======About Programmer=======*/");
	delay(1000);
	gotoxy(	100,150);
	printf("\n\n\tMy name is Shivam Verma...");
	delay(3000);
	gotoxy(200,300);
	printf("\n\tI am doing BCA from IGNOU\n  Indira Gandhi National Open University");
	delay(5000);
  /*	gotoxy(400,300);
	printf("\nI am dedicating this program to my love,my life...my everythig is she..name Saher Siddiqui...<3");
	delay(5000);         */
	gotoxy(150,100);
	printf("\n\n\t\t\t/*=======About Program=======*/\n");
	delay(1000);
	gotoxy(350,240);
	printf("\nThis is the graphics program\n\t\t In which I am going to show you a intresting train video");
	delay(5000);
	gotoxy(300,350);
	printf("\nNow I am going to execute this program...\nLet's Enjoy..");
	gotoxy(300,450);
	delay(3000);
	printf("\n\tLoading Program..Please Wait a second..");
	delay(3000);

	int gd=DETECT, gm, i, j, k;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	gotoxy(300,300);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  Loading...");
	setcolor(YELLOW);
	rectangle(0,400,639,405);
	for(i=0;i<=640;i++)
		{
		setcolor(RED);
		line(1,401,i-1,401);
		line(1,402,i-1,402);
		line(1,403,i-1,403);
		line(1,404,i-1,404);
		if(i>=220 && i<=350)
			{
			delay(70);
			}
		delay(10);
		}

	for(i=8000;i>=-8000;i=i-10)
	{
	setcolor(WHITE);
	outtextxy(i,0,"ShivamSaher");
	setbkcolor(BLACK);
	line(0,250,700,250);                    // for track
	line(i+550,255,i+1000,250);	        // for track part
	line(0,140,700,140);                    // for wire
	outtextxy(i+500,118,"Overhead wire");   // for msg print
	outtextxy(i+500,128,"25,000v");		// for volt print
	setcolor(BLUE);
	line(0,240,200,240);			// bogie start---
	line(200,240,200,180);
	line(200,180,0,180);
	line(195,175,0,175);
	line(195,175,200,180);                  // ---here bogie has completed
	setcolor(13);
	outtextxy(0,184,"  Maha Bodhi Exp");
	setcolor(9);
	outtextxy(0,230," Delhi-->Hawrah");

	setcolor(WHITE);
	rectangle(90,203,120,218);    		// for windows of bogie
	rectangle(40,203,70,218);		// - - -
	rectangle(-10,203,20,218);		// - - -
	rectangle(140,190,160,240);		// for door
	rectangle(170,203,195,218);		// - - -

	/*      for coupling	*/

	circle(205,185,3);
	circle(210,185,3);
	line(200,230,215,230);
	line(207,185,207,230);

	/*	Loco design	*/

	setcolor(RED);
	line(215,240,470,240);
	line(470,240,470,220);
	line(215,185,430,185);
	line(430,185,470,220);
	line(215,240,215,185);
	line(250,182,324,182);
	setcolor(YELLOW);						    // pantograph stand
	line(250,182,225,165);
	line(249,183,224,166);
	line(225,165,250,143);
	line(224,164,249,142);
	setcolor(RED);
	line(392,197,392,238);			    // <- for gate handle
	line(406,197,406,238);
	rectangle(230,190,270,225);
	rectangle(390,195,408,240);

	/*	Loco graphics	*/

	setcolor(WHITE);
	outtextxy(220,140,"/==/==/");               // pantograph
	outtextxy(280,175,"/----!----#");
	outtextxy(245,176,"@");
	outtextxy(435,230,"WAP7");
	outtextxy(250,230,"Indian Railway");

	/*	Tyres of train & sleepers	*/

	outtextxy(406,242,"()()()");
	outtextxy(225,242,"()()()");
	outtextxy(130,242,"()()()");
	rectangle(i-150,250,i-150+5,255);
	rectangle(i-125,250,i-125+5,255);
	rectangle(i-100,250,i-100+5,255);
	rectangle(i-75,250,i-75+5,255);
	rectangle(i-50,250,i-50+5,255);
	rectangle(i-25,250,i-25+5,255);
	rectangle(i-2,250,i-2+5,255);
	rectangle(i+350,250,i+350+5,255);
	rectangle(i+325,250,i+325+5,255);
	rectangle(i+300,250,i+300+5,255);
	rectangle(i+275,250,i+275+5,255);
	rectangle(i+250,250,i+250+5,255);
	rectangle(i+225,250,i+225+5,255);
	rectangle(i+200,250,i+200+5,255);

	/*       Crosing       */

	setcolor(YELLOW);
	outtextxy(i,230,"|========stop========|");
	outtextxy(i,240,"|                    |");
	outtextxy(i,250,"|                    |");
	outtextxy(i,260,"|                    |");

	line(i-200,235,i-5,235);
	line(i-200,238,i-5,238);
	line(i-204,235,i-204,260);
	line(i-200,235,i-200,260);
	line(i+185,235,i+400,235);
	line(i+185,238,i+400,238);
	line(i+400,235,i+400,260);
	line(i+404,235,i+404,260);

	setcolor(WHITE);
	line(i,265,i-100,440);                        // for Road
	line(i+170,265,i+270,440);
	line(i+80,400,i+80,440);
	line(i+80-0,300,i+80,340);
	line(i+80,350,i+80,390);                      // here road completed

	/*	Signal		*/

	line(i-500,160,i-500,260);
	line(i-505,160,i-505,260);
	line(i-500,160,i-505,160);
	setcolor(RED);
	line(i-505,165,i-520,165);
	line(i-505,166,i-520,166);
	setcolor(WHITE);
	line(i-505,172,i-515,172);
	line(i-505,173,i-515,173);
	line(i-505,179,i-515,179);
	line(i-505,180,i-515,180);
	if(i>=700)
		{
		setcolor(GREEN);
		line(i-505,179,i-515,179);
		line(i-505,180,i-515,180);
		setcolor(WHITE);
		line(i-505,165,i-520,165);
		line(i-505,166,i-520,166);
		}

	line(i+500,160,i+500,260);
	line(i+505,160,i+505,260);
	line(i+500,160,i+505,160);
	setcolor(RED);
	line(i+505,165,i+520,165);
	line(i+505,166,i+520,166);
	setcolor(WHITE);
	line(i+505,172,i+515,172);
	line(i+505,173,i+515,173);
	line(i+505,179,i+515,179);
	line(i+505,180,i+515,180);

	line(i-4500,160,i-4500,260);
	line(i-4505,160,i-4505,260);
	line(i-4500,160,i-4505,160);
	setcolor(RED);
	line(i-4505,165,i-4520,165);
	line(i-4505,166,i-4520,166);
	setcolor(WHITE);
	line(i-4505,172,i-4515,172);
	line(i-4505,173,i-4515,173);
	line(i-4505,179,i-4515,179);
	line(i-4505,180,i-4515,180);

	line(i+4500,160,i+4500,260);
	line(i+4505,160,i+4505,260);
	line(i+4500,160,i+4505,160);
	setcolor(RED);
	line(i+4505,165,i+4520,165);
	line(i+4505,166,i+4520,166);
	setcolor(WHITE);
	line(i+4505,172,i+4515,172);
	line(i+4505,173,i+4515,173);
	line(i+4505,179,i+4515,179);
	line(i+4505,180,i+4515,180);

	line(i+4900,160,i+4900,260);
	line(i+4905,160,i+4905,260);
	line(i+4900,160,i+4905,160);
	setcolor(RED);
	line(i+4900,165,i+4885,165);
	line(i+4900,166,i+4885,166);
	setcolor(WHITE);
	line(i+4900,172,i+4890,172);
	line(i+4900,173,i+4890,173);
	line(i+4900,179,i+4890,179);
	line(i+4900,180,i+4890,180);
	if(i>=-4650)                           // Signal Changing
		{
		setcolor(GREEN);
		line(i+4900,179,i+4890,179);
		line(i+4900,180,i+4890,180);
		setcolor(WHITE);
		line(i+4900,165,i+4885,165);
		line(i+4900,166,i+4885,166);
		}

	line(i+7000,160,i+7000,260);
	line(i+7005,160,i+7005,260);
	line(i+7000,160,i+7005,160);
	setcolor(RED);
	line(i+7000,165,i+6985,165);
	line(i+7000,166,i+6985,166);
	setcolor(WHITE);
	line(i+7000,172,i+6990,172);
	line(i+7000,173,i+6990,173);
	line(i+7000,179,i+6990,179);
	line(i+7000,180,i+6990,180);
	if(i>=-6750)                           // Signal Changing
		{
		setcolor(GREEN);
		line(i+7000,179,i+6990,179);
		line(i+7000,180,i+6990,180);
		setcolor(WHITE);
		line(i+7000,165,i+6985,165);
		line(i+7000,166,i+6985,166);
		}

	/*    Electric Pole  	*/

	setcolor(WHITE);
	line(i-1000,100,i-1000,260);
	line(i-1010,100,i-1010,260);
	line(i-1000,100,i-1010,100);
	line(i-1010,105,i-1080,115);
	line(i-1010,106,i-1081,116);
	line(i-1010,125,i-1100,110);
	line(i-1010,126,i-1101,111);
	line(i-1025,123,i-1080,137);
	line(i-1026,124,i-1081,138);

	line(i-1600,100,i-1600,260);
	line(i-1610,100,i-1610,260);
	line(i-1600,100,i-1610,100);
	line(i-1610,105,i-1680,115);
	line(i-1610,106,i-1681,116);
	line(i-1610,125,i-1700,110);
	line(i-1610,126,i-1701,111);
	line(i-1625,123,i-1680,137);
	line(i-1626,124,i-1681,138);

	line(i-2200,100,i-2200,260);
	line(i-2210,100,i-2210,260);
	line(i-2200,100,i-2210,100);
	line(i-2210,105,i-2280,115);
	line(i-2210,106,i-2281,116);
	line(i-2210,125,i-2300,110);
	line(i-2210,126,i-2301,111);
	line(i-2225,123,i-2280,137);
	line(i-2226,124,i-2281,138);

	line(i-2800,100,i-2800,260);
	line(i-2810,100,i-2810,260);
	line(i-2800,100,i-2810,100);
	line(i-2810,105,i-2880,115);
	line(i-2810,106,i-2881,116);
	line(i-2810,125,i-2900,110);
	line(i-2810,126,i-2901,111);
	line(i-2825,123,i-2880,137);
	line(i-2826,124,i-2881,138);

	line(i-3400,100,i-3400,260);
	line(i-3410,100,i-3410,260);
	line(i-3400,100,i-3410,100);
	line(i-3410,105,i-3480,115);
	line(i-3410,106,i-3481,116);
	line(i-3410,125,i-3500,110);
	line(i-3410,126,i-3501,111);
	line(i-3425,123,i-3480,137);
	line(i-3426,124,i-3481,138);

	line(i-4000,100,i-4000,260);
	line(i-4010,100,i-4010,260);
	line(i-4000,100,i-4010,100);
	line(i-4010,105,i-4080,115);
	line(i-4010,106,i-4081,116);
	line(i-4010,125,i-4100,110);
	line(i-4010,126,i-4101,111);
	line(i-4025,123,i-4080,137);
	line(i-4026,124,i-4081,138);

	line(i-4700,100,i-4700,260);
	line(i-4710,100,i-4710,260);
	line(i-4700,100,i-4710,100);
	line(i-4710,105,i-4780,115);
	line(i-4710,106,i-4781,116);
	line(i-4710,125,i-4800,110);
	line(i-4710,126,i-4801,111);
	line(i-4725,123,i-4780,137);
	line(i-4726,124,i-4781,138);

	line(i-5400,100,i-5400,260);
	line(i-5410,100,i-5410,260);
	line(i-5400,100,i-5410,100);
	line(i-5410,105,i-5480,115);
	line(i-5410,106,i-5481,116);
	line(i-5410,125,i-5500,110);
	line(i-5410,126,i-5501,111);
	line(i-5425,123,i-5480,137);
	line(i-5426,124,i-5481,138);

	line(i-6100,100,i-6100,260);
	line(i-6110,100,i-6110,260);
	line(i-6100,100,i-6110,100);
	line(i-6110,105,i-6180,115);
	line(i-6110,106,i-6181,116);
	line(i-6110,125,i-6200,110);
	line(i-6110,126,i-6201,111);
	line(i-6125,123,i-6180,137);
	line(i-6126,124,i-6181,138);

	line(i-6800,100,i-6800,260);
	line(i-6810,100,i-6810,260);
	line(i-6800,100,i-6810,100);
	line(i-6810,105,i-6880,115);
	line(i-6810,106,i-6881,116);
	line(i-6810,125,i-6900,110);
	line(i-6810,126,i-6901,111);
	line(i-6825,123,i-6880,137);
	line(i-6826,124,i-6881,138);

	line(i-400,100,i-400,260);
	line(i-410,100,i-410,260);
	line(i-400,100,i-410,100);
	line(i-410,105,i-480,115);
	line(i-410,106,i-481,116);
	line(i-410,125,i-500,110);
	line(i-410,126,i-501,111);
	line(i-425,123,i-480,137);
	line(i-426,124,i-481,138);

	line(i+400,100,i+400,260);
	line(i+410,100,i+410,260);
	line(i+400,100,i+410,100);
	line(i+410,105,i+480,115);
	line(i+410,106,i+481,116);
	line(i+410,125,i+500,110);
	line(i+410,126,i+501,111);
	line(i+425,123,i+480,137);
	line(i+426,124,i+481,138);

	line(i+1000,100,i+1000,260);
	line(i+1010,100,i+1010,260);
	line(i+1000,100,i+1010,100);
	line(i+1010,105,i+1080,115);
	line(i+1010,106,i+1081,116);
	line(i+1010,125,i+1100,110);
	line(i+1010,126,i+1101,111);
	line(i+1025,123,i+1080,137);
	line(i+1026,124,i+1081,138);

	line(i+1600,100,i+1600,260);
	line(i+1610,100,i+1610,260);
	line(i+1600,100,i+1610,100);
	line(i+1610,105,i+1680,115);
	line(i+1610,106,i+1681,116);
	line(i+1610,125,i+1700,110);
	line(i+1610,126,i+1701,111);
	line(i+1625,123,i+1680,137);
	line(i+1626,124,i+1681,138);

	line(i+2200,100,i+2200,260);
	line(i+2210,100,i+2210,260);
	line(i+2200,100,i+2210,100);
	line(i+2210,105,i+2280,115);
	line(i+2210,106,i+2281,116);
	line(i+2210,125,i+2300,110);
	line(i+2210,126,i+2301,111);
	line(i+2225,123,i+2280,137);
	line(i+2226,124,i+2281,138);

	line(i+2800,100,i+2800,260);
	line(i+2810,100,i+2810,260);
	line(i+2800,100,i+2810,100);
	line(i+2810,105,i+2880,115);
	line(i+2810,106,i+2881,116);
	line(i+2810,125,i+2900,110);
	line(i+2810,126,i+2901,111);
	line(i+2825,123,i+2880,137);
	line(i+2826,124,i+2881,138);

	line(i+4300,100,i+4300,260);
	line(i+4310,100,i+4310,260);
	line(i+4300,100,i+4310,100);
	line(i+4310,105,i+4380,115);
	line(i+4310,106,i+4381,116);
	line(i+4310,125,i+4400,110);
	line(i+4310,126,i+4401,111);
	line(i+4325,123,i+4380,137);
	line(i+4326,124,i+4381,138);

	line(i+5000,100,i+5000,260);
	line(i+5010,100,i+5010,260);
	line(i+5000,100,i+5010,100);
	line(i+5010,105,i+5080,115);
	line(i+5010,106,i+5081,116);
	line(i+5010,125,i+5100,110);
	line(i+5010,126,i+5101,111);
	line(i+5025,123,i+5080,137);
	line(i+5026,124,i+5081,138);

	line(i+5840,100,i+5840,260);
	line(i+5850,100,i+5850,260);
	line(i+5840,100,i+5850,100);
	line(i+5850,105,i+5920,115);
	line(i+5850,106,i+5921,116);
	line(i+5850,125,i+5940,110);
	line(i+5850,126,i+5941,111);
	line(i+5865,123,i+5920,137);
	line(i+5866,124,i+5921,138);

	line(i+6540,100,i+6540,260);
	line(i+6550,100,i+6550,260);
	line(i+6540,100,i+6550,100);
	line(i+6550,105,i+6620,115);
	line(i+6550,106,i+6621,116);
	line(i+6550,125,i+6640,110);
	line(i+6550,126,i+6641,111);
	line(i+6565,123,i+6620,137);
	line(i+6566,124,i+6621,138);

	line(i+7240,100,i+7240,260);
	line(i+7250,100,i+7250,260);
	line(i+7240,100,i+7250,100);
	line(i+7250,105,i+7320,115);
	line(i+7250,106,i+7321,116);
	line(i+7250,125,i+7340,110);
	line(i+7250,126,i+7341,111);
	line(i+7265,123,i+7320,137);
	line(i+7266,124,i+7321,138);

	/*	Station Design & Grasss		*/

	line(i+2660,260,i+2660,300);
	line(i+2670,260,i+2670,300);
	line(i+2520,260,i+2520,300);
	line(i+2530,260,i+2530,300);
	rectangle(i+2500,220,i+2700,260);
	outtextxy(i+2550,230,"===Rampur Halt===");
	outtextxy(i+2550,250,"-Northrn Railway-");
	outtextxy(i+3200,50,"An Unscheduled Halt");
	outtextxy(i+3500,340,"Platform no 1.");
	line(i+3650,300,i+3650,170);
	line(i+3645,300,i+3645,170);
	line(i+3645,170,i+3650,170);
	rectangle(i+3620,130,i+3670,170);
	outtextxy(i+3625,150,"Pt.no1");
	setcolor(GREEN);
	outtextxy(i+4660,170,"Rampur East");
	setfillstyle(6,3);
	bar3d(i+4650,270,i+4730,180,15,15);           // outer room of station
	setcolor(WHITE);
	line(i+3000,295,i+3080,251);
	line(i+3080,251,i+4000,251);
	line(i+4000,251,i+4080,295);
	circle(i+4020,275,3);
	setcolor(13);
	outtextxy(i+4010,235,"||===|| ");
	outtextxy(i+4010,249,"||   || ");
	outtextxy(i+4030,235,"||===|| ");
	outtextxy(i+4030,249,"||   || ");
	outtextxy(i+4050,235,"||===|| ");
	outtextxy(i+4050,249,"||   || ");
	outtextxy(i+4070,235,"||===!> ");
	outtextxy(i+4070,249,"||   || ");

	outtextxy(i+3010,235,"||===|| ");
	outtextxy(i+3010,249,"||   || ");
	outtextxy(i+2990,235,"||===|| ");
	outtextxy(i+2990,249,"||   || ");
	outtextxy(i+2970,235,"||===|| ");
	outtextxy(i+2970,249,"||   || ");
	outtextxy(i+2950,235,"<!===|| ");
	outtextxy(i+2950,249,"||   || ");
	line(i+4020,275,i+4500,275);
	line(i+4500,270,i+4500,255);
	outtextxy(i+4500,270,"]");

	setcolor(GREEN);
	outtextxy(i+750,290,"\!|/");
	outtextxy(i+3250,299,"\|@/");
	outtextxy(i+2180,285,"\#|/");
	outtextxy(i+4580,275,"\|$/");
	outtextxy(i+980,292,"\%|/");
	outtextxy(i+1978,295,"\|^/");
	outtextxy(i+860,285,"\&|/");
	outtextxy(i+3650,298,"\|*/");
	outtextxy(i+1450,293,"\|+/");
	outtextxy(i+2391,265,"\<|/");
	outtextxy(i+2900,285,"\|>/");
	outtextxy(i+4930,294,"\?|/");
	outtextxy(i+4082,292,"\\|//");

	outtextxy(i+4950,290,"\!|/");
	outtextxy(i+1550,299,"\|@/");
	outtextxy(i+1280,285,"\#|/");
	outtextxy(i+2380,275,"\|$/");
	outtextxy(i+2120,292,"\%|/");
	outtextxy(i+3858,295,"\|^/");
	outtextxy(i+6900,285,"\&|/");
	outtextxy(i+7350,298,"\|*/");
	outtextxy(i+6950,293,"\|+/");
	outtextxy(i+7693,265,"\<|/");
	outtextxy(i+7298,285,"\|>/");
	outtextxy(i+6930,294,"\?|/");
	outtextxy(i+7082,292,"\\|//");

	outtextxy(i-750,290,"\!|/");
	outtextxy(i-3250,299,"\|@/");
	outtextxy(i-2180,285,"\#|/");
	outtextxy(i-4580,275,"\|$/");
	outtextxy(i-980,292,"\%|/");
	outtextxy(i-1978,295,"\|^/");
	outtextxy(i-860,285,"\&|/");
	outtextxy(i-3650,298,"\|*/");
	outtextxy(i-1450,293,"\|+/");
	outtextxy(i-2391,265,"\<|/");
	outtextxy(i-2900,285,"\|>/");
	outtextxy(i-4930,294,"\?|/");
	outtextxy(i-4082,292,"\\|//");

	outtextxy(i-4950,290,"\!|/");
	outtextxy(i-1550,299,"\|@/");
	outtextxy(i-1280,285,"\#|/");
	outtextxy(i-2380,275,"\|$/");
	outtextxy(i-2120,292,"\%|/");
	outtextxy(i-3858,295,"\|^/");
	outtextxy(i-6900,285,"\&|/");
	outtextxy(i-7350,298,"\|*/");
	outtextxy(i-6950,293,"\|+/");
	outtextxy(i-7693,265,"\<|/");
	outtextxy(i-7298,285,"\|>/");
	outtextxy(i-6930,294,"\?|/");
	outtextxy(i-7082,292,"\\|//");

	outtextxy(i-7950,290,"\!|/");
	outtextxy(i-6550,299,"\|@/");
	outtextxy(i-1280,285,"\#|/");
	outtextxy(i-2380,275,"\|$/");
	outtextxy(i-2120,292,"\%|/");
	outtextxy(i-5858,295,"\|^/");
	outtextxy(i-4900,285,"\&|/");
	outtextxy(i-7350,298,"\|*/");
	outtextxy(i-4950,293,"\|+/");
	outtextxy(i-4693,265,"\<|/");
	outtextxy(i-7298,285,"\|>/");
	outtextxy(i-3930,294,"\?|/");
	outtextxy(i-7082,292,"\\|//");

	outtextxy(i-450,290,"\!|/");
	outtextxy(i+320,299,"\|@/");
	outtextxy(i-180,285,"\#|/");
	outtextxy(i-580,275,"\|$/");
	outtextxy(i+6980,292,"\%|/");
	outtextxy(i+978,295,"\|^/");
	outtextxy(i+1860,285,"\&|/");
	outtextxy(i-3560,298,"\|*/");
	outtextxy(i+888,293,"\|+/");
	outtextxy(i+2891,265,"\<|/");
	outtextxy(i-2524,285,"\|>/");
	outtextxy(i+4090,294,"\?|/");
	outtextxy(i-4602,292,"\\|//");

	/*        Bridge Design		*/

	setcolor(24);
	line(i+5200,255,i+5300,155);
	line(i+5210,255,i+5310,155);
	line(i+5300,155,i+5750,155);
	line(i+5300,160,i+5740,160);
	line(i+5750,155,i+5850,255);
	line(i+5740,155,i+5840,255);
	line(i+5840,255,i+5940,155);
	line(i+5850,255,i+5950,155);
	line(i+5950,155,i+6400,155);
	line(i+5950,160,i+6400,160);
	line(i+6400,155,i+6500,255);
	line(i+6390,155,i+6490,255);
	line(i+5750,155,i+5650,255);                // <- start here
	line(i+5740,155,i+5640,255);
	line(i+5640,255,i+5540,155);
	line(i+5630,255,i+5530,155);
	line(i+5530,155,i+5430,255);
	line(i+5520,155,i+5420,255);
	line(i+5420,255,i+5320,155);
	line(i+5410,255,i+5310,155);                // first phase completed

	line(i+5940,155,i+6040,255);
	line(i+5950,155,i+6050,255);
	line(i+6050,255,i+6150,155);
	line(i+6060,255,i+6160,155);
	line(i+6160,155,i+6260,255);
	line(i+6170,155,i+6270,255);
	line(i+6270,255,i+6370,155);
	line(i+6280,255,i+6380,155);                // second phase completed


	/*	bridge & River Water 	  */

	setcolor(WHITE);
	line(i+5200,255,i+6500,255);
	line(i+5200,255,i+5100,350);
	line(i+6500,255,i+6600,350);
	line(i+5830,255,i+5830,400);
	line(i+5870,255,i+5870,400);

	rectangle(i+5200,250,i+5210,255);              // for slepers,under--
	rectangle(i+5250,250,i+5260,255);              // -bridge railway line
	rectangle(i+5300,250,i+5310,255);
	rectangle(i+5350,250,i+5360,255);
	rectangle(i+5400,250,i+5410,255);
	rectangle(i+5450,250,i+5460,255);
	rectangle(i+5500,250,i+5510,255);
	rectangle(i+5550,250,i+5560,255);
	rectangle(i+5600,250,i+5610,255);
	rectangle(i+5650,250,i+5660,255);
	rectangle(i+5700,250,i+5710,255);
	rectangle(i+5750,250,i+5760,255);
	rectangle(i+5800,250,i+5810,255);
	rectangle(i+5850,250,i+5860,255);
	rectangle(i+5900,250,i+5910,255);
	rectangle(i+5950,250,i+5960,255);
	rectangle(i+6000,250,i+6010,255);
	rectangle(i+6050,250,i+6060,255);
	rectangle(i+6100,250,i+6110,255);
	rectangle(i+6150,250,i+6160,255);
	rectangle(i+6200,250,i+6210,255);
	rectangle(i+6250,250,i+6260,255);
	rectangle(i+6300,250,i+6310,255);
	rectangle(i+6350,250,i+6360,255);
	rectangle(i+6400,250,i+6410,255);
	rectangle(i+6450,250,i+6460,255);
	rectangle(i+6500,250,i+6510,255);
	rectangle(i+6550,250,i+6560,255);          // here slepers are finish

	outtextxy(i+6000,100,"Naini Bridge");
	outtextxy(i+7300,70,"Allahabad 35Km -->");
	outtextxy(i-4500,70,"Allahabad 97km");
	outtextxy(i-4450,85,"Upcoming station::");
	outtextxy(i-4350,85,"Rampur Halt 13.9km");
	setcolor(BLUE);
	outtextxy(i+5400,300,"~-=~-=-~\!^*=-= -~");
	outtextxy(i+5550,290,"-=--=~^*-=!\.,<=-~");
	outtextxy(i+5700,295,"~-=-'+</?';~-=-=~!");
	outtextxy(i+5850,300,"~=-=-=-*^%!\,.-=-~");
	outtextxy(i+6000,294,"~=-=-\|~*^%,.,</~~");
	outtextxy(i+6150,297,"-=-`~,.<;\-=-=*^%~");
	outtextxy(i+6300,290,"~-=-(~*!-=%*^<;./~");

	outtextxy(i+5400,378,"~-=~-=-~\!^*=-= -~");
	outtextxy(i+5550,390,"-=--=~^*-=!\.,<=-~");
	outtextxy(i+5700,495,"~-=-'+</?';~-=-=~!");
	outtextxy(i+5850,400,"~=-=-=-*^%!\,.-=-~");
	outtextxy(i+6000,354,"~=-=-\|~*^%,.,</~~");
	outtextxy(i+6150,420,"-=-`~,.<;\-=-=*^%~");
	outtextxy(i+6300,467,"~-=-(~*!-=%*^<;./~");

	outtextxy(i+5201,458,"~-=~-=-~\!^*=-= -~");
	outtextxy(i+5270,312,"-=--=~^*-=!\.,<=-~");
	outtextxy(i+5335,490,"~-=-'+</?';~-=-=~!");
	outtextxy(i+5241,400,"~=-=-=-*^%!\,.-=-~");
	outtextxy(i+5358,354,"~=-=-\|~*^%,.,</~~");
	outtextxy(i+5305,399,"-=-`~,.<;\-=-=*^%~");
	outtextxy(i+5389,342,"~-=-(~*!-=%*^<;./~");

	outtextxy(i+5678,378,"~-=~-=-~\!^*=-= -~");
	outtextxy(i+5850,390,"-=--=~^*-=!\.,<=-~");
	outtextxy(i+5790,495,"~-=-'+</?';~-=-=~!");
	outtextxy(i+5800,400,"~=-=-=-*^%!\,.-=-~");
	outtextxy(i+6040,354,"~=-=-\|~*^%,.,</~~");
	outtextxy(i+6150,420,"-=-`~,.<;\-=-=*^%~");
	outtextxy(i+6380,467,"~-=-(~*!-=%*^<;./~");

	outtextxy(i+6143,378,"~-=~-=-~\!^*=-= -~");
	outtextxy(i+6275,390,"-=--=~^*-=!\.,<=-~");
	outtextxy(i+6386,495,"~-=-'+</?';~-=-=~!");
	outtextxy(i+6243,400,"~=-=-=-*^%!\,.-=-~");
	outtextxy(i+6191,354,"~=-=-\|~*^%,.,</~~");
	outtextxy(i+6309,420,"-=-`~,.<;\-=-=*^%~");
	outtextxy(i+6198,467,"~-=-(~*!-=%*^<;./~");

	setfillstyle(1,8);
	bar3d(i+7400,265,i+7450,275,15,15);
	setfillstyle(2,10);
	bar3d(i-4000,265,i-3850,255,7,7);
	setcolor(RED);
	outtextxy(i+7410,265,"* * *");
	if(i==-3500)
		{
		sound(1500);
		delay(4000);
		nosound();
		sleep(4);
		for(k=182,j=182;k>=165,j>=145;k--,j=j-2)
			{
			setcolor(WHITE);
			line(0,250,700,250);                    // for track
			line(0,140,700,140);                    // for wire
			outtextxy(500,118,"Overhead wire");   // for msg print
			outtextxy(500,128,"25,000v");		// for volt print
			setcolor(BLUE);
			line(0,240,200,240);			// bogie start---
			line(200,240,200,180);
			line(200,180,0,180);
			line(195,175,0,175);
			line(195,175,200,180);                  // ---here bogie has completed

			setcolor(WHITE);
			rectangle(90,203,120,218);    		// for windows of bogie
			rectangle(40,203,70,218);		// - - -
			rectangle(-10,203,20,218);		// - - -
			rectangle(140,190,160,240);		// for door
			rectangle(170,203,195,218);		// - - -

			line(150,300,150,170);
			line(145,300,145,170);
			line(145,170,150,170);
			rectangle(120,130,170,170);
			outtextxy(125,150,"Pt.no1");
			setcolor(GREEN);
			outtextxy(151,301,"|*/");
			outtextxy(355,295,"|^/");
			outtextxy(581,297,"|&|/");

		/*      for coupling	*/
			setcolor(WHITE);
			circle(205,185,3);
			circle(210,185,3);
			line(200,230,215,230);
			line(207,185,207,230);
			line(0,251,500,251);
			line(500,251,580,295);
			circle(520,275,3);
			outtextxy(0,340,"Platform no 1.");
			setcolor(13);
			line(520,275,700,275);
			outtextxy(510,235,"||===|| ");
			outtextxy(510,249,"||   || ");
			outtextxy(530,235,"||===|| ");
			outtextxy(530,249,"||   || ");
			outtextxy(550,235,"||===|| ");
			outtextxy(550,249,"||   || ");
			outtextxy(570,235,"||===!> ");
			outtextxy(570,249,"||   || ");
			outtextxy(0,184,"  Maha Bodhi Exp");
			setcolor(9);
			outtextxy(0,230," Delhi-->Hawrah");

		/*	Loco design	*/

			setcolor(RED);
			line(215,240,470,240);
			line(470,240,470,220);
			line(215,185,430,185);
			line(430,185,470,220);
			line(215,240,215,185);
			line(250,182,324,182);

			line(392,197,392,238);			    // <- for gate handle
			line(406,197,406,238);
			rectangle(230,190,270,225);
			rectangle(390,195,408,240);

		/*	Loco graphics	*/

			setcolor(WHITE);
			outtextxy(280,175,"/----!----#");
			outtextxy(245,176,"@");
			outtextxy(435,230,"WAP7");
			outtextxy(250,230,"Indian Railway");

		/*	Tyres of train & sleepers	*/

			outtextxy(406,242,"()()()");
			outtextxy(225,242,"()()()");
			outtextxy(130,242,"()()()");
			outtextxy(220,j-7,"/==/==/");               // pantograph
			setcolor(YELLOW);
			line(250,182,225,k);                        // pantograph stand
			line(249,183,224,k+1);
			line(225,k,250,j-4);
			line(224,k-1,249,j-5);
			delay(100);
			if(i==165)
				{
				break;
				}
			cleardevice();
			}
    /*		sound(1500);
		delay(1000);
		nosound();          */
		}
	if(i==-8000)
		{
		closegraph();
		gotoxy(300,300);
		printf("\n\n\n\n\n\t\t Thanks For Watching...\n");
		gotoxy(450,400);
		printf("\n\n\t\t\tPlease Subscribe my channel..:)  \n");
		printf("\n\n\n\n\n\n\n\t\t\t   Developed by- Shivam Verma (BCA)");
		delay(5000);
		}
	if(i<=500)
		{
		delay(15);
		}
	if(i<=100)
		{
		delay(20);
		}
	if(i<=10)
		{
		delay(30);
		}
	if(i>-1000)
		{
		delay(10);
		}
	delay(10);
	cleardevice();
	}
	getch();
}
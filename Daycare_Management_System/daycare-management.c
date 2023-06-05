#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<graphics.h>
#include<dos.h>
void logo(void);
void logo(void)
{

setcolor(8);
settextstyle(3,0,2);

outtextxy(115,35,"A'A DAYCARE CENTRE");
setfillstyle(2,3);
bar(80,40,100,60);
line(80,40,90,25);
line(90,25,100,40);}
struct child
{
	char name[20];
	char paternal[20];
	char maternal[20];
	char gender[10];
	char religion[20];
	char age[10];
	char idno[10];
	char phoneno[30];
}e1;

char chname[20];
//char facname[20];

void main()
{
	int gd=DETECT,gm,i,a,flag,flag2,flag1;
	char another,another4,another3;
	long int size=sizeof(e1);
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	cleardevice();
	setbkcolor(3);

	settextstyle(8,0,5);

	  delay(100);
	  a=5;
	  do{
	setcolor(a);
	outtextxy(20,40,"WELCOME ");
	delay(500);
	outtextxy(260,40,"TO ");
	delay(500);
	outtextxy(360,40,"DATABASE");
	delay(500);
	outtextxy(200,100,"2016-17");
	a++;
	}while(a<7);
	settextstyle(8,0,5);
	setcolor(5);
	delay(1500);
	outtextxy(30,200,"GROUP MEMBERS:");
	delay(500);
	outtextxy(80,300,"ALVINA MOHSIN");
	outtextxy(80,370,"SYEDA AYESHA ALAM");

	delay(1500);
	clrscr();
	cleardevice();
	setcolor(CYAN);

/*Write Text*/
setbkcolor(14);
delay(1500);
sleep(2);

setfillstyle(WIDE_DOT_FILL,12);
floodfill(20,450,WHITE);
bar(0,0,40,700);
bar(600,0,650,700);

settextstyle(1,HORIZ_DIR,5);
setcolor(2);
outtextxy(200,40,"Dedicated to:");
delay(1500);
a=1;
do{
 setcolor(a);
outtextxy(140,90,"Sir ");
delay(500);
outtextxy(230,90,"Waseem");
delay(500);
outtextxy(400,90,"Khan");
a++;
   }while(a<3);

setcolor(13);

/*create flower*/
setcolor(RED);
for(a=0;a<37;a++){
circle(320,240,5+a);}
for(a=0;a<10;a++)     {
setcolor(5);
arc(350+a,200+a,290,180,32);

arc(375+a,259+a,202,118,32);

arc(322+a,295+a,140,50,32);

arc(267+a,265+a,75,338,32);

arc(282+a,203+a,0,263,32);
setcolor(6);

arc(194+a,288+a,300,0,162);

/*create leaf*/

setcolor(GREEN);

arc(361+a,350+a,30,160,15);

line(345+a,348+a,375+a,342+a);

arc(360+a,340+a,200,345,15);   }
delay(1500);
sleep(2);
clrscr();
cleardevice();
	setbkcolor(9);
setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);

    /* Fill colours */
    setfillstyle(INTERLEAVE_FILL, 6);
    floodfill(152, 182, WHITE);
    setfillstyle(6,6);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL,13);
    floodfill(182, 252, WHITE);
    setfillstyle(7,10);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    setcolor(4);
    settextstyle(1,0,5);

    delay(550);

    outtextxy(120,350,"A'A    ");
    delay(500);
    outtextxy(185,350,"DAYCARE-");
    delay(500);
    outtextxy(391,350,"CENTRE");
    delay(500);
    settextstyle(1,0,2);
    setcolor(1);
    outtextxy(70,400,"^WHERE YOUR CHILD FEELS NO LESS THAN HOME^");
delay(1000);

	FILE *fps,*fts;
	char choice;
	char c1,ch1,ch2,ch3,ch4;
	int recno=1;
login:
cleardevice();
setbkcolor(5);
logo();

	delay(4);
	printf("\n\n\n\n\n\n\n\t\t");
	setcolor(9);
	outtextxy(125,141,"\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\n\n\n\n\t\t          \tEnter Password\n");
	outtextxy(125,180,"\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\t\t\t\t");
	printf("\n\n\t     \t\t\t");
	ch1=getch();
	printf("*");
	ch2=getch();
	printf("*");
	ch3=getch();
	printf("*");
	printf("*");
	ch4=getch();
	printf("*");
	delay(2);
	clrscr();
	cleardevice();
	if(ch1=='a'&&ch2=='b'&&ch3=='c'&&ch4=='d')
	{

		goto buffer;   }

else
	{	if(i==2)
	{
      setbkcolor(5);
logo();
		printf("\nTOO MANY INCORRECT ATTEMT..\n\n\n\n\n\t\t\t ACCESS DENIED");
		sleep(2);
		exit(1);
	}
		printf("\n\n\n\n\n\n\t\t INCORRECT PASSWORD OR USERNAME\t\n\n\n");
		sleep(1);
		printf("\n\n\n\n\n\t\t PLEASE RE_ENTER THE PASSWARD OR USERNAME\t\n\n");
	sleep(1);
		clrscr();
		goto login;

	}




buffer:
setbkcolor(11);
logo();
setcolor(4);
settextstyle(3,HORIZ_DIR,4);
outtextxy(85,100,"CORRECT PASSWORD");
		delay(10);
	    setcolor(WHITE);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		outtextxy(10,315,"Buffering");
		printf("\n\n");
		for(i=0;i<80;i++)
		{
			printf("\xDB");
			delay(10);
		}
		setcolor(WHITE);
printf("\n\n\n\t\tTHANK-YOU for waiting...");
sleep(2);
clrscr();
cleardevice();
goto menu;

	menu:
		cleardevice();
	setbkcolor(12);
	logo();
	setcolor(14);
	settextstyle(1,HORIZ_DIR,4);
	outtextxy(60,120,"CHOOSE FROM THE FOLLOWING   ");
	delay(2);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t1.CHILDREN\t\t\t\n");
	printf("\n\t\t\t2.EXIT\t\t\t\n\n\n\n\t\t\t\xDB\xDB YOUR CHOICE?\xDB\xDB\n\t\t\t");

	c1=getche();
	delay(100);
	fflush(stdin);
	clrscr();
	cleardevice();
setbkcolor(5);
	switch(c1)
	{
		childchoice:
	clrscr();
	cleardevice();
		case'1':
			FILE *fps;
			fps=fopen("dbms_alvina.DAT","rb+");
			if(fps==NULL)
			{
				fps=fopen("dbms_alvina.DAT","wb+");
				if(fps==NULL);
				{
					puts("CANNOT OPEN FILE");
					delay(5);
					exit(1);
				}
			}


			       setbkcolor(5);
			logo();
				setcolor(14);
				settextstyle(3,0,4);
			outtextxy(30,90,"CHOOSE FROM THE FOLLOWING OPTIONS");
delay(2);
				printf("\n\n\n\n\n\n\n\n\n\n");

				printf("\n\n\t\t\t1.ADD A NEW CHILD'S INFO");

				printf("\n\n\t\t\t2.LIST ALL RECORDS OF INFO.");

				printf("\n\n\t\t\t3.MODIFY SPECIFIC INFO.");

				printf("\n\n\t\t\t4.DELETE RECORDS");

				printf("\n\n\t\t\t5.SEARCH RECORDS");

				printf("\n\n\t\t\t6.EXIT\t\t\t\n\n\n\n\t\t\t\xDB\xDB YOUR CHOICE?\xDB\xDB\n\t\t\t");

				choice =getche();
				cleardevice();
				fflush(stdin);

				switch(choice)
				{

					case'1':{

						fseek(fps,0,SEEK_END);
						  clrscr();

						do
						{
					    clrscr();
					    cleardevice();
					    setbkcolor(10);
						logo();
						setbkcolor(12);
						settextstyle(8,0,4);
						setcolor(14);
						outtextxy(20,70,"PERSONNAL INFORMATION");
						  //	printf("\n\n\t\tEnter ID no.:  ");
					       //	gets(e1.idno);
						printf("\n\n\n\n\n\n\n\n\n\n\n\t\tEnter Name:  ");
						gets(e1.name);
						printf("\n\n\t\tEnter Father's name:  ");
						gets(e1.paternal);
						printf("\n\n\t\tEnter Mother's name:  ");
						gets(e1.maternal);
						printf("\n\n\t\tEnter Gender:  ");
						gets(e1.gender);
						printf("\n\n\t\tEnter The religion:  ");
						gets(e1.religion);
						printf("\n\n\t\tEnter age:  ");
						gets(e1.age);

						printf("\n\n\t\tEnter phone no.:  ");
						gets(e1.phoneno);
						printf("\n\n\t\tENTER id no.:   ");
						gets(e1.idno);
						if(!(strlen(e1.name)==0||strlen(e1.paternal)==0||strlen(e1.maternal)==0||strlen(e1.gender)==0
						||strlen(e1.religion)==0||strlen(e1.age)==0||strlen(e1.idno)==0||strlen(e1.phoneno)==0))
						{
							fwrite(&e1,sizeof(e1),1,fps);
							printf("\nRecords Added Succesfully!");

						}
						else
						{
							printf("\nALL FEILDS ARE MANDATORY!TRY AGAIN.\n");
						}

						printf("\n Add Another record (Y/N)\n");
						fflush(stdin);
						}
					    while(getche()=='y');
					    fclose(fps);
					    clrscr();
				    cleardevice();

						goto childchoice;
						}


					case'2':

		clrscr();
	       cleardevice();
	       rewind(fps);
	       setbkcolor(RED);
	       if(fread(&e1,size,1,fps)==0)
		      {
		       setcolor(WHITE);
		       settextstyle(SMALL_FONT,HORIZ_DIR,6);
		       outtext("list is empty");
		       getche();
		       cleardevice();
		       goto menu;
		      }
	       rewind(fps);
	       while(fread(&e1,size,1,fps)==1)
		 { // fflush(stdin);
		    setbkcolor(RED);
		   {
			 printf("\t%d\n",recno++);
			printf("\n Child's name:%s\nFather's name:%s\nMother's name:%s\nGender:%s\nReligion:%s\nAge:%s\nID No.:%s\nPhone no.:%s",e1.name,e1.paternal,e1.maternal,e1.gender,e1.religion,e1.age,e1.idno,e1.phoneno);
		    printf("\n\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
		    printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\n");
		   getch();}
		    i++;
		    if(i==2)
		     { i=0;
		       setcolor(BLACK);
		       settextstyle(SMALL_FONT,HORIZ_DIR,6);
		       moveto(250,360);
		       outtext("ENTER ANY KEY TO CONTINUE......");
		       getch();
		     clrscr();
		     cleardevice();
		     }
		 }
	       setbkcolor(RED);
	       setcolor(BLUE);
	       settextstyle(SMALL_FONT,HORIZ_DIR,7);
	       printf("\n\n\tYOU HAVE REACHED END OF RECORD");
	      recno=1;
	       i=0;
	       getch();
	       clrscr();
	       cleardevice();
	       goto childchoice ;
					case'3':

						do
						{
						clrscr();
							cleardevice();
							fflush(stdin);
							logo();
							 setbkcolor(12);
							 setcolor(14);
							settextstyle(8,0,4);
							outtextxy(20,80,"MODIFICATION");
				printf("\n\n\n\n\n\n\n\n\nEnter CHILD name To Modify:   ");
		gets(chname);
		rewind(fps);
		while(fread(&e1,size,1,fps)==1)
		  {
		     if(strcmpi(e1.name,chname)==0)
			{
			  flag1=1;
			  settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
			  setcolor(BLUE);
			  moveto(50,190);
			  outtext("RECORD FOUND");
			 // setcolor(GREEN);
			  moveto(150,250);
			  outtext("ENTER TO MODIFY RECORD");
			  printf("\n\n\n\n\n\n\n\n\t\tEnter Name:  ");
						gets(e1.name);
						printf("\n\n\t\tEnter Father's name:  ");
						gets(e1.paternal);
						printf("\n\n\t\tEnter Mother's name:  ");
						gets(e1.maternal);
						printf("\n\n\t\tEnter Gender:  ");
						gets(e1.gender);
						printf("\n\n\t\tEnter The religion:  ");
						gets(e1.religion);
						printf("\n\n\t\tEnter age:  ");
						gets(e1.age);
						printf("\n\n\t\tEnter ID no.:  ");
						gets(e1.idno);
						printf("\n\n\t\tEnter phone no.:  ");
						gets(e1.phoneno);
						if(!(strlen(e1.name)==0||strlen(e1.paternal)==0||strlen(e1.maternal)==0||strlen(e1.gender)==0
						||strlen(e1.religion)==0||strlen(e1.age)==0||strlen(e1.idno)==0||strlen(e1.phoneno)==0))
						    {
				 fseek(fps,-size,SEEK_CUR);
				 fwrite(&e1,size,1,fps);
				 printf("\n");
				 settextstyle(SMALL_FONT,HORIZ_DIR,7);
			//	 setcolor(BLUE);
				 outtext("RECORD ADDED SUCCESSFULLY");
				 break;
			      }
			  else
			      {
				setcolor(RED);
				printf("\n!All feilds are madatory");
			      }
			  break;
		       }

		   }

		 if(flag1==0)
		       { //setcolor(RED);
			 moveto(50,80);
			 //settextstyle(SMALL_FONT,HORIZ_DIR,7);
			 outtext("NO Record Found");
		       }
		 flag1=0;
		 printf("\n\n\nModify Another record(y/n)?\n");
		 another4=getch();
		 }while(another4=='y'||another4=='Y');
		 fclose(fps);
		clrscr();
		cleardevice();
		goto childchoice;


					case'4':
						    clrscr();
					    cleardevice();
					    // setbkcolor(10);
					    logo();

	       do
		{
		clrscr();
		cleardevice();
		fflush(stdin);
		setbkcolor(12);
		settextstyle(SMALL_FONT,HORIZ_DIR,10);
		setcolor(WHITE);
		moveto(55,0);
		outtext("RECORD DELETION");
		printf("\n\n\n\nEnter name to delete:  ");
		gets(chname);
		fts=fopen("temp1.DAT","w");
		rewind(fps);
		while(fread(&e1,size,1,fps)==1)
		  {
		    if((strcmpi(e1.name,chname))!=0)
		      fwrite(&e1,size,1,fts);
		   else if((strcmpi(e1.name,chname))==0)
		      flag1=1;
		  }
		if(flag1==0)
		   {
		     setcolor(WHITE);
		     settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		     moveto(200,100);
		     outtext("\nNO RECORD FOUND");
		   }
		else if(flag1==1)
		   {
		    setcolor(WHITE);
		    settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		    moveto(200,100);
		    outtext("\nRECORD DELETED");
		   }
		flag1=0;
		fclose(fps);
		fclose(fts);
		remove("dbms_alvina.DAT");
		rename("temp1.DAT","dbms_alvina.DAT");
		fps=fopen("dbms_alvina.DAT","r+");
		printf("\n\n\n\nDELETE ANOTHER RECORD(Y/N)");
		fflush(stdin);
		another4=getche();
		}while(another4=='y'||another4=='Y');
		cleardevice();
		goto childchoice;



		case'5':
					fflush(stdin);
					cleardevice();
						 setbkcolor(10);
						logo();
						rewind(fps);

		   do
		{  clrscr();
		   cleardevice();
		   logo();
		   setbkcolor(12);
		   settextstyle(8,0,4);
		   setcolor(14);
		   moveto(140,80);
		   outtext("RECORD SEARCHING");
		   printf("\n\n\n\n\n\n\n\n\nENTER NAME TO SEARCH RECORD:   ");
		   gets(chname);
		   rewind(fps);
		   while(fread(&e1,size,1,fps)==1)
		   if(strcmpi(e1.name,chname)==0)
		      {
			flag2=1;
				printf("\n Child's name:%s\nFather's name:%s\nMother's name:%s\nGender:%s\nReligion:%s\nAge:%s\nID No.:%s\nPhone no.:%s",e1.name,e1.paternal,e1.maternal,e1.gender,e1.religion,e1.age,e1.idno,e1.phoneno);
						  }
		   if(flag2==0)
		       { setcolor(BLUE);
			 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
			 moveto(100,120);
			 outtext("NO Record Found");
		       }
			printf("\n\nSearch another record?(y/n)");
		   another3=getch();
		   }while(another3=='y'||another3=='Y');
		   fclose(fps);
		clrscr();
		cleardevice();
		goto childchoice;

					case'6':

fclose(fps);
						fflush(stdin);
						clrscr();
						fclose(fps);
						goto menu;
					default:
					clrscr();
				       cleardevice();
					 setbkcolor(10);
					 setcolor(YELLOW);
					 line(200,300,250,300);
					 line(200,300,225,250);
					 line(225,250,250,300);
					printf("\nWarning ! Choose given options");
				}

    case'2':
		     exit(1);
		     break;
				default:
				clrscr();
					printf("\n\n\n\n\t\tWarning ! Choose given options only\n");
					cleardevice();
					goto menu;
		}


	getch();
	closegraph();
}

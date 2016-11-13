#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr() ;
char res;
textmode(C40);
textbackground(WHITE);
clrscr();
cout<<"\n \n \n \n \n \n \n \n \t \t " ;
textcolor(RED);
textbackground(YELLOW);
cputs("WELCOME !");
cout<<"\n \n \n \n \t  ";
delay(3000);
textcolor(RED);
clrscr();
textcolor(BLUE);
cout<<"\n \n \n \n \n \t \t ";
cputs("NuMbeR GaMe ");
cout<<"\n \n \n \t \t ";
delay(2000);
textcolor(BLACK);
textbackground(WHITE);
cputs("MIND READER ");
cout<<"\n \t \t ";
delay(3000);
cputs("Loding");
cputs(".");
delay(1000);
cputs(".");
delay(1000);
cputs(".");
delay(1000);
cputs(".");
textmode(C80);
textbackground(WHITE);
clrscr();
cout<<"\n \n \n \t \t ";
textcolor(BLACK);
cputs("DISCLAIMER");
cout<<"\n \n \t";
cputs("This is number game developed by Abhilash Bhardwaj.This game is fully based on Mathematics.Minimum system requirements for this game is only DOS OS.");
cputs("This gaming software is designed in Turbo C++ and based on C++ languge. This game is developed as a project work of St. Karen's Secondary School. ");
cputs("  Play & Enjoy a lot ! ");
cout<<"\n \n \n \n \t \t \a ";
cputs("MOVE AHEAD(press any key)");
getch();
textbackground(GREEN);
clrscr();
textcolor(RED);
char name[25],ch,ch2,h,p,q,r,s,res1;
int age,age1,resp;

cputs("\n \n \n \n \n \t \t \t  MIND READER ");
do
{
cout<<"\n \a";
cputs("\n \n Enter player's name :");
gets(name);
cputs("\n \n  Enter player's age :");
cin>>age;
age1=age%10;
cout<<"\n \t";
cputs("done ? (y/n) ")   ;
cin>>ch;
cout<<"\n \n \t \t";
textbackground(YELLOW);
textcolor(BLACK+BLINK);
cputs("Starting >>>> ");
delay(2000);
textbackground(WHITE);
clrscr();
textcolor(BLUE);
cout<<"\n \t ";
cputs("Step 1. Choose any two digit number(any number from 10 to 99. ");
cputs(" Press any key to move ahead ");
getch();
clrscr();
cout<<endl<<"\t";
cputs("Step 2.Add together both digits of original number.Example- 46,4+6=10.  ");
cputs(" Press any key to move ahead . ");
getch();
clrscr();
cout<<"\n \t ";
cputs("Step 3.and then subtract total from your original number and note that number. Example-46-10=36. ");
cputs(" Press any key to move ahead .");
getch();
textbackground(WHITE);
textcolor(RED);
clrscr();
cout<<"\n \t ";
cputs("\n \t Step 4.Look up symbol for the number you got in step 3 in table.");
cout<<"\n";

if(age1==0||age1==9)
{
h='*';
p='#';
q='%' ;
r='/';
s='|';
}
if(age1==1||age1==8)
{
h='@';
p='*';
q='$';
r='?';
s='/';
}
if(age1==2||age1==7)
{
h='&';
p='*';
q='@';
r='';
s='%';
}
if(age1==3||age1==6)
{
h='$';
p='*';
q='#';
r=':(';
s=':D';
}
if(age1==4||age1==5)
{
h='!';
p=':)';
q='::';
r='^';
s='*';
}
if(resp==12)
h='';
for(int i=1;i<=20;i++)
{
for(int j=0;j<5;j++)
{
if((j*20+i)%9==0)
cout<<j*20+i<<"-"<<h<<"\t";
else
if((j*20+i)%5==0)
cout<<j*20+i<<"-"<<s<<"\t";
else
if((j*20+i)%4==0)
cout<<j*20+i<<"-"<<r<<"\t";
else
if((j*20+i)%3==0)
cout<<j*20+i<<"-"<<q<<"\t";
else
if((j*20+i)%2==0)
cout<<j*20+i<<"-"<<p<<"\t";
else
if((j*20+i)%1==0)
cout<<j*20+i<<"-"<<"@"<<"\t";
}
cout<<endl;
}
cputs("\n \n \t \t Ok. Note your symbol computer scan your mind and give the result. For start scan press any key.");
getch();
textbackground(BLUE);
clrscr();
cout<<"\n \n \n \n \n \n \n \t \t ";
textbackground(YELLOW);
textcolor(GREEN+BLINK);
cputs(" Scanning..... ");
delay(5000);
textbackground(GREEN);
clrscr();
textcolor(RED);
cputs("\n \n Mind Scanning") ;
delay(1000);
clrscr();
cputs("\n \n \n \n \t \t Completed ! ");
delay(1000);
clrscr();
cout<<"\n \n \n \n \t \t";
cputs("Your Name :");
cout<<name<<endl<<"\t \t";
cputs("Your Age :")   ;
cout<<age<<"\n \t \t";
cputs("Result :");
cout<<h;
cout<<"\n \t \t";
cputs("Want to play again ? (y/n) ");
cin>>res;
if(res=='y'||res=='Y')
resp=12;
}while(res=='y'||res=='Y');
textbackground(WHITE);
clrscr();
cout<<"\n \n \n \t \t";
cputs("Thanks For Playing . ");
cout<<"\n \t ";
cputs("Designed and developed By Abhilash Bhardwaj.");
cout<<"\n \t \t";
cputs("Press any key to exit");
getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 int pass_n, dob;
 int user_n,temp;
 clrscr();
   textcolor(WHITE);
   textbackground(GREEN);

   cout<<"HELLO DEAR USER \1\1\1";
   cout<<"\nWELCOME TO SAFEFILE MANAGER SYSTEM \2\2\2"<<endl;
       cout<<"\nPlease enter your date of birth: ";
       cin>>dob;
       cout<<"\nPlease enter your username: ";
       cin>>user_n;
       cout<<"\nPlease enter your password: ";
       cin>>pass_n;
       cout<<endl;
       cprintf("LOADING ........................................................................................................................");
       delay(100);



     if((dob!=1246)||(user_n!=420)||(pass_n!=2141))
     cout<<"\nInvalid date of birth or username or password";

     else
     {cout<<"\n\nWELCOME SIR/MADAM \5\5\5";
      cout<<"\nYour given data is verified!!!";
       cout<<"\n\nEnter 1 or 2: ";
       cin>>temp;}
	  if (temp==1)
	  {cout<<endl;
	   cout<<"\nCongratulations!!!";
	   cout<<"\nYour Celebrity crush \3\3\3 is- KIARA ADVANI";}
       else if (temp==2)
	  {cout<<endl;
	   cout<<"\nCongratulations!!!";
	   cout<<"\nYour college crush \3\3\3 is- THANUSHREE";}
       else
	   {cout<<endl;
	   cout<<"\nGo to hell you bloody Idiot";
	   cout<<"\n Your are not a user";}

    getch();
}




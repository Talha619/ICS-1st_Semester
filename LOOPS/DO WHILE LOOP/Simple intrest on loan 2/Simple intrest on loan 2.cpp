//Simple intrest on loan 2 using do while.
#include<conio.h>
#include<stdio.h>
int main()
{
	int i=0;
	float principal,time,intrest,rate;
	do
	 {
	 	printf ("\nEnter value of principal=");
	 	scanf ("%f",&principal);
	 	printf ("\nEnter value of time=");
	 	scanf ("%f",&time);
	 	if (time<=1)
	 	 {
	 	 	rate = 0.06;
		 }
		else if (time<6)
		 {
		 	rate = 0.07;
		 }
		else if (time>=6 && time <=10)
		 {
		 	rate = 0.08;
		 }
		else
		 {
		 	rate = 0.09;
		 } 
		intrest = principal*rate*time;
		printf ("\nIntrest on loan is %f", intrest);
		i++;
	 }
	 while (i<5);
	getch ();
	return 0; 
}


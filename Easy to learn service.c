#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,t[100],S=0;
	//char m[100];
	float avg,div;
	printf("\n\nWELCOME TO THE EASY TO LEARN SERVICE");
	printf("\n=============================\n");
	printf("\nPlease select the option from given below");
	printf("\n");
	printf("\n1.	Basic Calculator");
	printf("\n2.	METHEMETICAL SERVICE");
	printf("\n3.	ASTROLOGY SERVICE");
	printf("\nYour input=");
	scanf("%d",&a);
	switch(a)
	{
		
		case 1:	X:
				printf("\nWelcome to the basic calculator service\n\n");
				printf("\n1.	Sum");
				printf("\n2.	Average");
				printf("\n3.	Substraction");
				printf("\n4.	Division");
				printf("\n Your input=");
				scanf("%d",&b);
				switch(b)
				{
					case 1: S=0;
							printf("How many input you want to add?");
							printf("\nYour Answer=");
							scanf("%d",&c);
							for(d=0;d<c;d++)
							{
								printf("\nGive input=");
								scanf("%d",&t[d]);
							}
							for(d=0;d<c;d++)
							{
								S+=t[d];
							}
							printf("\nThe sum value is= %d",S);
						break;
					case 2: S=0;
							printf("How many input you want to add?");
							printf("\nYour Answer=");
							scanf("%d",&c);
							for(d=0;d<c;d++)
							{
								printf("Give input=");
								scanf("%d",&t[d]);
							}
							for(d=0;d<c;d++)
							{
								S+=t[d];
							}
							printf("\nThe sum value is= %d",S);
							avg=(float)S/(float)d;
							printf("\nThe Average of the given numbers is=%.2f",avg);
						break;
					case 3: g=0;
							printf("Give the no to substraction");
							printf("%d %d",&e,&f);
							g=e-f;
							printf("The substraction value is=%d",g);
						break;
					case 4: div=0;
							printf("Give the two values to division_first--numerator,second--denominator");
							printf("\nNumeretor=");
							scanf("%d",&h);
							printf("\nDenominator=");
							scanf("%d",&i);
							div=(float)h/(float)i;
							printf("The division value is=%.2f",div);
							break;
				}
			break;
		case 2: Y:
				printf("\nWelcome to the methemetical service\n\n");
				printf("\n1.	Square of given number");
				printf("\n2.	Cube of given number");
				printf("\n3.	Square root of a given number");
				printf("\nPlease enter your answer=");
				scanf("%d",&j);
				switch(j)
				{
					case 1: l=0;
							printf("\nPlease give input=");
							scanf("%d",&k);
							l=k*k;
							printf("\nThe square of the given no is=%d",l);
						break;
					case 2:	l=0;
							printf("\nPlease give input for the cube=");
							scanf("%d",&k);
							l=k*k*k;
							printf("\nThe cube of the given no is=%d",l);
						break;
					case 3:	l=0;
							printf("\nPlease give input=");
							scanf("%d",&k);
							l=sqrt(k);
							printf("\nThe square root of the given no is=%d",l);
						break;
				}
			break;
		case 3:	Z:
				printf("What is your Date of birth");
				printf("\nMonth number=");
				m=0;
				scanf("%d",&m);
				switch(m)
				{
					case 1:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=19)
								{
									printf("\nZODIAC SIGN IS=Capricorn");
								}
								else if (a>=20 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Aquarius");
								}
					break;
				case 2:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=18)
								{
									printf("\nZODIAC SIGN IS=Aquarius");
								}
								else if (a>=19 && a<=28)
								{
									printf("\nZODIAC SIGN IS=Pisces");
								}
					break;
				case 3:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=20)
								{
									printf("\nZODIAC SIGN IS=Pisces");
								}
								else if (a>=21 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Aries");
								}
					break;
				case 4:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=19)
								{
									printf("\nZODIAC SIGN IS=Aries");
								}
								else if (a>=20 && a<=30)
								{
									printf("\nZODIAC SIGN IS=Tarus");
								}
					break;
				case 5:		printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=20)
								{
									printf("\nZODIAC SIGN IS=Tarus");
								}
								else if (a>=21 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Gemini");
								}
					break;
				case 6:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=20)
								{
									printf("\nZODIAC SIGN IS=Gemini");
								}
								else if (a>=21 && a<=30)
								{
									printf("\nZODIAC SIGN IS=Cancer");
								}
					break;
				case 7:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=22)
								{
									printf("\nZODIAC SIGN IS=Cancer");
								}
								else if (a>=23 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Leo");
								}
					break;
				case 8:	printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=22)
								{
									printf("\nZODIAC SIGN IS=Leo");
								}
								else if (a>=23 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Virgo");
								}
					break;
				case 9:printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=22)
								{
									printf("\nZODIAC SIGN IS=Virgo");
								}
								else if (a>=23 && a<=30)
								{
									printf("\nZODIAC SIGN IS=Libra");
								}
					break;
				case 10: printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=22)
								{
									printf("\nZODIAC SIGN IS=Libra");
								}
								else if (a>=23 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Scorpio");
								}
					break;
				case 11:printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=21)
								{
									printf("\nZODIAC SIGN IS=Scorpio");
								}
								else if (a>=22 && a<=30)
								{
									printf("\nZODIAC SIGN IS=Sagittarius");
								}
					break;
				case 12:printf("\nGive input of your date=");
								scanf("%d",&a);
								if(a>=1 && a<=21)
								{
									printf("\nZODIAC SIGN IS=Sagittarius");
								}
								else if (a>=22 && a<=31)
								{
									printf("\nZODIAC SIGN IS=Capricorn");
								}
					break;
				}
			break;
	}
	getch();
	printf("\n=============================\n");
	printf("\nPlease select the option from given below");
	printf("\n");
	printf("\n1.	Basic Calculator");
	printf("\n2.	METHEMETICAL SERVICE");
	printf("\n3.	ASTROLOGY SERVICE");
	printf("\nYour input=");
	scanf("%d",&a);
	if(a==1)
	{
		goto X;
	}
	else if(a==2)
	{
		goto Y;
	}
	else if(a==3)
	{
		goto Z;
	}
}
	

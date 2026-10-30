#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void ascending(int[],int);
void desending(int[],int);
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,t[100],S=0;
	//char m[100];
	float avg,div,t1,t2,w1,w2;
	printf("\nWELCOME TO THE EASY TO LEARN SERVICE");
	printf("\n=============================\n");
	printf("\nPlease select the option from given below");
	printf("\n");
	printf("\n1.	Basic Calculator");
	printf("\n2.	METHEMETICAL SERVICE");
	printf("\n3.	ASTROLOGY SERVICE");
	printf("\n4.	TEMPERATURE CONVERSION");
	printf("\n5.	NUMBER REARRANGEMENT");
	printf("\n6.	UNIT CONVERSION");//marked as $:
	printf("\nYour input=");
	scanf("%d",&a);
	switch(a)
	{
		
		case 1:	X:
				printf("\n==============\tWelcome to Basic Calculator ================\n\n");
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
				printf("\n==============\tWelcome to Methemetical Service ================\n\n");
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
				printf("\n==============\tWelcome to Astrology Service ================\n\n");
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
		case 4: M:
				printf("\n==============\tWelcome to Temperature Conversion ================\n\n");
				printf("Welcome to the temperature conversion system");
				printf("\nPress 1 to Centigrade to fahrenheit");
				printf("\nPress 2 to Fahrenheit to Centigrade");
				printf("\nPress 3 to Centigrade to Kelvin");
				printf("\nPress 4 to kelvin to Centigrade");
				printf("\nYour Answer=");
				scanf("%d",&b);
				switch(b)
				{
					case 1: t2=0,t1=0;
							printf("Give input in Centigrade =");
							//printf("\nYour answer=");
							scanf("%f",&t1);
							t2=(1.8)*t1+32;
							printf("The Temperature in the fehrenheit is=%.2f",t2);
						break;
					case 2: t2=0,t1=0;
							printf("Give input in fehrenheit =");
							//printf("\nYour answer=");
							scanf("%f",&t1);
							t2=(.55556)*(t1-32);
							printf("The Temperature in the Centigrade is=%.2f",t2);
						break;
					case 3: t2=0,t1=0;
							printf("Give input in Centigrade =");
							//printf("\nYour answer=");
							scanf("%f",&t1);
							t2=t1+273;
							printf("The Temperature in the kelvin is=%.2f",t2);
						break;
					case 4: t2=0,t1=0;
							printf("Give input in kelvin =");
							//printf("\nYour answer=");
							scanf("%f",&t1);
							t2=t1-273;
							printf("The Temperature in the Centigrade is=%.2f",t2);
						break;
				}
			break;
		case 5: N:
				printf("\n==============\tWelcome to Rearrange Section ================\n\n");
				printf("\n==============================\n");
				printf("\n1. Ascending");
				printf("\n2.Decending");
				printf("\nYour Answer=");
				scanf("%d",&b);
				switch(b)
				{
					case 1: printf("Total no of elements you want to input?");
							printf("\nYour Answer=");
							scanf("%d",&c);
							for(d=0;d<c;d++)
							{
								printf("\nGive input=");
								scanf("%d",&t[d]);
							}
							ascending(t,c);
						break;
					case 2: printf("Total no of elements you want to input?");
							printf("\nYour Answer=");
							scanf("%d",&c);
							for(d=0;d<c;d++)
							{
								printf("\nGive input=");
								scanf("%d",&t[d]);
							}
							desending(t,c);
						break;
				}
			break;
		case 6:	O: 
				printf("\n==============\tWelcome to Unit Convertor ================\n\n");
				printf("\n1.	Length conversion");
				 printf("\n2.	Speed Conversion");
				 printf("\n3.	Currency Conversion");
				 printf("\nYour Answer=");
				 scanf("%d",&a);
				 switch(a)
				 {
					case 1:		printf("\n1.	Kilometer to Mile");
								printf("\n2.	Mile to Kilometer");
								printf("\n3.	Astronomical unit to Kilometer");
								printf("\nPlease give answer=");
								scanf("%d",&b);
								switch(b)
								{
									case 1:	printf("\nGive the value in Kilometer=");
											scanf("%f",&w2);
											w1=(0.62)*w2;
											printf("\nYour input in Mile=%.2f",w1);
										break;
									case 2: printf("\nGive the value in Mile=");
											scanf("%f",&w2);
											w1=(1.609344)*w2;
											printf("\nYour input in Kilometer=%.2f",w1);
										break;
									case 3: printf("\nGive the value in Astronomical units=");
											scanf("%f",&w2);
											w1=(149597871)*w2;
											printf("\nYour input in Kilometer=%.2f",w1);
										break;
								}
						break;
					case 2: 	printf("\n1.	Meter/Sec to Km/hr");
								printf("\n2.	Km/hr to Meter/sec");
								printf("\nPlease give answer=");
								scanf("%d",&b);
								switch(b)
								{
									case 1:	printf("\nGive the value in meter/sec=");
											scanf("%f",&w2);
											w1=(3.6)*w2;
											printf("\nYour input in km/hr=%.2f",w1);
										break;
									case 2: printf("\nGive the value in km/hr=");
											scanf("%f",&w2);
											w1=(0.277778)*w2;
											printf("\nYour input in meter/sec=%.2f",w1);
										break;
								}
						break;
				$:	case 3:	printf("\n1.	Dollar to INR");
							printf("\n2.	INR to Dollar");
							printf("\nPlease give answer=");
							scanf("%d",&b);
							switch(b)
							{
								case 1:	printf("\nGive the value in Dollar=");
										scanf("%f",&w2);
										w1=(95.38)*w2;
										printf("\nYour input in INR=%.2f",w1);
									break;
								case 2: printf("\nGive the value in INR=");
										scanf("%f",&w2);
										w1=(0.010)*w2;
										printf("\nYour input in Dollar=%.2f",w1);
									break;
								}
						break;
				 }
			break;
	}
	getch();
	printf("\n=============================\n");
	printf("\n=============================\n");
	printf("\n");
	printf("\n");
	printf("\nPlease select the option from given below");
	printf("\n1.	Basic Calculator");
	printf("\n2.	METHEMETICAL SERVICE");
	printf("\n3.	ASTROLOGY SERVICE");
	printf("\n4.	TEMPERATURE CONVERSION");
	printf("\n5.	NUMBER REARRANGEMENT");
	printf("\n6.	Unit Conversion");
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
	else if(a==4)
	{
		goto M;
	}
	else if(a==5)
	{
		goto N;
	}
	else if(a==6)
	{
		goto O;
	}
}
void ascending (int t[],int c)
{
	int x,y,z;
	for(x=0;x<c;x++)
	{
		for(y=x+1;y<c;y++)
		{
			if(t[x]>t[y])
			{
				z=t[x];
				t[x]=t[y];
				t[y]=z;
			}
		}
	}
	printf("\nAfter rearranging in asending order the array looks like\n");
	for(z=0;z<c;z++)
	{
		printf("\t%d",t[z]);
	}
}
void desending (int t[],int c)
{
	int x,y,z;
	for(x=0;x<c;x++)
	{
		for(y=x+1;y<c;y++)
		{
			if(t[x]<t[y])
			{
				z=t[x];
				t[x]=t[y];
				t[y]=z;
			}
		}
	}
	printf("\nAfter rearranging in desending order the array looks like\n");
	for(z=0;z<c;z++)
	{
		printf("\t%d",t[z]);
	}
}
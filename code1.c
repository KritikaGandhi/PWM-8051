#include<reg52.h>


void delay(unsigned int time);
void main()
{
unsigned int x;
while(1)
{
for(x=0;x<=200;x++)
	{
	P1=0X0FF; // LED ON
	P3=(0X01<<5);  //ON MOTOR
 delay(1); //1ms
 P1=0X00;
 P3=0X00;
 delay(9); //9ms
		
	}
for(x=0;x<=200;x++)
	{
	P1=0X0FF;
		P3=(0X01<<5);
		delay(5); //5ms
		P1=0X00;
		P3=0X00;
		delay(5); //5ms
		
	}
for(x=0;x<=200;x++)
	{
	P1=0X0FF;
		P3=(0X01<<5);
		delay(9);
		P1=0X00;
		P3=0X00;
		delay(1);
		}
	}
}
void delay(unsigned int time)
{
unsigned int i,j;
	for(i=0;i<time;i++)
	{for(j=0;j<113;j++);}
	
	
}
	


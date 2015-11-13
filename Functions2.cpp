#include<stdio.h>

int max(int x, int y, int z);
int main ()
{
int x,y,z;
printf(" Zadaj cislo");
scanf("%d",&x);
printf(" Zadaj cislo");
scanf("%d",&y);
printf(" Zadaj cislo");
scanf("%d",&z);


max(x,y,z);
printf("Najvacsie cislo je %d",max(x,y,z));
return 0;
}

int max(int x, int y, int z)
{
if (x>y)
{
	if(x>z)
	{
	 return x;
	}
	else
	{
	 return z;
	}
}
	else
	{
	  if (y>z)
	  {
	  return y;
	  }
		else
		{
		  return z;
		}
	}
	

}

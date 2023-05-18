#include <stdio.h>
#include <stdlib.h>

int main()
{
  char napis[20]="WERTEDSHVDD";
  char z = *(napis+2); //z='R'
  int a = napis[13]; // a=0   ,z='R'
  z++; // a=0   ,z='S'
  int b= a--; // a=-1   , b=0  ,z='S'
  z=(a-=2)+3; // a=-3   , b=0  ,z='\0'
  a=a-4; // a=-7   , b=0  ,z='\0'
  b=a*b; // a=-7   , b=0  ,z='\000'
  return 0;
}


#include <stdio.h>

bool hlasovanie(int n);

main()
{
	//printf("\nHlasovanie : %d", hlasovanie(126));
    if(hlasovanie(0)==false)
         printf("\nHlasovanie - vstup 0 : test OK");
    else
         printf("\nHlasovanie - vstup 0 : test Failed !"); 
   
    if(hlasovanie(127)==true)
         printf("\nHlasovanie - vstup 127 : test OK");
    else
         printf("\nHlasovanie - vstup 127 : test Failed !");
     
	if(hlasovanie(15)==true)
         printf("\nHlasovanie - vstup 15 : test OK");
    else
         printf("\nHlasovanie - vstup 15 : test Failed !");  
		 
    if(hlasovanie(69)==false)
         printf("\nHlasovanie - vstup 69 : test OK");
    else
         printf("\nHlasovanie - vstup 69 : test Failed !");  
         
    if(hlasovanie(58)==true)
         printf("\nHlasovanie - vstup 58 : test OK");
    else
         printf("\nHlasovanie - vstup 58 : test Failed !");   
		 
    if(hlasovanie(104)==false)
         printf("\nHlasovanie - vstup 104 : test OK");
    else
         printf("\nHlasovanie - vstup 104 : test Failed !");  
         
    if(hlasovanie(1)==false)
         printf("\nHlasovanie - vstup 1 : test OK");
    else
         printf("\nHlasovanie - vstup 1 : test Failed !");   
		 
	if(hlasovanie(120)==true)
         printf("\nHlasovanie - vstup 120 : test OK");
    else
         printf("\nHlasovanie - vstup 120 : test Failed !");	   
}



bool hlasovanie(int n)
{
	int pocet1=0;
	while(n!=0){
       if(n&1==1)
          pocet1++;
       n=n>>1;
	}
	//printf("%d", pocet1);
    return pocet1>=4?true:false;
}

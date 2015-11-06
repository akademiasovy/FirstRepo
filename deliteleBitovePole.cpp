// komentar
//dalsi komentar
#include <stdio.h>

int delitele(int n);

main()
{
	//printf("\nDelitele : %d", delitele(256));
    if(delitele(0)==32767)
         printf("\nDelitelnost cislom 0 : test OK");
    else
         printf("\nDelitelnost cislom 0 : test Failed !"); 
		 
	if(delitele(1)==1)
         printf("\nDelitelnost cislom 1 : test OK");
    else
         printf("\nDelitelnost cislom 1 : test Failed !");	      
          
    if(delitele(80)==667)
         printf("\nDelitelnost cislom 80 : test OK");
    else
         printf("\nDelitelnost cislom 80 : test Failed !");      

    if(delitele(720)==19391)
         printf("\nDelitelnost cislom 720 : test OK");
    else
         printf("\nDelitelnost cislom 720 : test Failed !");      

    if(delitele(13)==4097)
         printf("\nDelitelnost cislom 13 : test OK");
    else
         printf("\nDelitelnost cislom 13 : test Failed !");      
    
    if(delitele(19)==1)
         printf("\nDelitelnost cislom 19 : test OK");
    else
         printf("\nDelitelnost cislom 19 : test Failed !");  
		 
	if(delitele(256)==139)
         printf("\nDelitelnost cislom 256 : test OK");
    else
         printf("\nDelitelnost cislom 256 : test Failed !"); 	     

}



int delitele(int n)
{
	int p=0;
	int i;
	for(i=15;i>0;i--){
		p=p<<1;
	     if(n%i==0){
	     	p=p|1;
		 }
    }
    return p;
}

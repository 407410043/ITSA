#include<stdio.h>          
#include<stdlib.h>          
main()    
{ int a,b,temp;    
		while(scanf("%d %d",&a,&b)==2)    
		{  
				while(a%b)    
				{    
						temp=a;    
						a=b;    
						b=temp%b;               
				}    
				printf("%d\n",b);  
		}    
		return 0;      
}

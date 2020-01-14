#include<stdio.h>    
int main(){    
		int i;  
		int j,k,l;    
		while(scanf("%d",&i)!=EOF){    
				j=i/10;    
				k=i%10/5;    
				l=i%10%5;    
				printf("NT10=%d\n",j);    
				printf("NT5=%d\n",k);    
				printf("NT1=%d\n",l);    
		}    
		return 0;    
}  

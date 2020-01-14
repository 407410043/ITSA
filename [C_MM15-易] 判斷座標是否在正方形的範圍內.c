#include<stdio.h>    
int main(){    
		int i;    
		int j;    
		while(scanf("%d %d",&i,&j)!=EOF){    
				if(i<=100&&j<=100)  
						printf("inside\n");  
				else  
						printf("outside\n");    
		}    
		return 0;    
}  

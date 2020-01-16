#include<stdio.h>  
int main(){  
		int i,j,k;  
		while(scanf("%d",&i)!=EOF){  
				if(i<=31){  
						k=1;  
						for(j=1;j<=i;j++){  
								k=k*2;  
						}  
						printf("%d\n",k);  
				}  
				else{  
						printf("Value of more than 31\n");  
				}  
		}  
		return 0;  
}  

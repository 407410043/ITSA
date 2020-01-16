#include<stdio.h>  
int main(){  
		int i,j;  
		while(scanf("%d",&i)!=EOF){  
				for(j=1;j<i;j++){  
						if(i%j==0){  
								printf("%d ",j);  
						}  
				}  
				printf("%d\n",i);  
		}  
		return 0;  
}  

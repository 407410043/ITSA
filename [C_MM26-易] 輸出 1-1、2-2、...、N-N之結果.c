#include<stdio.h>  
int main(){  
		int i;  
		int j;  
		while(scanf("%d",&i)!=EOF){  
				for(j=1;j<=i;j++){  
						printf("%d*%d=%d\n",j,j,j*j);  
				}  
		}  
		return 0;  
}  

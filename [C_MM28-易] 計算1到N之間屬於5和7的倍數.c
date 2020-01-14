#include<stdio.h>    
int main(){    
		int i;    
		int j,k;    
		while(scanf("%d",&i)!=EOF){  
				k=i/35;    
				for(j=1;j<k*35;j++){    
						if(j%5==0&&j%7==0)    
								printf("%d ",j);    
				}    
				printf("%d\n",k*35);    
		}    
		return 0;    
}  


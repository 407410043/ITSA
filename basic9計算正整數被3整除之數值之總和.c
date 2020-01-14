#include<stdio.h>    
int main(){     
		int n;   
		int i=0;   
		int j=0;  
		while(scanf("%d",&n)!=EOF){  
				j=0;  
				for(i=1;i<=n;i++){  
						if(i%3==0)  
								j=j+i;  
						else  
								j=j;  
				}  
				printf("%d\n",j);  
		}   
		return 0;    
}  


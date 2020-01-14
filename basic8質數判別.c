#include<stdio.h>    
int main(){    
		int i;    
		int j=0;    
		int n;    
		while(scanf("%d",&n)!=EOF){  
				j=0;  
				for(i=2;(i*i)<=n;i++){    
						if((n%i)==0){    
								j=1;    
						}    
				}  
				if(n==1)  
				{j=1;}  
				if(j==0)    
				{printf("YES\n");}    
				else    
				{printf("NO\n");}    
		}  
		return 0;    
}  


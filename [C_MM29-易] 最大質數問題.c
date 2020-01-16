#include<stdio.h>  
int main(){  
		int n,i,a=0,flag=0;  
		scanf("%d",&n);  
		n--;  
		while(n>=2){  
				for(i=2;i<n;i++){  
						if((n%i)==0)  
						{break;}  
						if(i==(n-1))  
						{flag=1;}  
				}  
				if(flag==1)  
				{break;}  
				n--;  
		}  
		printf("%d\n",n);  
		return 0;  
} 

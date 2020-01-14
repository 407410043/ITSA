#include<stdio.h>    
int main(){    
		int i,j,k,l,m;    
		while(scanf("%d",&i)!=EOF){    
				j=i/60/60/24;    
				k=(i-j*24*60*60)/60/60;    
				l=(i-j*60*60*24-k*60*60)/60;    
				m=i-j*60*60*24-k*60*60-l*60;    
				printf("%d days\n",j);    
				printf("%d hours\n",k);    
				printf("%d minutes\n",l);    
				printf("%d seconds\n",m);    
		}    
		return 0;    
}  

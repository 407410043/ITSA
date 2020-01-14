#include<stdio.h>  
int main(){  
		int i;  
		int j;  
		int k;  
		int l=0;  
		while(scanf("%d %d",&i,&j)!=EOF){  
				l=0;  
				if(i<j){  
						for(k=i;k<=j;k++){  
								l=l+k;  
						}  
				}  
				if(i>j)  
						for(k=j;k<=i;k++){  
								l=l+k;  
						}  
				printf("%d\n",l);  
		}  
		return 0;  
}  

#include <stdio.h>  
int main(){  
		double i;  
		int j;  
		while(scanf("%le %d",&i,&j)!=EOF){  
				if(j==1)  
						printf("%.1f\n",(i-80)*0.7);  
				else  
						printf("%.1f\n",(i-70)*0.6);  
		}  
		return 0;  
}  

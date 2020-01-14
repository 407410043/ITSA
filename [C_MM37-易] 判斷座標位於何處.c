#include<stdio.h>    
int main(){    
		int i,j;    
		while(scanf("%d %d",&i,&j)!=EOF){    
				if(i==0){  
						if(j==0)  
								printf("Origin\n");  
						else  
								printf("y-axis\n");  
				}  
				else if(i<0){  
						if(j>0)  
								printf("2nd Quadrant\n");  
						else if(j<0)  
								printf("3rd Quadrant\n");  
						else  
								printf("x-axis\n");  
				}  
				else{  
						if(j>0)  
								printf("1st Quadrant\n");  
						else if(j<0)  
								printf("4th Quadrant\n");  
						else  
								printf("x-axis\n");  
				}  
		}    
		return 0;    
}  

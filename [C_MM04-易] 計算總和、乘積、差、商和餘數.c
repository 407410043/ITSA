#include<stdio.h>    
int main(){    
		int i,j;    
		while(scanf("%d %d",&i,&j)!=EOF){    
				if(i<0&&j>0){  
						printf("%d+%d=%d\n",i,j,i+j);    
						printf("%d*%d=%d\n",i,j,i*j);    
						printf("%d-%d=%d\n",i,j,i-j);    
						printf("%d/%d=%d...%d\n",i,j,i/j-1,i%j+j);    
				}  
				else if(i<0&&j<0){  
						printf("%d+%d=%d\n",i,j,i+j);    
						printf("%d*%d=%d\n",i,j,i*j);    
						printf("%d-%d=%d\n",i,j,i-j);    
						printf("%d/%d=%d...%d\n",i,j,i/j+1,i%j-j);  
				}  
				else{  
						printf("%d+%d=%d\n",i,j,i+j);    
						printf("%d*%d=%d\n",i,j,i*j);    
						printf("%d-%d=%d\n",i,j,i-j);    
						printf("%d/%d=%d...%d\n",i,j,i/j,i%j);  
				}  
		}    
		return 0;    
}  

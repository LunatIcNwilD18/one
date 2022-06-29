#include<stdio.h>
int func_disp(int i,int j,int r,int c,int a[][]);
//int a[20][20];
int main()
{
	int i,j,r,c,matrix;
	printf("enter the number of rows and columns");
	scanf("%d %d",&r,&c);
	int a[r][c];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("enter element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			 
		}
	}
	matrix = func_disp(i,j,r,c,a[r][c]);
//	printf("the elements are :\n");
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n\n");
//	}
	if(r!=c)
	printf("transpose not possible");
	else{
								 
	   printf("the transpose of this matrix is:\n ");
	   for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n\n");
	    }
        }
    int q,w;   
    
	printf("enter the rows and columns of second matrix");
	scanf("%d %d",&q,&w);
	
	int b[q][w];
	for(int i=0;i<q;i++){
		for(int j=0;j<w;j++){
			printf("enter element b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			
		}
		
	}
	
	for(int i=0;i<q;i++){
		for(int j=0;j<w;j++){
			printf("%d\t",b[i][j]);
			
		}
		printf("\n\n");
	}
	
	if(q!=w)
	printf("transpose not possible");
	else{
								 
	   printf("the transpose of this matrix is:\n ");
	   for(i=0;i<q;i++){
		for(j=0;j<w;j++){
			printf("%d\t",b[j][i]);
		}
		printf("\n\n");
	}
	int x;
	printf("which operation do you wanna perform\n1)Addition 2)Subtraction 3)Multiplication 4)Operations on transpose");
	
	scanf("%d",&x);
	
	if(x==1){
		if(r==q && c==w){
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					printf("%d\t",a[i][j] + b[i][j]);
				}
				printf("\n\n");
			}
			
			
		}
		else{
			
			printf("operation not possible");
			
		}
		
		
		
	}
	else if(x==2){
	       if(r==q && c==w){
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					printf("%d\t",a[i][j] - b[i][j]);
				}
				
				printf("\n\n");
			}
			
			
		}
		else{
			
			printf("operation not possible");
			
		}
		
	}
	else if(x==3){
		if(c==q){
			
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					printf("%d\t",a[i][j] * b[i][j]);
				}
				printf("\n\n");
			}
			
			
		
			
		}
		else{
			printf("Operation not possible");
		}
		
		
	}
	else if(x==4){ 
	
	          printf("Choose on eof the following operations to perform");
		  
		
		}
		
	}   
	
}
	int func_disp(int i,int j,int r,int c,int a[r][c])
	{
		int matrix;
			printf("the elements are :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
		return matrix;
	}
        
        
        
    
        
        
        
        
	  
		


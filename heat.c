#include<stdio.h>

int main()
{	
	float mat**;
	float k = 0.02,h = 0.1,c = 1;
	float r,row,column;
	r = (float)(k*c)/(h*h);
	row = 0.2/k;
	column = 1/h;
	
	printf("row = %d,column = %d",row,column);
	mat = (float **)calloc(column,sizeof(float));
		for(i = 0;i < row;i++)	
			mat[i]=(float **)calloc(column,sizeof(float));
			
		for(i = 0;i < row;i++)
		mat[i][0] = mat[i][column - 1] = 0.0;
		
			printf("result is:")
			for(i = 0;i < row;i++)
			{
				for(c = 0;c < column;c++)
				{
					printf("%f\t",mat[r][c]);
				}
				printf("\n");
			}
		
		
}

#include<stdio.h>

FILE *fileptr=NULL;

int main(void)
{
	char str[25];
        char ch;
	fileptr=fopen("file1.txt","w"); // creating a file 
    	if(fileptr == NULL)
     	{
     		printf("Error in creating a file\n"); //
     	}
       	else
      	{
      		//*printf("file created successfully");//*

      	fprintf(fileptr,"welcome to c programming\n");// printing a file-fprintf
      
      	
      	}
	fclose(fileptr);
return 0;
}

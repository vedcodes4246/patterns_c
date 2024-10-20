/*pyramid,number 2nd type start with 0
   
     0 
    0 1 
   0 1 2 
  0 1 2 3 
 0 1 2 3 4                                  */

#include<stdio.h>//preprocessor directive with header file

int main()//heart of the program
{
    int n;
    printf("enter number of rows\n");
    scanf("%d",&n); //input from user-no. of rows
    int rows;
    //first loop to print all rows
    for(rows=0; rows<=n; rows++)
    {
        //inner loop to print white spaces
        for(int sp=0; sp< n-(rows-1); sp++)// put bracket in n-rows-1 like n-(rows-1)
        {
            printf(" ");
        }
        //inner loop to print stars
        for(int st=0; st<rows; st++)
        {
            printf("%d ",st);//space is necessory  for desired output
        }
        printf("\n");
    }
    

    return 0;
}
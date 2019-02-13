/* FILE NAME : Raising_&_Falling edges.c
*  DESCRIPTION : Program to count the number of raising edges, falling edges and levels in a digital sequence
*  of data i.e 1's and 0's given.
*  CREATED BY : Brunda V
*  Emp ID : 213448
*/

/*--------------Includes------------------------------------*/
#include<stdio.h>

/*-------------Main function--------------------------------*/
int main()
{
    // digital data array
    int arr[]={1,0,1,0,1,0,1,1,1,1,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,0};
    int s=sizeof(arr)/sizeof(int);
    // variables for counting
    int i,c1=0,c2=0,c3=0;
    printf("Number of samples in given signal : %d", s);

    // Loop to check for the edges and levels
    for(i=0;i<s;i++)
    {
        int y=arr[i]-arr[i+1];
        if(y==1)
           {
              printf("\nSample no. : %02d  || Voltage value : %d || Falling edge",i,arr[i]); c1=c1+1;
           }
        else if(y==-1)
        {
             printf("\nSample no. : %02d  || Voltage value : %d || Raising edge",i,arr[i]); c2=c2+1;
        }
        else if(y==0)
        {
                 printf("\nSample no. : %02d  || Voltage value : %d || Level",i,arr[i]); c3=c3+1;
        }
    }

    // printing the summary
     printf("\n No of Raising edges: %d \n No of Falling edges: %d \n No of Levels: %d \n",c1,c2,c3);
     return 0;
}

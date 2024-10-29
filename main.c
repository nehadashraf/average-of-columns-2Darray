#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];
    int sum[4]={0},Avg[4];
    printf("Enter numbers\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%i",&arr[i][j]);
        }
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum[i]+=arr[j][i];
        }
    }
     for(int i=0; i<4; i++)
    {
        printf("Sum : %i\n",sum[i]);
    }
    for(int i=0; i<4; i++)
    {
        Avg[i]=sum[i]/3;
    }
       for(int i=0; i<4; i++)
    {
            printf("Avg : %i\n",Avg[i]);
    }

    return 0;
}

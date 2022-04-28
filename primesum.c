#include <stdio.h>
int main()
{
    int min = 2, max = 10;
    int len = max - min;
    int array[len];
    printf("min and max values are %d,%d :\n", min, max);
    for (int index = 0,val=min;index<len,val<max;index++,val++ )
    {
       array[index] = val;
             printf("%d ", array[index]);
    }
        for(int i=0;i<len;i++)
        {
         int num=array[i];
          int count=0;
          for(int j=2;j<num/2;j++)
          {
              if(num%j==0)
               break;
               if(j>num/2)
                 count++;
               
               
          }
            
        }



}

       
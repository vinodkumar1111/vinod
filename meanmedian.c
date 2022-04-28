

#include <stdio.h>

int main()
{
    int array[]={1,2,3,4,5,6,7};
         int  sum=0,mean=0;
         float median=0;

    int len=sizeof(array)/sizeof(array[0]);
    printf("length of array is: %d\n",len);
    printf("sum of given elements is:");
    for(int i=0;i<len;i++){
     sum = sum+array[i];
    }
     printf("%d\n",sum);
    mean=sum/len;
    printf("mean of given elements is:%d\n",mean);
    if(len%2==0)
      median=(array[len/2] + array[(len/2)-1])/2;
      else
      median = array[len/2];
      printf("median of given elements is:%f",median);
    return 0;
}

#include<stdio.h>
int main()
{ int arr[]={56,878,32,9,86,56,756};
  int i,j,length,half;
  length=sizeof(arr)/sizeof(arr[0]);
   half=length/2;
  for(i=half;i<length;i++)
  {
     printf("%d ",arr[i]);
  }
  for(i=0;i<half;i++)
  {
    printf("%d ",arr[i]);
  }
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}

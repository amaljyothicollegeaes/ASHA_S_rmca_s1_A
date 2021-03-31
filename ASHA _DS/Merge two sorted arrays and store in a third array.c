#include <stdio.h>
int main()
{
 int arr1[25],arr2[25],res[50],m,n,i,j,k=0;
 printf("Enter the size of first array:");
 scanf("%d",&m);
 printf("Enter the sorted elements of first array:\n");
 for(i=0;i<m;i++)
 {
 scanf("%d",&arr1[i]);
 }
 printf ("Enter the size of second array:");
 scanf("%d",&n);
 printf("Enter the sorted elements second of array:\n");
 for(j=0;j<n;j++)
 {
 scanf("%d",&arr2[j]);
 }
 i=0,j=0;
 while(i<m&&j<n)
 {
 if(arr1[i]<=arr2[j])
 {
 res[k]=arr1[i];
 i++;
 k++;
 }
 else
 {
 res[k]=arr2[j];
 j++;
 k++;
 }
 }
 if(i>=m)
 {
 while(j<n)
 {
 res[k]=arr2[j];
 j++;
 k++;
 }

 }
 if(j>=n)
 {
 while(i<m)
 {
 res[k]=arr1[i];
 i++;
 k++;
 }

 }
 printf("\n after merging");
 for(i=0;i<m+n;i++)
 {
 printf("\n%d",res[i]);
 }
 return 0;
}

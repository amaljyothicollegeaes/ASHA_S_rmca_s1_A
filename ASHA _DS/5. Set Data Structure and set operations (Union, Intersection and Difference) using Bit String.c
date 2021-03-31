#include <stdio.h>
#include<stdlib.h>
int Aunion();
int intersection();
int difference();
int s1[50],s2[50],s3[50];
int main()
{
 int ch=0;
 while(1)
 {
 printf("\n\n\nEnter choice to perform set operations");
 printf("\n1.union\n");
 printf("2.intersection \n");
 printf("3.difference");
 printf("\n4exit\n\n");
 printf("enter the choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("\nunion ");
 Aunion();
 break;
 case 2: printf("\nintersection ");
 intersection();
 break;
 case 3: printf("\ndifference ");

 difference();
 break;
 case 4: printf("\n\nExit success!");
 exit(0);
 default:printf("\nInvalid choice !");
 };
 }
}
int Aunion()
{
 int n,m,i,j;
printf("enter the cardinality first set ");
scanf ("%d",&n);
printf("enter the first sring values must be 0 and 1");
for(i=0;i<n;i++)
{
 scanf("%d",&s1[i]);
}
printf("enter the cardinality second set ");
scanf ("%d",&m);
printf("enter the first sring values must be 0 and 1");
for(j=0;j<m;j++)
{
 scanf("%d",&s2[j]);
}
if(n!=m)
{
 printf("Two sets are not compatible for union");
 return 0;
}
for(i=0;i<n;i++)
{
s3[i]=s1[i]|s2[i];
}
printf("{");
for(i=0;i<n;i++)
{
 printf("%d",s3[i]);
 if(i<n-1)
 {
 printf(",");
 }
}
printf("}");
}
int intersection()
{
int n,m,i,j;
printf("enter the cardinality of first set ");
scanf ("%d",&n);
printf("enter the first sring values must be 0 and 1\n");
for(i=0;i<n;i++)
{
 scanf("%d",&s1[i]);
}
printf("enter the cardinality of second set ");
scanf ("%d",&m);
printf("enter the first sring values must be 0 and 1\n");
for(j=0;j<m;j++)
{
 scanf("%d",&s2[j]);
}
if(n!=m)
{
 printf("Two sets are not compatible for union");
 return 0;
}
for(i=0;i<n;i++)
{
s3[i] = s1[i]&s2[i];
}
printf("{");
for(i=0;i<n;i++)
{
 printf("%d",s3[i]);
 if(i<n-1)
 {
 printf(",");
 }

}
printf("}");
}
int difference()
{
int n,m,i,j;
printf("enter the cardinality of first set ");
scanf ("%d",&n);
printf("enter the first sring values must be 0 and 1\n");
for(i=0;i<n;i++)
{
 scanf("%d",&s1[i]);
}
printf("enter the cardinality of second set ");
scanf ("%d",&m);
printf("enter the first sring values must be 0 and 1\n");
for(j=0;j<m;j++)
{
 scanf("%d",&s2[j]);
}
if(n!=m)
{
 printf("Two sets are not compatible for union");
 return 0;
}
for(i=0;i<n;i++)
{
 s2[i]=!s2[i];
}
for(i=0;i<n;i++)
{
 s3[i]=s1[i]&s2[i];
}
printf("{");
for(i=0;i<n;i++)
{
 printf("%d",s3[i]);
 if(i<n-1)
 {
 printf(",");
 }

}
 printf("}");
}
#include<stdio.h>
void push(int a[], int n, int top)
{  int element;
if(top=n-1)
printf("stack is full");
else
{
printf("Enter array elements");
scanf("%d",&element);
a[top++]=element;
}
}
void pop(int a[], int n; int top)
{  int element;
 if(top== -1)
 printf("stackis empty");
 else
 {
 printf("Popped element is");
 element= a[--top];
 }
 }
 void display(int a[], int n)
 {
   printf("array elements are);
   for(int i=1;i<n;i++)
   { printf("%d\n", a[i]);
    }
   }
    int main()
    {
      int a[10],n, top=-1;
      while(1)
      {
      printf("enter choic);
      scanf("%d",&choice);
      switch(choice)
      {
     case 1:   
       {
      push(a, &n, top);
      }
       case 2: 
      {
      pop(a,&n,top);
      }
     case 3:  
      {
      display(a,&n);
      } 
      default:  break;
      }

/* Example 1.4 Insertion Sort of n<20 numbers - Ascending Order */

#include<stdio.h>

int main(){
  int a[20],i,j,iminus,temp;
  int n;
  printf("Enter n\n");
  scanf("%d", &n);
  printf(" Next enter %d numbers one by one \n",n);
  for(i=0;i<n;i++){
    printf("Enter number %d \n",i);
    scanf("%d", &a[i]);
  }
  for(i = 1; i < n; i++){
    temp = a[i];
    for(j = i-1;j>=0;j--){
      if(a[j]>temp){
        a[j + 1] = a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++){
    printf(" %d ",a[i]);
  }
  return 0;
}


/* Example 1.5 Selection Sort of n<20 numbers -Descending Order */

#include<stdio.h>

int main(){
  int a[20],i,j,jstore,temp,k;
  int n;
  printf("Enter n\n");
  scanf("%d", &n);
  printf(" Next enter %d numbers one by one \n",n);
  for(i=0;i<n;i++){
    printf("Enter number %d \n",i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i <=n-2; i++){
    temp = a[i];
    jstore=i;
    for(j =i+1;j<=n-1;j++){
      if(a[j]>temp){
        temp=a[j];
        jstore=j;
      }
    }
    a[jstore]=a[i];
    a[i]=temp;
  }
  for(i=0;i<n;i++){
    printf(" %d ",a[i]);
  }
  return 0;
}

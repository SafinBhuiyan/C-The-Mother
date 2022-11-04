#include<stdio.h>
int main() {
int A,i,X;
scanf("%d",&A);
for(i=1;i<=A;i++){
X=A%i;
if(X==0)
printf("%d\n",i);
}
return 0;
}

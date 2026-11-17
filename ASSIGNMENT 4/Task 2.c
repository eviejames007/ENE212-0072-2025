#include <stdio.h>

int main(){
int sum=0;
int i;
int arr[3]={2,5,8};

for (i=0; i<3; i++){
sum = sum+arr[i];
}
printf("%d\n",sum);

return 0;
}

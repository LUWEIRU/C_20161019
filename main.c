#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b;
  printf("請輸入兩個整數:");
  scanf("%d %d",&a,&b);
  printf("%d+%d=%d\n",a,b,a+b);
  printf("%d*%d=%d\n",a,b,a*b);
  printf("%d-%d=%d\n",a,b,a-b);
  printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
  system("PAUSE");	
  return 0;
}

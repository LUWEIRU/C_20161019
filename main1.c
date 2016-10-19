#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int food=0,price=0,tmp=0;
  
  for(;;)
  {
  printf("請輸入餐點價格或是 999 離開 :");
  scanf("%d",&tmp);
  if(tmp==999) break;
  food=food+1 ;
  price=price+tmp ;
  }
  printf("總共是%d道餐點，%d",food,price);
  system("PAUSE");	
  return 0;
}

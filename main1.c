#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int food=0,price=0,tmp=0;
  
  for(;;)
  {
  printf("�п�J�\�I����άO 999 ���} :");
  scanf("%d",&tmp);
  if(tmp==999) break;
  food=food+1 ;
  price=price+tmp ;
  }
  printf("�`�@�O%d�D�\�I�A%d",food,price);
  system("PAUSE");	
  return 0;
}

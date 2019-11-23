#include <stdio.h> 

int hmain() 


{ 
  int i; 
  int x; 

  int factorial = 1; 
  printf("��������͂���F");
	scanf("%d",&x);

  for(i=1; i<=x; i++) { 
    factorial = factorial * i; 
  }

  printf("%d�̊K���%d�ł��B\n",x,factorial);

  return 0; 
} 

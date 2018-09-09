#include <stdio.h> 

int hmain() 


{ 
  int i; 
  int x; 

  int factorial = 1; 
  printf("®”‚ğ“ü—Í‚¹‚æF");
	scanf_s("%d",&x);

  for(i=1; i<=x; i++) { 
    factorial = factorial * i; 
  }

  printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n",x,factorial);

  return 0; 
} 

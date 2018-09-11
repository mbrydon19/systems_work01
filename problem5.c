# include <stdio.h>

int main() {
  int num = 20;
  int divisor = 11;
  while ( divisor < 21)
    if ( num % divisor == 0)
      divisor++;
    else {
      num++;
      divisor = 11;
    }
    
  printf( "result: %d \n", num);
  return num;
}
		    
		    
		    
  

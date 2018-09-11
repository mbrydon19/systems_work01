# include <stdio.h>

int main() {
  int result = 0;
  
  for ( int curNum = 0; curNum < 1000; curNum++)
    if ( curNum % 3 == 0 || curNum % 5 == 0)
      result += curNum;
  
  printf( "result: %d \n", result);
  return result;
}
      
    

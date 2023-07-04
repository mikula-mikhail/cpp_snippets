#include <stdio.h>
#include <stdint.h>

void bit_print(int x){
  size_t size_num = sizeof(x);
  printf("number = ");
  for (size_t i = 0; i < size_num * 8; ++i) {
    size_t sig_bit = x & (1 << i);
    if (sig_bit) {
      printf("1");
    } else {
      printf("0");
    }
  }
  printf("\n");
}

int main(void)
{
  /*
   * 1. `Set a bit` of an integer to 1
   */
  int x = 10;
  printf("x = %d | %o | %x --> ", x, x, x);
  x = (1 << 6) | x;
  printf("%d | %o | %x\n", x, x, x);
  x |= 0xFF;
  printf("%d | %o | %x\n", x, x, x); 
  

  uint8_t y = 255;
  printf("y = %d | %o | %x\n", y, y, y);

  printf("size of x = %zu bits\n", sizeof(x));

  char *bits = "0000";
  printf("x = ");
  for (size_t i = 0; i < sizeof(x) * 2; ++i) 
    printf("%s ", bits);
  printf("\n");

  bit_print(x);

  while (scanf(" %d", &x)) {
    bit_print(x);
    printf(" Enter new number: ");
  }
  
  return 0;
}

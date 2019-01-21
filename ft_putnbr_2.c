#include <unistd.h>

char num_to_char(int a) {
  char a1 = '0' + a;
  write(1, &a1, 1);
  return a1;
}

void ft_putnbr_2(int number) {
  if(number == 0) {
    return;
  } else {
    ft_putnbr_2(number/10);
    num_to_char(number%10);
  }
}

void ft_put_nmbr_with_zero(int number) {
  if (number == 0) {
    num_to_char(number);
  } else {
    ft_putnbr_2(number);
  }
}

int main() {
  ft_put_nmbr(-2147483648);
  write(1, "\n", 1);
  ft_put_nmbr(5);
  write(1, "\n", 1);
  ft_put_nmbr(0);
  return 0;
}
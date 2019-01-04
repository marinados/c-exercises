#include <unistd.h>
#include "ft_putchar.h"

void ft_print_is_negative(int n) {
  if (n >= 0) {
    ft_putchar('P');
  } else {
    ft_putchar('N');
  }
}

int ft_power(int base, int exp) {
    int result = 1;
    while(exp) { result *= base; exp--; }
    return result;
}

int ft_atoi(char *string) {
  int i = 0;
  int exponent = 0;
  int number = 0;
  int is_negative = 0;

  while (string[i] != '\0') {
    exponent ++;
    i++;
  }

  exponent--;

  i = 0;

  if (string[0] == 45) {
    is_negative = 1;
    i++;
    exponent--;
  }

  while (string[i] != '\0') {
    number += (string[i] - 48) * ft_power(10, exponent);
    exponent--;
    i++;
  }


  if (is_negative) {
    return -number;
  } else {
    return number;
  }
}

int main(int argc, char *argv[]) {
  if (argc == 2) {
    int number;
    number = ft_atoi(argv[1]);
    ft_print_is_negative(number);
  } else {
    return 0;
  };
}

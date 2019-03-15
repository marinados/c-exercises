#include <unistd.h>
#include <stdio.h>

// to get a pointer of a value, it's &value
// to indicate a pointer as an argument, it's *pointer
// to get a value of a pointer, it's *pointer, too!

// a function that takes a value of a pointer as input and
// then changes the value the pointer points to to 42
void ft_ft(int *nmbr) {
	// int value = *nmbr;
  // value = 42;
  *nmbr = 42;
}

// void ft_ultimate_ft(int *********nmbr) {

// }

void ft_swap(int *a, int *b) {
  int value1 = *a;
  int value2 = *b;
  *a = value2;
  *b = value1;
}

void ft_div_mod(int a, int b, int *div, int *mod) {
  *div = a/b;
  *mod = a%b;
}

// v1
void ft_ultimate_div_mod(int a, int b) {
  int *pointA = &a;
  int *pointB = &b;
  int div = a/b;
  int mod = a%b;

  *pointA = div;
  *pointB = mod;
  printf("%d", *pointA);
  printf("%d", *pointB);
}

// v2
void ft_ultimate_div_mod2(int a, int b) {
  *&a = a/b;
  *&b = a%b;

  printf("%d", a);
  printf("%d", b);
}

// for ft_div_mod & ultimate_div_mod
int main() {
  int a = 120;
  int b = 89;
  ft_ultimate_div_mod(a, b);
  // int div = 0;
  // int mod = 0;
  // ft_div_mod(a, b, &div, &mod);
}


// for ft_swap
// int main() {
//   int a = 12;
//   int b = 89;
//   ft_swap(&a, &b);
//   printf("%d", a);
//   printf("%d", b);
//   return b;
// }

// for ft_ft
// int main() {
//   int sth = 56;
//   ft_ft(&sth);
//   printf("%d", sth);
//   return sth;
// }
#include <unistd.h>

void print_num(int a, int b) {
	char a1 = '0' + a;
	char b1 = '0' + b;
	write(1, &a1, 1);
	write(1, &b1, 1);
}

void print_zero_padding_for_two_digit_num(int n) {
	if(n < 10) {
		print_num(0, n);
	} else {
		print_num(n/10, n%10);
	}
}

void print_tuple(int a, int b) {
	print_zero_padding_for_two_digit_num(a);
	write(1, " ", 1);
	print_zero_padding_for_two_digit_num(b);
}

int main() {
	for(int i = 0; i < 99;  i++) {
		for(int n = i + 1; n <= 99; n++) {
			if((n > i)) {
				if(n != 1) {
					write(1, ", ", 2);
				}
				print_tuple(i, n);
			}
		}
	}
	return 0;
}
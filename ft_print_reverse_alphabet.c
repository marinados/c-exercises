#include <unistd.h>

int ft_putchar(int letter) {
	write(1, &letter, 1);
	return letter;
}

void ft_print_reverse_alphabet(void) {
	char z = 'z';
	int i = 0;
	while(i < 26) {
		ft_putchar(z - i);
		i++;
	}
}

int main(void) {
	ft_print_reverse_alphabet();
	return 0;
}
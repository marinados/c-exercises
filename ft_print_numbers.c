#include <unistd.h>

int ft_putchar(int letter) {
	write(1, &letter, 1);
	return letter;
}

void ft_print_numbers(void) {
	int i = 48;
	while(i <= 57) {
		ft_putchar(i);
		i++;
	}
}

int main(void) {
	ft_print_numbers();
	return 0;
}
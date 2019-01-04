#include <unistd.h>

int ft_putchar(int letter) {
	write(1, &letter, 1);
	return letter;
}

void ft_print_alphabet(void) {
	char a = 'a';
	int i = 0;
	while(i < 26) {
		ft_putchar(a + i);
		i++;
	}
}

int main(void) {
	ft_print_alphabet();
	return 0;
}
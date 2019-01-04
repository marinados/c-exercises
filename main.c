#include <unistd.h>
#include <stdlib.h>

int ft_length(char* src) {
	int i = 0;
	while(src[i] != '\0') {
		i++;
	}
	return i;
}

void ft_putstr(char* src) {
	int size = ft_length(src);
	write(1, src, size);
}

// int main(int ac, char** av) {
// 	if (ac < 2) {
// 		return 0;
// 	} else {
// 		ft_putstr(av[1]);
// 	}
// }

// int ft_atoi(char* number) {

// }

char ft_putchar(char number) {

}

void ft_print_numbers(void) {

}



int main() {
	int nimp = atoi("iefh");
	int number = atoi("123");
	int fl = atoi("1.2");
	write(1, &nimp, 40);
	write(1, &number, 40);
	write(1, &fl, 40);
}


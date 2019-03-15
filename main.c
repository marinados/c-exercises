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



#include <unistd.h>

char num_to_char(int a) {
	char a1 = '0' + a;
	// write(1, &a1, 1);
	return a1;
}



void ft_put_nmbr(int i) {
	if(i<0) {
		write(1, &"-", 1);
		i = -1 * i;
	}
	// declare a table of 10 slots
	char reverse_num_table[10];
	// address of a character and the following one
	// *pointer - content of the allocation
	char* pointer = reverse_num_table;

	do {
		// value of pointer, which is the actually the reference
		// first the * is executed (a new value is assigned to the pointer memory case)
		// then the pointer is incremented (cause otherwise it would have been ++pointer)
		*pointer++ = num_to_char(i%10);
		i = i/10;
	} while(i > 0);

	while(pointer != reverse_num_table) {
		// pointer--;
		// --pointer means that it's decremented before executing the write
		write(1, --pointer, 1);
	}
}

int main() {
	ft_put_nmbr(-2147483648);
	write(1, "\n", 1);
	ft_put_nmbr(5);
	write(1, "\n", 1);
	ft_put_nmbr(0);
}
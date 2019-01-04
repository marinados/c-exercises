#include <unistd.h>

void print_num(int a, int b, int c) {
	char a1 = '0' + a;
	char b1 = '0' + b;
	char c1 = '0' + c;
	write(1, &a1, 1);
	write(1, &b1, 1);
	write(1, &c1, 1);
}

int main() {
	for(int i = 0; i < 10;  i++) {
		for(int n = i + 1; n < 10; n++) {
			for(int z = n + 1; z < 10; z++) {
				if((z > n) && (n > i)) {
					if(z != 2) {
						write(1, ", ", 2);
					}
					print_num(i, n, z);
				}
			}
		}
	}
	return 0;
}
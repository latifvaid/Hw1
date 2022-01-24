#include <unistd.h>
int main() {
	write(2, "Hello, world!\n", 15);
}

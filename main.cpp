#include <iostream>

/**
 * This is a noop function. It should be optimized away by all reasonable
 * compilers
 */
float mynop(float val) {
	return val;
}

int main() {
	std::cout << "Hello world!" << std::endl;
	return 0;
}

#include <iostream>

int main() {
	int i, j, k, count = 0, n = 1000;

	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			for (k=0; k<n; k++) {
				count++;
			}
		}
	}
	std::cout << "Count: "<< count << std::endl;
	return 0;
}



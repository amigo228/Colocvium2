#include <iostream>

using namespace std;

int main()
{
	int n, z,x;

	cin >> n;
	int* array = new int[n];
	int max = -1, min = 10000;
	for (int i = 0; i < n; ++i) {
		cin >> array[i];	
	}
	for (int i = 0; i < n; ++i) {
		if (array[i] > max) {
			max = array[i];
			z = i;
		}
		if (array[i] < min) {
			min = array[i];
			x = i;
		}
	}
	std::swap(array[x], array[z]);
	for (int i = 0; i < n; ++i) {
		cout << array[i]<<" ";
	}
	delete[] array;
}



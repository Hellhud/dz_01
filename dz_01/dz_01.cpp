#include <iostream>
void v(int arr[], int mn) {
	for (int i = 0; i < mn; i++) std::cout << arr[i] << " ";
}
void g(int* a, int b, int n) {

	if (a != nullptr) {
		for (int i = 0; i < n; i++) {
			a[i] = b;
			b = b * 2;
		}
	}
}
int main() {
	int* a;
	int n, b = 2;
	std::cin >> n;
	a = new (std::nothrow) int[n];
	g(a, b, n);
	v(a, n);
}
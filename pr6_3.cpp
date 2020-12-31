#include <iostream>

using namespace std;
template <typename T>
T it(T P, T k)
{
	return P + k;
}
int array_result(int A[], int P) {
	for (int i = 0; i < 10; i++)
	{
		A[i] = rand() % 90 + 5;
		if (A[i] % 2 == 1)
		{
			P = it(P, 1);
		}
	}
	return P;
}
int output(int A[], int P) {
	cout << "Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int main() {
	int A[10];
	int P = 0;
	cout << "Result: " << array_result(A, P) << endl;
	cout << output(A, P) << endl;
	return 0;
}
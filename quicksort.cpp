#include <iostream>
using namespace std;

// array of integers to hold values
int arr[20];             
int cmp_count = 0;         // Number of comparasion
int mov_count = 0;         // Number of data movementt
int n; 

void input() {
	while (true) 
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 0)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Elemnt" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++) 
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}


}
// swaps the element at index x with the element at iindex y
void swap(int x, int y) 
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high) 
{
	int pivot, i, j;
	if (low > high)                        // Langkah 1
		return;

	//partition the list into two parts:
	//one containing elemnts less that or equal to pivot
	//outher conntaining elements greater than pivot

	pivot = arr[low];                     // Langkah 2

	i = low + 1;                        // Langkah 3
	j = high;                          // Langkah 4

}
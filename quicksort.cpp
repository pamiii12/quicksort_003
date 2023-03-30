#include <iostream>
using namespace std;

// array of integers to hold values
int arr[20];             
int cmp_count = 0;         // Number of comparasion
int mov_count = 0;         // Number of data movement
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

}
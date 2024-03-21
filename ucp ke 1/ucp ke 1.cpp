#include <iostream>
using namespace std;


// 1.metode pengurutan dengan cara menyisipkan elemen data pada posisi yg tepat
// 2.mencari elemen paling kecil pertama menuju paling kecil terakhir,melakukan scanning secara 
// berulang.
// 3.dengan menggunakan insertion sort karna ditingkatkan untuk data yang banyak 





int dean[42];
int n;

void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 42)
			break;
		else {
			cout << "\narray dapat mempunyai maksimal 42 elemen.\n";
		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> dean[i];
	}
}

void insertionsort(){
	int i, temp, j;


	for (i = 1; i <= n - 2; i++) { 
		temp = dean[i];

		j = i - 1;

		while (j >= 0 && dean[j] > temp)
		{
			dean[j + 1] = dean[j];
			j--;
		}

		dean[j + 1] = temp;
	}
}
void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << dean[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input(); 
	insertionsort();
	display();
	system("pause");

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool isAccepted(int matematika, int bahasainggris) {
	float ratarata = (matematika + bahasainggris) / 2;

	if (ratarata >= 70 || matematika > 80) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string nama[20];
	string status[20];

	int tidakDiterima = 0;

	for (int i = 0; 1 < 20; i++) {
		cout << "Masukkan nama kandidat = ";
		cin >> nama[i];

		int matematika;
		cout << "Masukkan nilai Matematika = ";
		cin >> matematika;

		int bahasainggris;
		cout << "Masukkan nilai bahasainggris = ";
		cin >> bahasainggris;

		if (isAccepted(matematika, bahasainggris)) {
			status[i] = "diterima";
		}
		else {
			status[i] = "tidak diterima";
			tidakDiterima++;
		}

			
	}

	for (int i = 0; i < 20; i++) {
		cout << "Nama = " << nama[i] << ", status = " << status[i] << endl;
	}

	cout << "Total kandidat yang tidak diterima= " << tidakDiterima << endl;

	return 0;

}

#include <iostream>
using namespace std;

int main() {
    int n, maxValue, searchValue, index = -1;

    // Meminta input ukuran array
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];

    // Input nilai array dari user
    cout << "Masukkan nilai-nilai elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mencari nilai tertinggi di array
    maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << maxValue << endl;

    // Meminta user untuk mencari nilai tertentu
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> searchValue;

    // Mencari nilai tersebut di dalam array
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            index = i;
            break;
        }
    }

    // Menampilkan hasil pencarian
    if (index != -1) {
        cout << "Angka " << searchValue << " ditemukan di indeks ke-" << index << endl;
    } else {
        cout << "Angka " << searchValue << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}

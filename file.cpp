#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variabel inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukkan jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
cin >> n; //memanggil variabel inputan n

if (n <= 20)
{ // Membuat kondisi n tidak lebih dari 20
    break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "======================" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0;  i < n; i++) // Menggunakan perulangan for untuk meyimpan data pada array
{
cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
cin >> arr[i]; // Meyimpan nilai data n kedalam array arr
}
}
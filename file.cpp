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

void insertionSort()
{ // Procedure Insertionsort
    
int temp; // Membuat variabel data temporer atau penyimpanan sementara
int j, i; // Membuat variabel j sebagai penanda

for (i = 1; i <= n - 1; i++)
{ // step 1
    
temp = arr[i]; // step 2

j = i - 1; // step 3

while (j >= 0 && arr[j] > temp) // step 4
{
arr[j + 1] = arr[j]; // step 4a
j--; // step 4b
}

arr[j + 1] = temp; // step 5
}
}

void display()
{
cout << endl; // Output baris kosong
cout <<"==================================" << endl;
cout <<"total passs = " << n-1 << endl; // count element movement
cout <<"==================================" << endl; // Output ke layar
cout << "Element Array yang telah tersusun" << endl; // Output ke layar
cout <<"==================================" << endl; // Output ke layar

for (int j = 0; j < n; j++)
{ // Looping dengan j dimulai dari 0 hingga n-1
cout << arr[j] << endl; // Output ke layar
}
cout << endl; // output baris kosong
}

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

int a[10][10],m,n,i,j;
cout << "Masukkan Jumlah Baris: ";
cin >> m;
cout << endl;
cout<<"Masukkan Jumlah Kolom: ";
cin >> n;
cout << endl;

cout << "=== Elemen Matriks ===" << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << "Masukkan Elemen a: "<<i+1<<j+1<<": ";
cin >> a[i][j];
cout << endl;
}
}
cout << "Matriks: " << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << a[i][j] << " ";
}
cout << endl;
}
cout << "Transpose Matriks: " << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << a[j][i] << " ";
}
cout << endl;
}

return 0;
}

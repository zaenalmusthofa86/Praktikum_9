# Praktikum_9

# Latihan 1 (Program menentukan nilai maksimum dan nilai minimum dari n bilangan bulat dengan menggunakan array)
1).Alur Agoritmanya :
```
-Mendefinisikan class maxmin dengan kode :
   public:
          maxmin();
          int proses(int n,int max,int min,int jumlah);
   private:
          int n, max, min, jumlah, a;
-Mendefinisikan int maxmin::proses(int n, int max, int min, int jumlah) dengan kode :
   cout << "Nilai Maksimum       : " << max << endl;
   cout << "Nilai Minimum        : "<< min << endl;
   cout << "Jumlah Seluruh Deret : "<<jumlah<<endl<<endl;
-Memasukkan bilangan dengan kode cin >> a;
-Menghitung nilai max,min dan jumlah dengan rumus :
   jumlah+=a;

   if(a<min)
   {
      min=a;
   }

   if(a>max)
   {
      max=a;
   }
    return proses(n-1,max,min,jumlah);
 
-Mendefinisikan int main(int argc, char *argv[])
-Tampilkan hasil kelayar
```       
2).Berikut kode lengkapnya :
```
#include <iostream>

using namespace std;

class maxmin
  {
   public:
          maxmin();
          int proses(int n,int max,int min,int jumlah);
   private:
          int n, max, min, jumlah, a;
  };

maxmin::maxmin()
{
  cout << "============================================================================" << endl;
  cout << "|Menampilkan Maximum,Minimum Dari n Bilangan Bulat Dengan Menggunakan Array|" << endl;
  cout << "============================================================================" << endl;
  cout<<endl;
}

int maxmin::proses(int n, int max, int min, int jumlah)
{
if(n==0)
  {
   cout << endl;
   cout << "Nilai Maksimum       : " << max << endl;
   cout << "Nilai Minimum        : "<< min << endl;
   cout << "Jumlah Seluruh Deret : "<<jumlah<<endl<<endl;
   return 0;
  }

else
   {
   cout << "Masukkan Bilangan : ";
   cin >> a;
      jumlah+=a;

   if(a<min)
   {
      min=a;
   }

   if(a>max)
   {
      max=a;
   }
    return proses(n-1,max,min,jumlah);
 }
}

int main(int argc, char *argv[])
{
    maxmin a;
    a.proses(5,1,1,0);

    return 0;
}
```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Flowlat1.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Latihan1.png)

# Latihan 2 (Program menentukan modus dari n bilangan bulat)
1).Alur Algoritmanya :
```
-Mendefinisikan class Hitung Statistik :

friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];

-Menghitung modus dengan rumus :
  for (int i=0; i<20; i++) f[i] = 0;

-Memasukka banyaknya data dengan kode :

cout << "Banyaknya data : ";
cin >> a.n;
cout << endl;
for (int i = 0; i < a.n; i++)
{
cout << "Data ke- : " << i+1 << " = ";
cin >> a.A[i];
cout << endl;

-Mendefinisikan void hitung statistik :: maksimum() dengan kode :

maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks)
{
maks = f[i];
item = i;

-Menampilkan modus kelayar dengan kode :

cout << "Modus : " << item << endl;
cout << endl;

-Mendefinisikan void hitung statistik :: frekuensi() dengan kode :
   for (int i=1; i<n; i++) ++f[A[i]];

-Mendefinisikan void hitung statistik :: hitung_modus() dengan kode :

cout << "===================" << endl;
cout << "|Frekuensi running|" << endl;
cout << "===================" << endl;
cout << endl;
frekuensi();
maksimum();
-Menampilkan nilai modus kelayar dengan kode :

ostream& operator<<(ostream& out, HitungStatistik& a)
{
cout << "============" << endl;
cout << "|Loading...|" << endl;
cout << "============" << endl;
cout << endl;
a.hitung_modus();
cout << "Nilai Modus : " << a.item << endl;
cout << endl;
return out;
}
```
2).Berikut kode lengkapnya:
```
#include <iostream>

using namespace std;

class HitungStatistik
{
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];
};

HitungStatistik::HitungStatistik()
{
     for (int i=0; i<20; i++) f[i] = 0;
}

istream& operator>>(istream& in, HitungStatistik& a)
{
cout << "Banyaknya data : ";
cin >> a.n;
cout << endl;
for (int i = 0; i < a.n; i++)
{
cout << "Data ke- : " << i+1 << " = ";
cin >> a.A[i];
cout << endl;
}
return in;
}

void HitungStatistik::maksimum()
{
maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks)
{
maks = f[i];
item = i;
}
cout << "Modus : " << item << endl;
cout << endl;
}

void HitungStatistik::frekuensi()
{
for (int i=1; i<n; i++) ++f[A[i]];
}

void HitungStatistik::hitung_modus()
{
cout << "===================" << endl;
cout << "|Frekuensi running|" << endl;
cout << "===================" << endl;
cout << endl;
frekuensi();
maksimum();
}

ostream& operator<<(ostream& out, HitungStatistik& a)
{
cout << "============" << endl;
cout << "|Loading...|" << endl;
cout << "============" << endl;
cout << endl;
a.hitung_modus();
cout << "Nilai Modus : " << a.item << endl;
cout << endl;
return out;
}

main()
{
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}
```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Flowlat2.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Latihan2.png)

# Latihan 3 (Program untuk mengalikan dua buah matriks)
1).Alur Agoritmanya :
```
-Mendefinisikan void baca matriks dengan kode :

void baca_matriks (int mat[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
for (j=0; j<kolom; j++)
    { cout << "Data [" << i+1 << "," << j+1 << "] : ";
      cin >> mat[i][j];
    }
}
   
-Mendefinisikan void proses dengan kode :

void proses( int x[10][10],const int matriks1[10][10],const int matriks2[10][10], int baris, int kolom)
{
for(int i=0;i<baris;i++)
for(int j=0;j<kolom;j++)
 {
  x[i][j]=0;
  for(int k=0;k<kolom;k++)
  x[i][j]=x[i][j]+matriks1[i][k]*matriks2[k][j];

 }
}
-Mendefinisikan void cetak matriks dengan kode :

void cetak_matriks (const int A[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
 { for (j=0; j<kolom; j++)
 cout << A[i][j]<<" ";
 cout << endl;
 }
}

-Mendefinisikan integer main dan sekaligus proses perhitungan perkalian dua buah matriks dengan kode :

 main()
{
int m, n;
int matriks1[10][10], matriks2[10][10];
int x[10][10];
cout << "Banyak baris : ";
cin >> m;
cout << endl;

cout << "Banyak kolom : ";
cin >> n;
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-1|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-2|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks2,m,n);
cetak_matriks(matriks2,m,n);
proses(x,matriks1,matriks2,m,n);
cout << endl;

cout << "====================" << endl;
cout << "|Hasil Perkalian : |" << endl;
cout << "====================" << endl;
cout << endl;
cetak_matriks(x,m,n);
}

-Tampilkan hasil kelayar 
```     
2).Berikut kode lengkapnya :
```
#include <iostream>

using namespace std;

void baca_matriks (int mat[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
for (j=0; j<kolom; j++)
    { cout << "Data [" << i+1 << "," << j+1 << "] : ";
      cin >> mat[i][j];
    }
}

void proses( int x[10][10],const int matriks1[10][10],const int matriks2[10][10], int baris, int kolom)
{
for(int i=0;i<baris;i++)
for(int j=0;j<kolom;j++)
 {
  x[i][j]=0;
  for(int k=0;k<kolom;k++)
  x[i][j]=x[i][j]+matriks1[i][k]*matriks2[k][j];

 }
}
void cetak_matriks (const int A[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
 { for (j=0; j<kolom; j++)
 cout << A[i][j]<<" ";
 cout << endl;
 }
}
 main()
{
int m, n;
int matriks1[10][10], matriks2[10][10];
int x[10][10];
cout << "Banyak baris : ";
cin >> m;
cout << endl;

cout << "Banyak kolom : ";
cin >> n;
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-1|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-2|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks2,m,n);
cetak_matriks(matriks2,m,n);
proses(x,matriks1,matriks2,m,n);
cout << endl;

cout << "====================" << endl;
cout << "|Hasil Perkalian : |" << endl;
cout << "====================" << endl;
cout << endl;
cetak_matriks(x,m,n);
}

```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Flowlat3.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Latihan3.png)

# Latihan 4 (Program untuk menghasilkan suatu transpose matriks)
1).Alur Agoritmanya :
```
-Mendefinisikan int main (int argc, char *argv[]) :
   int a[10][10],m,n,i,j;
   
-Memasukkan jumlah baris dan kolom dengan kode :

cout << "Masukkan Jumlah Baris: ";
cin >> m;
cout << endl;
cout<<"Masukkan Jumlah Kolom: ";
cin >> n;
cout << endl;

-Memasukkan elemen matriks dengan kode :

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

-Memasukkan matriks dengan kode :

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
    
-Memasukkan traspose matriks dengan kode :

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

-Tampilkan hasil kelayar
```       
2).Berikut kode lengkapnya :
```
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

```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Flowlat4.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_9/blob/master/Latihan4.png)

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

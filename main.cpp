#include <iostream>
using namespace std;
int main()
{
   int i,n,j=0,a,b,v[50],w[50];
   cout << "Cate elemente va avea sirul? n=";
   cin>>n;
   cout << "Introducenti valoarea lui a:";
   cin>>a;
   cout << "Introducenti valoarea lui b:";
   cin>>b;
   for (i=1;i<=n;i++)
      {
         cout<<"v["<<i<<"]=";
         cin>>v[i];
         if (v[i]>=a && v[i]<=b)
         {
            j++;
            w[j]=v[i];
         }
      }
   cout << "Sirul contine "<<j<<" numere in intervalul ["<<a<<","<<b<<"]"<<endl;
   cout << "Numerele din sir continute in intervalul ["<<a<<","<<b<<"] sunt urmatoarele: ";
   for (i=1;i<=j;i++)
      cout<<w[i]<<" ";
   return 0;
}
#include <iostream>
using namespace std;

void imprimir(int a[],int n);
void insercion(int a[], int n)
{
    int i, k ,aux;
    for (i=0;i<=n-1;i++){
        aux=a[i];
        k=i-1;
        while ((k>=0)&&(aux<a[k])){
            a[k+1]=a[k];
            k=k-1;
        }
        a[k+1]=aux;
    }
}
int main ()
{
   int n;
   cout << "arreglo" << endl;
   cin>>n;
   int num[n];
   for (int i=0;i<n;i++){
    cout << "ingrese un numero" << (i+1) << endl;
    cin >> num[i];

   }
   insercion(num,n);
    imprimir(num,n);
    return 0;
}
void imprimir(int a[],int n)
{
cout << "numeros ordenados" << endl;
for (int i=0; i<n;i++){
    cout << a[i] << endl;
}
}

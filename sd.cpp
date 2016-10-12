#include <iostream>
using namespace std;
void seleccion(int [],int);
void imprimir(int [],int);
int main ()
{
    int n;
    cout << "" << endl;
    cin >>n;
    int a[n];
    for (int i=0;i<n;i++){
       cout << "ingrese numero" << i+1 << endl;
       cin >> a[i];
    }
    seleccion(a,n);
    imprimir(a,n);
}
void seleccion(int a [], int n)
{
    int k, menor, i, j;
    for(i=0;i<n;i++){
        menor=a[i];
        k=i;
        for (j=i+1;j<n;j++){
            if (a[j]<menor){
                menor=a[j];
                k=j;
            }
        }
        a[k]=a[i];
        a[i]=menor;
    }

}
void imprimir( int a[], int n)
{
    cout << "ordenados de menor a mayor" << endl;
    for (int i=0;i<n;i++){
        cout << a[i] << endl;
    }
}

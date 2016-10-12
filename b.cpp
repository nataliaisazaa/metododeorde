#include <iostream>
using namespace std;
void burbuja(int [], int);
void imprimir(int [], int);
int main()
{
    int a[]={45,3,5,6,76,345,23,23,5,8};
    burbuja(a,10);
    imprimir(a,10);
}
void burbuja(int a[],int n)
{
    int aux, i,j;
    for (i=1;i<=n;i++){
        for (j=n;j>=i;j--){
            if (a[j-1]>a[j]){
                aux=a[j-1];
                a[j-1]=a[j];
                a[j]=aux;
            }
        }
    }
}
void imprimir(int a[],int n){
cout << "ordenados" << endl;
for(int i=0;i<n;i++){
    cout << a[i] << endl;
}
}

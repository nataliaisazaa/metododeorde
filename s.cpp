#include <iostream>

using namespace std;
void imprimir (int [], int n);
void shell (int [], int n);


int main()
{
    int total;
    cout << "arreglo" <<endl;
    cin >> total;
    int num [total];
    for (int i=0;i<total;i++){
        cout << "posiciones" << endl;
        cin>>num[i];
    }
    shell(num,total);
    imprimir(num,total);
}

void shell(int a[], int n)
    {
        int ints;
        int i;
        int aux;
        bool band;
        ints=n;
        while (ints>1) {
            ints=(ints/2);
            band=true;
            while (band==true) {
                band=false;
                i=0;
                while ((i+ints)<=n){
                    if (a[i]> a[i+ints]){
                     aux=a[i];
                     a[i]=a[i+ints];
                     a[i+ints]=aux;
                     band=true;
                    }
                    i++;
                }
            }
        }
    }

    void imprimir(int a[], int n)
    {
        cout << "ordenado de menor a mayor" << endl;
        for (int i=0;i<n;i++){
            cout << "[" << a[i]<< "]" << endl;
        }
    }

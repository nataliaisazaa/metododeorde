#include <iostream>
#define max 10
using namespace std;
void quicksort(int [], int);
void print(int[], int);
int main()
{
    int n;
    cin >>n;
    int a[n];
    for (int i=0;i<n;i++){
        cout << "ingrese numero" << i+1 << endl;
        cin >> a[i];
    }
    quicksort(a,n);
    print(a,n);
}
void print(int a[], int tam)
{
    cout << "arreglo ordenado" << endl;
    for (int i=0;i<tam;i++)
    cout << "[" << a[i]<< "]" << endl;
}
void quicksort(int a[],int n)
{
    int tope, ini,fin, pos;
    int may[max], menor [max];
    tope=0;
    menor[tope]=0;
    may [tope]=n-1;
    while (tope>=0){
        ini=menor[tope];
        fin= may[tope];
        tope--;
        int izq, der, aux;
        bool band;
        izq=ini;
        der=fin;
        pos=ini;
        band=true;
        while(band==true){
            while ((a[pos]<a[der])&&(pos!=der)){
                der--;
            }if(pos==der){
                band=false;
            }else{
                aux=a[pos];
                a[pos]=a[der];
                a[der]=aux;
                pos=der;
            }
            while ((a[pos]>a[izq])&&(pos!=izq))
                izq++;
                if(pos==izq){
                band=false;
            }else{
               aux=a[pos];
                a[pos]=a[izq];
                a[izq]=aux;
                pos=izq;
            }
        }
        if(ini<=(pos-1)){
            tope++;
            menor[tope]=ini;
            may[tope]=pos-1;
        }
        if (fin>=(pos+1)){
            tope++;
            menor[tope]=pos+1;
            may[tope]=fin;
        }
    }
}

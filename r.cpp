#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void radix(int[], int);
void print(int[],int);
vector<vector<int> > vec;

int main ()
{
    int ne;
    cin >> ne;
    int n [ne];
    for (int i=0;i<ne;i++){
        cin >> n[i];
        }
            radix(n,ne);
}


void radix(int a[], int n){
    vec.resize(10);
        int temp, m=0;
            for (int i=0;i<7;i++){
                for (int j=0;j<n;j++){
                    temp=(int) (a[j]/pow(10,i))%10;
                    vec[temp].push_back (a[j]);
                }
                for (int k=0;k<10;k++){
                    for (int l=0;l<vec[k].size();l++){
                        a[m]=vec[k][l];
                        m++;

                    }
                    vec[k].clear();
                }
                m=0;
            }
            print(a,n);
        }
        void print(int a[],int tam)
        {
            cout << "arreglo de numeros ordenados" << endl;
            for (int i=0;i<tam;i++){
                cout << "[" << a[i] << "]" << endl;
            }
        }




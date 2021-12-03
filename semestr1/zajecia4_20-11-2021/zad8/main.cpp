#include <iostream>
#include <array>
#include <stdio.h> //Zawiera NULL
#include <stdlib.h> //Zawiera rand, srand
#include <time.h> //Zawiera time

using namespace std;

//Zamiana
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int A[], int p, int q)
{
    int w=A[q];
    int j=(p-1);
    for(int i=p; i<=q; i++)
    {
        if(A[i]<w)
        {
            j++;
            swap(&A[j],&A[i]);
        }
    }
    swap(&A[j+1],&A[q]);
    return (j+1);
}

//Sortowanie - Quick sort
void sortowanie_qs(int A[], int p, int q)
{
    if(p<q)
    {
        int part=partition(A,p,q);
        sortowanie_qs(A,p,part-1);
        sortowanie_qs(A,part+1,q);
    }
}

int main()
{
    int A[64];
    //Losowosc z 100+1 liczb
    srand(time(NULL));
    for(int i=0; i<64; i++)
    {
        A[i]=rand()%100+1;
    }
    int x=sizeof(A)/sizeof(A[0]);
    sortowanie_qs(A,0,x-1);
    //Wyswietlenie tablicy
    cout << "Posortowana tablica:" << endl;
    cout << endl;
    for(int i=0; i<64; i++)
    {
        cout << A[i];
        if(i<63)
        {
            cout << ",";
        }
    }
    cout << endl;
    return 0;
}

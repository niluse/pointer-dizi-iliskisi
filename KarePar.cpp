// aPtr[i] i'nci değeri verir
// &aPtr[i] i'nci değerin adresini verir
// &aPtr aPtr'nin adresini verir

// bPtr b'nin adresini verir
// *bPtr b'nin değerini verir
// &bPtr bPtr'nin değerini verir

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[]={10,20,30,40,50};
    int* aPtr=&a[0];
    int b=7;
    int* bPtr=&b;

    for (int i=0;i<5;i++)
        cout<<aPtr[i]<<"\t"<<&aPtr[i]<<endl;

    aPtr[1]+=10;
    cout<<"\n\n";

    for (int i=0;i<5;i++)
        cout<<aPtr[i]<<"\t"<<&aPtr[i]<<endl;

    cout<<setw(22)<<&aPtr<<"\n\n";

    cout<<"\n\n"<<bPtr<<"\t"<<*bPtr<<"\t"<<&bPtr<<endl;

    return 0;
}
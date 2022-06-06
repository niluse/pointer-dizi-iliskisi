// *(b+i) i'nci değeri verir
// b+i i'nci değerin adresini verir    &bPtr[i] ile aynı

// *(bPtr+i) i'nci değeri verir
// bPtr+i i'nci değerin adresini verir     &bPtr[i] ile aynı

#include <iostream>

using namespace std;

int main()
{
    int b[]={10,20,30,40,50};
    int *bPtr=b;

    for (int i=0;i<5;i++)
        cout<<*(b+i)<<"\t"<<b+i<<"\t"<<&bPtr[i]<<endl;

    cout<<"\n\n";

    for (int i=0;i<5;i++)
        cout<<*(bPtr+i)<<"\t"<<bPtr+i<<"\t"<<&bPtr[i]<<endl;   

    return 0;
}
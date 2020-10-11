#include <iostream>
#include <algorithm>

using namespace std;

template <typename K>
K show(K a[])
{
    for(int i = 0; i < 10; ++i)
        cout << a[i] << " ";
}


template <typename M>
void arrayiis(M a[])
{

    cout<<"\n Enter the arrayi:";
    for(int i = 0; i < 10; ++i)
      {
        a[i] << " ";
      }
}


int main()
{
    int b[]={10,2,6,4,8};
    float j[]={5.5,7.8};
    show(b);
    arrayiis(b);

    return 0;

}

#include <iostream>

using namespace std;


void diff()
{
    int diffarray[6][3];
    int ll;

    int i,j;


    for( i=0;i<3;i++)
    {
        for( j=0;j<6;j++)
        {
            cout<<diffarray[i][j];
        }
        cout<<"\n";
    }

    cout<<"Enter series \n";

            cin>>diffarray[0][0];
            cin>>diffarray[0][1];
            cin>>diffarray[0][2];
            cin>>diffarray[0][3];
            cin>>diffarray[0][4];

            diffarray[1][0]=diffarray[0][1]-diffarray[0][0];
            diffarray[1][1]=diffarray[0][2]-diffarray[0][1];
            diffarray[1][2]=diffarray[0][3]-diffarray[0][2];





    for( i=0;i<3;i++)
    {
        for( j=0;j<6;j++)
        {
            cout<<"\t"<<diffarray[i][j];
        }
        cout<<"\n";
    }




}



int main()
{
    diff();
    cout << "Hello world!" << endl;
    return 0;
}

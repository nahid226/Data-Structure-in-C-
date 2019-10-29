#include <iostream>

using namespace std;

int main()
{
    int row=3,col=3;
    int **arr= new int*[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"Enter a element:"<<endl;
            cin>>a2d[i][j];
        }
    }
    cout<<"Array is: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a2d[i][j] <<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
        delete[] a2d[i];

    delete[] a2d;


    return 0;

}

#include <iostream>

using namespace std;
//Task-02
int main()
{
    int row,col;
    cout<<"Enter the row:"<<endl;
    cin>>row;
    cout<<"Enter the column:"<<endl;
    cin>>col;

    char **ch= new char*[row];

    for (int i = 0; i < row; i++)
    {
        ch[i] = new char[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"Enter a character:"<<endl;
            cin>>ch[i][j];
        }
    }
    cout<<"character string is: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ch[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
       {
           delete[] ch[i];
       }

    delete[] ch;


    return 0;

}

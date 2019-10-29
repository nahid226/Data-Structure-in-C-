#include <iostream>

using namespace std;

int main()
{

    int row;

    cout<<"size of row::"<<endl;
    cin>>row;

    int **Array = new int*[row];

    int numOfCol;
    int *colSize=new int[20];

    for(int i=0;i<row;i++){
        cout<<"Enter Number of Column in row :"<<i<<endl;
        cin>>numOfCol;
        Array[i] = new int[numOfCol];
        colSize[i]=numOfCol;

        for(int j=0;j<numOfCol;j++){
            cout<<"Enter elements for row No::"<<i<<endl;
            cin>>Array[i][j];


        }
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<colSize[i];j++){

           cout<<Array[i][j]<<" "; 
        }
        cout<<endl;

    }


    for(int i=0;i<row;i++){
        delete[] Array[i];  // delete every array elements 
    }
    delete[] Array;        //delete array

    delete [] colSize;     // delete colSize



   Array=NULL;
   colSize=NULL;

    return 0;
}


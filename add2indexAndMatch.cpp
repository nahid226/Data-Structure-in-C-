#include <iostream>

using namespace std;

int main()
{


    int  i,key, numOfElement;
    int first,last;
    int found;


    cout<<"Enter the number of elements of the array::"<<endl;
    cin>>numOfElement;

    int A[numOfElement];

    cout<<"Enter the values in the array::"<<endl;
    for(i=0;i<numOfElement;i++){
        cin>>A[i];
    }

    cout<<"Enter the key value::"<<endl;
    cin>>key;


   // numOfElement=9;
    first=0;
    last=numOfElement-1;
    found=0;
    i=0;







    //int A[9]={6,7,19,20,25,29,51,91,100};
    //key=45;


  while(i < numOfElement-1){

    //int sum = A[first]+A[last];

    if(A[first]+A[last]==key){
        found=1;

    }
    else if(A[first]+A[last]<key){
        first++;
    }
    else{
        last--;
    }
   i++;
  }



   if(found==1){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }


    return 0;
}


/*cout << "Enter The Number Of Element Of The Array :" << endl;
    cin >> numOfElement;

    int A[numOfElement];

    cout << "Enter The Array :" << endl;
    for(i=0; i<numOfElement; i++)
    {
        cin >> A[i];

    }

    cout << "Enter The Key Value: " << endl;
    cin >> key;
    cout << "\n\n";*/

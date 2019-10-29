#include <iostream>

using namespace std;

int main()
{
    int sizeOfArray;
    cout<<"Enter the Size of the Array :"<<endl;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    cout<<"Enter the Elements of Array :"<<endl;
    for(int i=0; i<sizeOfArray; i++)
	{
		cin>>arr[i];
	}

	int i=0,temp;
	int j=sizeOfArray-1;
	while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse array is :"<<endl;
    for(int i=0; i<sizeOfArray; i++)
	{
		cout<<arr[i]<<" ";
	}

	/*cout<<"the Array is : \n";
	for(int i=0; i<sizeOfArray; i++)
	{
		cout<<arr[i]<<" ";
	}
	*/
}

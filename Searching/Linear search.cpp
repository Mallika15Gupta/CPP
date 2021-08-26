#include <iostream>
using namespace std;

int main() {
    int arr[5],n,i,flag=0;

    cout << "Enter the array " << endl;
    //  store input from user to array
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
cout<<"Enter the number to be searched: ";
cin>>n;

for(i=0;i<5;i++)
if(arr[i]==n)
{
	flag=1;
	break;
}
if(flag==1)
{
	cout<<"YES, element found at: "<<i+1<<endl;
}
else
cout<<"Element not found";
    return 0;
}















#include <iostream>
using namespace std;
int main()
{
  int i, first, last, middle, n, search, array[100];

  cout<<"Enter the number of elements"<<endl;
  cin>>n;

  cout<<"Enter the integers from which you need to search: ";

  for (i = 0; i < n; i++)
    cin>>array[i];

  cout<<"Enter the number to be searched";
  cin>>search;

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
      
    else 
	if (array[middle] == search) 
	{
      cout<<search<<"Found at location"<< middle+1;
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    cout<<"Not found! This number isn't present in the list.";

  return 0;
}

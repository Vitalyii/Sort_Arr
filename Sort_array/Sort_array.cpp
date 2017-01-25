#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int size, value;
	int i, j;
    cout << "vvedite razmer massiva\n";
	cin >> size;
	int *Arr=new int[size];
	
    for (int i = 0; i< size; i++)
		{   
			cout << "vvedite element massiv\n";
			cin >> Arr[i];
		}
	for ( i=0; i < size; i++)
		{  
			for ( j = size; j > i; j--)
				{  
					if ( Arr[j-2] > Arr[j-1] ) 
					{ 
                      value=Arr[j-2]; 
					  Arr[j-2]=Arr[j-1]; 
					  Arr[j-1]=value;
					}
			     }
	     }
	
	cout << "massiv zapolnen i otsortirovan \n";
	for (int i = 0; i< size; i++)
		{   
			cout << Arr[i];
		}
	delete []Arr;
	return 0;
	
}
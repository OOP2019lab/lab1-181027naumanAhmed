#include<iostream>
using namespace std;

int main()

{

	int *n;
	int size;

	cout << "Enter size of your array: ";      //taking input size of dynamic array
	cin >> size;


	n = new int[size];							//dynamic array allocated

	for (int i = 0; i < size; i++)			//taking input in dynamic array
	{
		cin >> n[i];
	}
	
		
	int temp;

	for (int i = 0; i < size; i++)				//sorting array values in ascending order
	{
		for (int j = i + 1; j < size ; j++)
		{
			if (n[j] < n[i])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}



	cout << endl << "Your Array is:\n";


	for (int i = 0; i < size; i++)		// sorted array displayed
	{
		cout << n[i] << " ";
	}

	cout << endl;

	delete []n;			 //deleting dynamic array	
	n = nullptr;		// for pointer to not remain dangling


}
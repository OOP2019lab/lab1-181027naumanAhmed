#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function
using namespace std;

// Function prototype
void getNumber(double *);						//pointer to int function  #FOR A SIMPLE VARIABLE ADDRRESS IS SENT AS ARGUMENT IN FUNCTION CALL#
int *getRandomNumbers(int);                //@@pointer returning function@@  +  dynamic allocation/deallocation
double doubleValue(double *);					//pointer to int function 
double totalSales(double *, int);			//(PARAMETERS:(pointer to double)+sending arr size)     #since array name is sent &(address) operator not needed in function call#


void displayArray(double[], int);			//(PARAMETERS:(PARAMETERS:(double[], int) 
void populateArray(double *, int);			//(PARAMETERS:(pointer to double) + sending arr size)


int main()
{

	/*
	//Q.(Look at the following array definition.
	//int set[10];
	//Write a statement using pointer notation that stores the value 99 in set[7];)
	int set[10] {};

	int *ptr = set;
	*(ptr + 7) = 99;

	for (int i = 0; i < 10; i++)
	{
	cout << set[i] << " ";
	}
	*/



	//dynamic allocation/deallocation of a varaiable and an array!!!!!!!!!!!

	int x = 10;
	int *ip = &x;


	cout <<"Address of stack pointer: " <<  ip <<endl<<"Value associated with pointer: " << *ip<< endl;

	ip = new int;

	cout << "Address of dynamic pointer: " << ip << endl;
	cout << "Enter variable in dynamic memory: ";
	cin >> *ip;

	cout <<"Entered Value multiplied by 10: " << *ip*10 << endl;

	cout << "Deleting dynamic pointer:\n";

	delete ip;
	ip = nullptr;


	cout << "Address of pointer after deallocation: " << ip << endl;
	cout << "Value in pointer: ";
	cout << *ip << endl;
	

	int arr[20] = {23,1,2}, *ptr = arr;

	cout << "Address of stack pointer(first array index): " << ptr << endl << "Value at first index of array (*ptr): " << *ptr<< endl;

	ptr = new int[10];

	cout << "Address of dynamic pointer(first array index): " << ptr << endl;

	for (int i = 0; i < 10; i++)
	{
	cout << "Populate the dynamic array" << (i + 1) << ": ";
	cin >> *(arr +i);
	}

	cout << "\n\nDynamic array is:\n\n";
	for(int i = 0; i < 10; i++)
	{
	cout << arr[i] << " ";
	}
	cout << "\n\nDeleting dynamic array:\n\n";

	delete[] ptr;
	ptr = 0;

	cout << "Address of pointer after deallocation: " << ptr << endl;
	cout << "\n\nValue in pointer:\n";
	cout << *ptr << endl;


	/*



	/*


	//comparing pointers!!!!!!!!!!!!!



	int arr[7] = {};

	if (arr < &arr[1])
	cout << "True";
	else
	cout << "False";

	cout << endl;

	if (&arr[4] < &arr[1])
	cout << "True";
	else
	cout << "False";

	cout << endl;

	if (arr != &arr[2])
	cout << "True";
	else
	cout << "False";

	cout << endl;

	if (arr == &arr[0])
	cout << "True";
	else
	cout << "False";

	cout << endl;



	*/




	/*



	//populating and displaying arrays thru pointer notation!!!!!!!!!!



	int number;
	double sum = 0.0;

	int ivar=40, *iptr = &ivar;

	cout << iptr << endl;
	cout << &ivar << endl;
	cout << ivar << endl;
	cout << *iptr << endl;

	double araybhai[7] = { };

	cout << "\n";
	populateArray(araybhai, 7);

	cout << "\n";
	displayArray(araybhai, 7);																	//in c++ the name of an array without brackets and a subscript is actually the beginning address of the array.
	//In this function call, the address of the numbers array is being passed as the first argument to the function.
	cout << endl;

	sum=totalSales(araybhai, 7);
	cout << "\nSum: " << sum << endl;



	double number;

	getNumber(&number);
	cout << "\n";
	cout <<"After function call getNum(pointer to int) -->sending address of variable in argument<-- number in main : " << number << endl;
	cout << "\n";
	doubleValue(&number);
	cout << "\n";
	cout << "After function call doubleVal(pointer to int)-->sending address of variable in argument<--number in main : " << number << endl;

	cout << "\n";
	cout << "\n";
	int x = 0;
	cout << "Enter the amoubt of random numbers you want?\n";
	cin >> x;
	cout << "Your random numbers: " << endl;

	int *numbers; // To point to the numbers

	// Get an array of five random numbers.
	numbers = getRandomNumbers(x);

	// Display the numbers.
	for (int count = 0; count < x; count++)
	cout << numbers[count] << endl;
	// Free the memory.

	delete[] numbers;
	numbers = 0;

	*/

}

void populateArray(double *bengan, int yo)
{
	cout << "Pop:\n";
	for (int i = 0; i < yo; i++)
	{
		cout << "Enter the arrays " << (i + 1) << " value: ";
		cin >> bengan[i];
	}
}
void displayArray(double bengan[], int yo)         //The reason there is no size declarator inside the brackets of arrey is because bengan is not actually an array.
//It’s a special variable that can accept the address of an array.
{
	cout << "\nArray in reverse gear:\n";
	{
		for (int x = yo - 1; x >= 0; x--)
			cout << *(bengan + x) << " ";
	}
}
int *getRandomNumbers(int num)                                 //pointer returning function!!
{
	int *arr;

	if (num <= 0)
		return NULL;

	arr = new int[num];

	srand(time(0));

	for (int count = 0; count < num; count++)
	{
		arr[count] = rand();
	}

	return arr;

}
void getNumber(double *input)
{
	cout << "Enter an integer number: ";
	cin >> *input;

}
double doubleValue(double *val)
{
	*val *= 2;

	return *val;
}
double totalSales(double *arr, int size)
{
	double sum = 0.0;

	for (int count = 0; count < size; count++)
	{
		sum += *arr;
		arr++;
	}

	return sum;
}

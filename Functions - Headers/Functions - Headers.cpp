#include <iostream>

using std::cout;

//Here we are declaring and defining "add", which is a function that will add two ingeters together and returns the resulting integer. 

int add(int x, int y)
{
	return x + y;
} 

//Exactly the same as above, but with double*. 
double add(double x, double y)
{
	return x + y;
}

int main()
{
	//Here we declare the variable total, and we call add while giving it the values of 3 and 4. 
	int total = add(3, 4);
	//Simply outputs our total. 
	cout << "3 + 4 is equal to: " << total << '\n';

	//*A double is a 64-bit floating data type. It's similar to float, but it can hold larger numbers (Float= 32-bit with 7 digits, Double is up to 16. 
	double another = add(1.3, 5.2); //This, as written, will truncate our float into a single integer - in this case, 6, instead of 6.4. 
	cout << '\n';
	cout << "The value of your two floats are: " << another << "." << '\n';



	return 0;
}
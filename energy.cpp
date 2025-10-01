
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int numberOfCustomers = 16500;
	double CitrusFlavor = 0.58 * numberOfCustomers; // 58% of customers prefer citrus flavor
	double CustomersWhoBuyEnergyDrink = 0.15 * numberOfCustomers; // 15% of customers buy one or more energy drinks

	cout << "The apx number of customers who buy one or more energy drinks per week is " << CustomersWhoBuyEnergyDrink << "." << endl;
	cout << "The apx number of customers who prefer citrus flavor is " << CitrusFlavor << "." << endl;

}
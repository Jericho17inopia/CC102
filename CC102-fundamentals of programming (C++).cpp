#include <iostream>

using namespace std;

int main () {
	
	double sugarQty, riceQty, sardinesQty, coffeeQty, milkQty, usd_peso;
	float sugarpriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	double totalAmount, totalprice; 
	
	
	//Item name
	cout << "sugar\n";
	cout << "rice\n";
	cout << "sardines\n";
	cout << "coffee\n";
	cout << "milk\n";
	cout << "Sugar price in USD:";
	cin >> sugarQty;
	cout << "Rice price in pound:";
	cin >> riceQty;
	cout << "sardines Price in pound:";
	cin >> sardinesQty;
	cout << "coffee price in USD:";
	cin >> coffeeQty;
	cout << "milk price in USD:";
	cin >> milkQty;
	cout << "Enter USD: ";
	cin >> usd_peso;
	//formula
	totalprice = sugarQty + riceQty + sardinesQty + coffeeQty + milkQty;
	totalAmount = totalprice / usd_peso;
	cout << "total price: " << totalprice << endl;
	cout << "total: " << totalAmount << endl;
	return 0;
}
	
	
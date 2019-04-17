#include <iostream>
#include <string>
using namespace std;

//Function Prototype
int getProductAndSum(int x, int y, int &sum); // sum is being passed by Ref, not by Val

void main() {
	int x;
	int y;
	int sum = 0;
	x = 10;
	y = 5;
	int product=getProductAndSum(x,y,sum);

	cout << "product: "<<product << " " <<"sum: "<< sum << endl;

	system("pause");
}
int getProductAndSum(int x, int y, int &sum){
	sum = x + y;
	return x * y;
}
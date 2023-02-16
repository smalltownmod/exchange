#include <iostream>
#include <vector>

using namespace std;

 vector <int> tow1 = { 3, 2, 5, 1, 4 }; //Tower 1
 vector <int> tow2(0);
 vector <int> tow3(0);
int temp = 0;

void towerSwap1();
void towerSwap2(); 
void towerBackSwap2();
void towerBackSwap1();

int main() {
	if (!tow2.empty()) {
		if (tow3.empty())
			towerSwap2();
		if (tow2.back() < tow3.back())
			towerSwap2();


	}
	if (!tow2.empty()) {
		if (tow1.empty())
			towerBackSwap1();
		if (tow2.back() < tow1.back())
			towerBackSwap1();
		
	}
	if (!tow3.empty()&& !tow2.empty())
		if (tow3.back() < tow2.back())
			towerBackSwap2();
	//while (tow1[0] != 5 && tow1[4] != 1) {
		if (tow2.empty()) {
			towerSwap1();
			//temp = tow1.back();
			//tow1.pop_back();
			//tow2.push_back(temp);
		}	
		if (tow1.back() < tow2.back())
			towerSwap1();		
		
		
		
		

	//}
}

void towerSwap1() {
	//cout << "test";
	temp = tow1.back();
	tow1.pop_back();
	tow2.push_back(temp);
	cout << "tow2 " << tow2.back() << endl;
	main();
}

void towerSwap2() {
	temp = tow2.back();
	tow2.pop_back();
	tow3.push_back(temp);
	cout << "tow3 " << tow3.back() <<endl;
	main();
}

void towerBackSwap2() {
	temp = tow3.back(); 
	tow3.pop_back();
	tow2.push_back(temp); 
	main();
}

void towerBackSwap1() {
	temp = tow2.back();
	tow2.pop_back();
	tow1.push_back(temp);
	main();
}
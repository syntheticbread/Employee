#include "Employee.h"
#include <stdlib.h>
#include <windows.h>

void menu();

void menu() {
	cout << "\t \t \t \t \t \t \t DATA inc. \n";
	cout << "1: CREATE \n";
	cout << "2: EXIT \n";
}
int main(){
	int options = 0;
	bool active = true;
	while (active) {
		menu();
		cin >> options;
		if (options == 1) {


			INFO option;
			option.Employee();



		}

		if (options == 2) {
			cout << "Exiting.....";
			Sleep(2000);
			bool active = false;
			return 0;
		}
	}
	
		


		
	
	system("pause");

}

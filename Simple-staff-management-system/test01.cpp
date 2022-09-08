#include <iostream>
#include "workerManager.h"
using namespace std;
//2022/9/8

int main() {

	workerManager wkr;

	int choice = 0;
	while (true) {
		wkr.Show_Menu();
		cout << "ÇëÊäÈë" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			wkr.exitSystem();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");

	return 0;
}
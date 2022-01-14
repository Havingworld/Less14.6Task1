/*
По поводу успешного прохождения двумерных массивов собирается банкет, организуется стол на 12 персон, 2 из них - это места VIP,
они расположены рядом друг к другу во главе стола. Стол протяжённый в длину, места расположены в два ряда. 
Каждый пришедший должен быть “упакован” соответствующим образом. 
Во-первых столовые приборы - их три на каждого человека (вилка, ложка, нож), плюс одна маленькая дополнительная ложечка для VIP-персон, 
для десерта. Это необходимо обеспечить. Следом тарелки, каждому по две - для первого и второго блюда, 
для VIP персон +1 тарелка для десерта. Ну и конечно стул - один для каждого, минимум!
Заведите соответствующие двумерные массивы для количества приборов, посуды и стульев и проинициализируйте их как следует.

Однако, это ещё не всё. В ходе банкета, уже после инициализации, происходят некоторые события.
Пришедшая на 5-ое место первого ряда дама пришла вместе с ребёнком и поэтому на данное место был приставлен ещё один стул. 
С третьего места во втором ряду в неизвестном направлении была украдена ложка. 
После этого одна из VIP персон (любая) поделилась своей ложкой с тем у кого она пропала, а сам стал есть суп десертной. 
За ненадобностью официант забрал у него одну десертную тарелку, ибо есть десерт ложкой, которая побывала уже в супе - не комильфо. 
Больше без происшествий!
*/

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


int main()
{
	string tabelForGuest[2][6] = { {"vip", "guest", "guest", "guest", "guest", "guest"},{"vip", "guest", "guest", "guest", "guest", "guest"} };
	int cutlery[2][6] = { {4,3,3,3,3,3}, {4,3,3,3,3,3} };
	int chairs[2][6] = { {1,1,1,1,1,1}, {1,1,1,1,1,1} };
	int tableware[2][6] = { {3,2,2,2,2,2}, {3,2,2,2,2,2} };
	int test[2][6] = { {11,22,33,44,55,66}, {66,55,44,33,22,11} };

	cout << "Table with guests:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << tabelForGuest[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "Cutlery on a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << cutlery[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "Tableware on a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << tableware[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "Chairs an a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << chairs[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "Add chairs." << endl;
	++chairs[0][4];
	cout << "Chairs an a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << chairs[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "Spoon stolen." << endl;
	--cutlery[1][2];
	cout << "Cutlery on a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << cutlery[n][m] << " ";
		}
		cout << endl;
	}
	
	cout << endl << "VIP gave the spoon." << endl;
	--cutlery[1][0];
	++cutlery[1][2];
	cout << "Cutlery on a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
			cout << cutlery[n][m] << " ";
		}
		cout << endl;
	}

	cout << endl << "The waiter took the extra dishes." << endl;
	--tableware[1][0];
	cout << "Tableware on a table:" << endl;
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 6; m++) {
				cout << tableware[n][m] << " ";
		}
			cout << endl;
	}
}

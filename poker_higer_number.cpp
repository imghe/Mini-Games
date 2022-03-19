#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int save=-1,save1=-2;

void getpoker() {
	int color = rand() % 4 + 1;
	
	int number = rand() % 13 + 1;
	save = color * 100 + number;
	if (save != save1) {
		switch (color) {
		case 1: cout << "梅花";
			break;
		case 2: cout << "菱形";
			break;
		case 3: cout << "愛心";
			break;
		case 4: cout << "黑桃";
			break;


		}



		switch (number) {
		case 1:
			cout << "A" << endl;
			break;
		case 11:
			cout << "J" << endl;
			break;
		case 12:
			cout << "Q" << endl;
			break;
		case 13:
			cout << "K" << endl;
			break;
		default:
			cout << number << endl;
			break;

		}
	}
	
}

int main() {
	string compare;
	string end="continue";
	srand(time(0));
	
	while ( 1) {
		cout << "你的牌是" << endl;
		
			getpoker();
		
			save1 = save;
		
		cout << "比大或比小(輸入大或小)" << endl;
		cin >> compare;
		
		cout << "對手的牌是" << endl;

		getpoker();
		while (save1 == save) {
			getpoker();
		}
		if (compare == "大") {
			if (save1 % 100 > save % 100) {
				cout << "你贏了" << endl;
			}
			else if (save1 % 100 == save % 100) {
				if (save1 / 100 > save / 100) {
					cout << "你贏了" << endl;
				}
				else
					cout << "你輸了" << endl;
			}
			else
				cout << "你輸了" << endl;

		}

		else if (compare == "小") {
			if (save1 % 100 < save % 100) {
				cout << "你贏了" << endl;
			}
			else if (save1 % 100 == save % 100) {
				if (save1 / 100 < save / 100) {
					cout << "你贏了" << endl;
				}
				else
					cout << "你輸了" << endl;
			}
			else
				cout << "你輸了"<<endl;
		}
		cout << endl;
		
	}
}
#include <iostream>
using namespace std;

class Point {
public:
	int x; //x��ǥ�� ������ 0�̻� 100����
	int y; //y��ǥ�� ������ 0�̻� 100����
};

class Rectangle {
public:
	Point upLeft;
	Point lowRight;
public:
	void showRecInfo() {
		cout << "�� ���: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "�� ���: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main() {
	Point pos1 = { -2,4 };
	Point pos2 = { 5, 9 };
	Rectangle rec = { pos2,pos1 };
	rec.showRecInfo();
	return 0;
}
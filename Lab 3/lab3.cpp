#include <iostream>
using namespace std;

struct circle {
	float radius;
};

struct rectangle {

	float length;
	float width;
	float unit;
};

struct square {

	float length;
};

float carea(float r);
float rarea(float x, float y);
float sarea(float x);
float para(float& len, float& width);
float cost(float parameter, float unitprice);

int main() {

	struct circle c1;
	struct rectangle r1;
	struct square s1;
	struct rectangle r2;


	cout << "Enter the Radius : ";
	cin >> c1.radius;

	cout << "Enter the rectangle length : ";
	cin >> r1.length;

	cout << "Enter the rectangle width : ";
	cin >> r1.width;

	cout << "Enter yard rectangle length : ";
	cin >> r2.length;

	cout << "Enter yard rectangle width : ";
	cin >> r2.width;

	cout << "Enter the squre length : ";
	cin >> s1.length;

	cout << "Enter unit price : ";
	cin >> r2.unit;

	cout << "The green area is " << rarea(r2.length, r2.width) - (carea(c1.radius) + rarea(r1.length, r1.width) + sarea(s1.length)) << endl;
	cout << "Total cost is " << cost(para(r2.length, r2.width), r2.unit) << endl;
	cout << "Parameter is " << para(r2.length, r2.width) << endl;


}

float carea(float r) {
	return 3.14 * r * r;
}

float rarea(float x, float y) {
	return x * y;
}

float sarea(float x) {
	return x * x;
}

float para(float& len, float& width) {

	return (2 * len + 2 * width);
}

float cost(float parameter, float unitprice) {

	return parameter * unitprice;

}

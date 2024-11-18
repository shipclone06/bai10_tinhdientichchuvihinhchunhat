#include <iostream>
using namespace std;
int main()
{
	cout << " TINH CHU VI VA DIEN TICH HINH CHU NHAT:\n";
	double dai, rong, chuvi, dientich;

	cout << "nhap chieu dai: "; cin >> dai;
	cout << "nhap chieu rong: "; cin >> rong;

	chuvi = (dai + rong) * 2;
	dientich = (dai + rong);
	cout << "chu vi: " << chuvi << endl;
	cout << "dientich: " << dientich << endl;
	return 0;
}
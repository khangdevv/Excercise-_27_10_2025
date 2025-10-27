#include <iostream>
using namespace std;
int tong(int a, int b) {
    return a + b;
}
int hieu(int a, int b) {
    return a - b;
}
int tich(int a, int b){
	return a * b;
}
bool kiemTraSoHoanChinh(int n) {
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}
float thuong(int a, int b);
bool KTSNT(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Sinh Vien A thuc hien tinh tong : " << tong(2,3);
	cout << "Sinh Vien B thuc hien tinh hieu : " << hieu(2,3);
	cout << "Sinh Vien C thuc hien tinh tich : " << tich(2,3);
	cout << "Sinh Vien B thuc hien kt 5 la so nguyen to: " << KTSNT(5);
	cout << "Sinh Vien C thuc hien KT so hoan thien: "<<kiemTraSoHoanChinh(6);
	system("pause");
	return 0;
}
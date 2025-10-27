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
float thuong(int a, int b);

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Sinh Vien A thuc hien tinh tong : " << tong(2,3);
	cout << "Sinh Vien B thuc hien tinh hieu : " << hieu(2,3);
	cout << "Sinh Vien C thuc hien tinh tich : " << tich(2,3);
	system("pause");
	return 0;
}
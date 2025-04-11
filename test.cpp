#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    
    cout << "请输入第一个数字：";
    cin >> num1;
    
    cout << "请输入第二个数字：";
    cin >> num2;
    
    sum = num1 + num2;
    cout << "两数之和为：" << sum << endl;
    
    return 0;
}
//找出所有4位数中，形如aabb的可以开方的数

#include <iostream>
#include <math.h>

using namespace std;

class Solution_1 {
public:
    void question7744();

    bool isSame(int a);
};

void Solution_1::question7744() {
    for (int i = 31; i < 100; ++i) {//所有四位数可能开发得到的整数
        int num = i * i;
        //判断num是不是aabb
        int aa = num / 100;
        int bb = num % 100;
        if (isSame(aa) && isSame(bb)) {
            cout<<"解决方法一：平方后判断是不是aabb类型"<<endl;
            cout << num<<endl;
        }
    }
}

bool Solution_1::isSame(int a) {
    return a / 10 == a % 10;
}

class Solution_2 {
public:
    void question7744();
};

void Solution_2::question7744() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            int num = a * 1100 + b * 11;//找到aabb四位数
            int m = floor(sqrt(num) + 0.5);//floor（x）=不大于x的最大的整数
            if (m * m == num) {
                cout<<"解决方法二：找所有aabb能否开方，判断开方：开方后取整再平方"<<endl;
                cout << num << endl;
            }
        }
    }
}



int main() {
    Solution_1 solution1;
    Solution_2 solution2;
    solution1.question7744();
    solution2.question7744();
    return 0;
}


#include<iostream>

void calc (int A);
void calc (int A , int B);
void calc (int A, int B, int C);

int main()
{
    int A , B ,C ,D;
    std::cout << "请输入参数个数" << "\n";
    std::cin >> D;

    switch (D)
    {
    case 1:
        std::cout << "请输入数字";
        std::cin >> A;
        calc(A);
        break;

    case 2:
        std::cout << "请输入数字";
        std::cin >> A >> B;
        calc(A,B);
        break;

    case 3:
        std::cout << "请输入数字";
        std::cin >> A >> B >> C;
        calc(A,B,C);
        break;
    default:
        std::cout << "输入错误 请输入1或2或3";
        break;
    }
    
    return 0;
}
void calc(int A)
    {
        std::cout << A*A;
    }
    void calc(int A , int B)
    {
        std::cout << A*B;
    }
    void calc(int A, int B, int C)
    {
        std::cout << A+B+C;
    }
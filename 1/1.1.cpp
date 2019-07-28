#include <iostream>
int max(int num1, int num2, int num3 = 1)
{
    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
    {
        std::cout << "Input is not a positive integer. " << std::endl;
        return -1;
    }
    int max = num1;
    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }
    return max;
}
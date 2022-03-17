#include <iostream>

int main()
{   
    int number;
    int len_number = 0;
    std::cout << "Write length array: ";
    std::cin >> number;
    int *A = new int[number];
    for (int i = 0; i < number; i++)
    {
        A[i] = i;
        if (i % 2 == 0)
        {
            len_number++;
        }
    }
    int *B = new int[len_number];
    int j = 0;
    for (int i = 0; i < number; i++)
    {
        if (A[i] % 2 == 0)
        {
            B[j] = A[i];
            j++;
        }
    }
    std::cout << "Result:" << std::endl;
    int x = 0;
    for (int i = 0; i < len_number; i++)
    {
        if (x <= 4)
        {
            std::cout << B[i] << " ";
            x++;
        }
        else 
        {
            std::cout << B[i] << " " << std::endl;
            x = 0;
        }
    }
    
}

#include <iostream>

int main()
{   
    int number; //Переменная для хранения длинны массиыв
    int len_number = 0; //Переменная для хранения числа четных чисел
    //Ввод в переменную number
    std::cout << "Write length array: ";
    std::cin >> number;
    int *A = new int[number]; //Динамический массив
    //Заполнение динамического массива
    for (int i = 0; i < number; i++)
    {
        A[i] = i;
        //Подсчет колличества четных чисел
        if (i % 2 == 0)
        {
            len_number++;
        }
    }
    int *B = new int[len_number]; //Динамический массив для четных чисел
    int j = 0; //Счетчик индекса массива B
    //Заполнение массива B
    for (int i = 0; i < number; i++)
    {
        if (A[i] % 2 == 0)
        {
            B[j] = A[i];
            j++;
        }
    }
    //Модуль вывода значений массива в виде матрицы
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

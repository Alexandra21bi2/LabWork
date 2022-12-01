#include "insert.h"


// функция для реализации сортировки
//на каждом шаге алгоритма берется один из элементов массива
//находится позицию для вставки этого элемента, и происходит вставка
template <typename T>
T insertsort(T arr[], int n)
{
    //создается массив, переменные и длина массива
    //задаются условия для сравнения элементов массива
    int i, j; //elem - элемент, с которым сравниваются остальные
    T  elem;
    for (i = 1; i < n; ++i)
    {
        elem = arr[i]; //присваем переменной значение
        j = i - 1;

        // Выполняется перемещение элементов массива, которые больше elem, на одну позицию вперед
        while (j >= 0 && arr[j] > elem)
        {
            arr[j + 1] = arr[j]; //перемещение элемента
            j = j - 1;
        }
        arr[j + 1] = elem; 
        
    }
    return 0;
}
//функция выводит массив размерностью n
template <typename P>
P printArray(P arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    
    return 0;
}

// 
int main()
{
    int arr[] = { 11, 17, 13, 5, 3, 0, 9 };
    int size_arr = sizeof(arr) / sizeof(arr[0]); //считается размер массива
    insertsort(arr, size_arr); //вызов функции  insertsort()
    std::cout << "Sorted array:" << std::endl;
    printArray(arr, size_arr); //вызов функции  printArray()
    return 0;
}
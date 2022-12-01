#include "insert.h"


// ������� ��� ���������� ����������
//�� ������ ���� ��������� ������� ���� �� ��������� �������
//��������� ������� ��� ������� ����� ��������, � ���������� �������
template <typename T>
T insertsort(T arr[], int n)
{
    //��������� ������, ���������� � ����� �������
    //�������� ������� ��� ��������� ��������� �������
    int i, j; //elem - �������, � ������� ������������ ���������
    T  elem;
    for (i = 1; i < n; ++i)
    {
        elem = arr[i]; //�������� ���������� ��������
        j = i - 1;

        // ����������� ����������� ��������� �������, ������� ������ elem, �� ���� ������� ������
        while (j >= 0 && arr[j] > elem)
        {
            arr[j + 1] = arr[j]; //����������� ��������
            j = j - 1;
        }
        arr[j + 1] = elem; 
        
    }
    return 0;
}
//������� ������� ������ ������������ n
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
    int size_arr = sizeof(arr) / sizeof(arr[0]); //��������� ������ �������
    insertsort(arr, size_arr); //����� �������  insertsort()
    std::cout << "Sorted array:" << std::endl;
    printArray(arr, size_arr); //����� �������  printArray()
    return 0;
}
#include <iostream>
using namespace std;

int* reverse (const int* list, int size)
{
    int* result = new int[size] ;
    
    for ( int i = 0 , j = size - 1 ; i < size; i++, j-- )
    {
        result[j] = list[i];
    }
    
    return result;
    
}

void printArray(const int* list, int size)
{
    int i;
    
    for(i = 0; i < size; i++)
        
        cout << list[i] << " " ;
    
    cout << endl ;
    
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6}; // new int[size] 即為這個整數陣列配置適當大小的記憶體。
    
    int* p = reverse(list, 6);
    
    printArray(p, 6);
    
    return 0;
}

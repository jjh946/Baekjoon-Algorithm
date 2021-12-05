#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    
    int arr[9];

    for(int i=0;i<9;++i)
        std::cin >> arr[i];

    int biggest = arr[0], index;
    for(int i=0;i<9;++i)
    {
        if(arr[i]>biggest)
        {
            biggest = arr[i];
            index = i+1;
        }
    }
    
    std::cout << biggest << '\n' << index << '\n';
    
    return 0;
}

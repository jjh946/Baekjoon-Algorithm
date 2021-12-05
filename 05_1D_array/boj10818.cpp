#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    int arr[n];

    for(int i=0;i<n;++i)
        std::cin >> arr[i];

    int smallest = arr[0], biggest = arr[0];
    for(int i=0;i<n;++i)
    {
        if(arr[i]<smallest)
            smallest = arr[i];
        if(arr[i]>biggest)
            biggest = arr[i];
    }
    
    std::cout << smallest << ' ' << biggest << '\n';
    
    return 0;
}

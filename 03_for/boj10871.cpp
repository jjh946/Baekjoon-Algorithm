#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    int n,x;

    std::cin >> n >> x;

    int a[n];
    
    for(int i = 0; i<n; ++i)
        std::cin >> a[i];

    for(int i = 0; i<n; ++i)
    {
        if (a[i]<x)
            std::cout << a[i] << ' ';
    }
    return 0;
}

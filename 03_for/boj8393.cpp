#include <iostream>

int main() {
    int n, sum=0;

    std::cin >> n;

    for(int i = 1; i<n+1; ++i)
        sum = sum + i;
    
    std::cout << sum;
    return 0;
}

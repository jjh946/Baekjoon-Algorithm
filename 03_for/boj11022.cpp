#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    int n;

    std::cin >> n;

    int a[n], b[n];


    for(int i = 0; i<n; ++i)
        std::cin >> a[i] >> b[i];

    for(int i = 0; i<n; ++i)
        std::cout<< "Case #" << i+1 << ": " << a[i] << " + " << b[i] << " = " << a[i]+b[i] << '\n';
   
    return 0;
}

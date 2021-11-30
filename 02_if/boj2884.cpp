#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    if (b>=45)
    {
    std::cout << a << ' ' << b-45 << std::endl;
    }
    
    else if(a==0)
    {
    std::cout << 23 << ' ' << b+60-45 << std::endl;   
    }
    else
     {
    std::cout << a-1 << ' ' << b+60-45 << std::endl;   
    }

    return 0;
}

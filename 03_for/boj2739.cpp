#include <iostream>

int main() {
    int a;

    std::cin >> a;

    for(int count = 1;count<10;++count)
        std::cout << a << " * " << count << " = "<< a*count << std::endl;
   
    return 0;
}

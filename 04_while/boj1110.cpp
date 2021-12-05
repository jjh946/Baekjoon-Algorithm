#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    int t = n;
    int count=0;

    while(1)
    {
        int NEW;
        NEW = (t%10)*10 + ((t/10)+(t%10))%10;

        count++;
        

        if(NEW==n)
            break;
        
        t = NEW;
    }
        
    std::cout << count << '\n';
    
    return 0;
}
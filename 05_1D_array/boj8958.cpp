#include <iostream>
#include<string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int NUMBER;
    std::cin >> NUMBER;

    int ocount[NUMBER];

    for (int i = 0; i < NUMBER; ++i)
    {
        std::string oxstr;
        std::cin >> oxstr;
        
        int j=0;
        int onum=0, sum=0;
        while((oxstr[j]=='O')||(oxstr[j]=='X'))
        {
            if(oxstr[j]=='O')
            {
                ++onum;
                sum = sum + onum;
            }
            else if(oxstr[j]=='X')
            {
                onum = 0;
            }
            else break;
            ++j;
        }
        
        ocount[i] = sum;
       
    }
    for (int i = 0; i < NUMBER; ++i)
        std::cout << ocount[i] << '\n';

    return 0;
}

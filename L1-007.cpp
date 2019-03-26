#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    std::cin >> str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='-')
            std::cout << "fu" ;
        else if(str[i]=='0')
            std::cout << "ling" ;
        else if(str[i] == '1')
            std::cout << "yi" ;
        else if(str[i]=='2')
            std::cout << "er" ;
        else if(str[i]=='3')
            std::cout << "san" ;
        else if(str[i]=='4')
            std::cout << "si" ;
        else if(str[i]=='5')
            std::cout << "wu" ;
        else if(str[i]=='6')
            std::cout << "liu" ;
        else if(str[i]=='7')
            std::cout << "qi" ;
        else if(str[i]=='8')
            std::cout << "ba" ;
        else if(str[i]=='9')
            std::cout << "jiu";
        if(i!=str.size()-1)
            std::cout << " " ;
    }
    return 0;
}

#include <iostream>
#include <string>


int main()
{
    std::string a;
    std::cin>>a;
    char* p_a;
    p_a = &a[0];
    for (int i=0 ; i<a.length() ; i++)
    {
       std::cout<<*p_a<<std::endl;
       p_a++; 
    }
}
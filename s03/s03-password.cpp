#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
std::string haslo,a;
a = argv[1];
    do{
    std::cout << "Podaj haslo: ";
    std::cin>>haslo;
    }while(haslo!=a);
    if(haslo==a)
{
    std::cout<<"OK!\n";
}
    return 0;
}

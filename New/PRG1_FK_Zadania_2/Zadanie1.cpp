#include <iostream>
#include <vector>
auto average_of(std::vector<double> num)
{
    double res=0;
    double avg;

    for(auto i=0; i<=num.size(); i++)
    {
        res+=num[i];
    }

    avg=res/num.size();

    return avg;
}
auto main() -> int
{
    auto num = std::vector<double> {};
    double num1;
    int ilosc;

    std::cout << "Podaj ilosc liczb: ";
    std::cin >> ilosc;

    for(auto i=0; i<ilosc; i++)
    {
        std::cout << "Podaj " << i+1 << " liczbe: ";
        std::cin>>num1;
        num.push_back(num1);
    }
    std::cout << "Srednia z podanych liczb wynosi:" << average_of(num) << "\n";
}

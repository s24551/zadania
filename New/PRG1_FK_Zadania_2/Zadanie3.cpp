#include <iostream>
#include <vector>
auto dot_product(std::vector<float> wek1,std::vector<float> wek2)
{
    if(wek1.size()==wek2.size())
    {
        float suma=0;
        for(int i=0; i<wek1.size(); i++)
        {
            suma = suma + (wek1[i]*wek2[i]);
        }
        return suma;
    }
    else
    {
        std::cout << "Nieprawidlowe wymiary tablicy" << std::endl;

    }
}
int main()
{
    std::vector<float> tab1 = {3,7,4,2};
    std::vector<float> tab2 = {5,1,3,9}; //domyslnie ustawione za duzo wartosci w tablicach
    std::cout << dot_product(tab1,tab2) << std::endl;
}

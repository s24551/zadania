#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
auto filter_palidromes(std::vector<std::string> tab)
{
    std::vector<std::string> ret;
    for(int i=0; i<tab.size(); i++)
    {
        int sum=0;
        int y = tab[i].length();
        for(auto j=0; j<y; j++)
        {
            if(tab[i][j]==tab[i][y-1-j])
            {
                sum=sum+1;
            }
        }
        if(sum==y)
        {
            ret.push_back(tab[i]);
        }
    }
    return ret;
}
int main()
{
    std::vector<std::string> tab = {"zaraz","zakaz","s24551","Hoffmann","owocowo", "Jakub","kajak"};
    filter_palidromes(tab);
    for(auto i=0; i<5; i++)
    {
        std::cout << filter_palidromes(tab)[i]<< std::endl;
    }
}

#include <iostream>
int main()
{
    for(int n=2; n<=20; n++)
    {

        if(n==2)
        {
            std :: cout << n << " ";
        }
        else
        {

            for(int i=2; i<=n; i++)
            {
                if(n%i==0)
                {
                    break;
                }
                else if (n%3==0)
                {
                    break;
                }
                else
                {
                    std :: cout << n << " ";
                    break;
                }
            }
        }
    }
    std::cout<<"\n";
    for(int n=2; n<=20; n++)
    {

        if(n==2)
        {
            std :: cout << n << " ";
        }
        else
        {

            for(int i=2; i<=n; i++)
            {
                if(n%i==0)
                {
                    break;
                }
                else if (n%3==0)
                {
                    break;
                }
                else
                {
                    std :: cout << n << " ";
                    break;
                }
            }
        }
    }


    return 0;
}

#include <iostream>

using namespace std;

int czyPierwsza(int a);
int main()
{


}
int czyPierwsza(int a)
{
    if(a<2)
        return 0;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
}

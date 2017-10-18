#include <iostream>

using namespace std;

int czyPierwsza(int a);
int main()
{

    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(czyPierwsza(a))
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }


    return 0;
}
int czyPierwsza(int a) //funkcja pomocnicza
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

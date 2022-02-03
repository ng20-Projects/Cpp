#include<iostream>
using namespace std;
template<class X> X fun(X a, X b)
{
    X c=a+b;
    return c;
}
template<class X, class Y> Y fun(X a, Y b)
{
    Y c=a+b;
    return c;
}
main()
{
    cout<<fun(4,6)<<endl;
    cout<<fun(5,7.6);
}

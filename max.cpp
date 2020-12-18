#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b;
    c=max(a,b);
    cout <<"max is "<<c<<endl; //mem
}
int max(int x, int y){return x>y?x:y;}

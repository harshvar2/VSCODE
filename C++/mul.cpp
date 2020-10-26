#include<iostream>


using namespace std;

void getaddmul(int x,int y,int *aptr,int *mptr)
{
    *aptr=x+y;
    *mptr=x*y;
}

int main()
{
    int x=10,y=20,a,m;
    getaddmul(x,y,&a,&m);
    cout<<a<<" "<<m;
    return 0;

}

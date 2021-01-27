#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int randomTheBai()
{

    int t = rand() % 101 ;
    return t;
}

int main()
{
    int a,b,mark;
    srand(time(NULL));
    a=randomTheBai();
    do b=randomTheBai();
    while(a==b);

    cout << "Gia tri cua 1 trong 2 the la : " << a <<endl;
    if(a>50){
        cout << "The ma Bob chon la : " << a <<endl;
        mark=a;
    }
    else {
        cout << "The ma Bob chon la : " << b <<endl;
        mark=b;
    }
    cout << "Gia tri cua the con lai la : " << a+b-mark <<endl;
    if(mark==max(a,b))cout <<"Bob win !!!";
    else cout << "Bob lose !!!";
    return 0;
}

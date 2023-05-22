#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    y= ((y*y) *cos(y))+1;
    return y;
}

int main() {
    float a,b,x,err;
    int t,z;
    do{
        cout <<"inserire estremi";
        cin >> a;
        cin >> b;
    }while((f(a)*f(b))>=0);
    a=(a+b)/2;
    x=a;
    do{
        if (f(x)!= 0){
            if ((f(a)*f(b))<0){
                b=x;
            }
            else{
                a=x;
            }
            err=((b-a)/2);
            a=(a+b)/2;
        }
    }while((f(x)!=0) or (err >=1e-6));
    t=x*1000;
    z=(f(x))*1000;
    a=t/1000;
    b=z/1000;
    cout << a;
    cout << b;
    return 0;
}

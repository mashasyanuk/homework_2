#include <iostream>
#include <math.h>
using namespace std;

double f(double x, double y){
    return (5*x*y+pow(x, 3) +pow(y, 3)/x);

}

double p_1(int i, int p2, int p1){
    if(i>3){
        return cos(p_1(i-1, p2, p1))+p_1(i-2, p2, p1);
    }
    else if(i==3){
        return (cos(p2))+p1;
    }

}
double h1(int i, int h0){
    if(i>2){
        return sqrt(abs(h1(i-1, h0)))/pow(h1(i-1, h0), 2);
    }
    else if (i==2){
        return sqrt(abs(h0))/pow(h0, 2);

    }

}

void operations(int amount, double a) {
    float massive[11]{};
    for(int i{}; i<amount; i++) {
            int tek = rand() % 20;
            massive[i]=tek;
            if (tek % 5 == 0) {
                massive[i] /= a;
            }
            cout << massive[i] << " ";
    }
    cout << endl;
}


int main(){
    double s{}, t{};
    cin >> s >> t;
    double a=f(pow(s, 2), t+5);
    double b=f(sqrt(t+s), s) + f(s, pow(t, 2));

    int p1=8, p2=12, i{}, c{}, z{};
    double pi{}, hi{};
    cin >> i;
    pi=p_1(i, p2, p1);
    cout << pi << endl;

    cin >> z;
    hi=h1(i, z);
    cout << hi<< endl;

    c=pow(p_1(3, p2, p1), 3)+pow(h1(7, z), 3);
    cout << c << endl;

    int i1=11, j=10, k=9;

    operations(i1, a);
    operations(j, b) ;
    operations(k, c);



    return 0;
}
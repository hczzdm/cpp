#include <bits/stdc++.h>
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

double delta(double a, double b, double c){
    double deltax = ((b * b) - (4 * a * c)); 
    return deltax;
} 

double r1(double delta_val, double a , double b){
    double x = (-b + sqrt(delta_val))/(2*a);
    return x;
} 

double r2(double delta_val, double a, double b){
    double x = (-b - sqrt(delta_val))/(2*a);
    return x;
} 

int main(){
    entrada();
    
    
    double a, b, c;
    cin >> a >> b >> c;
    
    if(a == 0){
        
        cout << "Impossivel calcular\n"; 
        return 0;
    } 
    
    double resu = delta(a,b,c);
    
    
    if(resu < 0){
        cout << "Impossivel calcular\n";
        return 0;
    } 
    
    double x1 = r1(resu, a, b);
    double x2 = r2(resu, a, b);
    
    
    cout << fixed << setprecision(5);
    cout << "R1 = " << x1 << "\n";
    cout << "R2 = " << x2 << "\n";

    return 0;
}
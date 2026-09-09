#include <bits/stdc++.h> 
using namespace std;

void entrada(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

}

void recursao_crescente(int n){
    if(n <= 0){
        return;
    }
    recursao_crescente(n-1);
    cout << n << " ";
} 

void recursao_decrescente(int n){
    if(n <= 0){
        return;
    }
    cout << n << " ";
    recursao_decrescente(n-1);
}   



int main(){
    entrada();
    int x;
    cin >> x;
    recursao_crescente(x);
    cout << endl;
    recursao_decrescente(x);
    cout << endl;
    return 0;


}
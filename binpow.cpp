#include <bits/stdc++.h>
using namespace std;


int binpow(int base, int expoente){ 
    int resposta = 1;
    while(expoente > 0){
        if(expoente & 1) 
            resposta *= base; 
        base *= base; 
        expoente >>= 1; 
    }
    return resposta;
}
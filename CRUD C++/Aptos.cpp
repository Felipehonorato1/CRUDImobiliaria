#include <iostream>
#include "Aptos.h"

using namespace std;


aps::aps(){
    rua = "";
    cep = 0;
    quartos = 0;
    andar = 0;
}

void aps::setApto(string r,int q,int c, int a){
    if(r.size()>3 && q>0 && c > 0 && a > 0 ){
        rua = r;
        quartos = q;
        cep = c;
        andar = a;
    }
}

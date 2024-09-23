#include <iostream>
using namespace std;

int lista[];

int soma(int lista[]){
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma+=lista[i];
    }
    return (int)soma;
    


}


void soma(float x,float y=10.2){

    
}





int x= 0;


int soma(){
    int y = x + 1;
    return y;
}

int main(){
    cout << soma() << endl;
    return 0;
}
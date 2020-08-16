//
//  main.cpp
//  simple calculator
//
//  Created by Kinga Żmuda on 15/08/2020.
//  Copyright © 2020 Kinga Żmuda. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int liczba;
float wspolczynniki[100];
int wybor;

//fukcja kalkulatora
void kalkulator(){
    
    while(1==1){
        cout<<"Podaj liczbę współczynników"<<endl;
        cin>>liczba;
        if(liczba<=1){
            sleep(1);
            cout<<"Nieprawidłowa liczba współczynników"<<endl;
            sleep(1);
        }else{
            break;
        }
    }
    
    for (int i=0; i<liczba; i++) {
        cout<<"Wprowadź współczynnik: "<<endl;
        cin>>wspolczynniki[i];
        sleep(1);
    }
    
    cout<<"Wybierz działanie:"<<endl;
    sleep(1);
    cout<<"1/ dodawanie"<<endl<<"2/ odejmowanie"<<endl<<"3/ mnożenie"<<endl<<"4/ dzielenie"<<endl;
    cin>>wybor;
    sleep(1);
        
    if(wybor==1){
        float suma;
        suma = 0;
        for (int j=0; j<=liczba; j++) {
            suma = suma + wspolczynniki[j];
        }
        cout<<"Wynik dodawania współczynników to: "<<suma;
    }
    if(wybor==2){
        float roznica=0 + wspolczynniki[0];;
        for (int k=1; k<=liczba; k++) {
            roznica = roznica - wspolczynniki[k];
        }
        cout<<"Wynik odejmowania współczynników to: "<<roznica;
    }
    if(wybor==3){
        float iloczyn=1;
        for (int l=0; l<liczba; l++) {
            iloczyn = iloczyn * wspolczynniki[l];
        }
        cout<<"Wynik mnożenia współczynników to: "<<iloczyn;
    }
    if(wybor==4){
        float iloraz= wspolczynniki[0];;
        for (int m=1; m<liczba; m++) {
            iloraz = iloraz / wspolczynniki[m];
        }
        cout<<"Wynik mnożenia współczynników to: "<<iloraz;
    }
}
//koniec fukcji kalkulatora

int main() {
    cout<<"To jest prosty kalkulator"<<endl;
    sleep(1);
    cout<<"Autor: Kinga Żmuda"<<endl;
    sleep(1);
    while(1==1) {
        kalkulator();
        sleep(1);
        cout<<endl<<"Naciśnij 0, aby zakończyć program."<<endl<<"Aby policzyć jeszcze raz wybierz 1."<<endl;
        cin>>wybor;
        if(wybor==0) {
            exit(0);
        }
    }
    return 0;
}

:wq

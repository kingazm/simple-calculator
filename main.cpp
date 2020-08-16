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

int amount;
float numbers[100];
int choice;
float result;

void calculator(){
    
    while(1==1){
        cout<<"Enter the amount of numbers"<<endl;
        cin>>amount;
        if(amount<=1){
            sleep(1);
            cout<<"Incorrect amount of numbers"<<endl;
            sleep(1);
        }else{
            break;
        }
    }
    
    for (int i=0; i<amount; i++) {
        cout<<"Enter the number: "<<endl;
        cin>>numbers[i];
        sleep(1);
    }
    
    cout<<"Choose the operation: "<<endl;
    sleep(1);
    cout<<"1 adding"<<endl<<"2 subtracting"<<endl<<"3 multiplying"<<endl<<"4 dividing"<<endl;
    cin>>choice;
    sleep(1);
        
    if(choice==1){
        result = 0;
        for (int j=0; j<=amount; j++) {
            result = result + numbers[j];
        }
        cout<<"The result of adding your numbers is: "<<result;
    }
    if(choice==2){
        result=0 + numbers[0];;
        for (int k=1; k<=amount; k++) {
            result = result - numbers[k];
        }
        cout<<"The result of subtracting your numbers is: "<<result;
    }
    if(choice==3){
        result=1;
        for (int l=0; l<amount; l++) {
            result = result * numbers[l];
        }
        cout<<"The result of multiplying your numbers is: "<<result;
    }
    if(choice==4){
        result= numbers[0];;
        for (int m=1; m<amount; m++) {
            result = result / numbers[m];
        }
        cout<<"The result of dividing your numbers is: "<<result;
    }
}

int main() {
    cout<<"This is a simple calculator"<<endl;
    sleep(1);
    cout<<"Author: @kingazm"<<endl;
    sleep(1);
    while(1==1) {
        calculator();
        sleep(1);
        cout<<endl<<"Press 0 to exit."<<endl<<"To make more operations press 1."<<endl;
        cin>>choice;
        if(choice==0) {
            exit(0);
        }
    }
    return 0;
}


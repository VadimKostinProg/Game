#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    srand(time(NULL));
    cout<<"!!!WELCOME TO THE GAME!!!"<<endl<<endl;
    Sleep(2000);

    cout<<"Your task is to guess the number"<<endl<<endl;
    Sleep(2000);

    cout<<"There are 4 levels of complexity:"<<endl;
    Sleep(3000);
    cout<<"\n1 level: you must to guess the number from 0 to 50"<<endl;
    cout<<"2 level: you must to guess the number from 0 to 100"<<endl;
    cout<<"3 level: you must to guess the number from 0 to 200"<<endl;
    cout<<"4 level: you must to guess the number from 0 to 500"<<endl;
    Sleep(10000);

    int level, number;
    while(true){
        cout<<"\nEnter the level of the complexity: "; cin >> level;
        switch (level)
        {
        case 1:
            number = rand()%50;
            break;
        case 2:
            number = rand()%100;
            break;
        case 3:
            number = rand()%200;
            break;
        case 4:
            number = rand()%500;
            break;
        default:
            cout<<"\n\nYou chose the incorrect level of complexity!!!"<<endl;
        }
        if(level==1 || level==2 || level==3 || level==4) break;
    }

    cout<<"\n\nYou will have unlimited amount of attempts to guess the number\nDepending on this amount of attempts you`ll have different rank:"<<endl<<endl;
    cout<<"If you guess on the first try, you will get the hieghst rank\nIf you guess from 2 to 10 attempt - normal rank\nFrom 10 to 20 - medium rank\nAnd if you guess the number on more then 20 attempts you will get low rank"<< endl;
    system("pause");
}
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

    cout<<"\n\nYou will have unlimited amount of attempts to guess the number";
    Sleep(3000);
    cout<<"\nDepending on this amount of attempts you`ll have different rank:"<<endl<<endl;
    Sleep(3000);
    cout<<"If you guess on the first try, you will get the highest rank"<<endl;
    Sleep(3000);
    cout<<"If you guess from 2 to 10 attempt - normal rank"<<endl;
    Sleep(2000);
    cout<<"From 11 to 20 - medium rank"<<endl;
    Sleep(2000);
    cout<<"And if you guess the number on more then 20 attempts you will get low rank"<< endl;
    Sleep(3000);

    cout<<"\nStart the Game"<<endl;
    int count=0,userNumber;
    while (true)
    {
        count++;
        cout<<"\nGuess the number: "; cin>>userNumber;
        if (userNumber>number)
            cout<<"\nLess"<<endl;
        else if(userNumber<number)
            cout<<"\nMore"<<endl;
        else{
            cout<<"\nYou win!!!"<<endl;
            break;
        }
    }

    cout<<"You guessed on the "<<count<<" try!"<<endl;
    if (count==1)
        cout<<"You got the highest rank!!! Knockout!"<<endl;
    else if(count>=2 && count<=10)
        cout<<"You got the normal rank!!! Nice try!"<<endl;
    else if(count>=11 && count<=20)
        cout<<"You got the medium rank! You worked hurd!"<<endl;
    else
        cout<<"You got the low rank! Better luck next time!"<<endl;
    
    system("pause");
}
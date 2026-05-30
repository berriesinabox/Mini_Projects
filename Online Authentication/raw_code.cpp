#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string login;
    string user;
    int login_times;
    string password_login;
    string password;

    string command;
    cout << "WELCOME! : IN ORDER TO LOGIN PLEASE VERIFY DETAILS "<<endl;
    cout<< "\n";

    cout << "exit/login/register"<<"command : ";
    cout<< "\n";
    cin >> command;

    while(command != "exit"){

        if(command == "register"){
            cout << "\n\n"<<endl;
            cout<<"Registeration ::" <<endl;
            cout <<"register: ";
            cin >> user;
            cout << "password: ";
            cin >> password;

            cout <<"\n\n";
            cout << "Registered Sucessfully"<<endl;
            cout<<"\n\n";
            cout<<"exit/login/register"<<endl<<"command : ";

            cin >> command;

            login_times=3;
            while(login_times>0){

                cout << "\n\n";
                cout<<"LOGIN ::"<<endl;
                cout<< "\n";

                cout<< "login: ";
                cin >> login;
                cout << "password: ";
                cin >> password_login; 

                if(login == user && password_login == password){
                    cout << "loged in sucessfully"<<endl;
                    cout << "welcome"<<" "<<"!";

                    break;
                }
                else if(login != user && password_login == password){
                    cout << "username is incorrect"<< endl;
                    login_times--;
                }
                else if(login == user && password_login != password){
                    cout << " password is incorrect"<<endl;
                    login_times--;
                }
                else{
                    cout << " Everything is incorrect"<< endl;
                    login_times--;
                }
            }
            break;
        }
    }
}

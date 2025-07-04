#include<iostream>
#include<string>
using namespace std;


void enter(){

}
void show(){}
void search(){}
void update(){}
void del(){}


int main() {
    int choice;
    string form;
    while(true){
    cout << "***EXPENDITURE TRACKING TIME***" << endl;
    cout<<"Press 1 to Enter new expenses" << endl;    
    cout<<"Press 2 to see previous expenses" << endl;
    cout<<"Press 3 to search expenses" << endl;
    cout<<"Press 4 to update expenses" << endl;
    cout<<"Press 5 to delete expenses" << endl;
    cout<<"Press 6 to exit" << endl;
    cin>>choice;
    cin.ignore();
    getline(cin,form);
    cin.ignore();

    switch(choice){
        case 1:enter();break;
        case 2:show();break;
        case 3:search();break;
        case 4:update();break;
        case 5:del();break;
        case 6:exit(0);break;  
        default:cout<<"Invalid No."<<endl;break;     
        }
    }
    return 0;
}
#include<iostream>
#include<cstring>

using namespace std;

char * getname(void); // function prototype

int main(){
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed

    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    return 0;
};

char * getname(){
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp)+1]; // +1 means '\0'
    strcpy(pn, temp); // copy string into smaller space
    return pn; // temp lost when function ends
}
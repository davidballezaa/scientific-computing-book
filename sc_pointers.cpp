#include <iostream>

using namespace std;

int double_it(int& n){
    n *= 2;
    return n;
}

void show_value(int* n){
    cout << *n << '\n';
}

void change_value(int *n){
    *n = *n * 2;
    cout << *n << '\n';
}

int main(int argc, char* argv[]){
    int i = 5;
    // show_value(&i);
    change_value(&i);
    cout << i << '\n';


    /*
    int *p_j;
    p_j = &i;
    i = *p_j * 5;

    int *p_k = new int;
    *p_k = i;
    *p_j = 0;

    cout << "i: " << i << '\n';
    cout << "p_j: " << *p_j << '\n';
    cout << "p_k: " << *p_k << '\n';

    delete p_k;
    */


}

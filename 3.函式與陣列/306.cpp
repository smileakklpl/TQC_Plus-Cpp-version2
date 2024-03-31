//n階層
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int compute_(int n){
    int final = 1;
    while (n != 0){
        final *= n;
        n -= 1;
    }
    return final;
}

int main(){
	int n;

	cin >> n;
    cout << compute_(n) << endl;

} 
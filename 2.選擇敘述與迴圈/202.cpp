//輸入分數
#include <iostream>

using namespace std;

int main(){
	int n;
    cin >> n;
    if (n < 0 || n > 100){cout << "error";}
    else if (n > 60){cout << n + 10;}
    else{cout << n + 5;}

    //-----
	scanf("%d", &n);
	if(n<0 || n>100) printf("error");
	else if(n>60) printf("%d", n+10);
	else printf("%d", n+5);
}
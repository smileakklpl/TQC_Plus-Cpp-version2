//簡易計算機
#include <iostream>

using namespace std;

int main(){
	int a, b, ans;
	char c;

    cin >> a >> b >> c;
    if (c == '+'){
        ans = a + b;
    }
    else if(c == '-'){
        ans = a - b;
    }
    else if(c == '*'){
        ans = a * b;
    }
    else if(c == '/'){
        ans = a / b;
    }
    else{
        cout << "error" << endl;
        return 0;
    }
    cout << ans << endl;

    //-----
	scanf("%d %d %c", &a, &b, &c);
    if(c=='+') ans=a+b;
    else if(c=='-') ans=a-b;
    else if(c=='*') ans=a*b;
    else{
        printf("error");
        return 0;
    }
    printf("%d%c%d=%d",a,c,b,ans);
    
}
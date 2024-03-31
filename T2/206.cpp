//奇數和
#include <iostream>

using namespace std;

int main(){
	int a, b, ans=0;

    cin >> a >> b;
    while(a <= b){
        ans += a;
        a += 2;
    }
    cout << ans << endl;

    //-----
	//scanf("%d %d", &a, &b);
	//while(a<=b) ans+=a, a+=2;
	//printf("%d", ans);
}
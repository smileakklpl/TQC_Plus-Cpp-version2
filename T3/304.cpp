//3的倍數
#include <iostream>

using namespace std;

int compute_(int array[]){
    int n = 0;
    for (int i = 0; i < 6; i++){
        if (array[i] % 3 == 0){
            n++;
        }
    }
    return n;
}

int main(){
    int n, array[6];
    for (int i = 0; i < 6; i++){
        cin >> array[i];
    }
    cout << compute_(array) << endl;

}


/*
int compute(int a[]){
	int i,n=0;
	for(i=0; i<6; i++)
	if(a[i]%3==0) n++;
	return n;
}

int main(){
	int n , arr[6],i;
	for(i=0; i<6; i++)scanf("%d",&arr[i]);
	printf("%d\n",compute(arr));
}
*/
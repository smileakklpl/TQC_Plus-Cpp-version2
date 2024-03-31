//期中考分數
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int compute_(int);


char compute(int score){
	if(score<0 || score>100)
		return -1;
	if(score >= 60) score += 5;
	else score+=10;
	return score;	
}

int main(){
	int score, final;

    cin >> score;
    cout << compute_(score) << endl;


    //-----
	scanf("%d", &score);
	final= compute(score);
	printf("%d", final);
}

int compute_(int score){
    if(score < 0 || score > 100){
        return -1;
    }
    else if(score >= 60){
        score += 5;
    }
    else{
        score += 10;
    }
    return score;
}

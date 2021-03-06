#include <stdio.h>

//만들어지는 숫자의 카운트배열
//문제에서 'p'의 값이 97이하이기 때문에 넉넉히 배열을 잡는다
int c[100];

int main(){
    int n, d;
    scanf("%d %d", &n, &d);
    
    int v=(n*n)%d; //첫번째 값 연산
    
    while(1){
        //출현횟수가 이미'2'이면 싸이클이 이루어졌다고 생각할 수 있음
        if(c[v] == 2) break;
        
        c[v]++; //출현횟수를 '1'증가
        v=(v*n)%d; //다음숫자 연산
    }
    
    int cnt=0;
    //출현횟수가 2번 이상 나온 값들을 모두 카운트하면 그 값이 싸이클의 크기가 된다
    for(int i=0; i<101; i++) cnt+=(c[i]==2) ? 1:0;
    printf("%d", cnt);
}
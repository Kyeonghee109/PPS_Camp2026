/*다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
____________________
입력
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.

출력
첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.*/

//1. 숫자를 하나씩 8번 입력받아 배열에 저장한다.
//2. 저장된 숫자들의 변화가 1씩 증가하면 변화값을 1, 1씩 감소하면 -1로 저장하고 1보다 크게 변화하면 반복을 멈추고 mixed를 출력한다.
//5. 반복을 전부 끝내면 변화값 상태를 보고 1이면 ascending 출력, -1 이면 descending 출력한다.
#include <stdio.h>

int main(){
    int num[8];
    int state=0;

    for(int i = 0;i < 8; i++){
        scanf("%d",&num[i]);
        if(i >= 1){
            if(num[i-1] == num[i]-1) state = 1;
            else if(num[i-1] == num[i]+1) state = -1;
            else {
                state = 0;
                break;
            }
        }
    }

    if(state == 1) printf("ascending\n");
    else if(state == -1) printf("descending\n");
    else printf("mixed\n");

    return 0;
}

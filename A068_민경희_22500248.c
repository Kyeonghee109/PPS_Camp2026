#include <stdio.h>
#include <string.h>

int main () {
    int N;
    scanf("%d", &N);

    int stack[2000000];
    int front = 0, back = 0;

    for(int i = 0 ; i < N ; i++){
        char command[10];
        scanf("%s", command);


        if(strcmp(command,"push") == 0){
            int x;
            scanf("%d", &x);
            stack[back++] = x;
        }
        else if(strcmp(command,"pop")==0){
            if(front == back){
                printf("-1\n");
            }else{
                printf("%d\n", stack[front++]);
            }
        }
        else if(strcmp(command,"size")==0)
            printf("%d\n", back - front);
        else if(strcmp(command,"empty")==0){
            printf("%d\n", front == back);
        }
        else if(strcmp(command,"front")==0){
            if(front == back) printf("-1\n");
            else printf("%d\n",stack[front]);
        }
        else if(strcmp(command,"back")==0){
            if(front == back) printf("-1\n");
            else printf("%d\n",stack[back - 1]);
        }
    }
    return 0;
}
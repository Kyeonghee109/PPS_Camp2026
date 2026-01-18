#include <stdio.h>
#include <string.h>

int main () {
    int N;
    scanf("%d", &N);

    int stack[10000];
    int top = -1;
    for(int i = 0 ; i < N ; i++){
        char command[10];
        scanf("%s", command);


        if(strcmp(command,"push") == 0)
            scanf("%d", &stack[++top]);
        else if(strcmp(command,"pop")==0){
            if(top == -1){
                printf("-1\n");
            }else{
                printf("%d\n", stack[top]);
                top--;
            }
        }
        else if(strcmp(command,"size")==0)
            printf("%d\n", top + 1);
        else if(strcmp(command,"empty")==0){
            if(top == -1) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(command,"top")==0){
            if(top == -1) printf("-1\n");
            else printf("%d\n",stack[top]);
        }
    }
    return 0;
}
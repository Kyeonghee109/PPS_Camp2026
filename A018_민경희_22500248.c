/*
A,B배열에 N개의 숫자가 주어짐
A*B를 한 값을 더했을때 최솟값이 되어야함
A만 재배열해서 찾아야함, B는 재배열 불가능

A를 오름차순으로 정리
B에서 가장 큰거부터 뽑아서 사용
*/

#include <stdio.h>
#include <stdlib.h>

int *B;

int UPcompare(const void*a, const void* b) { //비교 요소의 형식을 갖춘 매개변수
	return(*(int*)a - *(int*)b);//오름차순
}

int compareIdx(const void *a, const void *b) {
    int i = *(int *)a;
    int j = *(int *)b;
    return B[j] - B[i];
}

int main() {
    int n;
    scanf("%d",&n);

    int *A = (int*)malloc(sizeof(int)*n);
    B = (int*)malloc(sizeof(int)*n);
    int *idx = (int*)malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&B[i]);
        idx[i] = i;
    }
    qsort(A, n, sizeof(int), UPcompare);
    qsort(idx, n, sizeof(int), compareIdx);

    int s = 0;
    for(int i = 0; i< n; i++){
        s += A[i] * B[idx[i]];
    }
    printf("%d",s);

    free(A);
    free(B);
    free(idx);

	return 0;
}

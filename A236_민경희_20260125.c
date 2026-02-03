#include <stdio.h>
int main () {
    int n, k; //학생 수, 한 방에 배정할 ㅅ 있는 최대 인원수
    scanf("%d %d", &n , &k);

    int s[1000] = {0}; 
    int y[1000] = {0};
    for(int i = 0 ; i < n; i++){
        scanf("%d %d", &s[i], &y[i]);
    }
    int w_count[6] = {0};
    int m_count[6] = {0};
    for(int i = 0 ; i < n; i++){
        //여학생
        if(s[i] == 0){
            if(y[i] == 1) w_count[0]++;
            else if(y[i] == 2) w_count[1]++;
            else if(y[i] == 3) w_count[2]++;
            else if(y[i] == 4) w_count[3]++;
            else if(y[i] == 5) w_count[4]++;
            else if(y[i] == 6) w_count[5]++;
        }
        //남학생
        else{
            if(y[i] == 1) m_count[0]++;
            else if(y[i] == 2) m_count[1]++;
            else if(y[i] == 3) m_count[2]++;
            else if(y[i] == 4) m_count[3]++;
            else if(y[i] == 5) m_count[4]++;
            else if(y[i] == 6) m_count[5]++;
        }
    }
    int room = 0;
    for(int i = 0 ; i < 6; i++){
        room += w_count[i]/k;
        if(w_count[i]%k > 0) room++;
        room += m_count[i]/k;
        if(m_count[i]%k > 0) room++;
    }
    printf("%d", room);
    return 0;
}
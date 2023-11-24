#include <stdio.h>
// #include <stdlib.h>
int visited[7] = { 0,0,0,0,0,0,0 };
int A[7][7] = {
    {0,0,1,0,1,0,1},
    {0,0,0,0,1,0,1},
    {1,0,1,0,1,0,0},
    {0,1,1,0,1,0,0},
    {1,0,0,0,1,0,0},
    {0,1,1,0,0,0,1},
    {0,0,1,0,1,1,1},
};
void dfs(int i) {
    int j;
    printf("%d\t", i);
    visited[i] = 1;
    for (j = 0;j < 7;j++) {
        if (A[i][j] == 1 && !visited[j]) {
            dfs(j);
        }
    }
}
int main() {

    dfs(1);
    return 0;
}
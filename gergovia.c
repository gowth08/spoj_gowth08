#include <stdio.h>
#define MAX 100005
int arr[MAX];
int main(){
  int N;
  for(;;){
    scanf("%d", &N);
    if(N == 0) break;
    int i, j;
    long long ans = 0;
    for(i = 0; i < N; ++i){
      scanf("%d", &arr[i]);
    }
    for(;;){
    }
    printf("%lld\n", ans);
  }
  return 0;
}


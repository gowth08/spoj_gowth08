#include <stdio.h>
int main(){
  int N;
  for(;;){
    scanf("%d", &N);
    if(N == 0) break;
    int i, inp;
    long long ans = 0, bal = 0, cur = 0;
    for(i = 0; i < N; ++i){
      scanf("%d", &inp); // input wine amount
      cur = inp + bal; // cur is inp + prev wine balance
      ans += cur < 0 ? -cur : cur; // ans will increase by cur as cur amount has to be moved
      bal = cur; // set the balance based on cur wine remaining
    }
    printf("%lld\n", ans);
  }
  return 0;
}


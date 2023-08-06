#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{ int N;
  cin >> N;
  vector<string> S(N);
  vector<int> T(N), TMP(N);
  for (int i = 0; i < N; i++) cin >> S[i] >> T[i];
  copy(T.begin(), T.end(), TMP.begin());
  sort(TMP.begin(), TMP.end());
  reverse(TMP.begin(), TMP.end());
  int index = find(T.begin(), T.end(), TMP[1]) - T.begin();
  cout << S[index] << endl;

  return 0;
}

#include <iostream>
#include <vector>

using namespace std;



// Computes C(n, k): number of ways to choose k items from n
// Binary Coefficient using divide & conquer (top bottom) -  O(2^n)
int bin_coeff_div(int n, int k){
    if (k == 0 || k == n){
        return 1;
    } else {
        return bin_coeff_div(n-1, k) + bin_coeff_div(n-1, k-1);
    }
}



// Binary Coefficient using dynamic programming (bottom up) - O(nk)
int bin_coeff_dynamic(int n, int k){
    vector<vector<int>>C (n+1, vector<int>(k+1,0));
    
    for (int i=0; i<=n; i++){
      for (int j=0; j<=min(i,k); j++){
          if (j == 0 || j == i){
              C[i][j] = 1;
        } else {
              C[i][j] = C[i-1][j] + C[i-1][j-1];
        }
      }
    }
    return C[n][k];
}



int main() {
    int result1 = bin_coeff_div(4,2);
    int result2 = bin_coeff_dynamic(4,2);
    
    cout << result1 << endl;
    cout << result2 << endl;
}

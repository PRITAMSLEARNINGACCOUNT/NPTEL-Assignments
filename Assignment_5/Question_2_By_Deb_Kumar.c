#include <stdio.h>

int blockSum(int M[],int n) {

    if (n==2) {
        return M[0]-M[1];
    }

    int mid=n/2;
    int A[mid],B[mid];
    for (int i=0;i<mid;i++) {
        A[i]=M[i];
        B[i]=M[mid+i];
    }

    int blockSum_A=blockSum(A, mid);
    int blockSum_B=blockSum(B, mid);
    
    return blockSum_A - blockSum_B;
}

int main() {
    int n;
    scanf("%d",&n);
    
    int M[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &M[i]);
    }

    printf("%d",blockSum(M, n));
    
    return 0;
}

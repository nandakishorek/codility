int solution(int A[], int N) {
    int ret = A[0];
    int i = 0;
    for (i = 1; i < N; ++i) {
        ret ^= A[i];
    }
    return ret;
}

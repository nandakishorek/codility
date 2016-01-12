int solution(int N) {
    int max = -1;
    int cur = -1;
    while (N > 0) {
        if (1 & N) {
            if (cur > max) {
                max = cur;
            }
            // reset count
            cur = 0;
        } else {
            if (cur != -1) {
                ++cur;
            }
        }
        N >>= 1;
    }
    
    return max;
}

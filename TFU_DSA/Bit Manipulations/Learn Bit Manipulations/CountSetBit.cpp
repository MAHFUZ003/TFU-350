int countSetBitsSimple(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;   // check the last bit
        n = n >> 1;           // shift right
    }
    return count;
}

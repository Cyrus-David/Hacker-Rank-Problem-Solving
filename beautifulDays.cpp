bool check (int num, int k) {
    int reverse = 0, temp, copy = num;
    while (copy > 0) {
        temp = copy % 10;
        reverse = (reverse * 10) + temp;
        copy /= 10; 
    }
    if (abs(reverse - num) % k == 0)
        return true;
    return false;
}

int beautifulDays(int i, int j, int k) {
    int bD = 0;
    for (i; i <= j; i++) {
        if (check(i, k))
            bD++;
    }
    return bD;
}

//Between Two Sets Problem


int getTotalX(vector<int> a, vector<int> b) {
    int size1 = a.size();
    int size2 = b.size();
    int cnt = 0, flag = 0;

    for(int j = a[size1-1]; j <= b[0]; j++){
        flag = 0;
        for (int i = 0; i < size1; i++) {
            if(j % a[i] != 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            for (int i = 0; i < size2; i++) {
                if(b[i] % j != 0){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0)
            cnt++;
    }

    return cnt;
}

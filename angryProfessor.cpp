string angryProfessor(int k, vector<int> a) {
    sort(a.begin(), a.end());
    vector<int>::iterator zeroIndex = upper_bound(a.begin(), a.end(), 0);
    if ((zeroIndex-a.begin()) >= k)
        return "NO";
    return "YES";
}


string angryProfessor(int k, vector<int> a) {
    sort(a.begin(), a.end());
    if (a[k-1] <= 0)
        return "NO";
    return "YES";
}

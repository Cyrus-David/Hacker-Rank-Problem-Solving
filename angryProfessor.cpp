string angryProfessor(int k, vector<int> a) {
    sort(a.begin(), a.end());
    vector<int>::iterator zeroIndex = upper_bound(a.begin(), a.end(), 0);
    if ((zeroIndex-a.begin()) >= k)
        return "NO";
    return "YES";
}

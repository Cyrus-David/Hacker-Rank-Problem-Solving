vector<int> climbingLeaderboard(vector<int> score, vector<int> alice) {
    unsigned long n, m, i, tmp;
    n = score.size();
    stack<unsigned long> scores;
    for (i = 0; i < n; ++i) {
        tmp = score[i];
        if (scores.empty() || scores.top() != tmp) scores.push(tmp);
    }
    
    m = alice.size();
    vector<int> aRank;
    for (i = 0; i < m; ++i) {
        tmp = alice[i];
        while (!scores.empty() && tmp >= scores.top()) scores.pop();
        aRank.push_back(scores.size() + 1);
    }
    
    return aRank;
}

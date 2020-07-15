
string encryption(string s){
    int size = s.length();
    int row = sqrt(size);
    int col = row;

    if(row*col != size)
        col = row+1;
   
    if(row*col < size)
        row += 1;

    string ans;
    
    for(int i = 0; i < col; i++){ 
        for(int j = 0; j < row; j++){
            if(s[i+(j*col)] != NULL) //checks if it is not NULL
                ans += s[i+(j*col)]; //concantenates the letters with a gap of row
        }
        ans += ' '; //adds spaces every  end of column
    }

    return ans;
}

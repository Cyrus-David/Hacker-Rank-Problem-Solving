#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//swapping used for the nex_perm funciton and reverse function
void swap(char** s, int i, int j) 
{
    char *temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

//reversing the suffix at the end of nex_perm
void reverse(char **s, int j, int i) 
{
    while(i < j) {
        swap(s, i, j);
        i++;
        j--;
    }
}


int next_permutation(int n, char **s)
{
    //starting from the end and compare
    int i = n - 1;
    
    //if both strings are identical (equal)
    //negative - if the ASCII value of the first unmatched character is less than the second.
    while (i > 0 && strcmp(s[i - 1], s[i]) >= 0) {
        i--;
    }
    //before the i is key.
    
    //return false since you cannot make a swap of the index before the i
    if (i <= 0)
        return 0;
    
    // Find the rightmost string in prefix, which is lexicographically larger than key
    int j = n - 1;
    while (strcmp(s[i - 1], s[j]) >= 0){
        j--;
    }
    
    //Swap key with this string
    swap(s, i - 1, j);
    
    // Reverse the suffix.
    j = n - 1;
    reverse(s, j, i);

    return 1;
}

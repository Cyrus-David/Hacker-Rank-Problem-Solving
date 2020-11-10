#include <iostream>

using namespace std;

class Solution {
    private:
        string queue;
        string stack;
    public:
        void pushCharacter(char s) {
            stack += s;
        }
        void enqueueCharacter(char s) {
            queue += s;
        }
        char popCharacter() {
            char last = stack[stack.length()-1];
            stack.pop_back();
            return last;
        }
        char dequeueCharacter() {
            char first = queue[0];
            for (int k = 0; k < queue.length()-1; k++) {
                queue[k] = queue[k + 1];
            }
            return first;
        }

};



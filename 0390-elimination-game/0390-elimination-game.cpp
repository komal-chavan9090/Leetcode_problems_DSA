class Solution {
public:

    int lastRemaining(int n) {
          bool isLeftToRight = true; 
        int remaining = n; 
        int step = 1;  
        int head = 1;  

        while (remaining > 1) {
            if (isLeftToRight || remaining % 2 == 1) {
                head += step;
            }
            remaining /= 2;
            step *= 2;
            isLeftToRight = !isLeftToRight;
        }

        return head;
    }
};
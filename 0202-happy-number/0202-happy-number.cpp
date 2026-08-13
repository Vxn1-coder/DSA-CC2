class Solution {
public:

    int sumofsquare(int n) {

        int sum = 0;

        while(n > 0) {

            int digit = n % 10;

            n = n / 10;

            sum = sum + digit * digit;
        }

        return sum;
    }

    bool isHappy(int n) {

        int slow = n;
        int fast = n;

        slow = sumofsquare(slow);
        fast = sumofsquare(sumofsquare(fast));

        while(slow != fast) {

            slow = sumofsquare(slow);

            fast = sumofsquare(sumofsquare(fast));
        }

        return slow == 1;
    }
};
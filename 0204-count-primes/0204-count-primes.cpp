const int N = 5e6 + 5;
vector<char> prime(N, 1);
vector<int> primeCount(N,0);

auto precompute = []() {
    prime[0] = prime[1] = 0;
    for (int i = 2; (long long)i*i < N; i++)
        if (prime[i])
            for (int j = i*i; j < N; j += i) prime[j] = 0;

    int cnt = 0;

    for (int i = 2; i < N; i++) {
        if (prime[i]) cnt++;
        primeCount[i] = cnt;
    }
    return 0;
}();


class Solution {
public:
    int countPrimes(int n) {
        if(n<=0) return 0;
        return primeCount[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
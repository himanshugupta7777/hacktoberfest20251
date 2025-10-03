class Solution {
public:
  int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

vector<int> decimalRepresentation(int n) {
    vector<int> result;

    while (n > 0) {
        int digits = countDigits(n);
        int power = pow(10, digits - 1);
        int q = n / power;
        result.push_back(q * power);
        n = n % power;
    }

    return result; 
}
};

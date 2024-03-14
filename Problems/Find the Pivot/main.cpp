int pivotInteger(int n) {
    int sum = n*(n+1)/2;
    int x = std::sqrt(sum);
    
    int leftSum = x*(1+x)/2;
    int rightSum = sum - x*(x-1)/2;

    if (leftSum == rightSum) {
        return x;
    } else {
        return -1;
    }
};

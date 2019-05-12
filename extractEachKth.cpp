// Given array of integers, remove each kth element from it.

// Example

// For inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and k = 3, the output should be
// extractEachKth(inputArray, k) = [1, 2, 4, 5, 7, 8, 10].

std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    int t = 1;
    for(int i = 0; i < inputArray.size(); i++)
    {
        if(t == k)
        {
            inputArray.erase(inputArray.begin() + i--);
            t = 1;
        }
        else
            t++;
    }
    return inputArray;
}


// Given a sorted array of integers a, your task is to determine which element of a is closest to all other values of a. 
//In other words, find the element x in a, which minimizes the following sum:

//abs(a[0] - x) + abs(a[1] - x) + ... + abs(a[a.length - 1] - x)


int absoluteValuesSumMinimization(std::vector<int> a) {
    int sum;
    int index = -1;
    int range = INT_MAX;
    for(int i = 0; i < a.size(); i++)
    {
        sum = 0;
        for(int j = 0; j < a.size(); j++)
            sum += abs(a[j] - a[i]);

        if(sum < range)
        {
            range = sum;
            index = i;
        }
    }
    return a[index];
}
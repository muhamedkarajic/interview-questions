/*
Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.

Given two arrays a and b, check whether they are similar.

Example

•For a = [1, 2, 3] and b = [1, 2, 3], the output should be
areSimilar(a, b) = true.

The arrays are equal, no need to swap any elements.

•For a = [1, 2, 3] and b = [2, 1, 3], the output should be
areSimilar(a, b) = true.

We can obtain b from a by swapping 2 and 1 in b.

•For a = [1, 2, 2] and b = [2, 1, 1], the output should be
areSimilar(a, b) = false.

Any swap of any two elements either in a or in b won't make a and b equal.
*/

bool areSimilar(std::vector<int> a, std::vector<int> b)
{
    if(a.size()!=b.size())
        return false;
    
    std::vector<int> diffIndexs;
    for(int i = 0; i<a.size(); i++)
        if(a[i]!=b[i])
            diffIndexs.push_back(i);
    
    if(diffIndexs.size()==0)
        return true;
    else if(diffIndexs.size()==2)
        return a[diffIndexs[0]] == b[diffIndexs[1]] && a[diffIndexs[1]] == b[diffIndexs[0]];
    else
        return false;
}

//
//  Created by Muhamed Karajic on February 16, 2018.
//  Special thanks to the youtuber Harrian for his videos, that helped me understand the methods that can be used to slow this algorithm.
//
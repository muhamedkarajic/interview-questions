/*
Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, 
compares each pair of adjacent items and swaps them if they are in the wrong order. 

The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. 

The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list. 

Although the algorithm is simple, it is too slow and impractical for most problems even when compared to insertion sort.
It can be practical if the input is usually in sorted order but may occasionally have some out-of-order elements nearly in position.
*/

std::vector<int> sortByHeight(std::vector<int> a) {
    bool sort = false;
    int temp;
    int len = a.size()-1;
    while(sort != true)
        
    {
        sort = true;
        for(int i=0; i<len; i++)       
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;               
                sort = false;
            }
        }
        len--;
    }
    return a;
}

//
//  Created by Muhamed Karajic on February 13, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
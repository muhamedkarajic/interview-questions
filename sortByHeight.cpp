/*
Some people are standing in a row in a park. There are trees between them which cannot be moved. Your task is to rearrange the people by their heights in a non-descending order without moving the trees.

Example

For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/

int replacer(std::vector<int> a, int pozition)
{
    for(int i = pozition+1; i<a.size(); i++)
        if(a[i]!=-1)
            return i;
    return pozition+1;
}


std::vector<int> sortByHeight(std::vector<int> a) {
    bool sort = false;
    int temp;
    int pozition;
    while(sort != true)
        
    {
        sort = true;
        for(int i=0; i<a.size()-1; i++)       
        {
            if(a[i] == -1)
                continue;
            pozition = replacer(a,i);
            if(a[i]>a[pozition])
            {
                temp = a[i];
                a[i] = a[pozition];
                a[pozition] = temp;               
                sort = false;
            }
        }
    }
    return a;
}

//
//  Created by Muhamed Karajic on February 13, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//

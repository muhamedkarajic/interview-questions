/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.

Example

•For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.

*/



bool testFunction(int min, std::vector<int> statues)
{
    int len = statues.size();
    for(int i = 0; i<len; i++)
    {
        if(min+1==statues[i])
            return false;
    }
    return true;
}


int makeArrayConsecutive2(std::vector<int> statues) {
    int len = statues.size();
    int min=statues[0], max=statues[0];
    
    for(int i = 0; i<len; i++)
    {
        if(min > statues[i])
            min = statues[i];
        if(max < statues[i])
            max=statues[i];
    }
    
    int counter = 0;
    
    while(min < max)
    {
        if(testFunction(min, statues) == true)
            counter++;
        min++;
    }
  
    cout << endl;
    return counter;   
    
}

//
//  Created by Muhamed Karajic on January 4, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//

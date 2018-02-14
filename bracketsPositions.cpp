/* 
Finds the most right brackets and the most inner part of brackets in a string and returns those positions. 
This function is the result of another algorithm, but then I was not knowing about the string methods that the language got.
*/


void bracketsPositions(string &s)
{

    size_t size = 2;
    std::vector<int> pozition(size); 
    
    int pozition[0] = -1;
    int pozition[1] = -1;
    
    bool sort = false;
    for(int i = 0; i<s.length(); i++)
        if(s[i] == '(')
        {
            sort = true;
            pozition[0] = i;
        }
        else if(s[i] == ')' && sort == true)
        {
            sort = false;
            pozition[1] = i;
        }
    
    if(pozition[0] != pozition[1])
        cout << "Start: " << pozition[0] << "End: " << pozition[1] << endl;
}

//
//  Created by Muhamed Karajic on February 14, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//

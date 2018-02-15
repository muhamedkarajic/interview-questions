/*
Given a rectangular matrix of characters, add a border of asterisks(*) to it.

Example

For

picture =  ["abcde", 
            "fghij", 
            "klmno", 
            "pqrst", 
            "uvwxy"]

the output should be

addBorder(picture) =   ["*******", 
                        "*abcde*", 
                        "*fghij*", 
                        "*klmno*", 
                        "*pqrst*", 
                        "*uvwxy*", 
                        "*******"]
*/

std::vector<std::string> addBorder(std::vector<std::string> picture) {
    for(std::string & x:picture)
    {
        x.insert(x.begin(), '*');
        x.push_back('*');
    }
    
    std::string tmp(picture[0].size(),'*');
    picture.insert(picture.begin(), tmp);
    picture.push_back(tmp);
    
    return picture;
}

//
//  Created by Muhamed Karajic on February 15, 2018.
//  Special thanks to the youtuber Harrian for his videos, that helped me understand the methods that can be used with strings to slow this algorithm.
//

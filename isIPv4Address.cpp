/*
An IP address is a numerical label assigned to each device (e.g., computer, printer) participating in a computer network that uses the 
Internet Protocol for communication. There are two versions of the Internet protocol, and thus two versions of addresses. One of them is 
the IPv4 address.

IPv4 addresses are represented in dot-decimal notation, which consists of four decimal numbers, 
each ranging from 0 to 255 inclusive, separated by dots, e.g., 172.16.254.1.

Given a string, find out if it satisfies the IPv4 address naming rules.

Example

•For inputString = "172.16.254.1", the output should be
isIPv4Address(inputString) = true;

•For inputString = "172.316.254.1", the output should be
isIPv4Address(inputString) = false.

316 is not in range [0, 255].

•For inputString = ".254.255.0", the output should be
isIPv4Address(inputString) = false.

There is no first number.
*/

bool isIPv4Address(std::string inputString) {
    int dots, number, counter;
    dots = number = counter = 0;

    for(int i = 0; i<inputString.length(); i++)
    {
        //check the beginning of each number if it's not a number or if the beginning is starting with a bigger number then 2 return false
        if(counter == 0 && ((inputString[i] < '0' || inputString[i] > '9') || (number > 2)))
            return false;
        
        //if the char is a number transform it to int
        if(inputString[i] >= '0' && inputString[i] <='9' && counter<3)
        {
            number*=10;
            number += int(inputString[i])-48;
            counter++;
        }
        
        //check if it's an dot, check the number size, check the number of dots, and set number and the counter to zero.
        else if(inputString[i] == '.')
        {
            if(number > 255)
                return false;
            else if(++dots > 3)
                return false;
            else
                number = counter = 0;
        }
        //if there is an character, or symbol or anything else return false
        else
            return false;
    }

    //check once more the format of the string and the last number size
    if(dots == 3 && number < 256)
        return true;
    
    return false;
}

//
//  Created by Muhamed Karajic on March 1, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//

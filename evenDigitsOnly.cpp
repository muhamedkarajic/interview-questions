// Check if all digits of the given integer are even.

// Example

//     For n = 248622, the output should be
//     evenDigitsOnly(n) = true;
//     For n = 642386, the output should be
//     evenDigitsOnly(n) = false.


bool evenDigitsOnly(int n) {
    while(n != 0)
    {
        if(n%10%2 != 0)
            return false;
        n/=10;
    }
    return true;
}

//
//  Created by Muhamed Karajic on February 14, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
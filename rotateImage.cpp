//Note: Try to solve this task in-place (with O(1) additional memory), since this is what you'll be asked to do during an interview.

// You are given an n x n 2D matrix that represents an image. Rotate the image by 90 degrees (clockwise).

// Example

// For

// a = [[1, 2, 3],
//      [4, 5, 6],
//      [7, 8, 9]]

std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    for(int i = 0; i < a.size(); i++)
        for(int j = i; j < a.size(); j++)
            if(i != j)
                swap(a[i][j], a[j][i]);

    int n = a.size() - 1;
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size()/2; j++)
            swap(a[i][j], a[i][n-j]);

    return a;
}

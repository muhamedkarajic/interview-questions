// The pixels in the input image are represented as integers. 
//The algorithm distorts the input image in the following way: Every pixel x in the output image 
//has a value equal to the average value of the pixel values from the 3 × 3 square that has its center at x, 
//including x itself. All the pixels on the border of x are then removed.

// Return the blurred image as an integer, with the fractions rounded down.

// Example

// For

// image = [[1, 1, 1], 
//          [1, 7, 1], 
//          [1, 1, 1]]

// the output should be boxBlur(image) = [[1]].

// To get the value of the middle pixel in the input 3 × 3 square: 
//(1 + 1 + 1 + 1 + 7 + 1 + 1 + 1 + 1) = 15 / 9 = 1.66666 = 1. 
//The border pixels are cropped from the final result.

// For

// image = [[7, 4, 0, 1], 
//          [5, 6, 2, 2], 
//          [6, 10, 7, 8], 
//          [1, 4, 2, 0]]

// the output should be

// boxBlur(image) = [[5, 4], 
//                   [4, 4]]

// There are four 3 × 3 squares in the input image, so there should be four integers in the blurred output. 
//To get the first value: (7 + 4 + 0 + 5 + 6 + 2 + 6 + 10 + 7) = 47 / 9 = 5.2222 = 5. 
//The other three integers are obtained the same way, then the surrounding integers are cropped from the final result.

#include <iostream>
#include <vector>
using namespace std;

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
	double sum = 0;
	std::vector<std::vector<int>> temp;
	int last = -1;
	for (int i = 0; i < image.size() && i + 3 <= image.size(); i++)
	{
		temp.push_back(vector<int>());
		for (int j = 0; j < image[i].size() && j + 3 <= image[i].size(); j++)
		{
			sum = 0;
			for (int x = i; x < i + 3; x++)
				for (int y = j; y < j + 3; y++)
					sum += image[x][y];
			temp[i].push_back(sum / 9);
		}
	}
	return temp;
}

int main()
{
	std::vector<std::vector<int>> temp = boxBlur({
		{36, 0, 18, 9, 9, 45, 27},
		{27, 0, 54, 9, 0, 63, 90 },
		{81, 63, 72, 45, 18, 27, 0},
		{0, 0, 9, 81, 27, 18, 45},
		{45, 45, 27, 27, 90, 81, 72},
		{45, 18, 9, 0, 9, 18, 45},
		{27, 81, 36, 63, 63, 72, 81}
	});

	for (int i = 0; i < temp.size(); i++)
	{
		for (int j = 0; j < temp[i].size(); j++)
			cout << temp[i][j] << ", ";
		cout << endl;
	}

	/*[[39, 30, 26, 25, 31],
	[34, 37, 35, 32, 32],
	[38, 41, 44, 46, 42],
	[22, 24, 31, 39, 45],
	[37, 34, 36, 47, 59]]*/

	system("PAUSE>0");
}

//
//  Created by Muhamed Karajic on May 1, 2019.
//
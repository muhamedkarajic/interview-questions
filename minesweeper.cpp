// In the popular Minesweeper game you have a board with some mines and those cells that don't contain a mine have a number in it that indicates the total number of mines in the neighboring cells. Starting off with some arrangement of mines we want to create a Minesweeper game setup.

// Example

// For

// matrix = [[true, false, false],
//           [false, true, false],
//           [false, false, false]]

// the output should be

// minesweeper(matrix) = [[1, 2, 1],
//                        [2, 1, 1],
//                        [1, 1, 1]]


std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
	vector<std::vector<int>> temp;
	int sum = 0;

	for (int i = 0; i < matrix.size(); i++)
	{
		temp.push_back(vector<int>());
		for (int j = 0; j < matrix[i].size(); j++)
		{
			sum = 0;
            if (i > 0)
			{
				sum += matrix[i - 1][j];
				if (j + 1 < matrix[i].size())
					sum += matrix[i - 1][j + 1];
				if (j > 0)
					sum += matrix[i - 1][j - 1];
			}
			if (i + 1 < matrix.size())
			{
				sum += matrix[i + 1][j];
				if (i + 1 < matrix.size() && j + 1 < matrix[i].size())
					sum += matrix[i + 1][j + 1];
				if (i + 1 < matrix.size() && j > 0)
					sum += matrix[i + 1][j - 1];
			}
			if (j > 0)
				sum += matrix[i][j - 1];
			if (j + 1 < matrix[i].size())
				sum += matrix[i][j + 1];
			
			temp[i].push_back(sum);
		}
	}
	return temp;
}

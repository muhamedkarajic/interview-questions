
bool sudoku2(std::vector<std::vector<char>> grid) {
	int arr[10] = { 0 };
	int t;

	unordered_set<int> left, right, middle;

	for (int i = 0; i < grid.size(); i++)
	{
		if (i == 3 || i == 6)
		{
			left.clear();
			right.clear();
			middle.clear();
		}

		for (int j = 0; j < grid.size(); j++)
		{
			if (grid[i][j] != '.')
			{
				t = grid[i][j] - '0';

				if (arr[t] > 0)
					return false;
				else
					arr[t]++;

				if (j / 3 == 0) 
					if(left.find(t) != left.end())
						return false;
					else 
						left.insert(t);

				if (j /	3 == 1)
					if(middle.find(t) != middle.end())
						return false;
					else
						middle.insert(t);
					
				if (j / 3 == 2)
					if(right.find(t) != right.end())
						return false;
					else
						right.insert(t);
			}

		}

		for (int x = 0; x < 10; x++)
			arr[x] = 0;
	}

	for (int j = 0; j < grid.size(); j++)
	{

		for (int i = 0; i < grid.size(); i++)
			if (grid[i][j] != '.')
			{
				t = grid[i][j] - '0';
				if (arr[t] > 0)
					return false;
				else
					arr[t]++;
			}

		for (int x = 0; x < 10; x++)
			arr[x] = 0;
		cout << endl;
	}

	return true;
}
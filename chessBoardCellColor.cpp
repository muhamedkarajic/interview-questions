// Given two cells on the standard chess board, determine whether they have the same color or not.

// Example

//     For cell1 = "A1" and cell2 = "C3", the output should be
//     chessBoardCellColor(cell1, cell2) = true.

bool darkCollor(std::string cell)
{
    
    if(cell[0]%2 != 0 && cell[1]%2 != 0)
        return true;
    if(cell[0]%2 == 0 && cell[1]%2 == 0)
        return true;
    else
        return false;
}

bool chessBoardCellColor(std::string cell1, std::string cell2) {
    return darkCollor(cell1) == darkCollor(cell2);
}

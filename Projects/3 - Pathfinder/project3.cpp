int main(int argc,char *argv[]) {
    uint32_t
        nRows,
        nCols,
        nWalls;

    //for (int32_t i=0;i<argc;i++)
    //    cout << i << "\t[" << argv[i] << ']' << endl;

    if (argc != 4) {
        cout << "Usage: " << argv[0] << " number-of-rows   number-of-columns   number-of-walls" << endl;
        return 1; // exit(EXIT_FAILURE);
    }

    if (!isdigit(argv[1][0]) || !isdigit(argv[2][0]) || !isdigit(argv[3][0])) {
        cout << "Error: rows, columns and walls must be positive integers" << endl;
        exit(EXIT_FAILURE);
    }

    nRows = stoul(argv[1], nullptr,10);
    nCols = stoul(argv[2], nullptr,10);
    nWalls = stoul(argv[3], nullptr,10);

    if (nRows < 1 || nRows > MAX_ROWS) {
        cout << "Error: Number of rows must be between 1 and " << MAX_ROWS << endl;
        return 1;
    }

    //cout << "Rows: " << nRows << endl;
    //cout << "Cols: " << nCols << endl;
    //cout << "Walls: " << nWalls << endl;

    generateTreeMaze(nRows,nCols);

    //removeAdditionalWalls(nRows,nCols,nWalls);

    //findPath(nRows,nCols);

    printMaze(maze,(int32_t)nRows,(int32_t)nCols);

    return 0;
}


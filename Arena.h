#include "Array.h"
#include "Tile.h"
class Arena
{
private:
    Array< Array<Tile> * > map;
    int rows, cols, traps, enemies;
public:
    Arena(int newRows, int newCols)
    :rows(newRows), cols(newCols), map(newCols), traps(0), enemies(0)
    {
        for (int i = 0; i < rows; ++i)
            map[i] = new Array<Tile>(cols);
        //empty_arena();
    }
    
    /*
    void empty_arena()
    {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                map[i][j] = new Tile();
    }
    */

    void print( ostream & out )
    {
        for ( int i = 0; i < rows; ++i )
            out << map[i] << endl;
    }

    friend ostream & operator << (ostream & out, Arena & a)
    {
        a.print(out);
        return out;
    }
};

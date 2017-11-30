#include "Array.h"
#include "Tile.h"
#include <cstdlib>
#include <ctime>
class Arena
{
private:
    Array< Array<Tile>* > map;
    int rows, cols, traps, enemies;
public:
    Arena(int newRows, int newCols)
    :rows(newRows), cols(newCols), map(newRows), traps(0), enemies(0)
    {
        for (int i = 0; i < rows; ++i)
            map[i] = new Array<Tile>(newCols);
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
    void place_traps(int traps)
    {
        srand(time(0));
        for (int i = 0; i < traps; ++i)
        {
            map[rand() % rows][0][rand() & cols].set_trap();
        } 
    }

    void print( ostream & out )
    {
        for ( int i = 0; i < rows; ++i )
        {
            out << map[i] << endl;
        }
    }

    friend ostream & operator << (ostream & out, Arena & a)
    {
        a.print(out);
        return out;
    }
};

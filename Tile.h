class Tile
{
private:
    bool empty;
public:
    Tile()
    :empty(true)
    {
    }

    Tile( Tile & t)
    :empty(true)
    {
    }

    void print(ostream & out)
    {
        if (empty)
            out << "- ";
        else 
            out << "  ";
    }
    Tile & operator = (Tile & t)
    {
        empty = t.empty;
    }
    friend ostream & operator << (ostream & out, Tile t)
    {
        t.print(out);
        return out;
    } 
};

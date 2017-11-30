class Tile
{
private:
    bool empty;
    bool isTrap;
public:
    Tile()
    :empty(true), isTrap(false)
    {
    }

    Tile( Tile & t)
    :empty(t.empty), isTrap(t.isTrap)
    {
    }
    void set_trap()
    {
        empty = false;
        isTrap = true;
    }
    void print(ostream & out)
    {
        if (empty)
            out << "- ";
        if (isTrap)
            out << "V ";
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

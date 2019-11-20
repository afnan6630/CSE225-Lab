/*Task 3*/
#ifndef TDDYNARR_H_INCLUDED
#define TDDYNARR_H_INCLUDED
class TDDynArr
{
private:
    int **data;
    int row;
    int col;
public:
    TDDynArr();
    TDDynArr(int, int);
    ~TDDynArr();
    void setValue(int,int,int);
    int getValue(int, int);

    void allocate(int, int);     // task 2

};
#endif // TDDYNARR_H_INCLUDED


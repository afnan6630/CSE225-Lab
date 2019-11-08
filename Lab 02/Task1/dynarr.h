#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, int);
        int getValue(int);

    private:
        int *data;
        int size;
};
#include"dynarr.tpp"
#endif // DYNARR_H_INCLUDED

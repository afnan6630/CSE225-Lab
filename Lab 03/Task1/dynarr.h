#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template<class item>
class dynArr
{
    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, item);
        item getValue(int);

    private:
        item *data;
        int size;
};
#include"dynarr.tpp"
#endif // DYNARR_H_INCLUDED

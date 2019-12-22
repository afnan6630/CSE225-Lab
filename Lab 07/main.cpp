#include <iostream>
#include "stacktype.h"

using namespace std;

int main()
{
//    StackType<int> st;
//    if(st.IsEmpty()){
//        cout<<"stack empty"<<endl;
//    }
//    else
//        cout<<"not empty"<<endl;
//
//
//    while(1){
//        int x;
//        cin>>x;
//        try{
//            st.Push(x);
//        }
//        catch(FullStack& e){
//            cout<<"stack is full"<<endl;
//            break;
//        }
//    }
//
//
//
//    if(st.IsFull()){
//        cout<<"stack full"<<endl;
//    }
//    else
//        cout<<"stack not full"<<endl;
//
//    cout<<"Printing stack"<<endl;
//    StackType<int> temp;
//    while(!st.IsEmpty()){
//        try{
//            temp.Push(st.Top());
//            st.Pop();
//        }
//        catch(FullStack& e){
//            cout<<"issue here"<<endl;
//        }
//    }
//    while(!temp.IsEmpty()){
//        try{
//            cout<<temp.Top()<<endl;
//            st.Push(temp.Top());
//            temp.Pop();
//        }
//        catch(FullStack e){
//            cout<<"issue here"<<endl;
//        }
//    }
    StackType<char> ch;
    string str;
    cin>>str;
    int i = 0;
    bool balanced = true;
    while(str[i]!='\0')
    {
        if(str[i]=='(')
        {
            try
            {
                ch.Push(str[i]);
            }
            catch(FullStack &e){

            }
        }
        else if(str[i] == ')'){
            try{
                ch.Pop();
            }
            catch(EmptyStack& e){
                balanced = false;
                break;
            }
        }
        i++;
    }
    if(balanced && ch.IsEmpty()){
        cout<<"string balanced"<<endl;
    }
    else{
        cout<<"string unbalanced"<<endl;
    }

    //cout << "Hello world!" << endl;
    return 0;
}

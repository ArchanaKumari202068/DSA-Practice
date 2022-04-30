#include <iostream>
using namespace std;
class Stack{
    int *arr;
    int top;
    int n =100;
    public:
    Stack(){
        arr= new int [n];
        top = -1;    
    }

void push(int x){
    if(top == n-1){
        cout<<"stack is overflow"<<endl;
        return ;
    }
    top++;
    arr[top] =x;


}
// void pop(){
//     if(top==-1){
//         cout<<"No element to pop"<<endl;
//         return  ;
//     }
//     top--;
// }
int Top(){
    if(top==-1){
        cout<<"No element to pop"<<endl;
        return -1;
    }
    return arr[top];
}
 bool empty(){
    return top== -1;

}
int count(){
    return(top+1);
}

};

int main (){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.count();

    // cout<<"st.push(1) "<< st.push(1) <<endl;
    cout<<st.Top()<<endl;
    // cout<<"count()"<<endl;
    // st.pop();
    //  cout<<st.Top()<<endl;
    //   st.pop();
    //    st.pop();
    //     st.pop();
    //     cout<<st.empty()<<endl;


return 0;
}
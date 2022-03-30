#include <iostream>
#include "stack.cpp"
using namespace std;


struct Queue {
    Stack<int> s1, s2;

    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.isEmpty()) {
            s2.Push(s1.Top());
            s1.Pop();
        }

        // Push item into s1
        s1.Push(x);

        // Push everything back to s1
        while (!s2.isEmpty()) {
            s1.Push(s2.Top());
            s2.Pop();
        }
    }

   void deQueue()
    {
        // if first stack is empty
        if (s1.isEmpty()) {
            cout << "Q is Empty";
            exit(0);
        }

        // Return top of s1

        s1.Pop();

    }

    int Front(){

    return s1.Top();

    }
};

int main()
{
//     Stack<int> s;
//     for (int i = 0; i < 4; i++)
//     {
//         int temp;

//         cin>>temp;

//         s.Push(temp);


//     }


//     cout<<endl;
//    Stack<int> aux;

//     while (!s.isEmpty())
//     {
//       cout<<s.Top()<<endl;
//         aux.Push(s.Top());
//         s.Pop();
//     }
//     cout<<endl;
//     while (!aux.isEmpty())
//     {

//         s.Push(aux.Top());
//          cout<<aux.Top()<<endl;
//         aux.Pop();
//     }

/*

     string brakets = "(())()(()())()";
    //   string brakets;
      // getline(cin,brakets);


     if (isBalanced(brakets))
     {
         cout<<"Balanced"<<endl;
     }
     else{
         cout<<"Not Balanced"<<endl;
    }


*/


    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);


     cout<<q.Front()<<endl;
    q.deQueue();
    cout<<q.Front()<<endl;
    q.deQueue();










    return 0;
}

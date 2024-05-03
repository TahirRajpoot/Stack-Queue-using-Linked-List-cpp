#include <iostream>
using namespace std;

class Node
{

    public:
        int Data;
        Node* Next;
        Node(int key)
        {
            this->Data = key;
            this->Next  = NULL;
        }
    
};
class LinkedList
{
    private:
        Node*Head;
    public:
        LinkedList()
        {
            Head = NULL;
        }
        void InsertHead(int key)
        {
            Node*N = new Node(key);
            if(Head != NULL)
            {
                cout<<"Successfully Inserted at Head"<<endl;
               N->Next = Head;   
            }
            Head = N;
        }
        Node* Search(int key)
        {
            Node*p = Head;
            while(p != NULL )
            {
                if(p->Data == key)
                {
                    return p;
                }
                else
                {
                    p = p->Next;
                }
            }
            return NULL;
        }
        void InsertTail(int key)
        {
            if(Head != NULL)
            {
                Node*p = Head;
                Node*N = new Node(key);
                while( p->Next != NULL )
                {
                    p = p->Next;
                }
                p->Next = N;
            }
        }
        void print()
        {
            Node* p = Head;
            if (Head == NULL) 
            {
                cout << "Linked List is Empty" << endl;
                return;
            }
            while (p != NULL) {
                cout << p->Data << " ";
                p = p->Next;
            }
        }
        void Delete(int key)
        {
            Node*p = Head;
            Node*previous = Head;
            if(p->Data == key)
            {
                Head = p->Next;
            }
            while(p != NULL)
            {
                if(p->Data == key)
                {
                    previous->Next = p->Next;
                    break;
                }
                previous = p;
                p = p->Next;
            }
        }
        void DeleteHead()
        {
            if(Head != NULL)
            {
                Head = Head->Next;
            }
        }
        bool Insert(int key , int Loc)
        {
            int count = 0;
            if(Loc == 0)
            {
                InsertHead(key);
                return true;
            }
            Node*p = Head;
            Node*previous = Head;
            Node*N = new Node(key);
            while(p != NULL)
            {
                if(count == Loc)
                {
                    previous->Next = N;
                    N->Next = p;
                    return true;
                }
                previous = p;
                count = count + 1;
                p = p->Next;
            }
            return false;
        }
        bool Update(int key , int Loc)
        {
            int count = 0;
            Node*p = Head;
            
            while(count != Loc)
            {
                p = p->Next;
                count = count + 1;
            }
            if(p != NULL)
            {
                p->Data = key;
                cout<<"Successfully Updated at "<<Loc<<endl;
                return true;
            }
            cout<<"Index Not Found"<<endl;
            return false;
        }
        int GetHeadVlaue()
        {
            if(Head != NULL)
            {
                int x = Head->Data;
                return x;
            }
        }
        Node* GetHead()
        {
            return Head;
        }
        void RemoveFromTail()
        {
            Node*p = Head;
            Node*previous = Head;
            if(p->Next == NULL)
            {
                Head = NULL;
            }
            while(p != NULL)
            {
                if(p->Next == NULL)
                {
                    cout<<p->Data<<" Deleted";
                    previous->Next = NULL;
                    break;
                }
                previous = p;
                p = p->Next;
            }
        }
        int GetTailValue()
        {
            Node*p = Head;
            Node*previous = Head;
            if(p->Next == NULL)
            {
                int x = p->Data;
                return x;
            }
            while(p != NULL)
            {
                if(p->Next == NULL)
                {
                    
                    int x = p->Data;
                    return x;
                    
                }
                previous = p;
                p = p->Next;
            }
        }
};








int main()
{
    LinkedList DataList;
    DataList.InsertHead(40);
    DataList.InsertTail(20);
    DataList.InsertHead(15);
    Node* p = DataList.Search(15);
    DataList.Insert(10 , 0);
    DataList.print();
    cout<<endl;
    DataList.Update(13,0);
    DataList.Delete(40);
    DataList.print();
    return 0;


    

    
    
    
    

}

    
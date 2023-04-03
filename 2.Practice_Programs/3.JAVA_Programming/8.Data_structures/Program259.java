import java.util.*;

import javax.lang.model.util.ElementScanner14;

class Program259
{
    public static void main(String Arg[])
        {
            SinglyLL obj = new SinglyLL();

            obj.InsertFirst(51);
            obj.InsertFirst(21);
            obj.InsertFirst(11);
            obj.Display();

            obj.InsertLast(101);
            obj.InsertLast(111);
            obj.InsertLast(151);
            int Ret = obj.CountNodes();
            System.out.println("Number of nodes are : "+Ret);
            obj.Display();


            obj.InserAtPosition(55,4);
            obj.Display();
        }
}


class Node
{
    public int Data;
    public Node Next;

    public Node(int No)
        {
            this.Data = No;
            this.Next = null;
        }
}

class SinglyLL
{
    private Node Head;
    private int Count;

    public SinglyLL()
        {
            Head = null;
            Count = 0;
        }
    // protected void finalize()
    //     {
    //         // Memory deallocation
    //     }
    public void InsertFirst(int No)
        {
            Node newn =  new Node(No);

            if(this.Head == null)
                {
                    this.Head = newn;
                }
            else
                {
                    newn.Next = this.Head;
                    this.Head = newn;
                }
            this.Count++;
        }
    public void Display()
        {
            Node temp = this.Head;
            
            while(temp != null)
                {
                    System.out.print("|"+temp.Data+"|->");
                    temp = temp.Next;
                }
            System.out.println("NULL");
        }
    public int CountNodes()
        {
            return this.Count;
        }
    public void InsertLast(int No)
        {
            Node newn = new Node(No);
            if(this.Head == null)
                {
                    this.Head = newn;
                }
            else
                {
                    Node temp = Head;
                    while(temp.Next != null)
                        {
                            temp = temp.Next;
                        }
                    temp.Next = newn;

                }
            this.Count++;
        }
        public void DeleteFirst()
        {
            if(this.Head == null)
                {
                    return;
                }
            else if(this.Count == 1)
                {
                    this.Head = null;
                }
            else
                {
                    this.Head = this.Head.Next;
                }
            this.Count--;
        }   
        
    public void DeleteLast()
        {
            if(this.Head == null)
                {
                    return;
                }
            else if(this.Count == 1)
                {
                    this.Head = null;
                }
            else
                {
                    Node temp = this.Head;

                    while(temp.Next.Next != null)
                        {
                            temp = temp.Next;
                        }
                    temp.Next = null;
                }
            this.Count--;
        }
    public void InserAtPosition(int No, int Pos)
        {

            if((Pos < 0)||(Pos > this.Count+1))
                {
                    return;
                }
            if(Pos == 1)
                {
                    InsertFirst(No);
                }
            else if(Pos == this.Count+1)
                {
                    InsertLast(No);
                }
            else 
                {
                    Node newn = new Node(No);
                    Node temp = this.Head;

                    for(int i = 1 ; i < Pos-1 ; i++)
                        {
                            temp = temp.Next;
                        }
                    newn.Next = temp.Next;
                    temp.Next = newn;
                    this.Count++;
                }
            
        }
    public void DeleteAtPosition(int No, int Pos)
        {

            if((Pos < 0)||(Pos > this.Count+1))
                {
                    return;
                }
            if(Pos == 1)
                {
                    DeleteFirst();
                }
            else if(Pos == this.Count)
                {
                    DeleteLast();                
                }
            else 
                {
                    Node newn = new Node(No);
                    Node temp = this.Head;

                    for(int i = 1 ; i < Pos-1 ; i++)
                        {
                            temp = temp.Next;
                        }
                    temp.Next = temp.Next.Next;
                    this.Count--;
                }
            
        }
   
    
}
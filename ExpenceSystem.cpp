#include <iostream>
using namespace std;
struct Node 
{
    int data;
    string str;
    Node* next;
    bool head4exists;
};
class LinkedList 
	{public:
    Node *mhead, *head1, *head2, *head3, *head4;
	bool head4exists=false;
	public:
    LinkedList() 
	{
        mhead = head1 = head2 = head3 = head4 = NULL;
    }
    void insertAtB1(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head1 = newNode;
    }
    void insertAtstr1(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head1;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtprice1(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        Node* temp = head1;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtdate1(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head1;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAttime1(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head1;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display1() 
	{
        Node* temp = head1;
        while (temp != NULL) 
		{
            if (temp->str != "")
                cout << temp->str << "->";
            else
                cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
    void insertAtB2(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head2 = newNode;
    }
    void insertAtstr2(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head2;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtprice2(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        Node* temp = head2;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtdate2(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head2;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAttime2(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head2;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display2() 
	{
        Node* temp = head2;
        while (temp != NULL) 
		{
            if (temp->str != "")
                cout << temp->str << "->";
            else
                cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
    void insertAtB3(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head3 = newNode;
    }
    void insertAtstr3(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head3;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtprice3(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        Node* temp = head3;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtdate3(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head3;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAttime3(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head3;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display3() 
	{
        Node* temp = head3;
        while (temp != NULL) 
		{
            if (temp->str != "")
                cout << temp->str << "->";
            else
                cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
     void insertAtB4(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head4 = newNode;
        head4exists=true;
    }
    void insertAtstr4(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head4;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtprice4(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        Node* temp = head4;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtdate4(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head4;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAttime4(string value) 
	{
        Node* newNode = new Node();
        newNode->str = value;
        newNode->next = NULL;
        Node* temp = head4;
        while (temp->next != NULL) 
		{
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display4() 
	{
        Node* temp = head4;
        while (temp != NULL) 
		{
            if (temp->str != "")
                cout << temp->str << "->";
            else
                cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
    void createMasterList() 
	{
        Node* masterNode1 = new Node();
            masterNode1->data = head1->data; 
        Node* masterNode2 = new Node();
            masterNode2->data = head2->data;
        Node* masterNode3 = new Node();
           masterNode3->data = head3->data;
		  
        mhead = masterNode1;
        masterNode1->next = masterNode2;
        masterNode2->next = masterNode3;
         if (head4exists) {
        Node* masterNode4 = new Node();
        masterNode4->data = head4->data;
        masterNode3->next = masterNode4;
        masterNode4->next = NULL;
    } else {
        masterNode3->next = NULL;
    }
        
    }
    void displayMasterList() 
	{
        Node* temp = mhead;
        while (temp != NULL) 
		{
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
    void deleteList1() {
        Node* current = head1;
        Node* nextNode;
        while (current != NULL) {
            nextNode = current->next; 
 			delete current;          
            current = nextNode;       
        }
        head1 = NULL; 
    }
    void deleteList2() {
        Node* current = head2;
        Node* nextNode;
        while (current != NULL) {
            nextNode = current->next; 
 			delete current;          
            current = nextNode;       
        }
        head2 = NULL; 
    }
    void deleteList3() {
        Node* current = head3;
        Node* nextNode;
        while (current != NULL) {
            nextNode = current->next; 
 			delete current;          
            current = nextNode;       
        }
        head3 = NULL; 
    }
    void deleteList4() {
        Node* current = head4;
        Node* nextNode;
        while (current != NULL) {
            nextNode = current->next; 
 			delete current;          
            current = nextNode;       
        }
        head4 = NULL;
		head4exists=false; 
    }
    
    void comparePrices() {
    int price1 = -1, price2 = -1, price3 = -1, price4= -1;
   

    
    Node* temp = head1;
    while (temp != NULL) {
        if (temp->str == "" && temp->data != head1->data) 
		{ 
            price1 = temp->data;
            break;
        }
        temp = temp->next;
    }

    temp = head2;
    while (temp != NULL) {
        if (temp->str == "" && temp->data != head2->data) 
		{
            price2 = temp->data;
            break;
        }
        temp = temp->next;
    }

    temp = head3;
    while (temp != NULL) {
        if (temp->str == "" && temp->data != head3->data)
		 {
            price3 = temp->data;
            break;
        }
        temp = temp->next;
    }
    if(head4exists)
    {
    temp = head4;
    while (temp != NULL) 
	{
        if (temp->str == "" && temp->data != head4->data)
		 {
            price4 = temp->data;
            break;
        }
        temp = temp->next;
    }
	}
    cout << "\nPrices:\n";
    cout << "List1: " << price1 << "\n";
    cout << "List2: " << price2 << "\n";
    cout << "List3: " << price3 <<"\n";
    if(head4exists)
    {
    	cout << "List4: " << price4 << "\n";
	}
int maxPrice = price1;
    int listNum = 1;
    if (price2 > maxPrice) {
        maxPrice = price2;
        listNum = 2;
    }
    if (price3 > maxPrice) {
        maxPrice = price3;
        listNum = 3;
    }
    if (head4exists && price4 > maxPrice) {
        maxPrice = price4;
        listNum = 4;
    }

    cout << "List " << listNum << " has the highest expense.\n";
}

};
int main() 
{
   
    LinkedList list;
    cout<<"Sugar list:\n";
    list.insertAtB1(1);
    list.insertAtstr1("Sugar");
    list.insertAtprice1(100);
    list.insertAtdate1("20may");
    list.insertAttime1("11:05");
    list.display1();
    cout<<"Electricity list:\n";
    list.insertAtB2(2);
    list.insertAtstr2("Electricity");
    list.insertAtprice2(500);
    list.insertAtdate2("25may");
    list.insertAttime2("11:05");
    list.display2();
    cout<<"Gas list:\n";
    list.insertAtB3(3);
    list.insertAtstr3("Gas");
    list.insertAtprice3(200);
    list.insertAtdate3("19may");
    list.insertAttime3("11:05");
    list.display3();
    cout <<endl<<"master Linked List :" << endl;
    list.createMasterList();
    list.displayMasterList();
    cout<<endl;
    while(true)
    {
    cout<<"enter 1 to add new item.\nenter 2 to print heighest expence.\nenter 3 to delete an item.\nenter 4 to exit\n";
    int n,choice,n2;
    string n1,n3,n4;
    cin>>n;
    switch(n)
    {
    	case 1:
    		{
    			cout<<"name:";
    			cin>>n1;
    			cout<<"price:";
    			cin>>n2;
    			cout<<"date:";
    			cin>>n3;
    			cout<<"time:";
    			cin>>n4;
    			cout<<endl;
    			list.insertAtB4(4);
    			list.insertAtstr4(n1);
   				list.insertAtprice4(n2);
    			list.insertAtdate4(n3);
    			list.insertAttime4(n4);
    			list.display4();
    			cout<<endl<<"new master linklist: "<<endl;
    			 list.createMasterList();
                list.displayMasterList();
                cout<<endl;
    			break;
			}
			case 2:
				{
					list.comparePrices();
				}
			case 3:
				{
					cout<<"which linklist you want to delete:1/2/3\n";
					if(list.head4exists)
					{
						cout<<"/4\n";
					}
					cin>>choice;
					if(choice==1)
					{
						list.deleteList1();
					}
					else if(choice==2)
					{
						list.deleteList2();
					}
					else if(choice==3)
					{
						list.deleteList3();
					}
					else if(choice==4 && list.head4exists)
					{
						list.deleteList4();
					}
					cout<<"deleting linklist.....";
					list.display1();
					list.display2();
					list.display3();
					list.display4();
    				break;
				}
				case 4:
					{
						cout<<"exiting program..\n";
						return 0;
						break;
					}
				default: 
				{ 
					cout<<"Invalid choice..try again..\n";
				}
	}
}

    return 0;
}

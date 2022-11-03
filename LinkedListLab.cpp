#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;


struct List {
    string value;
    List* next;  
};


void printList( List* l ){
    cout << endl << "== The List ==" << endl;
    if ( l == NULL ){
        cout << "[empty]" << endl;
    } else {
        while ( l != NULL ){
            cout << l->value << endl; //Print out it's value
            l = l->next; //Move on to the next value
        }
    }
}

//This function adds a new value to the
//start of the list.
//❓ Lab Question 3
void prepend(List* &list, string val){
    //❓ Lab Question 4
    //❓ Lab Question 5
    list = new List{val, list};
}

void removeFirst(List* &list){
    //❓ Lab Question 9
    List* temp = list;
    list = list->next;
    delete temp; 
}

//This function returns true if the list haystck
//contains the value needle, and false otherwise.
bool contains(List* haystack, string needle){
    //❓ Lab Question 10
    //YOUR CODE HERE
    return false;
}

void insertAt(List* &list, int pos, string value){
    //❓ Lab Question 11
    //YOUR CODE HERE
}

void deleteAt(List* &list, int pos, string value){
    //❓ Lab Question 11
    //YOUR CODE HERE
}

void main(){
    //Create an empty list and print it
    List* dinner = NULL;
    printList(dinner);

    prepend(dinner, "Pie");
    prepend(dinner, "Turkey");
    prepend(dinner, "Stuffing");
    prepend(dinner, "Mashed Potatoes");
    prepend(dinner, "Turnips"); //❓ Lab Question 7
    printList(dinner);

    //❓ Lab Question 6
    // YOUR CODE TO REMOVE TURNIPS HERE:
    removeFirst(dinner);
    printList(dinner);

    //❓ Lab Question 10
    cout << endl;
    cout << "Is there Turkey? " << contains(dinner, "Turkey") << endl;
    cout << "Is there Spam? " << contains(dinner, "Spam") << endl;

}

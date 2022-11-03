#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;


struct List {
    string value;
    List* next;
};

//This function prints out all the values in a
//List, one on each line.
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
void prepend(List* &list, string val){
    list = new List{val, list};
}

//This function removes the first item from the list
void removeFirst(List* &list){
    //❓ Lab Question 9
    dinner = dinner->next;
    delete turnip;
}


void main(){
    //Create an empty list and print it
    List* dinner = NULL;
    printList(dinner);

    //Add food one item at a time using the
    //prepend function, and print it
    prepend(dinner, "Pie");
    prepend(dinner, "Turkey");
    prepend(dinner, "Stuffing");
    prepend(dinner, "Mashed Potatoes");
    prepend(dinner, "Turnips"); 
    printList(dinner);


    // YOUR CODE TO REMOVE TURNIPS HERE:
    List* turnip = dinner;
    removeFirst(dinner);
    printList(dinner);

    //❓ Lab Question 10
    cout << endl;
    cout << "Is there Turkey? " << contains(dinner, "Turkey") << endl;
    cout << "Is there Spam? " << contains(dinner, "Spam") << endl;

}
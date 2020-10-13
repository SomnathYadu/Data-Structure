/****************************************
This code consist methods to manipulate a singly Linked List
the methods are:
CreateNode(int)
InsertAtLast(Node*,int)
InsertAtFirst(Node&, int)
InsertAtNthPosition(Node*,int,int)
TraverseLinkedList(Node*)
*************************************** */
#include <iostream>
#include "singlyLinkedList.h"


int main()
{
    int data = 0, pos = 0;
    SinglyLinkedList sll = SinglyLinkedList();
    int option = 0;
    while (option != 6) {
        std::cout << std::endl;
        std::cout << "Choose the options" << std::endl;
        std::cout << "1. Create new LL                2. Add Node at last" << std::endl;
        std::cout << "3. Insert Nth position          4. Show Elements" << std::endl;
        std::cout << "5. Delete Nth element           6.Exit" << std::endl;
        std::cin >> option;

        switch (option) {
        case 1:
            std::cout << "Please enter the first value" << std::endl;
            std::cin >> data;
            sll.CreateNode(data);
            break;
        case 2:
            std::cout << "Please enter the value" << std::endl;
            std::cin >> data;
            sll.InsertAtLast(data);
            break;
        case 3:
            std::cout << "Please enter the Position" << std::endl;
            std::cin >> pos;
            std::cout << "Please enter the value" << std::endl;
            std::cin >> data;
            sll.InsertAtPosition(pos, data);
        case 4:
            sll.TraverseLinkedList();
            break;
        case 5:
            std::cout << "Please enter the Position" << std::endl;
            std::cin >> pos;
            sll.DeleteNode(pos);
            break;
        case 6:
            std::cout << "See ya";
            break;
        default:
            std::cout << "Please choose from given Option" << std::endl;
            break;
        }
    }
    return 0;
}

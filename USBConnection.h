#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int id; // Unique ID for each USB connection
    static std::stack<int> ids; // Stack to track available IDs

    // Private constructor to restrict object creation
    USBConnection(int id);

public:
    // Destructor that returns the ID to the stack
    ~USBConnection();

    // Static method to create a new USBConnection object
    static USBConnection* CreateUsbConnection();

    // Static method to destroy a USBConnection object
    static void destroy(USBConnection* connection);
};

#endif // USBCONNECTION_H

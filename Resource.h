#ifndef RESOURCE_H
#define RESOURCE_H
#include <string>
#include <iostream>
using namespace std;

//This resource class contains infmation resource ID, name, type and availability status.
class Resource
{
private:
       string resourceID;   //Id of the student
       string resourceName;  //student's name 
       string resourceType;   // resouse type like laptop, or study room
       bool isAvailable ;     // ask if a resource is availabe

public:
//choose our default constructor
    Resource();
      //Everything held under resource
    Resource(const string& id, const string& name, const string& type, bool available);

    //we need to get  all the accessors above 
    string getResourceID() const;


    string getResourceName() const;

    string getResourceType() const;

    bool getIsAvailable() const;

    //Setter methods for above  accessors
    //Mutators
    void setResourceName(const string& name);

    void setResourceType(const string& type);

    void setAvaialble(bool available);

    void display() const;
    
    //We need to add an operator for sorting of the ID's
    string toString() const



}
#endif;

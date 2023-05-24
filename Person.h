//
// Created by חי כרמי on 24/05/2023.
//

#ifndef UNTITLED112_PERSON_H
#define UNTITLED112_PERSON_H


class  Person  {
private:
    char *name;
    long id;
public:

    Person (char * name, long id);
    Person(const Person &person);
    virtual void print() const = 0;
    virtual ~Person();
protected:
    char * get_name() const {return name;}
    long get_id() const {return id;}



};


#endif //UNTITLED112_PERSON_H

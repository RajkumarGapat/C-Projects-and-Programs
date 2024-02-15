#include <stdio.h>
class person
{
   int age;
   float weight;
};

void main()
{
    struct person p1; //here personPtr is pointer variable ,person1 is member of structure
    p1.age=32;
    p1.weight=60;
}

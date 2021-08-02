Prototype Method
===============
Definition
---------------
Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype.

Simple Explanation
---------------
Useful for creating copys of a 'Prototype/Template' at runtime.  This can be thought of as a type of factory, although in a factory the object is instantated.  A prototype simply copies a template to create a new class, that can then be used independently.

Class Diagram
---------------
![Class Diagram](http://www.plantuml.com/plantuml/proxy?fmt=svg&src=https://raw.githubusercontent.com/staticxrjc/Design-Patterns/main/prototype/UML/diagram.puml)

Example
---------------
This example is using the prototype method to create 'Employee' objects, there is a prototype for 'engineer', and a prototype for 'developer'.  It uses an employee factory to generate clones of engineers and developers using templates.
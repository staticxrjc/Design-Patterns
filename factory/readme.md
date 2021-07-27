Factory Method
===========
Definition
----------
Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

Simple Explanation
---------
Encapsulates the creation of a class, for example new object of type 'dog' would be declared the following way:
```
dog Buddy("Buddy");
```
or
```
dog Buddy = new dog();
```
This will instead use a 'factory' to create a dog 'product'
```
dogFactory factory = new dogFactory();
Buddy = dogFactory.makeDog("Buddy");
```

Instead of constructing the dog 'Buddy' directly by accessing the dog class, it is done through an intermediary factory.  This makes class creation more modular and encapsulates the design.

Class Diagram
--------
![Class Diagram](http://www.plantuml.com/plantuml/proxy?fmt=svg&src=https://raw.githubusercontent.com/staticxrjc/Design-Patterns/main/abstract-factory/UML/diagram.puml)

Example
------
This example will use a factory to create a 'Alien Spaceship', it will inherit from a Product class called 'spaceship'.  'Alien Spaceship' will be built by an 'Alien Spaceship Factory' which will inherit from 'spaceship factory'.

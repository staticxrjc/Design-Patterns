Factory Method
===========
Definition
----------
Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

Simple Explanation
---------
Useful when a subclass is not known at compile time and is instead decided during runtime.  For example if at runtime you can choose between making a dog or a cat and it is not known until after compilation the final 'main' code would represent the following.
```
factory animalFactory = new animalFactory;
animal pet = animalFactory.create(%USER_INPUT%);
```
%USER_INPUT% can be dog or cat, and which class is created will be determined at that time.

Class Diagram
--------
The Factory will have a method inside that returns type Product.

![Class Diagram](http://www.plantuml.com/plantuml/proxy?fmt=svg&src=https://raw.githubusercontent.com/staticxrjc/Design-Patterns/main/abstract-factory/UML/diagram.puml)

Example
------
This example will use a factory to create two 'Alien Spaceships', it will inherit from a Product class called 'spaceship'.  'Alien Spaceship' will be built by an 'Alien Spaceship Factory' which will inherit from 'spaceship factory'.  There will be two types of spaceships created, a 'Hostile' spaceship and a 'Friendly' spaceship.  In this example decision making is done at compilation, but easily can be substituted in a runtime environment.
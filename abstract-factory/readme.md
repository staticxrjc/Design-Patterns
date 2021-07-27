UML Diagram
===========
Definition
----------
Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

Class Diagram
--------
![Class Diagram](http://www.plantuml.com/plantuml/proxy?fmt=svg&src=https://raw.githubusercontent.com/staticxrjc/Design-Patterns/main/abstract-factory/UML/diagram.puml)

Example
------
This example will use a factory to create a 'Alien Spaceship', it will inherit from a Product class called 'spaceship'.  'Alien Spaceship' will be built by an 'Alien Spaceship Factory' which will inherit from 'spaceship factory'.

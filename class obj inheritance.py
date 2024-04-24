# Parent class
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        pass

# Child class inheriting from Animal
class Dog(Animal):
    def speak(self):
        return "Woof!"

# Child class inheriting from Animal
class Cat(Animal):
    def speak(self):
        return "Meow!"

# Creating objects of the classes
dog = Dog("Buddy")
cat = Cat("Whiskers")

# Accessing attributes and methods of objects
print("Dog's name:", dog.name)
print("Dog says:", dog.speak())

print("Cat's name:", cat.name)
print("Cat says:", cat.speak())

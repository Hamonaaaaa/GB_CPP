#pragma once
#include <iostream>

class Animal 
{
public:
    virtual void Voice() const 
    {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal 
{
public:
    void Voice() const override 
    {
        std::cout << "Woof!";
    }
};

class Cat : public Animal 
{
public:
    void Voice() const override 
    {
        std::cout << "Meow!";
    }
};

class Cow : public Animal 
{
public:
    void Voice() const override 
    {
        std::cout << "Moo!";
    }
};
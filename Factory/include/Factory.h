#pragma once
#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;

class Factory {
public:
	virtual ~Factory() = 0;
	virtual Product* CreateProduct() = 0;
protected:
	Factory();
private:
};

class ConcreteFactory :public Factory
{
public:
	~ConcreteFactory();
	ConcreteFactory();
	Product* CreateProduct(); //Factory的子类ConcreteFactory中实现
protected:
private:

};
#endif

#pragma once
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product
{
public:
	virtual ~Product() = 0 ;
protected:
	Product();// ���ι��캯��
private:

};

class ConcreteProduct:public Product // ����
{
public:
	~ConcreteProduct();
	ConcreteProduct();
protected:
private:
};


#endif // _PRODUCT_H_
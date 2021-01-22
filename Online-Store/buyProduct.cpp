#include "buyProduct.h"

buyProduct::buyProduct()
{
	cout << "~~~DEFAULT CTOR BUYPRODUCT~~~" << endl;
}

void buyProduct::deleteProduct()
{
	product.typeProduct.erase();
}

#include "DeleteProduct.h"

DeleteProduct::DeleteProduct()
{}

DeleteProduct::~DeleteProduct()
{}

void DeleteProduct::print() const
{
    cout << "Your product after delete:\t" << endl;
    cout << "Name:\t"<< p->nameProduct << endl;
    cout << "Model:\t"<< p->modelProduct << endl;
    cout << "Type:\t" << p->typeProduct << endl;
    cout << "Price:\t"<< p->priceProduct << endl;
}

void DeleteProduct::deleteProduct(string & str, string & fragment)
{
    auto pos = str.find(fragment);
    while (pos != string::npos)
    {
        str.erase(pos, size(fragment));
        pos = str.find(fragment, pos);
    }
}

void DeleteProduct::deleteManually(string& arg)
{
    arg.erase(arg.begin(), arg.end()); // need development
}

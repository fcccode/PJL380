
#include "operator_plus.hpp"
#include "variable.hpp"
#include "function_power.hpp"
#include "node.hpp"
#include "fractional.hpp"
#include "operator_mult.hpp"
#include <iostream>
using namespace std;

int main(void) {
/*	functionpower f;
	f.power = 2;
	Variable x;
	x.name = "x";
	f.arg = &x;
	Node* g = f.derive();
	g->print();
	cout << endl;
	Node* h = g->simplify();
	h->print();
	cout << endl;
	Node* k = h->derive();
	k->print();
	cout << endl;
	Node* l = k->simplify();
	l->print();
	cout << endl;
*/
/*	functionpower f;
	f.power = 1;
	functionpower ff;
	ff.power = -1;
	Variable x;
	x.name = "x";
	Variable x1;
	x1.name = "x";
	functionpower fff;
	fff.power=3;
	fractional toto;
	toto.num=2;
	toto.denom = 1;
	fff.arg = &toto;
	f.arg = &x;
	operatormult *gr = new operatormult;
	fractional toitoi;
	toitoi.num = 3;
	toitoi.denom = 6;
	fractional tutui;
	tutui.num = 2;
	tutui.denom = 7;
	ff.arg = &tutui;
	(gr->Args).push_back(&ff);
	(gr->Args).push_back(&toitoi);
	cout << "La dérivée de ";
	gr->print();
	cout << endl << "simplifiée en : " ;
	Node *res1 = gr->simplify();
	res1->print();
	cout << endl;
	cout << endl << "          est : \n";
	Node *res = res1->derive();
	res->print();
	cout << endl << "simplifiée en : ";
	res = res->simplify();
	res->print();
*/	
	Operator *toto = new operatorplus(new fractional(5),new fractional(3));
	toto->print();
	return 0;
}

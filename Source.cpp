#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <chrono> 
#include "xml_cutter.h"
#include "xml_to_Json.h"
#include "xml_tree.h"
#include "tree_creator.h"
using namespace std::chrono;
using namespace std;


int main(){
	string temporr;
	auto start = high_resolution_clock::now();
	cout<<"et2al ta5od 7aga ndefa"<<endl;
	xml_tree tree;
	tree_creator(tree);
	Node * root=tree.get_root();
	xml_to_json(tree);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken by function: "
		<< duration.count() << " microseconds" << endl;
	getline(cin,temporr);
return 0;
}


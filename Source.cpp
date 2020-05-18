#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include "xml_cutter.h"
#include "xml_to_Json.h"
#include "xml_tree.h"
#include "tree_creator.h"

using namespace std;


int main(){
	xml_tree tree;
	tree_creator(tree);
	Node * root=tree.get_root();
	xml_to_json(tree);

return 0;
}


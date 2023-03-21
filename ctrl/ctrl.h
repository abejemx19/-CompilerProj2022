#ifndef CTRL_H
#define CTRL_H
/*
 *	ctrl.h	Controller definition module
 *           LKR 8/2015 added comments
 */

 // Options object holds compiler flags in effect
typedef class Options *POptions;
class Options {
   public:
	static int flags(char);
	friend class Controller;
   private:
	Options();  	//Called only by Controller
	static int	setflags;
};
/* end Options */

class Symtable;  // `forward'
class PTreeCls;   //     references

//  Controller object is the compiler with symbol table
//      and optional parse tree
typedef class Controller *PController;
class Controller {
   public:
	Controller(int argc, char** argv);
	void		print();
   private:
	Symtable 	*sym_table;   //shared symbol table
	PTreeCls	*parse_tree;  // parse tree if want more sophistication
	int		open_file(char*); // input source file
};
/* end-Controller */
#endif

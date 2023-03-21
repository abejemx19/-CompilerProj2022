/*
 *	symtab.h
 */
#include "string.h"
#include <string>
using namespace std;

enum DataTypeType {INTEGER,REAL,CHAR,BOOLEAN,STRING,IO}; 
enum SymbolTypeType {PROCID,FUNCID,PROGID,IDENT,CONST};

typedef class SymtabEntry *PSymtabEntry;
class SymtabEntry   { 
   public:
	SymtabEntry() {;}
	SymtabEntry(char *Name);
	SymtabEntry(char *Name, SymbolTypeType, DataTypeType);

	void		set_value(int Value){value=Value;}
        void            set_realvalue(string Value){realvalue=Value;}
	int		get_value()   {return value;}
        string          get_realvalue() {return realvalue;}

	void		setSymbolType(SymbolTypeType s)  {sType = s;}
	int		getSymbolType()   {return sType;}

	void		setDataType(DataTypeType d)   {dType = d;}
	DataTypeType	getDataType()   {return dType;}

	void		setArrayRange(int lo, int hi){ low = lo; high = hi;}
	int		getLowRange()   {return low;}
	int		getHighRange()   {return high;}

	void		setAddress(int a)   {address = a;}
	int		getAddress()   {return address;}

	char *		getName()	{return name;}
   protected:
	char		*name;
	int		value;
	string		realvalue;
	int		sType;		//symbol type (func,proc,pgm,var)
	DataTypeType	dType;		//data type (integer, real, io)
	int		low,high;	//array ranges
	int		address;	//assigned address
};


/* end-attributes-def */

/* symtab-def */ 
/* ************************************************************** */
/*
 *	Symbol Table
 */
/* ************************************************************** */


typedef class Symtable *PSymtable;
class Symtable  {
   public:
	Symtable();
	int		insert(PSymtabEntry);
	PSymtabEntry lookup(char*);
	int		emit();
	void		dump();
   private:
	int		tablesize;
	int		next_location;	
	int	 	*hashtable;	
	PSymtabEntry	 *symtab;  //Note:  pointers!
	int 		hash(char *);	
};
/* end-symtab-def */


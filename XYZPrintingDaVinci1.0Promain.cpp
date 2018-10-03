#include <iostream>
#include <cmath>
#include <string>


#include <iostream>
#include <cmath>
#include <string>


int main()
{

	class xyzproonepointtwo {
		int nozzletemp, makerbotnum;
	public:
		void set_values(int, int);
		int mrp(void);
	};


	class xyzproonepointtwoheatedbed {
		int heatedbedtemp, bedarea, bedsize, locationy, locationz;
	public:
		void set_values(int, int, int);
		int mrp(void);
	};

	class xyzproonepointtwonozzle {
		int nozzletemp, locationy, locationz;
	public:
		void set_values(int, int, int);
		int mrp(void);




	};
	class xyzproonepointtwosmartextruder {
		int extrudertemp, smartextrudery, smartextruderz;
	public:
		void set_values(int, int, int);
		int mrp(void);





	};

	class xyzproonepointtwoplafillament {
		int fillemantplatype, platemp;
	public:
		void set_values(int, int);
		int mrp(void);




	};





}


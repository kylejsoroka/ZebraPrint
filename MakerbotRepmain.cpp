

#include <iostream>
#include <cmath>
#include <string>


int main()
{

	class Makerbotreplicatorplus {
		int nozzletemp, makerbotnum;
	public:
		void set_values(int, int);
		int mrp(void);
	};


	class Makerbotreplicatorplusheatedbed {
		int heatedbedtemp, bedarea, bedsize, locationy, locationz;
	public:
		void set_values(int, int, int);
		int mrp(void);
	};

		class Makerbotreplicatorplusnozzle {
			int nozzletemp, locationy, locationz;
		public:
			void set_values(int, int, int);
			int mrp(void);




		};
		class Makerbotreplicatorplussmartextruder {
			int extrudertemp, smartextrudery, smartextruderz;
		public:
			void set_values(int, int, int);
			int mrp(void);




		};
	class Makerbotreplicatorpluscamera {
			int camerapoint, cameralocation;
		public:
			void set_values(int, int,);
			int mrp(void);




		};





	}





  









static int s_Number = 5;

class Singleton {
public:
	// gettting instance by creatin a local scoped static variable
	// return the ref of it
	Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void Change(int a) {
		s_Number = a;
	}
};
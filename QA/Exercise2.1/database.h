#ifndef DATABASE
#define DATABASE
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

template<class T>
class Database {

public:
	Database();
	void run();
private:
	fstream database;
	char fName[20];
	ostream& print(ostream&);
	void add(T&);
	bool find(const T&);
	void modify(const T&);
	friend ostream& operator<<(ostream& out, Database& db) {
		return db.print(out);
	}
};

#endif

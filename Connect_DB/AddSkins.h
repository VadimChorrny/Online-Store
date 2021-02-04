#pragma once
#include <iostream>
#include <string>
#include <sqlite3.h>
#include <stdio.h>

using namespace std;

class AddSkin
{
public:
	AddSkin()
	{
		sqlite3* DB;
		createDB(dir);
		createTable(dir);
		insertData(dir);
		//deleteData(dir);
		updateData(dir);
		selectData(dir);
	}
	static int createDB(const char* s)
	{
		sqlite3* DB;
		int exit = 0;

		exit = sqlite3_open(s, &DB);
		sqlite3_close(DB);
		return 0;
	}
	static int createTable(const char* s)
	{
		sqlite3* DB;
		string sql = "CREATE TABLE IF NOT EXISTS GRADES("
			"ID INTEGER PRIMARY KEY AUTOINCREMENT, "
			"NAME		TEXT NOT NULL, "
			"LNAME		TEXT NOT NULL, "
			"AGE		INT  NOT NULL, "
			"ADDRESS	CHAR(50), "
			"GRADE		CHAR(1) );";


		try
		{
			int exit = 0;
			exit = sqlite3_open(s, &DB);
			char* messageError;
			exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

			if (exit != SQLITE_OK) // SQLITE_OK - successfull result
			{
				cerr << "Error create table!" << endl;
				sqlite3_free(messageError);
			}
			else
				cout << "Table created successfully" << endl;
			sqlite3_close(DB);
		}
		catch (const exception& ex)
		{
			cerr << ex.what() << endl;
		}
		return 0;
	}
	static int insertData(const char* s)
	{
		sqlite3* DB;
		char* messageErr;
		int exit = sqlite3_open(s, &DB);
		string sql("INSERT INTO GRADES (NAME SKIN,MODEL SKIN,RAR SKIN,PRICE SKIN) VALUES('Knife','Cerambit',1500$,'Ultra rar','A');"
			"INSERT INTO GRADES (NAME SKIN,MODEL SKIN,RAR SKIN,PRICE SKIN) VALUES('Knife','Cerambit',1500$,'Ultra rar','B')"
			"INSERT INTO GRADES (NAME SKIN,MODEL SKIN,RAR SKIN,PRICE SKIN) VALUES('M4A1','Atomic splav',540$,'rar','C')"
		);
		exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageErr);
		if (exit != SQLITE_OK)
		{
			cerr << "Error Insert" << endl;
			sqlite3_free(messageErr);
		}
		else
		{
			cout << "Records created successfully!!!!" << endl;
		}
		return 0;

	}
	static int selectData(const char* s)
	{
		sqlite3* DB;
		int exit = sqlite3_open(s, &DB);
		string sql = "SELECT * FROM GRADES;";
		sqlite3_exec(DB, sql.c_str(), callback, NULL, NULL);
		return 0;
	}
	static int callback(void* NotUsed, int argc, char** argv, char** azColName)
	{
		for (int i = 0; i < argc; i++)
		{
			cout << azColName[i] << ": " << argv[i] << endl;
		}
		cout << endl;
		return 0;
	}
	static int updateData(const char* s)
	{
		sqlite3* DB;
		char* errMessage;
		int exit = sqlite3_open(s, &DB);
		string sql("UPDATE GRADES SET GRADE = 'A' WHERE LNAME = 'Cooper'");
		exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &errMessage);
		if (exit != SQLITE_OK)
		{
			cerr << "Error Insert" << endl;
			sqlite3_free(errMessage);
		}
		else
			cout << "Records created successfully!!!!" << endl;
		return 0;
	}
	static int deleteData(const char* s)
	{
		sqlite3* DB;
		int exit = sqlite3_open(s, &DB);
		string sql = "DELETE FROM GRADES";
		sqlite3_exec(DB, sql.c_str(), callback, NULL, NULL);
		return 0;
	}
private:
	const char* dir = "Students.db";
};
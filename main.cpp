#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	void ShowMyFriendInfo() {
		cout << "�̸�:" << name << "\n";
		cout << "����" << age << "\n";
	}
	~MyFriendInfo() {
		delete[]name;
		cout << "MyFriendInfo �Ҹ�" << "\n";
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name, int age, const char* addr, const char* phone)
		: MyFriendInfo(name, age) {
		this->addr = _strdup(addr);
		this->phone = _strdup(phone);
	}
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "�ּ�:" << addr << "\n";
		cout << "��ȣ:" << phone << "\n";
	}
	~MyFriendDetailInfo() {
		delete[]addr;
		delete[]phone;
		cout << "MyFriendDetailInfo �Ҹ�" << "\n";
	}
};

int main(void)
{
	MyFriendDetailInfo friends("������", 25, "������", "111-1111");
	friends.ShowMyFriendDetailInfo();
	return 0;
};
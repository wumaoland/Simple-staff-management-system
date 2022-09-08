#include "workerManager.h"

workerManager::workerManager() {

}
void workerManager::Show_Menu() {
	cout << "0退出" << endl;
	cout << "1增加" << endl;
	cout << "2显示" << endl;
	cout << "3删除" << endl;
	cout << "4修改" << endl;
	cout << "5查找" << endl;
	cout << "6按编号排序" << endl;
	cout << "7清空文档" << endl;
}
void workerManager::exitSystem() {
	cout << "退出" << endl;
	system("pause");
	exit(0);
}
workerManager::~workerManager() {

}
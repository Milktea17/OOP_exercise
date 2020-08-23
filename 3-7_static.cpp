
#include<iostream>
using namespace std;

class CTest{
	int m_nData;
	static int m_nCount; //정적멤버변수 선언, 정적멤버변수는 사실상 전역변수가 아니다
	
	public:
	CTest(int nParam) : m_nData(nParam) {m_nCount++;}
	int GetData() {return m_nData;};
	void ResetCount(){m_nCount = 0;};
	
	static int GetCount(){
		return m_nCount;
	};
	
};

int CTest::m_nCount = 0; //정적멤버변수 정의

int main(){
	CTest a(5), b(10);
	
	cout << a.GetCount() << endl;
	b.ResetCount();
	
	cout << CTest::GetCount() << endl;
	//정적멤버 접근시 객체없이도 접근가능
	
	return 0;
	
}

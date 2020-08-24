#include <iostream>
using namespace std;

class CMyData{
	
	int m_nData =0;
	
	public :
		CMyData() {cout << "CMyData()" << endl;}
		
    //복사 생정자 선언 및 정의
		CMyData(const CMyData &rhs)
		{
			this->m_nData = rhs.m_nData;
			cout << "CMyData(const CMyData &)" << endl;
		
		}
		
		int GetData(void) const{return m_nData;}
		void SetData(int nParam) {m_nData = nParam;}
	
};

int main(){
//디폴트 생성자가 호출되는 경우
	CMyData a;
	a.SetData(10);
	
  //복사생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;
	
	return 0;
	
}

/*output

CMyData()
CMyData(const CMyData &)
10
*/

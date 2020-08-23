#include <iostream>

class CRefTest{
	public :
	CRefTest(int &rParam) : m_nData(rParam)
	{
		m_nData=rParam;
	}
	int GetData(void){return m_nData;}
	
	private:
	int &m_nData;
};

int main(){
	return 0;
}

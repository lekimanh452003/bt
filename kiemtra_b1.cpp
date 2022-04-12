#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
class PTGT
{
	private:
	char mpt[30];
	char hsx[10];
	int nxx;
	int gct;
	public:
	PTGT()
	{
		strcpy(this->mpt,"DG37008");
		strcpy(this->hsx,"yamaha");
		nxx=4;
		gct=100000;
	}
	void xuat()
	{
		cout<<"\nMa Phuong tien: "<<this->mpt;
		cout<<"\nHang san xuat: "<<this->hsx;
		cout<<"\nNgay xuat xuong: "<<this->nxx;
		cout<<"\nGia chua thue: "<<this->gct;
		
	}
	PTGT(char *mpt, char *hsx, int a, int b)
	{
		strcpy(this->mpt, mpt);
		strcpy(this->hsx,"yamaha");
		nxx=4;
		gct=100000;
	}
	~PTGT(){}
};
int main()
{
	PTGT pt;
	pt.xuat();
	return 0;
}
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
		PTGT(char *mpt=" ", char *hsx=" ", int nxx, int gct)
	{
		strcpy(this->mpt, mpt);
		strcpy(this->hsx,hsx);
		this->nxx=nxx;
		this->gct=gct;
	}
	void xuat()
	{
		cout<<"\nMa Phuong tien: "<<this->mpt;
		cout<<"\nHang san xuat: "<<this->hsx;
		cout<<"\nNgay xuat xuong: "<<this->nxx;
		cout<<"\nGia chua thue: "<<this->gct;
		
	}
	friend float giasauthue();
};
class MayBay :public virtual PTGT
{
	private:
		char db[20];
		int scn;
		char dkkd[30];	
	public:	
		MayBay(char *mpt=" ", char *hsx=" ", int nxx, int gct, char *db=" ", int s, char *dkkd=" ")
		:PTGT(mpt,hsx,nxx,gct)
		{
			strcpy(this->db,db);
			this->scn=scn;
			strcpy(this->dkkd,dkkd);
		}
		~MayBay(){}
		friend istream& operator >>(istream& is, MayBay& mb)
		{
			cin.ignore();
			cout<<"\nNhap duong bay: ";
			is.getline(mb.db,20);
			cin.ignore();
			cout<<"\nNhap so cho ngoi: ";
			is>>scn;
			cout<<"\nNhap noi dang ki kinh doanh : ";
			is.getline(mb.dkkd,30);
			return is;
		}
		friend ostream& operator <<(ostream& os, MayBay mb)
		{
			os<<left<<setw(20)<<mb.db
					<<setw(20)<<mb.scn
					<<setw(20)<<mb.dkkd<<endl;
		 	return os;
		}
		float giasauthue()
		{
			float gst;
			gst=gct+gct*0.08;
			return gst;
		}
};
int main()
{
	MayBay *mb;
	int n;
	cout << " \ n Nhap so luong may bay: " ;
	cin >> n;
	for ( int i = 0 ; i <n; i ++)
	{
		cout << " \ n Thong tin may bay " << i + 1 << endl;
		cin >> mb[i];
	}
	for ( int i = 0 ; i <n; i ++)
	{
		cout <<mb[i];
	}
	return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;
{
int hargamakan,harga_minum,harga_desert, total_bayar, jumlahpesanan, nomor_meja, uang, kembali,ttl_makan,ttl_minum,ttl_desert,jumlah_pesanan2,jumlah_pesanan3;

void bayarr(){
	total_bayar=(harga_makan*jumlah_pesanan)+(harga_minum*jumlah_pesanan2)+(harga_desert*jumlah_pesanan3);
}

void pesanan(){
	cout<<"Nomor Meja  = ";cin>>nomor_meja;
	cout<<"Total Bayar = "<<total_bayar<<endl;
	cout<<"Uang        = ";cin>>uang;
	cout<<"Kembali     = "<<(uang-total_bayar)<<end
	if(uang<total_bayar){
	cout<<"Maaf, Uang anda tidak cukup"<<endl;
	}
	else
	cout<<endl;
	cout<<"Terima Kasih";
	cout<<"\nPesanan anda akan kami antar di meja "<<nomor_meja;
	
}

main(){
	int kode_pesan, kode_makanan, lagi:
	int kode_minuman, kode_dessert;
	
	cout<<"\t\t ==============================================="\n;
	cout<<"\t\t|     	        AMIKOM COFFE SHOP              |"<<endl;
	cout<<"\t\t ==============================================="<<endl;
	menu:
		cout<<"\n1. Makanan		\n2. Minuman		\n3. Dessert\n";
		cout<<"\nKode Pesan : ";
		cout>>kode_pesan;
	switch(kode_pesan){
	case 1:
		cout<<"\nMakanan"<<endl;
		cout<<" 1. Emi Goreng	 	:Rp. 15.000\n 2. Emi Rebus	 	:Rp. 19.000\n 3. Nasi Goreng		:Rp. 21.000\n 4. Bakso		:Rp. 17.000\n 5. Emi Ayam		:Rp. 23.000"<<endl;
		cout<<"\nKode Makanan : ";
		cin>>kode_makanan;
		if(kode_makanan==1){
		cout<<"\nMakanan yang dipilih Emi Goreng";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan;
		harga_makan= 15000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
				
			}
			else{
				bayar();
			}
		}
		
		else if(kode_makanan==2){
		cout<<"\nMakanan yang dipilih Emi Rebus";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan;
		harga_makan= 19000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): "
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
			
		}
		
		else if(kode_makanan==3){
		cout<<"\nMakanan yang dipilih Nasi Goreng";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan;
		harga_makan= 21000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_makanan==4){
		cout<<"\nMakanan yang dipilih Bakso";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan;
		harga_makan= 17000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu:
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_makanan==5){
		cout<<"\nMakanan yang dipilih Emi Ayam";
		cout<<"\nJumlah Pesanan : ";endl;
		cin>>jumlah_pesanan;
		harga_makan= 23000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto ;
			}
			else{
				bayar():
			}
		
		}
		
		else{
			cout<<"Menu Tidak Tersedia";
			goto menu;
		}
		break;
	
	case 2:
		cout<<"Minuman"<<endl;
		cout<<" 1. Espresso		 :Rp. 15.000\n 2. Latte		 :Rp. 19.000\n 3. Americano	    	 :Rp. 21.000\n 4. Cold Brew		 :Rp. 17.000\n 5. Iced Coffee Latte	 :Rp. 23.000"<<endl;
		cout<<"\nKode Minuman : ";
		cin>>kode_minuman;
		if(kode_minuman==1){
		cout<<"\nMinuman yang dipilih Espresso";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan2;
		harga_minum= 15000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
			
		}
		
		else if(kode_minuman==2){
		cout<<"\nMinuman yang dipilih Latte";
		cout>>"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan2;
		harga_minum= 19000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_minuman==3){
		cout<<"\nMinuman yang dipilih Americano"
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan2;
		harga_minum= 21000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
			
		}
		
		else if(kode_minuman==4){
		cout<<"\nMinuman yang dipilih Cold Brew";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan2;
		harga_minum= 17000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_minuman==5){
		cout<<"\nMinuman yang dipilih Iced Coffe Latte";
		cout>>"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan2;
		harga_minum= 23000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else {
			cout<<"Menu Tidak Tersedia";
			goto menu;
		}
		break;
	
	case 3:
		cout<<"Dessert"<<endl;
		cout<<" 1. Donnat		:Rp. 15.000\n 2. Ice Cream		:Rp. 19.000\n 3. Biskuit		:Rp. 21.000\n 4. Pudding		:Rp. 17.000\n 5. Custard		:Rp. 23.000"<<endl;
		cout<<"\nKode Dessert : ";
		cin>>kode_dessert;
		if(kode_dessert==1){
		cout<<"\nDessert yang dipilih Donat";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan3;
		harga_desert= 15000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
	
		}
		
		else if(kode_dessert==2){
		cout<<"\nDessert yang dipilih Ice Cream";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan3;
		harga_desert= 19000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi=="1"){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_dessert==3){
		cout<<"\nDessert yang dipilih Biskuit";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan3;
		harga_desert= 21000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
		
		}
		
		else if(kode_dessert==4){
		cout<<"\nDessert yang dipilih Pudding";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan3;
		harga_desert= 17000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
			
		}
		
		else if(kode_dessert==5){
		cout<<"\nDessert yang dipilih Custard";
		cout<<"\nJumlah Pesanan : ";
		cin>>jumlah_pesanan3;
		harga_desert= 23000;
		cout<<"\nIngin memesan lagi? Y(1)/T(0): ";
		cin>>lagi;
			if(lagi==1){
				goto menu;
			}
			else{
				bayar();
			}
	
		}
		break;
		
	default:
	cout<<"Menu Tidak Tersedia";
	goto menus;
}
	cout<<"------------------------------------------"<<endl;
	pesanan();
	return 0;
}
}

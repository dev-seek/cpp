#include <iostream>
#include <memory>
#include <vector>
//vector class INTUTION

template<typename T>
class Dynamic_array{
	public:
		int size ;
		std::unique_ptr<T []>ptr;
		Dynamic_array(int sz):size(sz),ptr(new T[sz]){}
		void fill(int value){
			for(int i = 0 ; i<size ; i++){
				ptr[i]=value;
			}
		}
		void print(){
			for(int i = 0 ; i<size ; i++){
				std::cout<<ptr[i]<<" ";
			}
			std::cout<<"\n";
		}
};

int main(){
	Dynamic_array<int>vector(5);
	std::vector<int>v;
	vector.fill(5);
	vector.print();
	return 0 ;
}

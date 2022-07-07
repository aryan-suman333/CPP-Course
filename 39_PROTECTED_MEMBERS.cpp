#include<iostream>

using namespace std;

class base
{
	protected:  // private prr inherit ho skta h
		int a;
	private:
		int b;
};

class derived : protected base
{
	private:
};

int main(){
	base b;
	derived d;
	// cout<<b.a<<endl;   shows error as a is protected
	// cout<<d.a<<endl;   shows error as a is protected
	return 0;
}

/* 	member		public derivation   private derivation   protected derivation
    private       not inherited        not inherited         not inherited
    protected     protected            private               protected
    public        public               private               protected     */
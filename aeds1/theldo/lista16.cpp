#include <iostream>
using namespace std;
/* //funciona em C e C++
 void set(int *x, int y)
{
    *x = y;
}

int get(int *x)
{
    return ( *x );
}

*/ 
//só funciona em C++
void set(int &x, int y)
{
    x = y;
}

int get(int &x)
{
    return ( x );
}

class intCell
{
    protected:
        int value;
        intCell *link;
    public:
        void set_value(int y)
        {
            this -> value = y;
        }

        int get_value( )
        {
            return ( this -> value );
        }
    
        void set_link(intCell *y)
        {
            this -> link = y;
        }

        intCell* get_link( )
        {
            return ( this -> link );
        }
    
        void print()
        {
            intCell *tmp = this;
            while(tmp)
            {
               cout << tmp->get_value() 
                          << " " ;
                tmp = tmp -> get_link ( );
            }
            cout << endl;
        }
    
        int lenght()
        {
            int x = 0;
            intCell *tmp = this;
            while(tmp)
            {
                x = x + 1;
                tmp = tmp -> get_link ( );
            }
            return (x);
        }
        //pega o ultimo elemento
        intCell* back ( )
        {
            int x = 0;
            intCell *tmp = this;
            while(tmp->link)
            {
                tmp = tmp -> get_link ( );
            }
            return (tmp);
        }
        //ai vai e conecta
        void connect (intCell *other )
        {
            this->set_link (other);
        }
        //construtores
        intCell ( )
        {
            value = 0;
            link = nullptr;
        }
    
        intCell ( int x)
        {
            value = x;
            link = nullptr;
        }
        
        intCell ( int x, intCell *y)
        {
            value = x;
            link = y;
        }
};

int main ()
{
    int x = 0;
/*
    set(&x, 5);
    cout << "\nx = " << get (&x) << endl; //funciona em C e C++
*/
    //só funciona em C++
    set(x, 5);
    cout << "\nx = " << get (x) << endl;
    
    
    intCell c1;
    intCell *ref_c1 = &c1;
    // c1.value = 5;
    c1.set_value (5);
    cout << "\nc1.value= " << c1.get_value() << endl;
    
    // c1.value = 5;
    ref_c1->set_value (5);
    cout << "\nc1.value= " << ref_c1->get_value() << endl;
    
    intCell c2;
    intCell *ref_c2 = &c2;
    c2.set_value (10);
    cout << "\nc2.value= " << c2.get_value() << endl;

    c1.set_link (ref_c2);
    cout << "\n" << c1.get_value() << " " 
         << c1.get_link( )-> get_value() << endl;

    ref_c1->set_link (ref_c2);
    cout << "\n" 
         << ref_c1->get_value() 
         << " " 
         << ref_c1->get_link( )
                 -> get_value( ) 
         << endl;
    
    ref_c2 = ref_c1;
    cout << "\n";
    while(ref_c2)
    {
       cout << ref_c2->get_value() 
                 << " " ;
        ref_c2 = ref_c2 -> get_link ( );
    }
    cout << endl;
    
    for(ref_c2 = ref_c1; ref_c2 != nullptr; 
        ref_c2 = ref_c2->get_link() )
    {
        cout << ref_c2->get_value()
             << " ";
    }
    cout << endl;
    ref_c1->print();
    
    cout << endl;
    
    cout << "\nref_c1->lenght () = "
              << ref_c1->lenght() << endl;
    
    ref_c2 = new intCell ();
    ref_c2->set_value(15);
    cout << endl;

    ref_c1->back( )->set_link (ref_c2);
    
    cout << endl;
    ref_c1->print();
    
    cout << endl;
    
    cout << "\nref_c1->lenght () = "
              << ref_c1->lenght() << endl;
    
    ref_c2 = new intCell ();
    ref_c2->set_value(20);
    cout << endl;
    
    ref_c1->back( )->connect (ref_c2);
    cout  << endl;
    ref_c1->print();
    
    cout << endl;
    
    cout << "\nref_c1->lenght () = "
              << ref_c1->lenght() << endl;
    
    ref_c1->back( )->connect (new intCell);
    cout  << endl;
    ref_c1->print();
    
    cout << endl;
    
    cout << "\nref_c1->lenght () = "
              << ref_c1->lenght() 
              << endl;
    
    return 0;
}
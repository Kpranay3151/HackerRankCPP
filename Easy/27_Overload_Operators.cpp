//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator +(Complex &c1, Complex &c2){
    Complex c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return c;
}

ostream &operator <<(ostream &out, Complex &c1){
    out<<c1.a<<"+i"<<c1.b;
    return out;
}

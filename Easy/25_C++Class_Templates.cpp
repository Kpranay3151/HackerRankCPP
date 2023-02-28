

/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T add (T x) {return x+element;}
};
template <>
class AddElements <string> {
    string element;
  public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
      string s = element+arg;
      return s;
    }
};

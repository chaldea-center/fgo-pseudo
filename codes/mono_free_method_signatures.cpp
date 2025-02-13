void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4BEEB48;
  if ( qword_4BEEB48 )
  {
    sub_1C0BDF0(qword_4BEEB48 + 64);
    operator delete(v0);
  }
  qword_4BEEB48 = 0LL;
}
void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A1AF78;
  if ( qword_4A1AF78 )
  {
    sub_1B5268C(qword_4A1AF78 + 64);
    operator delete(v0);
  }
  qword_4A1AF78 = 0LL;
}
void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A10808;
  if ( qword_4A10808 )
  {
    sub_1B4E828(qword_4A10808 + 64);
    operator delete(v0);
  }
  qword_4A10808 = 0LL;
}
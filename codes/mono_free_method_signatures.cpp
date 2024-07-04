void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_48F4B10;
  if ( qword_48F4B10 )
  {
    sub_1AEAC84(qword_48F4B10 + 64);
    operator delete(v0);
  }
  qword_48F4B10 = 0LL;
}
void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B79010;
  if ( qword_4B79010 )
  {
    sub_1BCEA84(qword_4B79010 + 64);
    operator delete(v0);
  }
  qword_4B79010 = 0LL;
}
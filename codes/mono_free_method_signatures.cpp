void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A821B0;
  if ( qword_4A821B0 )
  {
    sub_1B79FC8(qword_4A821B0 + 64);
    operator delete(v0);
  }
  qword_4A821B0 = 0LL;
}
void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A31E10;
  if ( qword_4A31E10 )
  {
    sub_1B5B584(qword_4A31E10 + 64);
    operator delete(v0);
  }
  qword_4A31E10 = 0LL;
}
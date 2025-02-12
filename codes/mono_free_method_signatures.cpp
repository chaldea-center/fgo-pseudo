void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4BC6C88;
  if ( qword_4BC6C88 )
  {
    sub_1BFDCDC(qword_4BC6C88 + 64);
    operator delete(v0);
  }
  qword_4BC6C88 = 0LL;
}
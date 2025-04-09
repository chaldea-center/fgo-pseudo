void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_49CC308;
  if ( qword_49CC308 )
  {
    sub_1B36F48(qword_49CC308 + 64);
    operator delete(v0);
  }
  qword_49CC308 = 0LL;
}
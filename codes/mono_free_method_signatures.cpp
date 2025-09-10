void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4C384D0;
  if ( qword_4C384D0 )
  {
    sub_1C17448(qword_4C384D0 + 64);
    operator delete(v0);
  }
  qword_4C384D0 = 0;
}
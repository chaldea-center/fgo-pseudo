void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4E15FF0;
  if ( qword_4E15FF0 )
  {
    sub_1CBDFE8(qword_4E15FF0 + 64);
    operator delete(v0);
  }
  qword_4E15FF0 = 0;
}
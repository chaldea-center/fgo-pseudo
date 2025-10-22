void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4C67EC0;
  if ( qword_4C67EC0 )
  {
    sub_1C2851C(qword_4C67EC0 + 64);
    operator delete(v0);
  }
  qword_4C67EC0 = 0;
}
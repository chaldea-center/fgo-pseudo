void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B49568;
  if ( qword_4B49568 )
  {
    sub_1BBD410(qword_4B49568 + 64);
    operator delete(v0);
  }
  qword_4B49568 = 0LL;
}
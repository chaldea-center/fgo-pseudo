void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A6D480;
  if ( qword_4A6D480 )
  {
    sub_1B72568(qword_4A6D480 + 64);
    operator delete(v0);
  }
  qword_4A6D480 = 0LL;
}
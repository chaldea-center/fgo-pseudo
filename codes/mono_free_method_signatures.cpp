void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4AC8078;
  if ( qword_4AC8078 )
  {
    sub_1B953D4(qword_4AC8078 + 64);
    operator delete(v0);
  }
  qword_4AC8078 = 0LL;
}
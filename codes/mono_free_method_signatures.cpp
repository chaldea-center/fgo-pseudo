void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4E88DB0;
  if ( qword_4E88DB0 )
  {
    sub_1CE699C(qword_4E88DB0 + 64);
    operator delete(v0);
  }
  qword_4E88DB0 = 0;
}
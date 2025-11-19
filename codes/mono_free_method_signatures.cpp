void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4CC7338;
  if ( qword_4CC7338 )
  {
    sub_1C432FC(qword_4CC7338 + 64);
    operator delete(v0);
  }
  qword_4CC7338 = 0;
}
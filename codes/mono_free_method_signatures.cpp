void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4D41AB0;
  if ( qword_4D41AB0 )
  {
    sub_1C6B3C8(qword_4D41AB0 + 64);
    operator delete(v0);
  }
  qword_4D41AB0 = 0;
}
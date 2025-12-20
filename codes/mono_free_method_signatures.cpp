void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4D3D858;
  if ( qword_4D3D858 )
  {
    sub_1C6B98C(qword_4D3D858 + 64);
    operator delete(v0);
  }
  qword_4D3D858 = 0;
}
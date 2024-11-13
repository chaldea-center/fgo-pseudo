void *__fastcall BrotliDecoderCreateInstance(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v6; // w23
  void *result; // x0
  void *v8; // x0
  void *v9; // x22
  int v10; // w8

  v6 = (a1 | a2) != 0;
  if ( a1 | a2 )
  {
    result = 0LL;
    if ( !a1 || !a2 )
      return result;
    v8 = (void *)((__int64 (__fastcall *)(__int64, __int64))a1)(a3, 5152LL);
  }
  else
  {
    v8 = malloc(0x1420u);
  }
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = sub_1BCB3A8(v8, a1, a2, a3);
  result = v9;
  if ( v10 )
    return result;
  if ( !v6 )
  {
    free(v9);
    return 0LL;
  }
  result = 0LL;
  if ( a1 && a2 )
  {
    ((void (__fastcall *)(__int64, void *))a2)(a3, v9);
    return 0LL;
  }
  return result;
}
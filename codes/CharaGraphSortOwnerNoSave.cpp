System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9706 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9706 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
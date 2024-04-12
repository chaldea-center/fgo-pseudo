System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AFDF9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFDF9 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E349 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E349 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
System_String_o *CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB55FB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB55FB = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
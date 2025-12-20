void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5F7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D5F7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5F6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D5F6 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
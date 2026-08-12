void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971627 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971627 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971626 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971626 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
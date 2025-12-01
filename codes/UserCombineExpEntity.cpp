void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8162 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8162 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8161 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8161 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
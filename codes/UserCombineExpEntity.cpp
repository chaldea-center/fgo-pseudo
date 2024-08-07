void __fastcall UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5E8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF5E8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserCombineExpEntity__CreatePrimaryKey(
        UserCombineExpEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF5E7 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_49FF5E7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
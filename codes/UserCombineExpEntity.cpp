void __fastcall UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1491 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1491 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserCombineExpEntity__CreatePrimaryKey(
        UserCombineExpEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1490 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1490 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}
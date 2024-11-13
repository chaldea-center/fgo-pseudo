void __fastcall TblUserEntity___ctor(TblUserEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16D2F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall TblUserEntity__CreatePrimaryKey(TblUserEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
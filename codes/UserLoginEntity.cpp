void __fastcall UserLoginEntity___ctor(UserLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45903 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_long___ctor__, method);
    byte_4B45903 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32DF9A0 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserLoginEntity__CreatePrimaryKey(UserLoginEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
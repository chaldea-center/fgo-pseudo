void __fastcall UserEntity___ctor(UserEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188AFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_4188AFE = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEntity__CreatePrimaryKey(UserEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}
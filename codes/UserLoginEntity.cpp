void __fastcall UserLoginEntity___ctor(UserLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6AB1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_long___ctor__, method);
    byte_4AB6AB1 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3163BD8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserLoginEntity__CreatePrimaryKey(UserLoginEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
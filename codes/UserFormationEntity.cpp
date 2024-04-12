void __fastcall UserFormationEntity___ctor(UserFormationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF08 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AEF08 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserFormationEntity__CreatePrimaryKey(UserFormationEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
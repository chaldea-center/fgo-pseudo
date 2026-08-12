void UserFormationEntity___ctor(UserFormationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597175C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    byte_597175C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserFormationEntity__CreatePrimaryKey(UserFormationEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
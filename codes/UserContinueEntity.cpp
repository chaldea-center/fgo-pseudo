void UserContinueEntity___ctor(UserContinueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3175C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_long___ctor__);
    byte_4D3175C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3460B84 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserContinueEntity__CreatePrimaryKey(UserContinueEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
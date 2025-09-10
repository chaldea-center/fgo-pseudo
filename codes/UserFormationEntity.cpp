void UserFormationEntity___ctor(UserFormationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2814F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_long___ctor__);
    byte_4C2814F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33858FC *)Method_DataEntityBase_long___ctor__);
}


int64_t UserFormationEntity__CreatePrimaryKey(UserFormationEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
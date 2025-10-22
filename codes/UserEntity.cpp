void UserEntity___ctor(UserEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57B0E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_long___ctor__);
    byte_4C57B0E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33B0ABC *)Method_DataEntityBase_long___ctor__);
}


int64_t UserEntity__CreatePrimaryKey(UserEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}
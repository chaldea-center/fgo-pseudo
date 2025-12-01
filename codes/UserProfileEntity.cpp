void UserProfileEntity___ctor(UserProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8325 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_long___ctor__);
    byte_4CC8325 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_34069E4 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserProfileEntity__CreatePrimaryKey(UserProfileEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
void UserProfileEntity___ctor(UserProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939625 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_5939625 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserProfileEntity__CreatePrimaryKey(UserProfileEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
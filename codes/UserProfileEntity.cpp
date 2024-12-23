void __fastcall UserProfileEntity___ctor(UserProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67983 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_long___ctor__, method);
    byte_4B67983 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31FD60C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserProfileEntity__CreatePrimaryKey(UserProfileEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
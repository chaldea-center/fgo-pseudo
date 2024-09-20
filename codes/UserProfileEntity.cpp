void __fastcall UserProfileEntity___ctor(UserProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BED4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BED4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserProfileEntity__CreatePrimaryKey(UserProfileEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}
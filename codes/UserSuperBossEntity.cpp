void UserSuperBossEntity___ctor(UserSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6F7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6F7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserSuperBossEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  if ( (byte_4CEF6F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CEF6F6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           superBossId,
           (const MethodInfo_316EBC8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserSuperBossEntity__CreatePrimaryKey(UserSuperBossEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserSuperBossEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.superBossId, v2);
}
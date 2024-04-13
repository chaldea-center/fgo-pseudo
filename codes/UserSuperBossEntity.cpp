void __fastcall UserSuperBossEntity___ctor(UserSuperBossEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE6BE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserSuperBossEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  if ( (byte_42EE6BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, eventId, superBossId, method);
    byte_42EE6BD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           superBossId,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserSuperBossEntity__CreatePrimaryKey(
        UserSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserSuperBossEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.superBossId, v2);
}
void __fastcall UserSuperBossEntity___ctor(UserSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C36 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6C36 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSuperBossEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  if ( (byte_4AB6C35 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4AB6C35 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           superBossId,
           (const MethodInfo_2EC2BE4 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserSuperBossEntity__CreatePrimaryKey(
        UserSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserSuperBossEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.superBossId, v2);
}
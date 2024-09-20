void __fastcall UserEventMissionCondDetailEntity___ctor(
        UserEventMissionCondDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BDCB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BDCB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventMissionCondDetailEntity__CreatePK(
        int64_t userId,
        int32_t conditionDetailId,
        const MethodInfo *method)
{
  if ( (byte_4A5BDCA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BDCA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           conditionDetailId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventMissionCondDetailEntity__CreatePrimaryKey(
        UserEventMissionCondDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventMissionCondDetailEntity__CreatePK(this->fields.userId, this->fields.conditionDetailId, v2);
}
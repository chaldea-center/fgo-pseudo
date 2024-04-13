void __fastcall EventRewardSetEntity___ctor(EventRewardSetEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC009 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC009 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardSetEntity__CreatePK(
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42EC008 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, eventId, id, method);
    byte_42EC008 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           rewardSetType,
           eventId,
           id,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardSetEntity__CreatePrimaryKey(
        EventRewardSetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSetEntity__CreatePK(this->fields.rewardSetType, this->fields.eventId, this->fields.id, v2);
}
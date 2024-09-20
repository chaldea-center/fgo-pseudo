void __fastcall EventConquestRewardEntity___ctor(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B091 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B091 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.objectNum = 0;
  *(_OWORD *)&this->fields.eventId = xmmword_BB3EC0;
}


System_String_o *__fastcall EventConquestRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  if ( (byte_4A5B092 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5B092 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           questId,
           objectType,
           objectId,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventConquestRewardEntity__CreatePrimaryKey(
        EventConquestRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventConquestRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.questId,
           this->fields.objectType,
           this->fields.objectId,
           v2);
}


int32_t __fastcall EventConquestRewardEntity__GetEventId(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}
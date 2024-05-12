void __fastcall EventConquestRewardEntity___ctor(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DDB6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DDB6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  this->fields.objectNum = 0;
  *(_OWORD *)&this->fields.eventId = xmmword_3320900;
}


System_String_o *__fastcall EventConquestRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  if ( (byte_438DDB7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_438DDB7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           questId,
           objectType,
           objectId,
           (const MethodInfo_1D17A7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
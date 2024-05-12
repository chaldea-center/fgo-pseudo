void __fastcall EventQuestEntity___ctor(EventQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BD0D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BD0D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventQuestEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_438BD0C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438BD0C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           phase,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventQuestEntity__CreatePrimaryKey(EventQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventQuestEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.phase, v2);
}


int32_t __fastcall EventQuestEntity__getEventId(EventQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}
void __fastcall EventQuestCooltimeEntity___ctor(EventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEBC8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEBC8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventQuestCooltimeEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_49FEBC7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_49FEBC7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           phase,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventQuestCooltimeEntity__CreatePrimaryKey(
        EventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventQuestCooltimeEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.phase, v2);
}
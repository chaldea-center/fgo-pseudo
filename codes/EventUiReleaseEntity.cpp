void __fastcall EventUiReleaseEntity___ctor(EventUiReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70071 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70071 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.eventUiId = 0LL;
  *(_QWORD *)&this->fields.idx = 0LL;
  this->fields.condNum = 0;
  *(_QWORD *)&this->fields.condType = 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiReleaseEntity__CreatePK(
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A70072 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_4A70072 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventUiId,
           priority,
           idx,
           (const MethodInfo_2E8C8D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventUiReleaseEntity__CreatePrimaryKey(
        EventUiReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiReleaseEntity__CreatePK(this->fields.eventUiId, this->fields.priority, this->fields.idx, v2);
}
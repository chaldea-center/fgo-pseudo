void __fastcall EventUiReleaseEntity___ctor(EventUiReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF8D7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AF8D7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.eventUiId = 0LL;
  *(_QWORD *)&this->fields.idx = 0LL;
  this->fields.condNum = 0;
  *(_QWORD *)&this->fields.condType = 0LL;
}


System_String_o *__fastcall EventUiReleaseEntity__CreatePK(
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42AF8D8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AF8D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventUiId,
           priority,
           idx,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventUiReleaseEntity__CreatePrimaryKey(
        EventUiReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiReleaseEntity__CreatePK(this->fields.eventUiId, this->fields.priority, this->fields.idx, v2);
}
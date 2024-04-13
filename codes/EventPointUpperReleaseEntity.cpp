void __fastcall EventPointUpperReleaseEntity___ctor(EventPointUpperReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8DE8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointUpperReleaseEntity__CreatePK(
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42E8DE7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      eventPointUpperId,
      priority,
      *(_QWORD *)&idx);
    byte_42E8DE7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           version,
           eventPointUpperId,
           priority,
           idx,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventPointUpperReleaseEntity__CreatePrimaryKey(
        EventPointUpperReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventPointUpperReleaseEntity__CreatePK(
           this->fields.version,
           this->fields.eventPointUpperId,
           this->fields.priority,
           this->fields.idx,
           v2);
}


int32_t __fastcall EventPointUpperReleaseEntity__get_CondType(
        EventPointUpperReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.condType;
}
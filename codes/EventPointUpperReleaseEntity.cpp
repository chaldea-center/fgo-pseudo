void __fastcall EventPointUpperReleaseEntity___ctor(EventPointUpperReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B020B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B020B2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointUpperReleaseEntity__CreatePK(
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B020B1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&eventPointUpperId);
    byte_4B020B1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           version,
           eventPointUpperId,
           priority,
           idx,
           (const MethodInfo_300093C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
void __fastcall EventStatusEntity___ctor(EventStatusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEC93 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEC93 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventStatusEntity__CreatePK(int32_t eventId, int32_t statusId, const MethodInfo *method)
{
  if ( (byte_49FEC92 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&statusId);
    byte_49FEC92 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           statusId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventStatusEntity__CreatePrimaryKey(EventStatusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventStatusEntity__CreatePK(this->fields.eventId, this->fields.statusId, v2);
}


int32_t __fastcall EventStatusEntity__GetDay(EventStatusEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = 2;
  while ( (((unsigned int)this->fields.status >> v2) & 1) == 0 )
  {
    if ( ++v2 == 9 )
      return 0;
  }
  return v2 - 1;
}


bool __fastcall EventStatusEntity__HasFlag(EventStatusEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


bool __fastcall EventStatusEntity__IsNight(EventStatusEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


bool __fastcall EventStatusEntity__IsScenario(EventStatusEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}
void __fastcall TotalEventRaidEntity___ctor(TotalEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF56A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF56A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TotalEventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_49FF569 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_49FF569 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TotalEventRaidEntity__CreatePrimaryKey(
        TotalEventRaidEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalEventRaidEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}
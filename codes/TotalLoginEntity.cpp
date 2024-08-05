void __fastcall TotalLoginEntity___ctor(TotalLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEF50 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEF50 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TotalLoginEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_49FEF4F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_49FEF4F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TotalLoginEntity__CreatePrimaryKey(TotalLoginEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalLoginEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}
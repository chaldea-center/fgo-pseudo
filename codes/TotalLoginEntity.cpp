void __fastcall TotalLoginEntity___ctor(TotalLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189955 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189955 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TotalLoginEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4189954 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_4189954 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TotalLoginEntity__CreatePrimaryKey(TotalLoginEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalLoginEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}
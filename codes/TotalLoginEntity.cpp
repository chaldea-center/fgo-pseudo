void __fastcall TotalLoginEntity___ctor(TotalLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C9C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02C9C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TotalLoginEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4B02C9B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&day);
    byte_4B02C9B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TotalLoginEntity__CreatePrimaryKey(TotalLoginEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalLoginEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}
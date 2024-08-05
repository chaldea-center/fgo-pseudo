void __fastcall CombineLimitEntity___ctor(CombineLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE2C8 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE2C8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineLimitEntity__CreatePK(int32_t id, int32_t svtLimit, const MethodInfo *method)
{
  if ( (byte_49FE2C7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtLimit);
    byte_49FE2C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           svtLimit,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineLimitEntity__CreatePrimaryKey(CombineLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineLimitEntity__CreatePK(this->fields.id, this->fields.svtLimit, v2);
}
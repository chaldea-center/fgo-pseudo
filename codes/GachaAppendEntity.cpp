void __fastcall GachaAppendEntity___ctor(GachaAppendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE760 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE760 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaAppendEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FE75F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FE75F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaAppendEntity__CreatePrimaryKey(GachaAppendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaAppendEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}
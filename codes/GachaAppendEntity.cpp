void __fastcall GachaAppendEntity___ctor(GachaAppendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB0D5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB0D5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaAppendEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49BB0D4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49BB0D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaAppendEntity__CreatePrimaryKey(GachaAppendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaAppendEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}
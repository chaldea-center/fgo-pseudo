void __fastcall GachaStoryAdjustEntity___ctor(GachaStoryAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB12D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB12D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaStoryAdjustEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49BB12C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49BB12C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaStoryAdjustEntity__CreatePrimaryKey(
        GachaStoryAdjustEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaStoryAdjustEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}
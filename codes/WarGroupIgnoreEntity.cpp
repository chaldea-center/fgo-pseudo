void __fastcall WarGroupIgnoreEntity___ctor(WarGroupIgnoreEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2314A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2314A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarGroupIgnoreEntity__CreatePK(
        int32_t warGroupId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4C23149 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_4C23149 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warGroupId,
           questId,
           questPhase,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarGroupIgnoreEntity__CreatePrimaryKey(
        WarGroupIgnoreEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarGroupIgnoreEntity__CreatePK(this->fields.warGroupId, this->fields.questId, this->fields.questPhase, v2);
}
void __fastcall QuestMessageEntity___ctor(QuestMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BCBB & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BCBB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall QuestMessageEntity__CheckValid(QuestMessageEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t condType; // w21
  int64_t targetNum; // x19

  if ( (byte_438BCBA & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_438BCBA = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0LL);
}


System_String_o *__fastcall QuestMessageEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_438BCB9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438BCB9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           idx,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestMessageEntity__CreatePrimaryKey(QuestMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestMessageEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.idx, v2);
}
void __fastcall QuestScriptReleaseEntity___ctor(QuestScriptReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438994F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438994F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestScriptReleaseEntity__CreatePK(
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_438994D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438994D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           scriptId,
           phase,
           id,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestScriptReleaseEntity__CreatePrimaryKey(
        QuestScriptReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptReleaseEntity__CreatePK(this->fields.scriptId, this->fields.phase, this->fields.id, v2);
}


bool __fastcall QuestScriptReleaseEntity__HasFlag(
        QuestScriptReleaseEntity_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  return (this->fields.flag & (1 << kind)) != 0;
}


bool __fastcall QuestScriptReleaseEntity__IsOpen(QuestScriptReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w21
  System_Int32_array *targetIds; // x20
  int32_t targetNum; // w19

  if ( (byte_438994E & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_438994E = 1;
  }
  condType = this->fields.condType;
  targetIds = this->fields.targetIds;
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(condType, targetIds, targetNum, 0LL);
}
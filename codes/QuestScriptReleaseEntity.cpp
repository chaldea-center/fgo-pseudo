void QuestScriptReleaseEntity___ctor(QuestScriptReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E051ED & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E051ED = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestScriptReleaseEntity__CreatePK(
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4E051EB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E051EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           scriptId,
           phase,
           id,
           (const MethodInfo_32029C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestScriptReleaseEntity__CreatePrimaryKey(QuestScriptReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptReleaseEntity__CreatePK(this->fields.scriptId, this->fields.phase, this->fields.id, v2);
}


bool QuestScriptReleaseEntity__HasFlag(QuestScriptReleaseEntity_o *this, int32_t kind, const MethodInfo *method)
{
  return ((unsigned int)this->fields.flag >> kind) & 1;
}


bool QuestScriptReleaseEntity__IsOpen(QuestScriptReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w21
  System_Int32_array *targetIds; // x20
  int32_t targetNum; // w19

  if ( (byte_4E051EC & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    byte_4E051EC = 1;
  }
  condType = this->fields.condType;
  targetIds = this->fields.targetIds;
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(condType, targetIds, targetNum, 0);
}
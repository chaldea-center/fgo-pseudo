void QuestMessageEntity___ctor(QuestMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938D2D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938D2D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


bool QuestMessageEntity__CheckValid(QuestMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t targetId; // w21
  int64_t targetNum; // x19

  if ( (byte_5938D2C & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938D2C = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0, 0);
}


System_String_o *QuestMessageEntity__CreatePK(int32_t questId, int32_t phase, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938D2B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938D2B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           idx,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestMessageEntity__CreatePrimaryKey(QuestMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestMessageEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.idx, v2);
}
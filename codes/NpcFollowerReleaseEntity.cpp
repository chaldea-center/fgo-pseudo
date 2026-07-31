void NpcFollowerReleaseEntity___ctor(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C54 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938C54 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *NpcFollowerReleaseEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_5938C52 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5938C52 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *NpcFollowerReleaseEntity__CreatePrimaryKey(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerReleaseEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


bool NpcFollowerReleaseEntity__IsEnable(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condValue; // x19

  if ( (byte_5938C53 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938C53 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0, 0);
}
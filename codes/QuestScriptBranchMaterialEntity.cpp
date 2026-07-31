void QuestScriptBranchMaterialEntity___ctor(QuestScriptBranchMaterialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E6F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938E6F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestScriptBranchMaterialEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t playType,
        const MethodInfo *method)
{
  if ( (byte_5938E6E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938E6E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           playType,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestScriptBranchMaterialEntity__CreatePrimaryKey(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptBranchMaterialEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.playType, v2);
}
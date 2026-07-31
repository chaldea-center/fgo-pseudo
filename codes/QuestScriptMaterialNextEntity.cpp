void QuestScriptMaterialNextEntity___ctor(QuestScriptMaterialNextEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E95 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938E95 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestScriptMaterialNextEntity__CreatePK(int32_t questId, int32_t nextType, const MethodInfo *method)
{
  if ( (byte_5938E94 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938E94 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           nextType,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestScriptMaterialNextEntity__CreatePrimaryKey(
        QuestScriptMaterialNextEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialNextEntity__CreatePK(this->fields.questId, this->fields.nextType, v2);
}
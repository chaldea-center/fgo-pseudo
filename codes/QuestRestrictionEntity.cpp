void QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E37 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E77E37 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_4E77E36 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E77E36 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_324D7D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestRestrictionEntity__CreatePrimaryKey(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRestrictionEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.restrictionId, v2);
}


System_String_o *QuestRestrictionEntity__GetOverwriteDialogName(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_4E77E33 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string___);
    sub_1D0F0B4(&StringLiteral_23022/*"overwriteRestrictionErrorDialogConditionName"*/);
    byte_4E77E33 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23022/*"overwriteRestrictionErrorDialogConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_323C8C0 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteRestrictionInfo(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_4E77E35 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string___);
    sub_1D0F0B4(&StringLiteral_23023/*"overwriteRestrictionInfoConditionName"*/);
    byte_4E77E35 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23023/*"overwriteRestrictionInfoConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_323C8C0 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteSlotName(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_4E77E34 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string___);
    sub_1D0F0B4(&StringLiteral_23024/*"overwriteRestrictionSlotConditionName"*/);
    byte_4E77E34 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23024/*"overwriteRestrictionSlotConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_323C8C0 *)Method_BasicHelper_GetValue_string___);
}
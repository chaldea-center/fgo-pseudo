void QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E59 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938E59 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_5938E58 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938E58 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_5938E54 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string___);
    sub_21FFC50(&StringLiteral_23674/*"overwriteRestrictionErrorDialogConditionName"*/);
    byte_5938E54 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23674/*"overwriteRestrictionErrorDialogConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteRestrictionInfo(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_5938E56 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string___);
    sub_21FFC50(&StringLiteral_23675/*"overwriteRestrictionInfoConditionName"*/);
    byte_5938E56 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23675/*"overwriteRestrictionInfoConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteSlotName(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_5938E55 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string___);
    sub_21FFC50(&StringLiteral_23676/*"overwriteRestrictionSlotConditionName"*/);
    byte_5938E55 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23676/*"overwriteRestrictionSlotConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
}


bool QuestRestrictionEntity__TryGetCommonReleaseId(
        QuestRestrictionEntity_o *this,
        int32_t *outCommonReleaseId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_5938E57 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    byte_5938E57 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18947/*"commonReleaseId"*/, 0, 0);
  *outCommonReleaseId = IntValue;
  return IntValue > 0;
}
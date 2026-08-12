void QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971017 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971017 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_5971016 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5971016 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_5971012 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&StringLiteral_23721/*"overwriteRestrictionErrorDialogConditionName"*/);
    byte_5971012 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23721/*"overwriteRestrictionErrorDialogConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteRestrictionInfo(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_5971014 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&StringLiteral_23722/*"overwriteRestrictionInfoConditionName"*/);
    byte_5971014 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23722/*"overwriteRestrictionInfoConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
}


System_String_o *QuestRestrictionEntity__GetOverwriteSlotName(
        QuestRestrictionEntity_o *this,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  if ( (byte_5971013 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string___);
    sub_2213A60(&StringLiteral_23723/*"overwriteRestrictionSlotConditionName"*/);
    byte_5971013 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_23723/*"overwriteRestrictionSlotConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_string___);
}


bool QuestRestrictionEntity__TryGetCommonReleaseId(
        QuestRestrictionEntity_o *this,
        int32_t *outCommonReleaseId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_5971015 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18985/*"commonReleaseId"*/);
    byte_5971015 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18985/*"commonReleaseId"*/, 0, 0);
  *outCommonReleaseId = IntValue;
  return IntValue > 0;
}
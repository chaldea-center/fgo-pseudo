void QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E051A5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E051A5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_4E051A4 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E051A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_32029C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4E051A3 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_string___);
    sub_1CE6700(&StringLiteral_22925/*"overwriteRestrictionErrorDialogConditionName"*/);
    byte_4E051A3 = 1;
  }
  return (System_String_o *)BasicHelper__GetValue_object_(
                              this->fields.script,
                              (System_String_o *)StringLiteral_22925/*"overwriteRestrictionErrorDialogConditionName"*/,
                              (Il2CppObject *)defaultName,
                              (const MethodInfo_31F1AB0 *)Method_BasicHelper_GetValue_string___);
}
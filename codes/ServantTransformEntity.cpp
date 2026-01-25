void ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0E4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF0E4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4CEF0E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF0E3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantTransformEntity__CreatePrimaryKey(ServantTransformEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}


System_String_o *ServantTransformEntity__GetCondLabelColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0E2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18305/*"condLabelColor"*/);
    byte_4CEF0E2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18305/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTransformEntity__GetCondSpriteColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0E1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18307/*"condSpriteColor"*/);
    byte_4CEF0E1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18307/*"condSpriteColor"*/, 0, 0);
}


int32_t ServantTransformEntity__GetUnlockTransformCommonReleaseId(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0DE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24662/*"unlockTransformCommonReleaseId"*/);
    byte_4CEF0DE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24662/*"unlockTransformCommonReleaseId"*/, 0, 0);
}


bool ServantTransformEntity__IsNotClassSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0E0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21112/*"isNotClassSkillChange"*/);
    byte_4CEF0E0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21112/*"isNotClassSkillChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0DF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21117/*"isNotSkillChange"*/);
    byte_4CEF0DF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21117/*"isNotSkillChange"*/, 0, 0) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantTransformEntity__IsUnlockTransformed(
        ServantTransformEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t UnlockTransformCommonReleaseId; // w0

  UnlockTransformCommonReleaseId = ServantTransformEntity__GetUnlockTransformCommonReleaseId(
                                     this,
                                     *(const MethodInfo **)&beforeClearQuestId);
  return !UnlockTransformCommonReleaseId
      || CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           UnlockTransformCommonReleaseId,
           beforeClearQuestId,
           0,
           0);
}
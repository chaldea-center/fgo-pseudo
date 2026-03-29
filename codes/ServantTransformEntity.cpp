void ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3145A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3145A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4D31459 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31459 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantTransformEntity__CreatePrimaryKey(ServantTransformEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}


System_String_o *ServantTransformEntity__GetCondLabelColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31458 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18355/*"condLabelColor"*/);
    byte_4D31458 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18355/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTransformEntity__GetCondSpriteColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31457 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18357/*"condSpriteColor"*/);
    byte_4D31457 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18357/*"condSpriteColor"*/, 0, 0);
}


int32_t ServantTransformEntity__GetUnlockTransformCommonReleaseId(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31453 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24731/*"unlockTransformCommonReleaseId"*/);
    byte_4D31453 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24731/*"unlockTransformCommonReleaseId"*/, 0, 0);
}


bool ServantTransformEntity__IsNotClassSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31455 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21175/*"isNotClassSkillChange"*/);
    byte_4D31455 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21175/*"isNotClassSkillChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotProfileParameterChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31456 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21179/*"isNotProfileParameterChange"*/);
    byte_4D31456 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21179/*"isNotProfileParameterChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31454 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21181/*"isNotSkillChange"*/);
    byte_4D31454 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21181/*"isNotSkillChange"*/, 0, 0) != 0;
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
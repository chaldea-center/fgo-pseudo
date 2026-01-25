void ServantSkillAddEntity___ctor(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF0B4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantSkillAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CEF0B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF0B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantSkillAddEntity__CreatePrimaryKey(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillAddEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t ServantSkillAddEntity__GetBaseSkillId(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *skillIds; // x8
  il2cpp_array_size_t max_length; // x9

  skillIds = this->fields.skillIds;
  if ( !skillIds )
    return 0;
  max_length = skillIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C7BD48(this);
  return skillIds->m_Items[0];
}


int32_t ServantSkillAddEntity__GetCondIgnoreSealedLimitCount(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0AE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18303/*"condIgnoreSealedLimitCount"*/);
    byte_4CEF0AE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18303/*"condIgnoreSealedLimitCount"*/, 0, 0);
}


System_String_o *ServantSkillAddEntity__GetCondLabelColor(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0B1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18305/*"condLabelColor"*/);
    byte_4CEF0B1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18305/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantSkillAddEntity__GetCondSpriteColor(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0B2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18307/*"condSpriteColor"*/);
    byte_4CEF0B2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18307/*"condSpriteColor"*/, 0, 0);
}


System_Int32_array *ServantSkillAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0AF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/);
    byte_4CEF0AF = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/, 0, 0);
}


int32_t ServantSkillAddEntity__GetExchangedSkillId(ServantSkillAddEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *skillIds; // x8

  skillIds = this->fields.skillIds;
  if ( skillIds && SLODWORD(skillIds->max_length) >= 2 )
    return skillIds->m_Items[1];
  else
    return 0;
}


bool ServantSkillAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantSkillAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0B0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/);
    byte_4CEF0B0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/, 0);
}


bool ServantSkillAddEntity__IsCheckCommonRelease(
        ServantSkillAddEntity_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t commonReleaseId; // w0

  commonReleaseId = this->fields.commonReleaseId;
  return !commonReleaseId
      || CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
           commonReleaseId,
           this->fields.svtId,
           dispLimitCount,
           0);
}
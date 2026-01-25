void ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF0F7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF0F7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF0F6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantTreasureDeviceAddEntity__CreatePrimaryKey(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantTreasureDeviceAddEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t ServantTreasureDeviceAddEntity__GetBaseTreasureDeviceId(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *treasureDeviceIds; // x8
  il2cpp_array_size_t max_length; // x9

  treasureDeviceIds = this->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    return 0;
  max_length = treasureDeviceIds->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C7BD48(this);
  return treasureDeviceIds->m_Items[0];
}


int32_t ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18303/*"condIgnoreSealedLimitCount"*/);
    byte_4CEF0F0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18303/*"condIgnoreSealedLimitCount"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondLabelColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18305/*"condLabelColor"*/);
    byte_4CEF0F4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18305/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18307/*"condSpriteColor"*/);
    byte_4CEF0F5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18307/*"condSpriteColor"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0EE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18759/*"dispMaskTreasureDevices"*/);
    byte_4CEF0EE = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18759/*"dispMaskTreasureDevices"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/);
    byte_4CEF0F1 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/, 0, 0);
}


int32_t ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *treasureDeviceIds; // x8

  treasureDeviceIds = this->fields.treasureDeviceIds;
  if ( treasureDeviceIds && SLODWORD(treasureDeviceIds->max_length) >= 2 )
    return treasureDeviceIds->m_Items[1];
  else
    return 0;
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0EF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19628/*"fixedCardLimitCounts"*/);
    byte_4CEF0EF = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19628/*"fixedCardLimitCounts"*/, 0, 0);
}


bool ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18305/*"condLabelColor"*/);
    sub_1C7BAE8(&StringLiteral_18307/*"condSpriteColor"*/);
    byte_4CEF0F3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18305/*"condLabelColor"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18307/*"condSpriteColor"*/, 0);
}


bool ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF0F2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/);
    byte_4CEF0F2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19123/*"enableDispOnBattleConfirmDialog"*/, 0);
}


bool ServantTreasureDeviceAddEntity__IsCheckCommonRelease(
        ServantTreasureDeviceAddEntity_o *this,
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
void ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78159 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E78159 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4E78158 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E78158 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_324D7D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1D0F314(this);
  return treasureDeviceIds->m_Items[0];
}


int32_t ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78151 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18491/*"condIgnoreSealedLimitCount"*/);
    byte_4E78151 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18491/*"condIgnoreSealedLimitCount"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondLabelColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78155 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18493/*"condLabelColor"*/);
    byte_4E78155 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18493/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78156 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18495/*"condSpriteColor"*/);
    byte_4E78156 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18495/*"condSpriteColor"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E7814F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18948/*"dispMaskTreasureDevices"*/);
    byte_4E7814F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18948/*"dispMaskTreasureDevices"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78152 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19314/*"enableDispOnBattleConfirmDialog"*/);
    byte_4E78152 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19314/*"enableDispOnBattleConfirmDialog"*/, 0, 0);
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
  if ( (byte_4E78150 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19824/*"fixedCardLimitCounts"*/);
    byte_4E78150 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19824/*"fixedCardLimitCounts"*/, 0, 0);
}


void ServantTreasureDeviceAddEntity__GetMaskInfo(
        ServantTreasureDeviceAddEntity_o *this,
        int32_t index,
        bool *maskFlag,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v12; // x1
  System_Int32_array *DispMaskTreasureDevices; // x23
  _BOOL8 IsValidIndex_int; // x0
  __int64 v15; // x1
  _BOOL4 v16; // w8
  struct System_String_array *closedMessages; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *v24; // x1

  if ( (byte_4E78157 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IsValidIndex_int___);
    sub_1D0F0B4(&Method_BasicHelper_IsValidIndex_string___);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E78157 = 1;
  }
  *maskFlag = 0;
  *closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)closedMessage,
    StringLiteral_1/*""*/,
    (int32_t)maskFlag,
    (int32_t)closedMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  DispMaskTreasureDevices = ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(this, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DispMaskTreasureDevices, 0)
    || !(IsValidIndex_int = BasicHelper__IsValidIndex_int_(
                              DispMaskTreasureDevices,
                              index,
                              (const MethodInfo_323D838 *)Method_BasicHelper_IsValidIndex_int___)) )
  {
    if ( !*maskFlag )
      return;
  }
  else
  {
    if ( !DispMaskTreasureDevices )
      goto LABEL_16;
    if ( LODWORD(DispMaskTreasureDevices->max_length) <= index )
      goto LABEL_17;
    v16 = DispMaskTreasureDevices->m_Items[index] != 0;
    *maskFlag = v16;
    if ( !v16 )
      return;
  }
  closedMessages = this->fields.closedMessages;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)closedMessages, 0) )
  {
    IsValidIndex_int = BasicHelper__IsValidIndex_object__52680860(
                         (System_Object_array *)closedMessages,
                         index,
                         (const MethodInfo_323D89C *)Method_BasicHelper_IsValidIndex_string___);
    if ( IsValidIndex_int )
    {
      if ( closedMessages )
      {
        if ( LODWORD(closedMessages->max_length) > index )
        {
          v24 = closedMessages->m_Items[index];
          *closedMessage = v24;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)closedMessage, (int32_t)v24, v18, v19, v20, v21, v22, v23);
          return;
        }
LABEL_17:
        sub_1D0F314(IsValidIndex_int);
      }
LABEL_16:
      sub_1D0F30C(IsValidIndex_int, v15);
    }
  }
}


bool ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78154 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18493/*"condLabelColor"*/);
    sub_1D0F0B4(&StringLiteral_18495/*"condSpriteColor"*/);
    byte_4E78154 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18493/*"condLabelColor"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18495/*"condSpriteColor"*/, 0);
}


bool ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E78153 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19314/*"enableDispOnBattleConfirmDialog"*/);
    byte_4E78153 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19314/*"enableDispOnBattleConfirmDialog"*/, 0);
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
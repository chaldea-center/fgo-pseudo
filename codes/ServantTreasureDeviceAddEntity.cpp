void ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3146E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3146E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4D3146D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D3146D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1C93D34(this);
  return treasureDeviceIds->m_Items[0];
}


int32_t ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31466 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18353/*"condIgnoreSealedLimitCount"*/);
    byte_4D31466 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18353/*"condIgnoreSealedLimitCount"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondLabelColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3146A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18355/*"condLabelColor"*/);
    byte_4D3146A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18355/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3146B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18357/*"condSpriteColor"*/);
    byte_4D3146B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18357/*"condSpriteColor"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31464 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18809/*"dispMaskTreasureDevices"*/);
    byte_4D31464 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18809/*"dispMaskTreasureDevices"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31467 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19174/*"enableDispOnBattleConfirmDialog"*/);
    byte_4D31467 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19174/*"enableDispOnBattleConfirmDialog"*/, 0, 0);
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
  if ( (byte_4D31465 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19681/*"fixedCardLimitCounts"*/);
    byte_4D31465 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19681/*"fixedCardLimitCounts"*/, 0, 0);
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

  if ( (byte_4D3146C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_int___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_string___);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3146C = 1;
  }
  *maskFlag = 0;
  *closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
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
                              (const MethodInfo_31930C4 *)Method_BasicHelper_IsValidIndex_int___)) )
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
    IsValidIndex_int = BasicHelper__IsValidIndex_object__51982632(
                         (System_Object_array *)closedMessages,
                         index,
                         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_string___);
    if ( IsValidIndex_int )
    {
      if ( closedMessages )
      {
        if ( LODWORD(closedMessages->max_length) > index )
        {
          v24 = closedMessages->m_Items[index];
          *closedMessage = v24;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)closedMessage, (int32_t)v24, v18, v19, v20, v21, v22, v23);
          return;
        }
LABEL_17:
        sub_1C93D34(IsValidIndex_int);
      }
LABEL_16:
      sub_1C93D2C(IsValidIndex_int, v15);
    }
  }
}


bool ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31469 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18355/*"condLabelColor"*/);
    sub_1C93AD4(&StringLiteral_18357/*"condSpriteColor"*/);
    byte_4D31469 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18355/*"condLabelColor"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18357/*"condSpriteColor"*/, 0);
}


bool ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31468 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19174/*"enableDispOnBattleConfirmDialog"*/);
    byte_4D31468 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19174/*"enableDispOnBattleConfirmDialog"*/, 0);
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
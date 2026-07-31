void ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939175 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939175 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5939174 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939174 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_21FFED4(this);
  return treasureDeviceIds->m_Items[0];
}


int32_t ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593916D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18978/*"condIgnoreSealedLimitCount"*/);
    byte_593916D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18978/*"condIgnoreSealedLimitCount"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondLabelColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939171 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18980/*"condLabelColor"*/);
    byte_5939171 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18980/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTreasureDeviceAddEntity__GetCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939172 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18982/*"condSpriteColor"*/);
    byte_5939172 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18982/*"condSpriteColor"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593916B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19453/*"dispMaskTreasureDevices"*/);
    byte_593916B = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19453/*"dispMaskTreasureDevices"*/, 0, 0);
}


System_Int32_array *ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593916E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19827/*"enableDispOnBattleConfirmDialog"*/);
    byte_593916E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19827/*"enableDispOnBattleConfirmDialog"*/, 0, 0);
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
  if ( (byte_593916C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20343/*"fixedCardLimitCounts"*/);
    byte_593916C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20343/*"fixedCardLimitCounts"*/, 0, 0);
}


void ServantTreasureDeviceAddEntity__GetMaskInfo(
        ServantTreasureDeviceAddEntity_o *this,
        int32_t index,
        bool *maskFlag,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v12; // w1
  const MethodInfo *v13; // x1
  System_Int32_array *DispMaskTreasureDevices; // x23
  _BOOL8 IsValidIndex_int; // x0
  __int64 v16; // x1
  _BOOL4 v17; // w8
  struct System_String_array *closedMessages; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x1

  if ( (byte_5939173 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IsValidIndex_int___);
    sub_21FFC50(&Method_BasicHelper_IsValidIndex_string___);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939173 = 1;
  }
  *maskFlag = 0;
  v12 = (int)StringLiteral_1/*""*/;
  *closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)closedMessage,
    v12,
    (System_String_o *)maskFlag,
    (System_String_o *)closedMessage,
    (int32_t)method,
    v5,
    v6,
    v7);
  DispMaskTreasureDevices = ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(this, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DispMaskTreasureDevices, 0)
    || !(IsValidIndex_int = BasicHelper__IsValidIndex_int_(
                              DispMaskTreasureDevices,
                              index,
                              (const MethodInfo_37E1BBC *)Method_BasicHelper_IsValidIndex_int___)) )
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
    v17 = DispMaskTreasureDevices->m_Items[index] != 0;
    *maskFlag = v17;
    if ( !v17 )
      return;
  }
  closedMessages = this->fields.closedMessages;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)closedMessages, 0) )
  {
    IsValidIndex_int = BasicHelper__IsValidIndex_object__58596384(
                         (System_Object_array *)closedMessages,
                         index,
                         (const MethodInfo_37E1C20 *)Method_BasicHelper_IsValidIndex_string___);
    if ( IsValidIndex_int )
    {
      if ( closedMessages )
      {
        if ( LODWORD(closedMessages->max_length) > index )
        {
          v25 = closedMessages->m_Items[index];
          *closedMessage = v25;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)closedMessage, (int32_t)v25, v19, v20, v21, v22, v23, v24);
          return;
        }
LABEL_17:
        sub_21FFED4(IsValidIndex_int);
      }
LABEL_16:
      sub_21FFECC(IsValidIndex_int, v16);
    }
  }
}


bool ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939170 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18980/*"condLabelColor"*/);
    sub_21FFC50(&StringLiteral_18982/*"condSpriteColor"*/);
    byte_5939170 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18980/*"condLabelColor"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18982/*"condSpriteColor"*/, 0);
}


bool ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593916F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19827/*"enableDispOnBattleConfirmDialog"*/);
    byte_593916F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19827/*"enableDispOnBattleConfirmDialog"*/, 0);
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
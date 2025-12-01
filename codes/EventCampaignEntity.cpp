void EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC72D8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *targetIds; // x1
  struct System_Int32_array *warIds; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_o *entryCondMessage; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Int32_array *warGroupIds; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  if ( (byte_4CC72CE & 1) == 0 )
  {
    sub_1C713B0(&EventCampaignEntity_TypeInfo);
    byte_4CC72CE = 1;
  }
  v3 = sub_1C715FC(EventCampaignEntity_TypeInfo);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v3, v4);
  if ( !v3 )
    sub_1C71608(v5, v6);
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.eventId;
  *(_DWORD *)(v3 + 32) = this->fields.priority;
  targetIds = this->fields.targetIds;
  *(_QWORD *)(v3 + 40) = targetIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)targetIds, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)&this->fields.value;
  warIds = this->fields.warIds;
  *(_QWORD *)(v3 + 56) = warIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)warIds, v15, v16, v17, v18, v19, v20);
  entryCondMessage = this->fields.entryCondMessage;
  *(_QWORD *)(v3 + 64) = entryCondMessage;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 64), (int32_t)entryCondMessage, v22, v23, v24, v25, v26, v27);
  warGroupIds = this->fields.warGroupIds;
  *(_QWORD *)(v3 + 72) = warGroupIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 72), (int32_t)warGroupIds, v29, v30, v31, v32, v33, v34);
  script = this->fields.script;
  *(_QWORD *)(v3 + 80) = script;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 80), (int32_t)script, v36, v37, v38, v39, v40, v41);
  return (EventCampaignEntity_o *)v3;
}


System_String_o *EventCampaignEntity__CreatePK(int32_t eventId, int32_t target, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CC72D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC72D7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventCampaignEntity__CreatePrimaryKey(EventCampaignEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


System_String_o *EventCampaignEntity__GetAddPassiveContentDetail(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72D4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16690/*"addPassiveContentDetail"*/);
    byte_4CC72D4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16690/*"addPassiveContentDetail"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveContentOrganization(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC72D3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16691/*"addPassiveContentOrganization"*/);
    byte_4CC72D3 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16691/*"addPassiveContentOrganization"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveDescriptionDetail(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC72D5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16692/*"addPassiveDescriptionDetail"*/);
    byte_4CC72D5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16692/*"addPassiveDescriptionDetail"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveIconOrganization(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC72D2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16693/*"addPassiveIconOrganization"*/);
    byte_4CC72D2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16693/*"addPassiveIconOrganization"*/, 0, 0);
}


int32_t EventCampaignEntity__GetAddPassiveSkillId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72D6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16694/*"addPassiveSkillId"*/);
    byte_4CC72D6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16694/*"addPassiveSkillId"*/, 0, 0);
}


int32_t EventCampaignEntity__GetFriendshipBonusValue(EventCampaignEntity_o *this, const MethodInfo *method)
{
  int32_t calcType; // w8
  int32_t value; // w8
  bool v5; // vf
  int32_t v6; // w8

  calcType = this->fields.calcType;
  if ( calcType == 2 )
  {
    value = this->fields.value;
    v5 = __OFSUB__(value, 1000);
    v6 = value - 1000;
    if ( (v6 < 0) ^ v5 | (v6 == 0) )
      return 0;
    else
      return v6;
  }
  else if ( calcType == 1 )
  {
    return this->fields.value;
  }
  else
  {
    return 0;
  }
}


int32_t EventCampaignEntity__GetFriendshipDispBonusValue(EventCampaignEntity_o *this, const MethodInfo *method)
{
  int32_t calcType; // w8
  int32_t result; // w0
  int32_t value; // w8

  calcType = this->fields.calcType;
  if ( calcType != 2 )
  {
    if ( calcType == 1 )
    {
      result = this->fields.value;
      goto LABEL_6;
    }
    return 0;
  }
  value = this->fields.value;
  if ( value < 1001 )
    return 0;
  result = value - 1000;
LABEL_6:
  if ( result >= 1 )
    return result / 0xAu;
  return result;
}


int32_t EventCampaignEntity__GetOnlyMaxFuncGroupId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72D0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10001/*"OnlyMaxFuncGroupId"*/);
    byte_4CC72D0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_10001/*"OnlyMaxFuncGroupId"*/, 0, 0);
}


bool EventCampaignEntity__IsNotDispEntryCondMessage(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72CF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21014/*"isNotDispEntryCondMessage"*/);
    byte_4CC72CF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21014/*"isNotDispEntryCondMessage"*/, 0, 0) > 0;
}


bool EventCampaignEntity__IsShowBoardMessageOnWarGroupId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC72D1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23595/*"showBoardMessageOnWarGroupId"*/);
    byte_4CC72D1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23595/*"showBoardMessageOnWarGroupId"*/, 0, 0) > 0;
}


int32_t EventCampaignEntity__getCalcType(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.calcType;
}


int32_t EventCampaignEntity__getEventId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t EventCampaignEntity__getTarget(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.target;
}


int32_t EventCampaignEntity__getValue(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}


bool EventCampaignEntity__isDispWarId(EventCampaignEntity_o *this, int32_t warId, const MethodInfo *method)
{
  struct System_Int32_array *warIds; // x8
  int max_length; // w9
  bool v5; // w10
  int i; // w11

  warIds = this->fields.warIds;
  if ( !warIds )
    sub_1C71608(this, warId);
  max_length = warIds->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C71610(this);
      if ( warIds->m_Items[i] == warId )
        break;
      ++i;
    }
  }
  return v5;
}
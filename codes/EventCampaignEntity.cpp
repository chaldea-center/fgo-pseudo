void EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597071B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597071B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *targetIds; // x1
  int32_t priority; // w8
  struct System_Int32_array *warIds; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *entryCondMessage; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Int32_array *warGroupIds; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5970711 & 1) == 0 )
  {
    sub_2213A60(&EventCampaignEntity_TypeInfo);
    byte_5970711 = 1;
  }
  v3 = sub_2213CCC(EventCampaignEntity_TypeInfo);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v3, v4);
  if ( !v3 )
    sub_2213CDC(v5, v6);
  targetIds = this->fields.targetIds;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.eventId;
  priority = this->fields.priority;
  *(_QWORD *)(v3 + 40) = targetIds;
  *(_DWORD *)(v3 + 32) = priority;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)targetIds, v7, v8, v9, v10, v11, v12);
  warIds = this->fields.warIds;
  *(_QWORD *)(v3 + 48) = *(_QWORD *)&this->fields.value;
  *(_QWORD *)(v3 + 56) = warIds;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)warIds, v16, v17, v18, v19, v20, v21);
  entryCondMessage = this->fields.entryCondMessage;
  *(_QWORD *)(v3 + 64) = entryCondMessage;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 64), (int32_t)entryCondMessage, v23, v24, v25, v26, v27, v28);
  warGroupIds = this->fields.warGroupIds;
  *(_QWORD *)(v3 + 72) = warGroupIds;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 72), (int32_t)warGroupIds, v30, v31, v32, v33, v34, v35);
  script = this->fields.script;
  *(_QWORD *)(v3 + 80) = script;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 80), (int32_t)script, v37, v38, v39, v40, v41, v42);
  return (EventCampaignEntity_o *)v3;
}


System_String_o *EventCampaignEntity__CreatePK(int32_t eventId, int32_t target, int32_t idx, const MethodInfo *method)
{
  if ( (byte_597071A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_597071A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventCampaignEntity__CreatePrimaryKey(EventCampaignEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


System_String_o *EventCampaignEntity__GetAddPassiveContentDetail(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970717 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17365/*"addPassiveContentDetail"*/);
    byte_5970717 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17365/*"addPassiveContentDetail"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveContentOrganization(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970716 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17366/*"addPassiveContentOrganization"*/);
    byte_5970716 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17366/*"addPassiveContentOrganization"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveDescriptionDetail(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970718 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17367/*"addPassiveDescriptionDetail"*/);
    byte_5970718 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17367/*"addPassiveDescriptionDetail"*/, 0, 0);
}


System_String_o *EventCampaignEntity__GetAddPassiveIconOrganization(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970715 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17368/*"addPassiveIconOrganization"*/);
    byte_5970715 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17368/*"addPassiveIconOrganization"*/, 0, 0);
}


int32_t EventCampaignEntity__GetAddPassiveSkillId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970719 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17369/*"addPassiveSkillId"*/);
    byte_5970719 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17369/*"addPassiveSkillId"*/, 0, 0);
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
  int32_t value; // w8
  int32_t result; // w0

  calcType = this->fields.calcType;
  if ( calcType != 1 )
  {
    if ( calcType != 2 )
      return 0;
    value = this->fields.value;
    result = value - 1000;
    if ( value <= 1000 )
      return 0;
    return result / 0xAu;
  }
  result = this->fields.value;
  if ( result >= 1 )
    return result / 0xAu;
  return result;
}


int32_t EventCampaignEntity__GetOnlyMaxFuncGroupId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970713 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10403/*"OnlyMaxFuncGroupId"*/);
    byte_5970713 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/, 0, 0);
}


bool EventCampaignEntity__IsNotDispEntryCondMessage(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970712 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21954/*"isNotDispEntryCondMessage"*/);
    byte_5970712 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21954/*"isNotDispEntryCondMessage"*/, 0, 0) > 0;
}


bool EventCampaignEntity__IsShowBoardMessageOnWarGroupId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970714 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24718/*"showBoardMessageOnWarGroupId"*/);
    byte_5970714 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24718/*"showBoardMessageOnWarGroupId"*/, 0, 0) > 0;
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


// local variable allocation has failed, the output may be wrong!
bool EventCampaignEntity__isDispWarId(EventCampaignEntity_o *this, int32_t warId, const MethodInfo *method)
{
  struct System_Int32_array *warIds; // x9
  int max_length; // w8
  int v5; // w10

  warIds = this->fields.warIds;
  if ( !warIds )
    sub_2213CDC(this, *(_QWORD *)&warId);
  max_length = warIds->max_length;
  if ( max_length < 1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    do
    {
      if ( max_length == v5 )
        sub_2213CE4(this);
      if ( warIds->m_Items[v5] == warId )
        break;
      ++v5;
    }
    while ( (max_length & ~(max_length >> 31)) != v5 );
  }
  return v5 < max_length;
}
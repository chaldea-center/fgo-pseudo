void __fastcall EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B160EB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *__fastcall EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array *targetIds; // x1
  struct System_Int32_array *warIds; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_String_o *entryCondMessage; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B160E9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, method, v2);
    byte_4B160E9 = 1;
  }
  v5 = sub_1BCAA2C(EventCampaignEntity_TypeInfo, method, v2, v3);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v5, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&this->fields.eventId;
  *(_DWORD *)(v5 + 32) = this->fields.priority;
  targetIds = this->fields.targetIds;
  *(_QWORD *)(v5 + 40) = targetIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)targetIds, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v5 + 48) = *(_QWORD *)&this->fields.value;
  warIds = this->fields.warIds;
  *(_QWORD *)(v5 + 56) = warIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)warIds, v17, v18, v19, v20, v21, v22);
  entryCondMessage = this->fields.entryCondMessage;
  *(_QWORD *)(v5 + 64) = entryCondMessage;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)entryCondMessage, v24, v25, v26, v27, v28, v29);
  return (EventCampaignEntity_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B160EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target, *(_QWORD *)&idx);
    byte_4B160EA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCampaignEntity__CreatePrimaryKey(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


int32_t __fastcall EventCampaignEntity__GetFriendshipBonusValue(EventCampaignEntity_o *this, const MethodInfo *method)
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


int32_t __fastcall EventCampaignEntity__GetFriendshipDispBonusValue(
        EventCampaignEntity_o *this,
        const MethodInfo *method)
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


int32_t __fastcall EventCampaignEntity__getCalcType(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.calcType;
}


int32_t __fastcall EventCampaignEntity__getEventId(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventCampaignEntity__getTarget(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.target;
}


int32_t __fastcall EventCampaignEntity__getValue(EventCampaignEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignEntity__isDispWarId(EventCampaignEntity_o *this, int32_t warId, const MethodInfo *method)
{
  struct System_Int32_array *warIds; // x8
  int max_length; // w9
  bool v5; // w10
  int i; // w11

  warIds = this->fields.warIds;
  if ( !warIds )
    sub_1BCAA3C(this, *(_QWORD *)&warId);
  max_length = warIds->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BCAA44(this, warId);
      if ( warIds->m_Items[i + 1] == warId )
        break;
      ++i;
    }
  }
  return v5;
}
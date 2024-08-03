void __fastcall EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC310 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC310 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *__fastcall EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *targetIds; // x1
  struct System_Int32_array *warIds; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_o *entryCondMessage; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FC30E & 1) == 0 )
  {
    sub_1B640C8(&EventCampaignEntity_TypeInfo, method);
    byte_49FC30E = 1;
  }
  v4 = sub_1B64314(EventCampaignEntity_TypeInfo, method, v2);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v4, v5);
  if ( !v4 )
    sub_1B64324(v6);
  *(_OWORD *)(v4 + 16) = *(_OWORD *)&this->fields.eventId;
  *(_DWORD *)(v4 + 32) = this->fields.priority;
  targetIds = this->fields.targetIds;
  *(_QWORD *)(v4 + 40) = targetIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)targetIds, v7, v8);
  *(_QWORD *)(v4 + 48) = *(_QWORD *)&this->fields.value;
  warIds = this->fields.warIds;
  *(_QWORD *)(v4 + 56) = warIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 56), (int32_t)warIds, v11, v12);
  entryCondMessage = this->fields.entryCondMessage;
  *(_QWORD *)(v4 + 64) = entryCondMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)entryCondMessage, v14, v15);
  return (EventCampaignEntity_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_49FC30F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_49FC30F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1B64324(this);
  max_length = warIds->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1B6432C(this, *(_QWORD *)&warId);
      if ( warIds->m_Items[i + 1] == warId )
        break;
      ++i;
    }
  }
  return v5;
}
void __fastcall EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216EC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216EC1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *__fastcall EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **targetIds; // x1
  System_Int32_array **warIds; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **entryCondMessage; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4216EBF & 1) == 0 )
  {
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, method);
    byte_4216EBF = 1;
  }
  v4 = sub_B0D974(EventCampaignEntity_TypeInfo, method, v2);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v4, v5);
  if ( !v4 )
    sub_B0D97C(v6);
  *(_DWORD *)(v4 + 16) = this->fields.eventId;
  *(_DWORD *)(v4 + 20) = this->fields.target;
  *(_DWORD *)(v4 + 24) = this->fields.idx;
  *(_DWORD *)(v4 + 28) = this->fields.groupId;
  *(_DWORD *)(v4 + 32) = this->fields.priority;
  targetIds = (System_Int32_array **)this->fields.targetIds;
  *(_QWORD *)(v4 + 40) = targetIds;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), targetIds, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v4 + 48) = this->fields.value;
  *(_DWORD *)(v4 + 52) = this->fields.calcType;
  warIds = (System_Int32_array **)this->fields.warIds;
  *(_QWORD *)(v4 + 56) = warIds;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 56), warIds, v15, v16, v17, v18, v19, v20);
  entryCondMessage = (System_Int32_array **)this->fields.entryCondMessage;
  *(_QWORD *)(v4 + 64) = entryCondMessage;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 64), entryCondMessage, v22, v23, v24, v25, v26, v27);
  return (EventCampaignEntity_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4216EC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4216EC0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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


bool __fastcall EventCampaignEntity__isDispWarId(EventCampaignEntity_o *this, int32_t warId, const MethodInfo *method)
{
  struct System_Int32_array *warIds; // x8
  int max_length; // w9
  unsigned int v5; // w10
  __int64 v7; // x0

  warIds = this->fields.warIds;
  if ( !warIds )
    sub_B0D97C(this);
  max_length = warIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
    }
    if ( warIds->m_Items[v5 + 1] == warId )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}
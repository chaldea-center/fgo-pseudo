void __fastcall EventCampaignEntity___ctor(EventCampaignEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB122 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB122 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


EventCampaignEntity_o *__fastcall EventCampaignEntity__Clone(EventCampaignEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **targetIds; // x1
  System_Int32_array **warIds; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **entryCondMessage; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EB120 & 1) == 0 )
  {
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB120 = 1;
  }
  v5 = sub_B5D694(EventCampaignEntity_TypeInfo);
  EventCampaignEntity___ctor((EventCampaignEntity_o *)v5, v6);
  if ( !v5 )
    sub_B5D69C(v7, v8);
  *(_DWORD *)(v5 + 16) = this->fields.eventId;
  *(_DWORD *)(v5 + 20) = this->fields.target;
  *(_DWORD *)(v5 + 24) = this->fields.idx;
  *(_DWORD *)(v5 + 28) = this->fields.groupId;
  *(_DWORD *)(v5 + 32) = this->fields.priority;
  targetIds = (System_Int32_array **)this->fields.targetIds;
  *(_QWORD *)(v5 + 40) = targetIds;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v5 + 48) = this->fields.value;
  *(_DWORD *)(v5 + 52) = this->fields.calcType;
  warIds = (System_Int32_array **)this->fields.warIds;
  *(_QWORD *)(v5 + 56) = warIds;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 56), warIds, v17, v18, v19, v20, v21, v22);
  entryCondMessage = (System_Int32_array **)this->fields.entryCondMessage;
  *(_QWORD *)(v5 + 64) = entryCondMessage;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 64), entryCondMessage, v24, v25, v26, v27, v28, v29);
  return (EventCampaignEntity_o *)v5;
}


System_String_o *__fastcall EventCampaignEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42EB121 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, target, idx, method);
    byte_42EB121 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_B5D69C(this, warId);
  max_length = warIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
    }
    if ( warIds->m_Items[v5 + 1] == warId )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}
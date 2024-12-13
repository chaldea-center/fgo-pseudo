void __fastcall EventMissionActionInfo___ctor(
        EventMissionActionInfo_o *this,
        EventMissionActionEntity_o *eventMissionActionEntity,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_String_array *vals; // x1
  struct System_String_array **p_vals; // x20

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( eventMissionActionEntity )
  {
    *(int32x4_t *)&this->fields.id = vuzp2q_s32(
                                       vextq_s8(
                                         *(int8x16_t *)&eventMissionActionEntity->fields.missionId,
                                         *(int8x16_t *)&eventMissionActionEntity->fields.missionId,
                                         4uLL),
                                       *(int32x4_t *)&eventMissionActionEntity->fields.missionId);
    vals = eventMissionActionEntity->fields.vals;
    this->fields.vals = vals;
    p_vals = &this->fields.vals;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_vals, (int64_t)vals, v5, v6, v7, v8, v9, v10);
    *((_DWORD *)p_vals + 2) = eventMissionActionEntity->fields.optionId;
  }
}


void __fastcall EventMissionActionInfo___ctor_42919712(
        EventMissionActionInfo_o *this,
        EventMissionActionAddEntity_o *eventMissionActionAddEntity,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_String_array *vals; // x1
  struct System_String_array **p_vals; // x20

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( eventMissionActionAddEntity )
  {
    this->fields.id = eventMissionActionAddEntity->fields.id;
    *(_QWORD *)&this->fields.missionId = *(_QWORD *)&eventMissionActionAddEntity->fields.missionId;
    this->fields.missionActionType = eventMissionActionAddEntity->fields.missionActionType;
    vals = eventMissionActionAddEntity->fields.vals;
    this->fields.vals = vals;
    p_vals = &this->fields.vals;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_vals, (int64_t)vals, v5, v6, v7, v8, v9, v10);
    *((_DWORD *)p_vals + 2) = eventMissionActionAddEntity->fields.optionId;
  }
}


int32_t __fastcall EventMissionActionInfo__getValID(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  struct System_String_array *vals; // x9
  __int64 v3; // x10
  int32_t v5; // w0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  vals = this->fields.vals;
  if ( !vals )
    return -1;
  v3 = *(_QWORD *)&vals->max_length;
  v5 = -1;
  if ( v3 )
  {
    result = -1;
    if ( this->fields.missionActionType == 3 )
    {
      if ( !(_DWORD)v3 )
        sub_1BD36BC(0xFFFFFFFFLL, method);
      if ( System_Int32__TryParse(vals->m_Items[0], &result, 0LL) )
        return result;
      else
        return -1;
    }
  }
  return v5;
}


System_String_o *__fastcall EventMissionActionInfo__getValMessage(
        EventMissionActionInfo_o *this,
        const MethodInfo *method)
{
  EventMissionActionInfo_o *v2; // x19
  struct System_String_array *vals; // x8
  __int64 v4; // x9
  System_String_o **m_Items; // x8

  v2 = this;
  if ( (byte_4B39193 & 1) == 0 )
  {
    this = (EventMissionActionInfo_o *)sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B39193 = 1;
  }
  vals = v2->fields.vals;
  if ( vals && (v4 = *(_QWORD *)&vals->max_length) != 0 && (unsigned int)(v2->fields.missionActionType - 1) <= 1 )
  {
    if ( !(_DWORD)v4 )
      sub_1BD36BC(this, method);
    m_Items = vals->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_String_array *__fastcall EventMissionActionInfo__getVoiceIds(
        EventMissionActionInfo_o *this,
        const MethodInfo *method)
{
  struct System_String_array *vals; // x8

  vals = this->fields.vals;
  if ( !vals )
    return 0LL;
  if ( *(_QWORD *)&vals->max_length )
    return this->fields.vals;
  return 0LL;
}
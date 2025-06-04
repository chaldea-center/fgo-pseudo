void __fastcall EventMissionActionInfo___ctor(
        EventMissionActionInfo_o *this,
        EventMissionActionEntity_o *eventMissionActionEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
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
    sub_1BC2FAC((CGThumbnailListItem_o *)p_vals, (int32_t)vals, v5, v6);
    *((_DWORD *)p_vals + 2) = eventMissionActionEntity->fields.optionId;
  }
}


void __fastcall EventMissionActionInfo___ctor_43872792(
        EventMissionActionInfo_o *this,
        EventMissionActionAddEntity_o *eventMissionActionAddEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
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
    sub_1BC2FAC((CGThumbnailListItem_o *)p_vals, (int32_t)vals, v5, v6);
    *((_DWORD *)p_vals + 2) = eventMissionActionAddEntity->fields.optionId;
  }
}


int32_t __fastcall EventMissionActionInfo__getValID(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_array *vals; // x9
  __int64 v4; // x10
  int32_t v6; // w0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  vals = this->fields.vals;
  if ( !vals )
    return -1;
  v4 = *(_QWORD *)&vals->max_length;
  v6 = -1;
  if ( v4 )
  {
    result = -1;
    if ( this->fields.missionActionType == 3 )
    {
      if ( !(_DWORD)v4 )
        sub_1BC326C(0xFFFFFFFFLL, method, v2);
      if ( System_Int32__TryParse(vals->m_Items[0], &result, 0LL) )
        return result;
      else
        return -1;
    }
  }
  return v6;
}


System_String_o *__fastcall EventMissionActionInfo__getValMessage(
        EventMissionActionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionActionInfo_o *v3; // x19
  struct System_String_array *vals; // x8
  __int64 v5; // x9
  System_String_o **m_Items; // x8

  v3 = this;
  if ( (byte_4B04021 & 1) == 0 )
  {
    this = (EventMissionActionInfo_o *)sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B04021 = 1;
  }
  vals = v3->fields.vals;
  if ( vals && (v5 = *(_QWORD *)&vals->max_length) != 0 && (unsigned int)(v3->fields.missionActionType - 1) <= 1 )
  {
    if ( !(_DWORD)v5 )
      sub_1BC326C(this, method, v2);
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
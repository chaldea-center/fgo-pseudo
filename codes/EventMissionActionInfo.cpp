void EventMissionActionInfo___ctor(
        EventMissionActionInfo_o *this,
        EventMissionActionEntity_o *eventMissionActionEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_String_array *vals; // x1
  struct System_String_array **p_vals; // x20

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventMissionActionEntity )
  {
    *(int32x4_t *)&this->fields.id = vuzp2q_s32(
                                       vextq_s8(
                                         *(int8x16_t *)&eventMissionActionEntity->fields.missionId,
                                         *(int8x16_t *)&eventMissionActionEntity->fields.missionId,
                                         4u),
                                       *(int32x4_t *)&eventMissionActionEntity->fields.missionId);
    vals = eventMissionActionEntity->fields.vals;
    this->fields.vals = vals;
    p_vals = &this->fields.vals;
    sub_1C2D434((CGThumbnailListItem_o *)p_vals, (int32_t)vals, v5, v6);
    *((_DWORD *)p_vals + 2) = eventMissionActionEntity->fields.optionId;
  }
}


void EventMissionActionInfo___ctor_44517668(
        EventMissionActionInfo_o *this,
        EventMissionActionAddEntity_o *eventMissionActionAddEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_String_array *vals; // x1
  struct System_String_array **p_vals; // x20

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventMissionActionAddEntity )
  {
    this->fields.id = eventMissionActionAddEntity->fields.id;
    *(_QWORD *)&this->fields.missionId = *(_QWORD *)&eventMissionActionAddEntity->fields.missionId;
    this->fields.missionActionType = eventMissionActionAddEntity->fields.missionActionType;
    vals = eventMissionActionAddEntity->fields.vals;
    this->fields.vals = vals;
    p_vals = &this->fields.vals;
    sub_1C2D434((CGThumbnailListItem_o *)p_vals, (int32_t)vals, v5, v6);
    *((_DWORD *)p_vals + 2) = eventMissionActionAddEntity->fields.optionId;
  }
}


int32_t EventMissionActionInfo__getValID(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_array *vals; // x9
  il2cpp_array_size_t max_length; // x10
  int32_t v6; // w0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  vals = this->fields.vals;
  if ( !vals )
    return -1;
  max_length = vals->max_length;
  v6 = -1;
  if ( max_length )
  {
    result = -1;
    if ( this->fields.missionActionType == 3 )
    {
      if ( !(_DWORD)max_length )
        sub_1C2D6F4(0xFFFFFFFFLL, method, v2);
      if ( System_Int32__TryParse(vals->m_Items[0], &result, 0) )
        return result;
      else
        return -1;
    }
  }
  return v6;
}


System_String_o *EventMissionActionInfo__getValMessage(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionActionInfo_o *v3; // x19
  struct System_String_array *vals; // x8
  il2cpp_array_size_t max_length; // x9
  System_String_o **m_Items; // x8

  v3 = this;
  if ( (byte_4C291AD & 1) == 0 )
  {
    this = (EventMissionActionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C291AD = 1;
  }
  vals = v3->fields.vals;
  if ( vals && (max_length = vals->max_length) != 0 && (unsigned int)(v3->fields.missionActionType - 1) <= 1 )
  {
    if ( !(_DWORD)max_length )
      sub_1C2D6F4(this, method, v2);
    m_Items = vals->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_String_array *EventMissionActionInfo__getVoiceIds(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  struct System_String_array *vals; // x8

  vals = this->fields.vals;
  if ( !vals )
    return 0;
  if ( vals->max_length )
    return this->fields.vals;
  return 0;
}
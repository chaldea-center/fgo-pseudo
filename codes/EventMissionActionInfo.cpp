void __fastcall EventMissionActionInfo___ctor(
        EventMissionActionInfo_o *this,
        EventMissionActionEntity_o *eventMissionActionEntity,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *vals; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( eventMissionActionEntity )
  {
    this->fields.id = eventMissionActionEntity->fields.id;
    this->fields.missionId = eventMissionActionEntity->fields.missionId;
    this->fields.missionProgressType = eventMissionActionEntity->fields.missionProgressType;
    this->fields.missionActionType = eventMissionActionEntity->fields.missionActionType;
    vals = eventMissionActionEntity->fields.vals;
    this->fields.vals = vals;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.vals, (System_Int32_array **)vals, v5, v6, v7, v8, v9, v10);
    this->fields.optionId = eventMissionActionEntity->fields.optionId;
  }
}


void __fastcall EventMissionActionInfo___ctor_22515852(
        EventMissionActionInfo_o *this,
        EventMissionActionAddEntity_o *eventMissionActionAddEntity,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *vals; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( eventMissionActionAddEntity )
  {
    this->fields.id = eventMissionActionAddEntity->fields.id;
    this->fields.missionId = eventMissionActionAddEntity->fields.missionId;
    this->fields.missionProgressType = eventMissionActionAddEntity->fields.missionProgressType;
    this->fields.missionActionType = eventMissionActionAddEntity->fields.missionActionType;
    vals = eventMissionActionAddEntity->fields.vals;
    this->fields.vals = vals;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.vals, (System_Int32_array **)vals, v5, v6, v7, v8, v9, v10);
    this->fields.optionId = eventMissionActionAddEntity->fields.optionId;
  }
}


int32_t __fastcall EventMissionActionInfo__getValID(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_array *vals; // x9
  __int64 v4; // x10
  int32_t v6; // w0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
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
      {
        sub_B17100(0xFFFFFFFFLL, method, v2);
        sub_B170A0();
      }
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
  if ( (byte_40F889E & 1) == 0 )
  {
    this = (EventMissionActionInfo_o *)sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F889E = 1;
  }
  vals = v3->fields.vals;
  if ( vals && (v5 = *(_QWORD *)&vals->max_length) != 0 && (unsigned int)(v3->fields.missionActionType - 1) <= 1 )
  {
    if ( !(_DWORD)v5 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
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
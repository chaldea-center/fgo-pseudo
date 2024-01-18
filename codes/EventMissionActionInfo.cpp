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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.vals, (System_Int32_array **)vals, v5, v6, v7, v8, v9, v10);
    this->fields.optionId = eventMissionActionEntity->fields.optionId;
  }
}


void __fastcall EventMissionActionInfo___ctor_27194656(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.vals, (System_Int32_array **)vals, v5, v6, v7, v8, v9, v10);
    this->fields.optionId = eventMissionActionAddEntity->fields.optionId;
  }
}


int32_t __fastcall EventMissionActionInfo__getValID(EventMissionActionInfo_o *this, const MethodInfo *method)
{
  struct System_String_array *vals; // x9
  __int64 v3; // x10
  int32_t v5; // w0
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
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
      {
        v6 = sub_B2C460(0xFFFFFFFFLL);
        sub_B2C400(v6, 0LL);
      }
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
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4188DAC & 1) == 0 )
  {
    this = (EventMissionActionInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188DAC = 1;
  }
  vals = v2->fields.vals;
  if ( vals && (v4 = *(_QWORD *)&vals->max_length) != 0 && (unsigned int)(v2->fields.missionActionType - 1) <= 1 )
  {
    if ( !(_DWORD)v4 )
    {
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
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
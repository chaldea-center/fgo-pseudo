void __fastcall WarBoardEventData___ctor(WarBoardEventData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields._eventId_k__BackingField = -1LL;
  this->fields._firstPlayedTurn_k__BackingField = -1;
}


void __fastcall WarBoardEventData___ctor_35549868(
        WarBoardEventData_o *this,
        int32_t id,
        int32_t playedTurn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._eventId_k__BackingField = id;
  this->fields._latestPlayedTurn_k__BackingField = playedTurn;
  this->fields._firstPlayedTurn_k__BackingField = playedTurn;
}


void __fastcall WarBoardEventData___ctor_35549916(
        WarBoardEventData_o *this,
        WarBoardEventData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields._eventId_k__BackingField = *(_QWORD *)&saveData->fields.eventId;
  this->fields._firstPlayedTurn_k__BackingField = saveData->fields.firstPlayedTurn;
}


void __fastcall WarBoardEventData__SetLatestPlayedTurn(
        WarBoardEventData_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  this->fields._latestPlayedTurn_k__BackingField = turn;
}


int32_t __fastcall WarBoardEventData__get_eventId(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._eventId_k__BackingField;
}


int32_t __fastcall WarBoardEventData__get_firstPlayedTurn(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._firstPlayedTurn_k__BackingField;
}


int32_t __fastcall WarBoardEventData__get_latestPlayedTurn(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._latestPlayedTurn_k__BackingField;
}


void __fastcall WarBoardEventData__set_eventId(WarBoardEventData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._eventId_k__BackingField = value;
}


void __fastcall WarBoardEventData__set_firstPlayedTurn(
        WarBoardEventData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._firstPlayedTurn_k__BackingField = value;
}


void __fastcall WarBoardEventData__set_latestPlayedTurn(
        WarBoardEventData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._latestPlayedTurn_k__BackingField = value;
}


void __fastcall WarBoardEventData_SaveData___ctor(WarBoardEventData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.eventId = -1LL;
  this->fields.firstPlayedTurn = -1;
}


void __fastcall WarBoardEventData_SaveData___ctor_35540444(
        WarBoardEventData_SaveData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventData )
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields.eventId = *(_QWORD *)&eventData->fields._eventId_k__BackingField;
  this->fields.firstPlayedTurn = eventData->fields._firstPlayedTurn_k__BackingField;
}
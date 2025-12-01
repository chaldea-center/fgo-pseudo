void WarBoardEventData___ctor(WarBoardEventData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields._eventId_k__BackingField = -1;
  this->fields._firstPlayedTurn_k__BackingField = -1;
}


void WarBoardEventData___ctor_38397492(
        WarBoardEventData_o *this,
        int32_t id,
        int32_t playedTurn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._eventId_k__BackingField = id;
  this->fields._latestPlayedTurn_k__BackingField = playedTurn;
  this->fields._firstPlayedTurn_k__BackingField = playedTurn;
}


void WarBoardEventData___ctor_38397540(
        WarBoardEventData_o *this,
        WarBoardEventData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_1C71608(v5, v6);
  *(_QWORD *)&this->fields._eventId_k__BackingField = *(_QWORD *)&saveData->fields.eventId;
  this->fields._firstPlayedTurn_k__BackingField = saveData->fields.firstPlayedTurn;
}


void WarBoardEventData__SetLatestPlayedTurn(WarBoardEventData_o *this, int32_t turn, const MethodInfo *method)
{
  this->fields._latestPlayedTurn_k__BackingField = turn;
}


int32_t WarBoardEventData__get_eventId(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._eventId_k__BackingField;
}


int32_t WarBoardEventData__get_firstPlayedTurn(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._firstPlayedTurn_k__BackingField;
}


int32_t WarBoardEventData__get_latestPlayedTurn(WarBoardEventData_o *this, const MethodInfo *method)
{
  return this->fields._latestPlayedTurn_k__BackingField;
}


void WarBoardEventData__set_eventId(WarBoardEventData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._eventId_k__BackingField = value;
}


void WarBoardEventData__set_firstPlayedTurn(WarBoardEventData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._firstPlayedTurn_k__BackingField = value;
}


void WarBoardEventData__set_latestPlayedTurn(WarBoardEventData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._latestPlayedTurn_k__BackingField = value;
}


void WarBoardEventData_SaveData___ctor(WarBoardEventData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.eventId = -1;
  this->fields.firstPlayedTurn = -1;
}


void WarBoardEventData_SaveData___ctor_38388068(
        WarBoardEventData_SaveData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !eventData )
    sub_1C71608(v5, v6);
  *(_QWORD *)&this->fields.eventId = *(_QWORD *)&eventData->fields._eventId_k__BackingField;
  this->fields.firstPlayedTurn = eventData->fields._firstPlayedTurn_k__BackingField;
}
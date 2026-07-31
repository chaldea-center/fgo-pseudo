void WarBoardEventEntity___ctor(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593986B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593986B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardEventEntity__CreatePrimaryKey(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *WarBoardEventEntity__GetSquareIndicesToAdd(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939868 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17334/*"addSquareIndex"*/);
    byte_5939868 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17334/*"addSquareIndex"*/, 0, 0);
}


bool WarBoardEventEntity__IsCorrectEntity(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *warBoardEventScriptIds; // x8
  int max_length; // w8
  struct System_Int32_array *warBoardCommonReleaseIds; // x9

  warBoardEventScriptIds = this->fields.warBoardEventScriptIds;
  if ( !warBoardEventScriptIds )
    goto LABEL_6;
  max_length = warBoardEventScriptIds->max_length;
  if ( max_length >= 1 )
  {
    warBoardCommonReleaseIds = this->fields.warBoardCommonReleaseIds;
    if ( warBoardCommonReleaseIds )
      return max_length == LODWORD(warBoardCommonReleaseIds->max_length);
LABEL_6:
    sub_21FFECC(this, method);
  }
  return 0;
}


bool WarBoardEventEntity__IsIncludeInvolvedAttacker(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939869 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21705/*"includeInvolvedAttacker"*/);
    byte_5939869 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21705/*"includeInvolvedAttacker"*/, 0, 0) == 1;
}


bool WarBoardEventEntity__IsIncludeInvolvedDefender(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593986A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21706/*"includeInvolvedDefender"*/);
    byte_593986A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21706/*"includeInvolvedDefender"*/, 0, 0) == 1;
}


bool WarBoardEventEntity__IsOpenEventTiming(
        WarBoardEventEntity_o *this,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  return WarBoardEventTiming__IsOpen(this->fields.eventTiming, this->fields.eventTimingVals, vals, this, 0);
}


bool WarBoardEventEntity__IsPlayableEvent(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardEventData_o *PlayedEventData; // x0
  int32_t frequencyType; // w8
  int32_t latestPlayedTurn_k__BackingField; // w19

  if ( (byte_5939867 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5939867 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0 )
    sub_21FFECC(Instance, v4);
  PlayedEventData = WarBoardData__GetPlayedEventData((WarBoardData_o *)Instance[27].monitor, this->fields.id, 0);
  if ( !PlayedEventData )
    return 1;
  frequencyType = this->fields.frequencyType;
  if ( frequencyType == 2 )
    return 1;
  if ( frequencyType != 3 )
    return 0;
  latestPlayedTurn_k__BackingField = PlayedEventData->fields._latestPlayedTurn_k__BackingField;
  return latestPlayedTurn_k__BackingField != WarBoardData__get_TurnCount(monitor, 0);
}
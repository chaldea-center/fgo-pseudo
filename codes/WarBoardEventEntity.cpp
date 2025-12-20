void WarBoardEventEntity___ctor(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA11 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2DA11 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardEventEntity__CreatePrimaryKey(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *WarBoardEventEntity__GetSquareIndicesToAdd(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA0E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16753/*"addSquareIndex"*/);
    byte_4D2DA0E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_16753/*"addSquareIndex"*/, 0, 0);
}


bool WarBoardEventEntity__IsCorrectEntity(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *warBoardEventScriptIds; // x8
  int max_length; // w8
  struct System_Int32_array *warBoardCommonReleaseIds; // x9
  int v5; // w9

  warBoardEventScriptIds = this->fields.warBoardEventScriptIds;
  if ( !warBoardEventScriptIds )
    goto LABEL_7;
  max_length = warBoardEventScriptIds->max_length;
  if ( max_length < 1 )
    return 0;
  warBoardCommonReleaseIds = this->fields.warBoardCommonReleaseIds;
  if ( !warBoardCommonReleaseIds )
LABEL_7:
    sub_1C942F0(this, method);
  v5 = warBoardCommonReleaseIds->max_length;
  if ( v5 >= 1 )
    return max_length == v5;
  return 0;
}


bool WarBoardEventEntity__IsIncludeInvolvedAttacker(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA0F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20923/*"includeInvolvedAttacker"*/);
    byte_4D2DA0F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20923/*"includeInvolvedAttacker"*/, 0, 0) == 1;
}


bool WarBoardEventEntity__IsIncludeInvolvedDefender(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA10 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20924/*"includeInvolvedDefender"*/);
    byte_4D2DA10 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20924/*"includeInvolvedDefender"*/, 0, 0) == 1;
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

  if ( (byte_4D2DA0D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2DA0D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0 )
    sub_1C942F0(Instance, v4);
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
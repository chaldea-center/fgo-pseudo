void __fastcall WarBoardEventEntity___ctor(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBED4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BBED4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardEventEntity__CreatePrimaryKey(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardEventEntity__GetSquareIndicesToAdd(
        WarBoardEventEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BBED1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16370/*"addSquareIndex"*/, method);
    byte_49BBED1 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_16370/*"addSquareIndex"*/, 0LL, 0LL);
}


bool __fastcall WarBoardEventEntity__IsCorrectEntity(WarBoardEventEntity_o *this, const MethodInfo *method)
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
    sub_1B4D1EC(this, method);
  v5 = warBoardCommonReleaseIds->max_length;
  if ( v5 >= 1 )
    return max_length == v5;
  return 0;
}


bool __fastcall WarBoardEventEntity__IsIncludeInvolvedAttacker(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBED2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20328/*"includeInvolvedAttacker"*/, method);
    byte_49BBED2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20328/*"includeInvolvedAttacker"*/, 0, 0LL) == 1;
}


bool __fastcall WarBoardEventEntity__IsIncludeInvolvedDefender(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBED3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20329/*"includeInvolvedDefender"*/, method);
    byte_49BBED3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20329/*"includeInvolvedDefender"*/, 0, 0LL) == 1;
}


bool __fastcall WarBoardEventEntity__IsOpenEventTiming(
        WarBoardEventEntity_o *this,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  return WarBoardEventTiming__IsOpen(this->fields.eventTiming, this->fields.eventTimingVals, vals, this, 0LL);
}


bool __fastcall WarBoardEventEntity__IsPlayableEvent(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardEventData_o *PlayedEventData; // x0
  int32_t frequencyType; // w8
  int32_t latestPlayedTurn_k__BackingField; // w19

  if ( (byte_49BBED0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49BBED0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1B4D1EC(Instance, v4);
  PlayedEventData = WarBoardData__GetPlayedEventData((WarBoardData_o *)Instance[27].monitor, this->fields.id, 0LL);
  if ( !PlayedEventData )
    return 1;
  frequencyType = this->fields.frequencyType;
  if ( frequencyType == 2 )
    return 1;
  if ( frequencyType != 3 )
    return 0;
  latestPlayedTurn_k__BackingField = PlayedEventData->fields._latestPlayedTurn_k__BackingField;
  return latestPlayedTurn_k__BackingField != WarBoardData__get_TurnCount(monitor, 0LL);
}
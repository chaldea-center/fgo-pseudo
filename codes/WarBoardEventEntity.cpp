void __fastcall WarBoardEventEntity___ctor(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E51FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E51FD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardEventEntity__CreatePrimaryKey(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardEventEntity__GetSquareIndicesToAdd(
        WarBoardEventEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E51FA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16457/*"addSquareIndex"*/, (_DWORD)method, v2, v3);
    byte_42E51FA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_16457/*"addSquareIndex"*/, 0LL, 0LL);
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
    sub_B5D69C(this, method);
  v5 = warBoardCommonReleaseIds->max_length;
  if ( v5 >= 1 )
    return max_length == v5;
  return 0;
}


bool __fastcall WarBoardEventEntity__IsIncludeInvolvedAttacker(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E51FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20016/*"includeInvolvedAttacker"*/, (_DWORD)method, v2, v3);
    byte_42E51FB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20016/*"includeInvolvedAttacker"*/, 0, 0LL) == 1;
}


bool __fastcall WarBoardEventEntity__IsIncludeInvolvedDefender(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E51FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20017/*"includeInvolvedDefender"*/, (_DWORD)method, v2, v3);
    byte_42E51FC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20017/*"includeInvolvedDefender"*/, 0, 0LL) == 1;
}


bool __fastcall WarBoardEventEntity__IsOpenEventTiming(
        WarBoardEventEntity_o *this,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return WarBoardEventTiming__IsOpen(this->fields.eventTiming, this->fields.eventTimingVals, vals, this, v3);
}


bool __fastcall WarBoardEventEntity__IsPlayableEvent(WarBoardEventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *v7; // x20
  WarBoardEventData_o *PlayedEventData; // x0
  int32_t frequencyType; // w8
  int32_t latestPlayedTurn_k__BackingField; // w19

  if ( (byte_42E51F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E51F9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v7 = *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr) == 0LL )
    sub_B5D69C(Instance, v6);
  PlayedEventData = WarBoardData__GetPlayedEventData(
                      *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr,
                      this->fields.id,
                      0LL);
  if ( !PlayedEventData )
    return 1;
  frequencyType = this->fields.frequencyType;
  if ( frequencyType == 2 )
    return 1;
  if ( frequencyType != 3 )
    return 0;
  latestPlayedTurn_k__BackingField = PlayedEventData->fields._latestPlayedTurn_k__BackingField;
  return latestPlayedTurn_k__BackingField != WarBoardData__get_TurnCount(v7, 0LL);
}
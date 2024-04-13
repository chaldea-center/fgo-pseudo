void __fastcall WarMessageEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v19; // x19
  struct WarMessageEntity_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E939B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15499/*"WAR_MESSAGE_{0}_{1}"*/, v14, v15, v16);
    byte_42E939B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarMessageEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_15499/*"WAR_MESSAGE_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15499/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v19,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v20 = WarMessageEntity_TypeInfo->static_fields;
  v20->checkList = (struct System_Collections_Generic_HashSet_string__o *)v19;
  sub_B5D560((BattleServantConfConponent_o *)&v20->checkList, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E939A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E939A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_42E9395 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9395 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL);
}


bool __fastcall WarMessageEntity__CheckFrequencyCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  bool v8; // w8
  const MethodInfo *v9; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v11; // x1
  WarMessageEntity_c *v12; // x0
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *checkList; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_42E9396 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Contains__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v5, v6, v7);
    byte_42E9396 = 1;
  }
  v8 = 1;
  switch ( this->fields.frequencyType )
  {
    case 0:
      return 0;
    case 1:
      if ( !WarMessageEntity__IsNotClearedStartQuest(this, method) )
        return 0;
      SaveKey = WarMessageEntity__get_SaveKey(this, v9);
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0LL) == 0;
    case 2:
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v12 = WarMessageEntity_TypeInfo;
        if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarMessageEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
          v12 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v12->static_fields->checkList;
        v14 = WarMessageEntity__get_SaveKey(this, v11);
        if ( !checkList )
          sub_B5D69C(v14, v15);
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  checkList,
                  (BattleBuffData_BuffData_o *)v14,
                  (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      else
      {
        return 0;
      }
    case 6:
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
    default:
      return v8;
  }
}


bool __fastcall WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


System_String_o *__fastcall WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E9399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42E9399 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_42E9398 & 1) == 0 )
  {
    sub_B5D5C4(&WarMessageEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9398 = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  }
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool __fastcall WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int lockCountObj; // w8
  int32_t warId; // w19
  __int64 v22; // x19

  if ( (byte_42E9397 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E9397 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.warId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v18);
  }
  lockCountObj = (int)Instance->fields.lockCountObj;
  if ( lockCountObj == 2 )
  {
    v22 = *(_QWORD *)&Instance->fields.nowLoadCount;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_25877652(v22, -1, 0, 0LL);
  }
  if ( lockCountObj != 1 )
    return 0;
  warId = this->fields.warId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsWarStartedId(warId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarMessageEntity__Save(WarMessageEntity_o *this, bool isDecided, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t frequencyType; // w8
  System_String_o *v10; // x0
  WarMessageEntity_c *v11; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *checkList; // x20
  System_String_o *SaveKey; // x0
  __int64 v14; // x1

  if ( (byte_42E9394 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Add__, isDecided, (_DWORD)method, v3);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v6, v7, v8);
    byte_42E9394 = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v11 = WarMessageEntity_TypeInfo;
      if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarMessageEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
        v11 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v11->static_fields->checkList;
      SaveKey = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_B5D69C(SaveKey, v14);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        checkList,
        (WarBoardAIRoute_RouteData_o *)SaveKey,
        (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v10 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v10, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


int32_t __fastcall WarMessageEntity__get_FrequencyType(WarMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


System_String_o *__fastcall WarMessageEntity__get_SaveKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarMessageEntity_c *v8; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9393 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v5, v6, v7);
    byte_42E9393 = 1;
  }
  v8 = WarMessageEntity_TypeInfo;
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
    v8 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v8->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  idx = this->fields.idx;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  return System_String__Format_44573324(SAVE_KEY_FORMAT, v10, v11, 0LL);
}
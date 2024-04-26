void __fastcall WarMessageEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v9; // x19
  struct WarMessageEntity_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43526C2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B70694(&WarMessageEntity_TypeInfo);
    sub_B70694(&StringLiteral_15530/*"WAR_MESSAGE_{0}_{1}"*/);
    byte_43526C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarMessageEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15530/*"WAR_MESSAGE_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15530/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v9,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v10 = WarMessageEntity_TypeInfo->static_fields;
  v10->checkList = (struct System_Collections_Generic_HashSet_string__o *)v9;
  sub_B70630((BattleServantConfConponent_o *)&v10->checkList, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43526C1 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_43526C1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_43526BC & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43526BC = 1;
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
  bool v3; // w8
  const MethodInfo *v4; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v6; // x1
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *checkList; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_43526BD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526BD = 1;
  }
  v3 = 1;
  switch ( this->fields.frequencyType )
  {
    case 0:
      return 0;
    case 1:
      if ( !WarMessageEntity__IsNotClearedStartQuest(this, method) )
        return 0;
      SaveKey = WarMessageEntity__get_SaveKey(this, v4);
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0LL) == 0;
    case 2:
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v7 = WarMessageEntity_TypeInfo;
        if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarMessageEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
          v7 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v7->static_fields->checkList;
        v9 = WarMessageEntity__get_SaveKey(this, v6);
        if ( !checkList )
          sub_B7076C(v9, v10);
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  checkList,
                  (BattleBuffData_BuffData_o *)v9,
                  (const MethodInfo_2EB4ED4 *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      else
      {
        return 0;
      }
    case 6:
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
    default:
      return v3;
  }
}


bool __fastcall WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


System_String_o *__fastcall WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_43526C0 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_43526C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_1CA236C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_43526BF & 1) == 0 )
  {
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526BF = 1;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int lockCountObj; // w8
  int32_t warId; // w19
  __int64 v8; // x19

  if ( (byte_43526BE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_43526BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.warId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  lockCountObj = (int)Instance->fields.lockCountObj;
  if ( lockCountObj == 2 )
  {
    v8 = *(_QWORD *)&Instance->fields.nowLoadCount;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_24296868(v8, -1, 0, 0LL);
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
  int32_t frequencyType; // w8
  System_String_o *v6; // x0
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *checkList; // x20
  System_String_o *SaveKey; // x0
  __int64 v10; // x1

  if ( (byte_43526BB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526BB = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v7 = WarMessageEntity_TypeInfo;
      if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarMessageEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
        v7 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v7->static_fields->checkList;
      SaveKey = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_B7076C(SaveKey, v10);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        checkList,
        (WarBoardAIRoute_RouteData_o *)SaveKey,
        (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v6 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v6, 1, 0LL);
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
  __int64 v2; // x2
  WarMessageEntity_c *v4; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v6; // x21
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43526BA & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526BA = 1;
  }
  v4 = WarMessageEntity_TypeInfo;
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
    v4 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v4->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2);
  idx = this->fields.idx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v7);
  return System_String__Format_44753704(SAVE_KEY_FORMAT, v6, v8, 0LL);
}
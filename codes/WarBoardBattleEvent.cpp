void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWarBoardEventLimitTurn_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int32_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_41867F8 & 1) == 0 )
  {
    sub_B2C35C(&BattleWarBoardEventLimitTurn_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_41867F8 = 1;
  }
  v5 = (BattleWarBoardEventLimitTurn_o *)sub_B2C42C(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v5, 0LL);
  this->fields.eventLimitTurn = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventLimitTurn,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.warBoardDataJson, v12, v13, v14, v15, v16, v17, v18);
  v19 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  BaseBattleEvent___ctor((BaseBattleEvent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBattleEvent___c__DisplayClass76_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_41867F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&svtUniqueId);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v7);
    sub_B2C35C(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v8);
    byte_41867F4 = 1;
  }
  v9 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_B2C42C(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v13 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24273940(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleWarBoardInfo_WarBoardMasterInfo_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v12; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__51_0; // x20
  Il2CppObject *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct WarBoardBattleEvent___c_StaticFields *v22; // x0
  BattleServantConfConponent_o *p__9__51_0; // x0
  struct WarBoardBattleEvent___c_StaticFields *v25; // x8
  Il2CppObject *v26; // x21
  struct WarBoardBattleEvent___c_StaticFields *v27; // x0

  if ( (byte_41867E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo);
    sub_B2C35C(&Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v6);
    sub_B2C35C(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v8);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v9);
    sub_B2C35C(&WarBoardBattleEvent___c_TypeInfo, v10);
    byte_41867E4 = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v12 = WarBoardBattleEvent___c_TypeInfo;
  if ( isPlayer )
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v12 = WarBoardBattleEvent___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__51_0 = (System_Predicate_T__o *)static_fields->__9__51_0;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B2C42C(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v15,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v22 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v22->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v22->__9__51_0;
  }
  else
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v12 = WarBoardBattleEvent___c_TypeInfo;
    }
    v25 = v12->static_fields;
    _9__51_0 = (System_Predicate_T__o *)v25->__9__51_1;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v25->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B2C42C(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v26,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v27 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v27->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v27->__9__51_1;
  }
  sub_B2C2F8(p__9__51_0, (System_Int32_array **)_9__51_0, v16, v17, v18, v19, v20, v21);
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                      _9__51_0,
                                                      (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x19
  __int64 v12; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v18; // x1
  Il2CppObject v19; // q0
  int64_t v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_41867F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_41867F7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v11 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_21;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v24.fields.current = (Il2CppObject *)v23.fields.fakeValue;
  *(_OWORD *)&v24.fields.list = *(_OWORD *)&v23.fields.currentCryptoKey;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v14 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B2C434(v14, v15);
    if ( BattleServantData__isDead((BattleServantData_o *)v24.fields.current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_B2C434(0LL, v18);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v19 = current[3];
        *(Il2CppObject *)&v23.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v23.fields.fakeValue = v19;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v23;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v22, 0LL);
        if ( !v11 )
          sub_B2C434(v20, v20);
        System_Collections_Generic_List_long___Add(
          v11,
          v20,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v11 )
LABEL_21:
    sub_B2C434(Data_k__BackingField, v12);
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_41867E2 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, masterInfo);
    byte_41867E2 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 3LL);
  if ( !result )
    sub_B2C434(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    v7 = sub_B2C460(result);
    sub_B2C400(v7, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3Ct;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v7; // x0

  if ( (byte_41867E3 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, masterInfo);
    byte_41867E3 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 3LL);
  if ( !result )
    sub_B2C434(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    v7 = sub_B2C460(result);
    sub_B2C400(v7, 0LL);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_41867EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_15329/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v7);
    byte_41867EA = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_15329/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
                                0LL,
                                0LL);
  if ( !Instance )
  {
    if ( v8 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_B2C434(Instance, v10);
  }
  if ( !v8 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_41867E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (WarBoardBattleEvent_o *)sub_B2C35C(&StringLiteral_15330/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v6);
    byte_41867E5 = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_28238692(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15330/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_B2C434(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&save->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)joinCurTurnUniqueIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BaseBattleServantEvent_o *__fastcall WarBoardBattleEvent__GetServantEvent(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return (BaseBattleServantEvent_o *)this->fields._ServantEvent_k__BackingField;
}


int32_t __fastcall WarBoardBattleEvent__GetServantHaveStar(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x19

  if ( !svtData )
    goto LABEL_8;
  if ( svtData->fields.isAppliedHaveStars )
  {
    LODWORD(EventServantInfo) = 0;
    return (int)EventServantInfo;
  }
  svtData->fields.isAppliedHaveStars = 1;
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL);
  if ( !ServantEvent_k__BackingField )
LABEL_8:
    sub_B2C434(this, svtData);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0LL);
  if ( EventServantInfo )
    LODWORD(EventServantInfo) = EventServantInfo->fields.criticalStars;
  return (int)EventServantInfo;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *enemyMaster,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  BattleData_o *Data_k__BackingField; // x8
  int32_t groupId; // w19
  int32_t forceId; // w22
  System_Int32_array *v11; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v13; // x6

  if ( (byte_41867EE & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, enemyMaster);
    byte_41867EE = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v6 = sub_B2C374(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B2C434(v6, v7);
  forceId = enemyMaster->fields.forceId;
  groupId = enemyMaster->fields.groupId;
  v11 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v11,
           (int32_t)EnemyMasterCommandSpellCnt,
           v13);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  __int64 v13; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  UserGameEntity_o *v20; // x21
  System_Int32_array *v21; // x19
  System_Int32_array *v22; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v24; // x6
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41867ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_41867ED = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    masterSkillInfo,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v15 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B2C434(v15, v16);
    if ( !BYTE4(v27.fields.current[1].monitor) )
    {
      if ( !v10 )
        sub_B2C434(v15, v16);
      System_Collections_Generic_List_int___Add(
        v10,
        (int32_t)v27.fields.current[2].monitor,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v11 )
        sub_B2C434(v18, v19);
      System_Collections_Generic_List_int___Add(
        v11,
        (int32_t)current[3].klass,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v10
    || (v20 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v10, (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v21 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___ToArray(v11, (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v20) )
  {
LABEL_19:
    sub_B2C434(masterSkillInfo, v13);
  }
  v22 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v20, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v21, v22, (int32_t)CommandSpell, v24);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w20

  if ( (byte_41867EF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&WarBoardManager_TypeInfo, v3);
    byte_41867EF = 1;
  }
  WarBoardDataEntityFromResponse = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0LL) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v8 = AvalonSceneManager__checkLoadedScene(Instance, 80, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v7);
  }
  if ( v8 )
    AvalonSceneManager__popSceneRefresh(Instance, 1, WarBoardDataEntityFromResponse, 0LL);
  else
    AvalonSceneManager__transitionSceneRefresh(Instance, 80, 1, WarBoardDataEntityFromResponse, 0, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__HideTargetsResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        System_Int32_array *hideTypes,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  __int64 v8; // x0

  if ( hideTypes )
  {
    v4 = *(_QWORD *)&hideTypes->max_length;
    if ( (int)v4 >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)v4 )
        {
          v8 = sub_B2C460(this);
          sub_B2C400(v8, 0LL);
        }
        if ( !result )
          sub_B2C434(this, result);
        BattleResultComponent_resultData__disableResultDispFlag(result, 1 << hideTypes->m_Items[v7 + 1], 0LL);
        LODWORD(v4) = hideTypes->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)v4 );
    }
  }
}


void __fastcall WarBoardBattleEvent__Init(WarBoardBattleEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  BattleInfoData_o *BattleInfo; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  WarBoardBattleServantEvent_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarBoardBattleEvent_o *v22; // x0
  const MethodInfo *v23; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardBattleEvent_o *v31; // x0
  const MethodInfo *v32; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  char v40; // w0
  WarBoardBattleEvent_o *v41; // x0
  const MethodInfo *v42; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_41867DF & 1) == 0 )
  {
    sub_B2C35C(&WarBoardBattleServantEvent_TypeInfo, data);
    byte_41867DF = 1;
  }
  BaseBattleEvent__Init((BaseBattleEvent_o *)this, data, 0LL);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, 0LL);
  if ( !BattleInfo )
    sub_B2C434(0LL, v6);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)warBoardBattleInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( this->fields._WarBoardBattleInfo_k__BackingField )
    svtInfo = this->fields._WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v15 = (WarBoardBattleServantEvent_o *)sub_B2C42C(WarBoardBattleServantEvent_TypeInfo);
  WarBoardBattleServantEvent___ctor(v15, svtInfo, 0LL);
  this->fields._ServantEvent_k__BackingField = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v22,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v23);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)EventMasterInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = WarBoardBattleEvent__GetEventMasterInfo(v31, this->fields._WarBoardBattleInfo_k__BackingField, 0, v32);
  this->fields._MasterEnemy_k__BackingField = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager((BaseBattleEvent_o *)this, v40 & 1, data, 0LL);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v41, v42);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)ResetBuffTypes,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(
                                  WarBoardBattleInfo_k__BackingField,
                                  0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleSquareIndividualityList,
    (System_Int32_array **)BattleSquareIndividuality,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
}


bool __fastcall WarBoardBattleEvent__InitBGData(
        WarBoardBattleEvent_o *this,
        int32_t *bgNo,
        int32_t *bgType,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v5; // w9
  bool result; // w0
  int32_t v7; // w8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( !WarBoardBattleInfo_k__BackingField )
    return 0;
  v5 = WarBoardBattleInfo_k__BackingField->fields.bgNo;
  if ( v5 < 1 )
  {
    result = 0;
  }
  else
  {
    *bgNo = v5;
    WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
    result = 1;
    if ( !WarBoardBattleInfo_k__BackingField )
      return result;
  }
  v7 = WarBoardBattleInfo_k__BackingField->fields.bgType;
  if ( v7 >= 1 )
  {
    result = 1;
    *bgType = v7;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__InitBattleStartTurn(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleData_o *Data_k__BackingField; // x0
  __int64 v17; // x1
  char v18; // w23
  int v19; // w20
  _BOOL4 v20; // w21
  System_Collections_Generic_IEnumerable_TSource__o *FieldServantList; // x24
  WarBoardBattleEvent___c_c *v22; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x25
  Il2CppObject *v25; // x26
  struct WarBoardBattleEvent___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  WarBoardBattleEvent___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x24
  struct WarBoardBattleEvent___c_StaticFields *v36; // x9
  char v37; // w23
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__73_1; // x25
  Il2CppObject *v39; // x22
  struct WarBoardBattleEvent___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  struct System_Int32_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x0

  if ( (byte_41867F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, isPlayer);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_BattleServantData__int___ctor__, v10);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B2C35C(&System_Func_BattleServantData__int__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v13);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v14);
    sub_B2C35C(&WarBoardBattleEvent___c_TypeInfo, v15);
    byte_41867F3 = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v18 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v19 = (int)Data_k__BackingField,
        v20 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_B2C434(Data_k__BackingField, v17);
  }
  FieldServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(
                                                                            Data_k__BackingField,
                                                                            0,
                                                                            0LL);
  v22 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v22 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__73_0,
      v25,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v26 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v26->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__73_0,
      (System_Int32_array **)_9__73_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldServantList,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v34 = WarBoardBattleEvent___c_TypeInfo;
  v35 = v33;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v34 = WarBoardBattleEvent___c_TypeInfo;
  }
  v36 = v34->static_fields;
  v37 = v18 ^ isPlayer;
  _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v36->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v36 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v36->__9;
    _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__73_1,
      v39,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v40 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v40->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v40->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v35,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v48 = System_Linq_Enumerable__ToArray_int_(
          v47,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( (v37 & 1) != 0 )
  {
    v61 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
    v62 = System_Linq_Enumerable__Distinct_int_(
            v61,
            (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v62,
                          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_joinCurTurnUniqueIds,
    (System_Int32_array **)aliveSvtUniqueIds,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( (v19 & v20 & 1) != 0 )
    this->fields.curTurnCondState |= 1u;
}


// attributes: thunk
void __fastcall WarBoardBattleEvent__InitPlayerMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent__TakeoverPlayerMasterSkill(this, method);
}


void __fastcall WarBoardBattleEvent__InitServantDataPrevAdd(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  WarBoardBattleEvent_o *v5; // x20
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  if ( !svtData
    || (ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField,
        v5 = this,
        this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL),
        !ServantEvent_k__BackingField) )
  {
    sub_B2C434(this, svtData);
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0LL);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, v5->fields._Data_k__BackingField, 0LL);
}


void __fastcall WarBoardBattleEvent__InitStageData(
        WarBoardBattleEvent_o *this,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *eventLimitTurn; // x0
  const MethodInfo *v5; // x1

  eventLimitTurn = this->fields.eventLimitTurn;
  if ( !eventLimitTurn )
    sub_B2C434(0LL, stage);
  BattleWarBoardEventLimitTurn__InitLimitInfo(eventLimitTurn, this, stage, 0LL);
  WarBoardBattleEvent__TakeoverEnemyMasterInfo(this, v5);
}


void __fastcall WarBoardBattleEvent__InitStartResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardBattleEvent_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v11; // x3

  v5 = this;
  if ( (byte_41867E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (WarBoardBattleEvent_o *)sub_B2C35C(&StringLiteral_15331/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v7);
    byte_41867E7 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_B2C434(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15331/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v11);
}


void __fastcall WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v4; // x2
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v6; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  __int64 v9; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  Data_k__BackingField = (BattleData_o *)BattleData__getPlayerServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_12;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v6 = Data_k__BackingField;
  if ( (int)rootfsm < 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)rootfsm )
      {
        v9 = sub_B2C460(Data_k__BackingField);
        sub_B2C400(v9, 0LL);
      }
      Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__GetServantHaveStar(
                                               this,
                                               *((BattleServantData_o **)&v6->fields.fsm + v8),
                                               v4);
      LODWORD(rootfsm) = v6->fields.rootfsm;
      ++v8;
      v7 += (int)Data_k__BackingField;
    }
    while ( (__int64)v8 < (int)rootfsm );
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
LABEL_12:
    sub_B2C434(Data_k__BackingField, method);
  BattleData__InitCriticalPoint(Data_k__BackingField, v7, 0LL);
}


void __fastcall WarBoardBattleEvent__InitWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall WarBoardBattleEvent__IsActionPassiveSkillOnBattle(
        WarBoardBattleEvent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( !skillInfo )
    sub_B2C434(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B2C434(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B2C434(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) > 0;
}


bool __fastcall WarBoardBattleEvent__IsPossibleAddBuffParam(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return BaseBattleEvent__get_IsBattleEndReduceBuffTurn((BaseBattleEvent_o *)this, 0LL)
      || BaseBattleEvent__IsPossibleAddBuffParam((BaseBattleEvent_o *)this, svtData, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsRemainBattleEndWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  struct BattleData_o *v4; // x8
  struct BattleAttackManager_o *battleAtkManager; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_7;
  Data_k__BackingField = (BattleData_o *)BattleData__IsEndWaveBattle(Data_k__BackingField, 0LL);
  if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
  {
    v4 = this->fields._Data_k__BackingField;
    if ( v4 )
    {
      battleAtkManager = v4->fields.battleAtkManager;
      if ( battleAtkManager )
        return !battleAtkManager->fields._IsTurnEnd_k__BackingField;
    }
LABEL_7:
    sub_B2C434(Data_k__BackingField, method);
  }
  return 0;
}


bool __fastcall WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  v2 = this;
  if ( (byte_41867E0 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      method);
    byte_41867E0 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B2C434(this, method);
  enemy_datalist = Data_k__BackingField->fields.enemy_datalist;
  return enemy_datalist
      && enemy_datalist->fields._size >= 1
      && (player_datalist = Data_k__BackingField->fields.player_datalist) != 0LL
      && player_datalist->fields._size > 0;
}


bool __fastcall WarBoardBattleEvent__IsTakeOverNextBattleBuff(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        BuffEntity_o *buffEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL8 isParam; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v24; // x20

  if ( (byte_41867F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, buff);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v9);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v11);
    sub_B2C35C(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v12);
    byte_41867F1 = 1;
  }
  v13 = sub_B2C42C(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = buffEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)buffEnt, v16, v17, v18, v19, v20, v21);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_B2C434(isParam, v15);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v24 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return !BasicHelper__Any_int__24273940(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v24,
            (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B2C434(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) >= 1
      && !BattleServantData__isLogicResultAlive(svtData, 0LL)
      && (((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._9_get_hp.method)(
            svtData,
            svtData->klass->vtable._10_set_hp.methodPtr) > 0
       || BattleServantData__isOverKill(svtData, 0LL));
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall WarBoardBattleEvent__MakeDistributeStar(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_long__int__o *v11; // x19
  __int64 v12; // x1
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x21
  WarBoardBattleEvent___c_c *v15; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__57_0; // x22
  Il2CppObject *v18; // x23
  struct WarBoardBattleEvent___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v28; // x21
  struct BattleData_o *v29; // x9
  int32_t criticalstars; // w9
  unsigned int v31; // w20
  int v32; // w22
  int i; // w23
  int32_t v34; // w2
  __int64 v36; // x0

  if ( (byte_41867E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v9);
    sub_B2C35C(&WarBoardBattleEvent___c_TypeInfo, v10);
    byte_41867E9 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v11,
    (const MethodInfo_2E50D74 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_25;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  v15 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v15 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__57_0,
      v18,
      Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v19 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v19->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v26,
                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_25;
  rootfsm = Data_k__BackingField->fields.rootfsm;
  v28 = Data_k__BackingField;
  if ( rootfsm )
  {
    v29 = this->fields._Data_k__BackingField;
    if ( !v29 )
      goto LABEL_25;
    if ( (int)rootfsm >= 1 )
    {
      criticalstars = v29->fields.criticalstars;
      v31 = 0;
      v32 = criticalstars / (int)rootfsm;
      for ( i = criticalstars % (int)rootfsm; ; --i )
      {
        if ( v31 >= (unsigned int)rootfsm )
        {
          v36 = sub_B2C460(Data_k__BackingField);
          sub_B2C400(v36, 0LL);
        }
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v28->fields.fsm + (int)v31);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v11 )
          break;
        if ( i <= 0 )
          v34 = v32;
        else
          v34 = v32 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v11,
          (int64_t)Data_k__BackingField,
          v34,
          (const MethodInfo_2E51928 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(rootfsm) = v28->fields.rootfsm;
        if ( (int)++v31 >= (int)rootfsm )
          return v11;
      }
LABEL_25:
      sub_B2C434(Data_k__BackingField, v12);
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__MakeMasterInfo(
        WarBoardBattleEvent_o *this,
        int32_t forceId,
        int32_t groupId,
        System_Int32_array *chargeArray,
        System_Int32_array *sealedArray,
        int32_t spellNum,
        const MethodInfo *method)
{
  __int64 v12; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_41867EC & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, *(_QWORD *)&forceId);
    sub_B2C35C(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12);
    byte_41867EC = 1;
  }
  v13 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_B2C42C(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  v13->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13->fields.commandSpellNum = spellNum;
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBattleEvent___c__DisplayClass78_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_41867F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&selfUniqueId);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v7);
    sub_B2C35C(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v8);
    byte_41867F5 = 1;
  }
  v9 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_B2C42C(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v13 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24273940(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
  {
    return 2;
  }
  else
  {
    return 0;
  }
}


BattleWarBoardInfo_o *__fastcall WarBoardBattleEvent__MakeWarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x20
  BattleData_o *v15; // x0
  __int64 v16; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v18; // w8
  struct BattleWarBoardInfo_o *v19; // x8
  __int64 v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array **logic; // x1
  const MethodInfo *v29; // x1
  System_Int32_array **DistributeStar; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **ServantEvent_k__BackingField; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BattleData_o **v57; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct BattleData_o *v65; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v67; // x24
  struct BattleData_o *v68; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *enemy_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v70; // x24
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x1
  System_Int32_array **WarBoardMasterArray; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7

  if ( (byte_41867E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleServantData___ctor__, method);
    sub_B2C35C(&System_Action_BattleServantData__TypeInfo, v3);
    sub_B2C35C(&BattleWarBoardInfo_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v8);
    sub_B2C35C(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v10);
    sub_B2C35C(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v11);
    sub_B2C35C(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v12);
    byte_41867E8 = 1;
  }
  v13 = sub_B2C42C(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v13, 0LL);
  v14 = sub_B2C42C(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v14, 0LL);
  v15 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                          this,
                          this->klass->vtable._5_Init.methodPtr);
  if ( !v14 )
    goto LABEL_19;
  *(_BYTE *)(v14 + 20) = (unsigned __int8)v15 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v18 = WarBoardBattleInfo_k__BackingField ? WarBoardBattleInfo_k__BackingField->fields.battleTurn : -1;
  *(_DWORD *)(v14 + 24) = v18;
  v19 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v19 )
    LODWORD(v19) = v19->fields.stageId;
  *(_DWORD *)(v14 + 16) = (_DWORD)v19;
  v20 = sub_B2C42C(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v20, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  if ( !v20 )
    goto LABEL_19;
  logic = (System_Int32_array **)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v20 + 16) = logic;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), logic, v21, v22, v23, v24, v25, v26);
  DistributeStar = (System_Int32_array **)WarBoardBattleEvent__MakeDistributeStar(this, v29);
  *(_QWORD *)(v20 + 24) = DistributeStar;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), DistributeStar, v31, v32, v33, v34, v35, v36);
  v15 = this->fields._Data_k__BackingField;
  if ( !v15 )
    goto LABEL_19;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(v15, 0LL);
  *(_QWORD *)(v20 + 32) = QuestIndividualities;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), QuestIndividualities, v38, v39, v40, v41, v42, v43);
  ServantEvent_k__BackingField = (System_Int32_array **)this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v20 + 40) = ServantEvent_k__BackingField;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 40), ServantEvent_k__BackingField, v45, v46, v47, v48, v49, v50);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 24) = v20;
  v57 = (BattleData_o **)(v13 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)v20, v51, v52, v53, v54, v55, v56);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v13 + 16) = v58;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  v65 = this->fields._Data_k__BackingField;
  if ( !v65 )
    goto LABEL_19;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v65->fields.player_datalist;
  v67 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v67,
    (Il2CppObject *)v13,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattleServantData___ctor__);
  if ( !player_datalist
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          player_datalist,
          (System_Action_T__o *)v67,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v68 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v68->fields.enemy_datalist,
        v70 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleServantData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v70,
          (Il2CppObject *)v13,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleServantData___ctor__),
        !enemy_datalist)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v70,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v15 = *v57) == 0LL) )
  {
LABEL_19:
    sub_B2C434(v15, v16);
  }
  v71 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v14 + 32) = v71;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 32), v71, v72, v73, v74, v75, v76, v77);
  WarBoardMasterArray = (System_Int32_array **)WarBoardBattleEvent__MakeWarBoardMasterArray(this, v78);
  *(_QWORD *)(v14 + 40) = WarBoardMasterArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 40), WarBoardMasterArray, v80, v81, v82, v83, v84, v85);
  v86 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
                                 this,
                                 this->klass[1]._1.image);
  *(_QWORD *)(v14 + 56) = v86;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 56), v86, v87, v88, v89, v90, v91, v92);
  return (BattleWarBoardInfo_o *)v14;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  const MethodInfo *v7; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverPlayerMasterInfo; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_41867EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v5);
    byte_41867EB = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
                                                                                      this,
                                                                                      v7);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v6 )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v6,
      TakeoverPlayerMasterInfo,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  }
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                                                                      this,
                                                                                      this->fields._MasterEnemy_k__BackingField,
                                                                                      v10);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v6 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_11:
    sub_B2C434(TakeoverPlayerMasterInfo, v9);
  }
  if ( !v6 )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    TakeoverPlayerMasterInfo,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v16; // x24
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41867F2 & 1) == 0 )
  {
    sub_B2C35C(&BattleStartServantAiResetChecker_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    byte_41867F2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_B2C434(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v20,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B2C434(v8, v9);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v20.fields.current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_B2C434(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v16 = (BattleStartServantAiResetChecker_o *)sub_B2C42C(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v16, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_B2C434(v17, v18);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v16, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
}


void __fastcall WarBoardBattleEvent__ProcOnActAiFixed(
        WarBoardBattleEvent_o *this,
        AiState_o *aiState,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  if ( aiState )
    AiState__SetOverwriteAiGroupId(aiState, aiBaseEnt, 0LL);
}


void __fastcall WarBoardBattleEvent__ProgressBuffTurn(
        WarBoardBattleEvent_o *this,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  int32_t progressTurnCond; // w8
  _BOOL4 v7; // w20

  if ( !buff )
    sub_B2C434(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  v7 = isEndEnemyTurn;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && ((!buff->fields.isProgressEndEnemyTurn ^ v7) & 1) != 0 )
  {
    buff->fields.turn = UnityEngine_Mathf__Max_40694800(buff->fields.turn - 2, 0, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x19
  bool v22; // w21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v36; // x1
  struct BattleData_o *v37; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0

  if ( (byte_41867F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_41867F6 = 1;
  }
  v11 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_1A8EBB4 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v11 )
    sub_B2C434(0LL, v12);
  klass = v11->klass;
  v15 = v11;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v13);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B2C434(0LL, v19);
  v22 = isEndEnemyTurn;
  while ( 1 )
  {
    v23 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_16;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(v21, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_AC5258(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v27);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v21, *(_QWORD *)(v31 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B2C434(0LL, v32);
    ServantData = BattleData__getServantData(Data_k__BackingField, v33, 0LL);
    if ( ServantData )
    {
      v37 = this->fields._Data_k__BackingField;
      if ( !v37 )
        sub_B2C434(ServantData, v36);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_B2C434(0LL, v36);
      BattleBuffData__turnProgressing(buffData, v37->fields.logic, v22, v33, 0LL);
    }
  }
  v39 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_34;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_34:
    v42 = sub_AC5258(v21, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v12; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v14; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_41867E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, arg);
    sub_B2C35C(&System_Action_string__TypeInfo, v7);
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v10);
    byte_41867E6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        func,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v14 = (WarBoardBattleResultRequest_o *)Request_WarBoardWallAttackRequest;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v12);
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    (Il2CppObject *)this,
    Method_WarBoardBattleEvent_SetResponseWarBoardData__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
  if ( !v14 )
    sub_B2C434(v18, v19);
  WarBoardBattleResultRequest__beginRequest(v14, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v17, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B2C434(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.warBoardDataJson = json;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.warBoardDataJson,
    (System_Int32_array **)json,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__SetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleData_SaveData_o *v8; // x20
  WarBoardBattleEvent_o *v9; // x19

  v8 = save;
  v9 = this;
  if ( (byte_41867F0 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_B2C35C(&int___TypeInfo, save);
    byte_41867F0 = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_B2C374(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_B2C434(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)save,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__SetServantDataAfterPassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *v6; // x21
  int rootfsm; // w8
  unsigned int v8; // w23
  BattleServantData_o *v9; // x22
  struct BattleData_o *v10; // x8
  __int64 v11; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0LL));
  v6 = (BattleServantData_array *)Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  rootfsm = (int)Data_k__BackingField->fields.rootfsm;
  if ( rootfsm >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= rootfsm )
      {
        v11 = sub_B2C460(Data_k__BackingField);
        sub_B2C400(v11, 0LL);
      }
      v9 = v6->m_Items[v8];
      if ( !v9 )
        break;
      Data_k__BackingField = (BattleData_o *)v9->fields.buffData;
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__DeleteDummyBuff((BattleBuffData_o *)Data_k__BackingField, 0LL);
      Data_k__BackingField = (BattleData_o *)BattleServantData__get_BuffData(v9, 0LL);
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__SetNoActBuffWithoutExecuteServant((BattleBuffData_o *)Data_k__BackingField, v6, 0LL);
      rootfsm = v6->max_length;
      if ( (int)++v8 >= rootfsm )
        goto LABEL_13;
    }
LABEL_20:
    sub_B2C434(Data_k__BackingField, isPlayer);
  }
LABEL_13:
  if ( isPlayer )
    WarBoardBattleEvent__InitUsePlayerServantData(this, (const MethodInfo *)isPlayer);
  Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__IsSettedAllServant(this, (const MethodInfo *)isPlayer);
  if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
  {
    v10 = this->fields._Data_k__BackingField;
    if ( !v10 )
      goto LABEL_20;
    Data_k__BackingField = (BattleData_o *)v10->fields.logic;
    if ( !Data_k__BackingField )
      goto LABEL_20;
    BattleLogic__updateFieldBuff((BattleLogic_o *)Data_k__BackingField, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__SetServantDataBeforePassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleServantData_array *Data_k__BackingField; // x0
  BattleServantData_array *v5; // x20
  int max_length; // w8
  unsigned int v7; // w23
  Il2CppClass **v8; // x8
  BattleServantData_o *v9; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  __int64 v12; // x0

  Data_k__BackingField = (BattleServantData_array *)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  Data_k__BackingField = isPlayer
                       ? BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)
                       : BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL);
  v5 = Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  max_length = Data_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v12 = sub_B2C460(Data_k__BackingField);
        sub_B2C400(v12, 0LL);
      }
      v8 = &v5->obj.klass + (int)v7;
      v9 = (BattleServantData_o *)v8[4];
      if ( !v9 )
        break;
      ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
      Data_k__BackingField = (BattleServantData_array *)BattleServantData__getUserSvtId(
                                                          (BattleServantData_o *)v8[4],
                                                          0LL);
      if ( !ServantEvent_k__BackingField )
        break;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(
                           ServantEvent_k__BackingField,
                           (int64_t)Data_k__BackingField,
                           0LL);
      BattleServantData__SetTakeoverServantData(v9, EventServantInfo, 0LL);
      max_length = v5->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_13:
    sub_B2C434(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x19
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x9

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B2C434(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = UnityEngine_Mathf__Max_40694800(
                                                                     enemyMasterInfo->fields.maxCommandSpell
                                                                   - MasterEnemy_k__BackingField->fields.commandSpellNum,
                                                                     0,
                                                                     0LL);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverPlayerMasterSkill(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardBattleEvent_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *MasterSkillSealedTurnArray; // x0
  __int64 v11; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v13; // x20
  int32_t v14; // w21
  Il2CppObject *current; // x24
  int32_t v16; // w0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_41867E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    this = (WarBoardBattleEvent_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v7);
    byte_41867E1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(MasterSkillChargeTurnArray, v3->fields._MasterPlayer_k__BackingField, v9);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v13 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_B2C434(MasterSkillSealedTurnArray, v11);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    MasterSkillSealedTurnArray,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v14 = 0;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v17 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B2C434(v17, v18);
    if ( !BYTE4(v19.fields.current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v14,
                                      (int32_t)v19.fields.current[2].monitor,
                                      (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
      v16 = BasicHelper__IndexValue_int_(
              v13,
              v14,
              (int32_t)current[3].klass,
              (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
      if ( v16 != -1 )
        LODWORD(current[3].klass) = v16;
      ++v14;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
}


int32_t __fastcall WarBoardBattleEvent__get_BgNo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgNo;
  else
    return 0;
}


int32_t __fastcall WarBoardBattleEvent__get_BgType(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgType;
  else
    return 0;
}


bool __fastcall WarBoardBattleEvent__get_IsPrecedingPlayer(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  return !WarBoardBattleInfo_k__BackingField || WarBoardBattleInfo_k__BackingField->fields.isPrecedingPlayer;
}


int32_t __fastcall WarBoardBattleEvent__get_LimitBattleTurn(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.battleTurn;
  else
    return -1;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__get_MasterEnemy(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterEnemy_k__BackingField;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__get_MasterPlayer(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterPlayer_k__BackingField;
}


WarBoardBattleServantEvent_o *__fastcall WarBoardBattleEvent__get_ServantEvent(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEvent_k__BackingField;
}


BattleWarBoardInfo_o *__fastcall WarBoardBattleEvent__get_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._WarBoardBattleInfo_k__BackingField;
}


int32_t __fastcall WarBoardBattleEvent__get_WarBoardStageId(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    return 0;
}


void __fastcall WarBoardBattleEvent__set_MasterEnemy(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterEnemy_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_MasterPlayer(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterPlayer_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_ServantEvent(
        WarBoardBattleEvent_o *this,
        WarBoardBattleServantEvent_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantEvent_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__set_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent_TakeoverSvtArg___ctor(
        WarBoardBattleEvent_TakeoverSvtArg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_long__int__o *v5; // x20
  struct System_Int32_array *v6; // x0

  if ( (byte_4185722 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v3);
    sub_B2C35C(&int___TypeInfo, v4);
    byte_4185722 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v5,
    (const MethodInfo_2E50D74 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v5;
  sub_B2C2F8(&this->fields.dicDistributeStar, v5);
  v6 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v6;
  sub_B2C2F8(&this->fields.fieldIndiv, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0

  if ( (byte_418571F & 1) == 0 )
  {
    sub_B2C35C(&WarBoardBattleEvent___c_TypeInfo, v1);
    byte_418571F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall WarBoardBattleEvent___c___ctor(WarBoardBattleEvent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_0(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B2C434(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B2C434(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B2C434(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___ctor(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__0(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v4 = this;
  if ( (byte_4185720 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B2C35C(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4185720 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B2C434(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *svtList; // x20

  v4 = this;
  if ( (byte_4185721 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_B2C35C(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt);
    byte_4185721 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList) )
  {
    sub_B2C434(this, svt);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    svtList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass69_0___ctor(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass69_0___IsTakeOverNextBattleBuff_b__0(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B2C434(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall WarBoardBattleEvent___c__DisplayClass76_0___ctor(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass76_0___CheckBuffCommonProgressTurn_b__0(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.svtUniqueId == id;
}


void __fastcall WarBoardBattleEvent___c__DisplayClass78_0___ctor(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent___c__DisplayClass78_0___MakeTurnCondStateByServant_b__0(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.selfUniqueId == id;
}
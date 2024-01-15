void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  BattleWarBoardEventLimitTurn_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x2
  struct System_Int32_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x2
  struct System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x2
  struct System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40F8C66 & 1) == 0 )
  {
    sub_B16FFC(&BattleWarBoardEventLimitTurn_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F8C66 = 1;
  }
  v8 = (BattleWarBoardEventLimitTurn_o *)sub_B170CC(BattleWarBoardEventLimitTurn_TypeInfo, method, v2, v3, v4);
  BattleWarBoardEventLimitTurn___ctor(v8, 0LL);
  this->fields.eventLimitTurn = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventLimitTurn,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.warBoardDataJson, v15, v16, v17, v18, v19, v20, v21);
  v23 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v22);
  this->fields.joinCurTurnUniqueIds = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v31 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v30);
  this->fields.aliveSvtUniqueIds = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v39 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v38);
  this->fields.notTakeOverBuffTypes = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  BaseBattleEvent___ctor((BaseBattleEvent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardBattleEvent___c__DisplayClass76_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_40F8C62 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&svtUniqueId);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v9);
    sub_B16FFC(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v10);
    byte_40F8C62 = 1;
  }
  v11 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_B170CC(
                                                         WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo,
                                                         *(_QWORD *)&svtUniqueId,
                                                         method,
                                                         v3,
                                                         v4);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v17 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v12, v13, v14, v15);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__25910576(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
}


// local variable allocation has failed, the output may be wrong!
BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleWarBoardInfo_WarBoardMasterInfo_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v13; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__51_0; // x20
  Il2CppObject *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct WarBoardBattleEvent___c_StaticFields *v23; // x0
  BattleServantConfConponent_o *p__9__51_0; // x0
  struct WarBoardBattleEvent___c_StaticFields *v26; // x8
  Il2CppObject *v27; // x21
  struct WarBoardBattleEvent___c_StaticFields *v28; // x0

  if ( (byte_40F8C52 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo);
    sub_B16FFC(&Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v9);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v10);
    sub_B16FFC(&WarBoardBattleEvent___c_TypeInfo, v11);
    byte_40F8C52 = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v13 = WarBoardBattleEvent___c_TypeInfo;
  if ( isPlayer )
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v13 = WarBoardBattleEvent___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__51_0 = (System_Predicate_T__o *)static_fields->__9__51_0;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_20441E8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B170CC(
                                          System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                          warBoardInfo,
                                          isPlayer,
                                          method,
                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v16,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v23 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v23->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v23->__9__51_0;
  }
  else
  {
    if ( (WORD1(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
      v13 = WarBoardBattleEvent___c_TypeInfo;
    }
    v26 = v13->static_fields;
    _9__51_0 = (System_Predicate_T__o *)v26->__9__51_1;
    if ( _9__51_0 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                          _9__51_0,
                                                          (const MethodInfo_20441E8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v26 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v26->__9;
    _9__51_0 = (System_Predicate_T__o *)sub_B170CC(
                                          System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                          warBoardInfo,
                                          isPlayer,
                                          method,
                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__51_0,
      v27,
      Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    v28 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v28->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
    p__9__51_0 = (BattleServantConfConponent_o *)&v28->__9__51_1;
  }
  sub_B16F98(p__9__51_0, (System_Int32_array **)_9__51_0, v17, v18, v19, v20, v21, v22);
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)masterInfo,
                                                      _9__51_0,
                                                      (const MethodInfo_20441E8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x19
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_List_BattleServantData__o *ServantList; // x0
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  Il2CppObject v19; // q0
  int64_t v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_40F8C65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_40F8C65 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v14 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_21;
  ServantList = BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !ServantList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v24.fields.current = (Il2CppObject *)v23.fields.fakeValue;
  *(_OWORD *)&v24.fields.list = *(_OWORD *)&v23.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B170D4();
    if ( BattleServantData__isDead((BattleServantData_o *)v24.fields.current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_B170D4();
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
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v22, 0LL);
        if ( !v14 )
          sub_B170D4();
        System_Collections_Generic_List_long___Add(
          v14,
          v20,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_21:
    sub_B170D4();
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40F8C50 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, masterInfo);
    byte_40F8C50 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
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
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40F8C51 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, masterInfo);
    byte_40F8C51 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *ValueArray; // x0

  if ( (byte_40F8C58 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_15269/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v10);
    byte_40F8C58 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  ValueArray = (System_Collections_Generic_IEnumerable_T__o *)ConstantStrMaster__GetValueArray(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (System_String_o *)StringLiteral_15269/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
                                                                0LL,
                                                                0LL);
  if ( !ValueArray )
  {
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_B170D4();
  }
  if ( !v11 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v11,
    ValueArray,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F8C53 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_15270/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v6);
    byte_40F8C53 = 1;
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
        return ConstantMaster__GetValue_28461932(
                 MasterData_WarQuestSelectionMaster,
                 (System_String_o *)StringLiteral_15270/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_B170D4();
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
    sub_B170D4();
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B16F98(
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
  int64_t UserSvtId; // x0

  if ( !svtData )
    goto LABEL_8;
  if ( svtData->fields.isAppliedHaveStars )
  {
    LODWORD(EventServantInfo) = 0;
    return (int)EventServantInfo;
  }
  svtData->fields.isAppliedHaveStars = 1;
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  if ( !ServantEvent_k__BackingField )
LABEL_8:
    sub_B170D4();
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x0
  BattleData_o *Data_k__BackingField; // x8
  int32_t groupId; // w19
  int32_t forceId; // w22
  System_Int32_array *v11; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v13; // x6

  if ( (byte_40F8C5C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, enemyMaster);
    byte_40F8C5C = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  v7 = sub_B17014(int___TypeInfo, 0LL, v6);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B170D4();
  forceId = enemyMaster->fields.forceId;
  groupId = enemyMaster->fields.groupId;
  v11 = (System_Int32_array *)v7;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_int__o *v18; // x20
  struct BattleData_o *Data_k__BackingField; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  Il2CppObject *current; // x23
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v23; // x21
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x19
  System_Int32_array *v26; // x0
  System_Int32_array *v27; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v29; // x6
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F8C5B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40F8C5B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    masterSkillInfo,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B170D4();
    if ( !BYTE4(v32.fields.current[1].monitor) )
    {
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v13,
        (int32_t)v32.fields.current[2].monitor,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( !v18 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v18,
        (int32_t)current[3].klass,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !v13
    || (v23 = SelfUserGame,
        v24 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v18)
    || (v25 = v24,
        v26 = System_Collections_Generic_List_int___ToArray(
                v18,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v23) )
  {
LABEL_19:
    sub_B170D4();
  }
  v27 = v26;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v23, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v25, v27, (int32_t)CommandSpell, v29);
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
  bool v7; // w20
  AvalonSceneManager_o *v8; // x0

  if ( (byte_40F8C5D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&WarBoardManager_TypeInfo, v3);
    byte_40F8C5D = 1;
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
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v7 = AvalonSceneManager__checkLoadedScene(Instance, 80, 0LL),
        (v8 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  if ( v7 )
    AvalonSceneManager__popSceneRefresh(v8, 1, WarBoardDataEntityFromResponse, 0LL);
  else
    AvalonSceneManager__transitionSceneRefresh(v8, 80, 1, WarBoardDataEntityFromResponse, 0, 0LL);
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
          sub_B17100(this, result, hideTypes);
          sub_B170A0();
        }
        if ( !result )
          sub_B170D4();
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  WarBoardBattleServantEvent_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardBattleEvent_o *v25; // x0
  const MethodInfo *v26; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarBoardBattleEvent_o *v34; // x0
  const MethodInfo *v35; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  char v43; // w0
  WarBoardBattleEvent_o *v44; // x0
  const MethodInfo *v45; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_40F8C4D & 1) == 0 )
  {
    sub_B16FFC(&WarBoardBattleServantEvent_TypeInfo, data);
    byte_40F8C4D = 1;
  }
  BaseBattleEvent__Init((BaseBattleEvent_o *)this, data, 0LL);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, 0LL);
  if ( !BattleInfo )
    sub_B170D4();
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (System_Int32_array **)warBoardBattleInfo,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( this->fields._WarBoardBattleInfo_k__BackingField )
    svtInfo = this->fields._WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v18 = (WarBoardBattleServantEvent_o *)sub_B170CC(WarBoardBattleServantEvent_TypeInfo, v13, v14, v15, v16);
  WarBoardBattleServantEvent___ctor(v18, svtInfo, 0LL);
  this->fields._ServantEvent_k__BackingField = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ServantEvent_k__BackingField,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v25,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v26);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MasterPlayer_k__BackingField,
    (System_Int32_array **)EventMasterInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = WarBoardBattleEvent__GetEventMasterInfo(v34, this->fields._WarBoardBattleInfo_k__BackingField, 0, v35);
  this->fields._MasterEnemy_k__BackingField = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MasterEnemy_k__BackingField,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager((BaseBattleEvent_o *)this, v43 & 1, data, 0LL);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v44, v45);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.notTakeOverBuffTypes,
    (System_Int32_array **)ResetBuffTypes,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(
                                  WarBoardBattleInfo_k__BackingField,
                                  0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleSquareIndividualityList,
    (System_Int32_array **)BattleSquareIndividuality,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
  char v16; // w0
  char v17; // w23
  _BOOL4 v18; // w0
  _BOOL4 v19; // w20
  _BOOL4 v20; // w21
  BattleData_o *Data_k__BackingField; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_IEnumerable_TSource__o *FieldServantList; // x24
  WarBoardBattleEvent___c_c *v27; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x25
  Il2CppObject *v30; // x26
  struct WarBoardBattleEvent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  WarBoardBattleEvent___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x24
  struct WarBoardBattleEvent___c_StaticFields *v45; // x9
  char v46; // w23
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__73_1; // x25
  Il2CppObject *v48; // x22
  struct WarBoardBattleEvent___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  struct System_Int32_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x0

  if ( (byte_40F8C61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, isPlayer);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_BattleServantData__int___ctor__, v10);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_BattleServantData__int__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v13);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v14);
    sub_B16FFC(&WarBoardBattleEvent___c_TypeInfo, v15);
    byte_40F8C61 = 1;
  }
  v16 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr,
          method);
  if ( !this->fields._Data_k__BackingField
    || (v17 = v16,
        v18 = BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v19 = v18,
        v20 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_B170D4();
  }
  FieldServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldServantList(
                                                                            Data_k__BackingField,
                                                                            0,
                                                                            0LL);
  v27 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v27 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v22,
                                                                                    v23,
                                                                                    v24,
                                                                                    v25);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__73_0,
      v30,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v31 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v31->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__73_0,
      (System_Int32_array **)_9__73_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldServantList,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v43 = WarBoardBattleEvent___c_TypeInfo;
  v44 = v38;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v43 = WarBoardBattleEvent___c_TypeInfo;
  }
  v45 = v43->static_fields;
  v46 = v17 ^ isPlayer;
  _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v45->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v45->__9;
    _9__73_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_BattleServantData__int__TypeInfo,
                                                                                 v39,
                                                                                 v40,
                                                                                 v41,
                                                                                 v42);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__73_1,
      v48,
      Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v49 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v49->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v49->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v44,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v57 = System_Linq_Enumerable__ToArray_int_(
          v56,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aliveSvtUniqueIds,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( (v46 & 1) != 0 )
  {
    v70 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
    v71 = System_Linq_Enumerable__Distinct_int_(
            v70,
            (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v71,
                          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_joinCurTurnUniqueIds,
    (System_Int32_array **)aliveSvtUniqueIds,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  if ( v19 && v20 )
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
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  if ( !svtData
    || (ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField,
        UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL),
        !ServantEvent_k__BackingField) )
  {
    sub_B170D4();
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, this->fields._Data_k__BackingField, 0LL);
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v13; // x3

  v5 = this;
  if ( (byte_40F8C55 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (WarBoardBattleEvent_o *)sub_B16FFC(&StringLiteral_15271/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v7);
    byte_40F8C55 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          MasterData_WarQuestSelectionMaster,
                                          (System_String_o *)StringLiteral_15271/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v13);
}


void __fastcall WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *PlayerServantList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  BattleServantData_array *v8; // x21
  int32_t v9; // w20
  unsigned __int64 v10; // x22
  BattleData_o *v11; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  PlayerServantList = BattleData__getPlayerServantList(Data_k__BackingField, 0LL);
  if ( !PlayerServantList )
    goto LABEL_12;
  v7 = *(_QWORD *)&PlayerServantList->max_length;
  v8 = PlayerServantList;
  if ( (int)v7 < 1 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v7 )
      {
        sub_B17100(PlayerServantList, v5, v6);
        sub_B170A0();
      }
      PlayerServantList = (BattleServantData_array *)WarBoardBattleEvent__GetServantHaveStar(this, v8->m_Items[v10], v6);
      LODWORD(v7) = v8->max_length;
      ++v10;
      v9 += (int)PlayerServantList;
    }
    while ( (__int64)v10 < (int)v7 );
  }
  v11 = this->fields._Data_k__BackingField;
  if ( !v11 )
LABEL_12:
    sub_B170D4();
  BattleData__InitCriticalPoint(v11, v9, 0LL);
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
    sub_B170D4();
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B170D4();
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B170D4();
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
  if ( BattleData__IsEndWaveBattle(Data_k__BackingField, 0LL) )
  {
    v4 = this->fields._Data_k__BackingField;
    if ( v4 )
    {
      battleAtkManager = v4->fields.battleAtkManager;
      if ( battleAtkManager )
        return !battleAtkManager->fields._IsTurnEnd_k__BackingField;
    }
LABEL_7:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  if ( (byte_40F8C4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, method);
    byte_40F8C4E = 1;
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B170D4();
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v26; // x20

  if ( (byte_40F8C5F & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, buff);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v9);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v11);
    sub_B16FFC(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v12);
    byte_40F8C5F = 1;
  }
  v13 = sub_B170CC(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, buff, buffEnt, baseVals, method);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = buffEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)buffEnt, v14, v15, v16, v17, v18, v19);
  if ( !baseVals )
    goto LABEL_13;
  if ( DataVals__isParam(baseVals, 68, 0LL) )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_B170D4();
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v26 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v21, v22, v23, v24);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return !BasicHelper__Any_int__25910576(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v26,
            (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_long__int__o *v14; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x21
  WarBoardBattleEvent___c_c *v21; // x8
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__57_0; // x22
  Il2CppObject *v24; // x23
  struct WarBoardBattleEvent___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v37; // x21
  struct BattleData_o *v38; // x9
  int32_t criticalstars; // w9
  unsigned int v40; // w20
  int v41; // w22
  int i; // w23
  BattleServantData_o *v43; // x0
  int64_t UserSvtId; // x0
  int32_t v45; // w2

  if ( (byte_40F8C57 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v12);
    sub_B16FFC(&WarBoardBattleEvent___c_TypeInfo, v13);
    byte_40F8C57 = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v14,
    (const MethodInfo_2E0A644 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_25;
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  v21 = WarBoardBattleEvent___c_TypeInfo;
  if ( (BYTE3(WarBoardBattleEvent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v21 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v16,
                                                                                    v17,
                                                                                    v18,
                                                                                    v19);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__57_0,
      v24,
      Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v25->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v33 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v32,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !v33 )
    goto LABEL_25;
  v36 = *(_QWORD *)&v33->max_length;
  v37 = v33;
  if ( v36 )
  {
    v38 = this->fields._Data_k__BackingField;
    if ( !v38 )
      goto LABEL_25;
    if ( (int)v36 >= 1 )
    {
      criticalstars = v38->fields.criticalstars;
      v40 = 0;
      v41 = criticalstars / (int)v36;
      for ( i = criticalstars % (int)v36; ; --i )
      {
        if ( v40 >= (unsigned int)v36 )
        {
          sub_B17100(v33, v34, v35);
          sub_B170A0();
        }
        v43 = (BattleServantData_o *)v37->m_Items[v40];
        if ( !v43 )
          break;
        UserSvtId = BattleServantData__getUserSvtId(v43, 0LL);
        if ( !v14 )
          break;
        if ( i <= 0 )
          v45 = v41;
        else
          v45 = v41 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v14,
          UserSvtId,
          v45,
          (const MethodInfo_2E0B1F8 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(v36) = v37->max_length;
        if ( (int)++v40 >= (int)v36 )
          return v14;
      }
LABEL_25:
      sub_B170D4();
    }
  }
  return v14;
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

  if ( (byte_40F8C5A & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, *(_QWORD *)&forceId);
    sub_B16FFC(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12);
    byte_40F8C5A = 1;
  }
  v13 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_B170CC(
                                                     BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo,
                                                     *(_QWORD *)&forceId,
                                                     *(_QWORD *)&groupId,
                                                     chargeArray,
                                                     sealedArray);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  v13->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13->fields.commandSpellNum = spellNum;
  return v13;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardBattleEvent___c__DisplayClass78_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_40F8C63 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&selfUniqueId);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v9);
    sub_B16FFC(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v10);
    byte_40F8C63 = 1;
  }
  v11 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_B170CC(
                                                         WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo,
                                                         *(_QWORD *)&selfUniqueId,
                                                         method,
                                                         v3,
                                                         v4);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v17 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v12, v13, v14, v15);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x20
  char v22; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v28; // w8
  struct BattleWarBoardInfo_o *v29; // x8
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array **logic; // x1
  const MethodInfo *v39; // x1
  System_Int32_array **DistributeStar; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleData_o *v47; // x0
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **ServantEvent_k__BackingField; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o **v68; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x23
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  struct BattleData_o *v84; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *player_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  struct BattleData_o *v91; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *enemy_datalist; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v93; // x24
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  const MethodInfo *v101; // x1
  System_Int32_array **WarBoardMasterArray; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7

  if ( (byte_40F8C56 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantData___ctor__, method);
    sub_B16FFC(&System_Action_BattleServantData__TypeInfo, v6);
    sub_B16FFC(&BattleWarBoardInfo_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v11);
    sub_B16FFC(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v13);
    sub_B16FFC(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v14);
    sub_B16FFC(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v15);
    byte_40F8C56 = 1;
  }
  v16 = sub_B170CC(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, method, v2, v3, v4);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v16, 0LL);
  v21 = sub_B170CC(BattleWarBoardInfo_TypeInfo, v17, v18, v19, v20);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v21, 0LL);
  v22 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
          this,
          this->klass->vtable._5_Init.methodPtr);
  if ( !v21 )
    goto LABEL_19;
  *(_BYTE *)(v21 + 20) = v22 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v28 = WarBoardBattleInfo_k__BackingField ? WarBoardBattleInfo_k__BackingField->fields.battleTurn : -1;
  *(_DWORD *)(v21 + 24) = v28;
  v29 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v29 )
    LODWORD(v29) = v29->fields.stageId;
  *(_DWORD *)(v21 + 16) = (_DWORD)v29;
  v30 = sub_B170CC(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v23, v24, v25, v26);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v30, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  if ( !v30 )
    goto LABEL_19;
  logic = (System_Int32_array **)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v30 + 16) = logic;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), logic, v31, v32, v33, v34, v35, v36);
  DistributeStar = (System_Int32_array **)WarBoardBattleEvent__MakeDistributeStar(this, v39);
  *(_QWORD *)(v30 + 24) = DistributeStar;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 24), DistributeStar, v41, v42, v43, v44, v45, v46);
  v47 = this->fields._Data_k__BackingField;
  if ( !v47 )
    goto LABEL_19;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(v47, 0LL);
  *(_QWORD *)(v30 + 32) = QuestIndividualities;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 32), QuestIndividualities, v49, v50, v51, v52, v53, v54);
  ServantEvent_k__BackingField = (System_Int32_array **)this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v30 + 40) = ServantEvent_k__BackingField;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 40), ServantEvent_k__BackingField, v56, v57, v58, v59, v60, v61);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 24) = v30;
  v68 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o **)(v16 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)v30, v62, v63, v64, v65, v66, v67);
  v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo,
                                                                                                  v69,
                                                                                                  v70,
                                                                                                  v71,
                                                                                                  v72);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v73,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v16 + 16) = v73;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v73, v74, v75, v76, v77, v78, v79);
  v84 = this->fields._Data_k__BackingField;
  if ( !v84 )
    goto LABEL_19;
  player_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v84->fields.player_datalist;
  v86 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleServantData__TypeInfo,
                                                                               v80,
                                                                               v81,
                                                                               v82,
                                                                               v83);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v86,
    (Il2CppObject *)v16,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleServantData___ctor__);
  if ( !player_datalist
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          player_datalist,
          (System_Action_T__o *)v86,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v91 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v91->fields.enemy_datalist,
        v93 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleServantData__TypeInfo,
                                                                                     v87,
                                                                                     v88,
                                                                                     v89,
                                                                                     v90),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v93,
          (Il2CppObject *)v16,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleServantData___ctor__),
        !enemy_datalist)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v93,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        !*v68) )
  {
LABEL_19:
    sub_B170D4();
  }
  v94 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 *v68,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v21 + 32) = v94;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), v94, v95, v96, v97, v98, v99, v100);
  WarBoardMasterArray = (System_Int32_array **)WarBoardBattleEvent__MakeWarBoardMasterArray(this, v101);
  *(_QWORD *)(v21 + 40) = WarBoardMasterArray;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 40), WarBoardMasterArray, v103, v104, v105, v106, v107, v108);
  v109 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
                                  this,
                                  this->klass[1]._1.image);
  *(_QWORD *)(v21 + 56) = v109;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 56), v109, v110, v111, v112, v113, v114, v115);
  return (BattleWarBoardInfo_o *)v21;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverPlayerMasterInfo; // x0
  const MethodInfo *v12; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverEnemyMasterInfo; // x0

  if ( (byte_40F8C59 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v8);
    byte_40F8C59 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
                                                                                      this,
                                                                                      v10);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v9,
      TakeoverPlayerMasterInfo,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  }
  TakeoverEnemyMasterInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                                                                     this,
                                                                                     this->fields._MasterEnemy_k__BackingField,
                                                                                     v12);
  if ( !TakeoverEnemyMasterInfo )
  {
    if ( v9 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_11:
    sub_B170D4();
  }
  if ( !v9 )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    TakeoverEnemyMasterInfo,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
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
  System_Collections_Generic_List_BattleServantData__o *ServantList; // x0
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleStartServantAiResetChecker_o *v19; // x24
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F8C60 & 1) == 0 )
  {
    sub_B16FFC(&BattleStartServantAiResetChecker_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v6);
    byte_40F8C60 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (ServantList = BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B170D4();
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v21.fields.current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_B170D4();
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v19 = (BattleStartServantAiResetChecker_o *)sub_B170CC(
                                                    BattleStartServantAiResetChecker_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
      BattleStartServantAiResetChecker___ctor(v19, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_B170D4();
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v19, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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
    sub_B170D4();
  progressTurnCond = buff->fields.progressTurnCond;
  v7 = isEndEnemyTurn;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && ((!buff->fields.isProgressEndEnemyTurn ^ v7) & 1) != 0 )
  {
    buff->fields.turn = UnityEngine_Mathf__Max_40727628(buff->fields.turn - 2, 0, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x19
  bool v18; // w21
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  int32_t v27; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleData_o *v30; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_40F8C64 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_40F8C64 = 1;
  }
  v11 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_18D62FC *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v11 )
    sub_B170D4();
  klass = v11->klass;
  v13 = v11;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(v11, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_B170D4();
  v18 = isEndEnemyTurn;
  while ( 1 )
  {
    v19 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_16;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_16:
      v22 = sub_AAFEF8(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v25 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_AAFEF8(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B170D4();
    ServantData = BattleData__getServantData(Data_k__BackingField, v27, 0LL);
    if ( ServantData )
    {
      v30 = this->fields._Data_k__BackingField;
      if ( !v30 )
        sub_B170D4();
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_B170D4();
      BattleBuffData__turnProgressing(buffData, v30->fields.logic, v18, v27, 0LL);
    }
  }
  v32 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v33 = 0LL;
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_34;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_34:
    v35 = sub_AAFEF8(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v17, *(_QWORD *)(v35 + 8));
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x24

  if ( (byte_40F8C54 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, arg);
    sub_B16FFC(&System_Action_string__TypeInfo, v7);
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v10);
    byte_40F8C54 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        func,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v14 = (WarBoardBattleResultRequest_o *)Request_WarBoardWallAttackRequest;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v12);
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_string__TypeInfo,
                                                                               v17,
                                                                               v18,
                                                                               v19,
                                                                               v20);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)this,
    Method_WarBoardBattleEvent_SetResponseWarBoardData__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  if ( !v14 )
    sub_B170D4();
  WarBoardBattleResultRequest__beginRequest(v14, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v21, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
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
  sub_B16F98(
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
  struct System_Int32_array *joinCurTurnUniqueIds; // x1

  if ( (byte_40F8C5E & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, save);
    byte_40F8C5E = 1;
  }
  if ( !save )
    goto LABEL_8;
  joinCurTurnUniqueIds = save->fields.joinCurTurnUniqueIds;
  if ( !joinCurTurnUniqueIds )
    joinCurTurnUniqueIds = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  if ( !this )
LABEL_8:
    sub_B170D4();
  this->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.joinCurTurnUniqueIds,
    (System_Int32_array **)joinCurTurnUniqueIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardBattleEvent__SetServantDataAfterPassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *v6; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  BattleServantData_array *v9; // x21
  int max_length; // w8
  unsigned int v11; // w23
  BattleServantData_o *v12; // x22
  BattleBuffData_o *buffData; // x0
  BattleBuffData_o *v14; // x0
  struct BattleData_o *v15; // x8
  BattleLogic_o *logic; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  v6 = isPlayer
     ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
     : BattleData__getEnemyServantList(Data_k__BackingField, 0LL);
  v9 = v6;
  if ( !v6 )
    goto LABEL_20;
  max_length = v6->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v12 = v9->m_Items[v11];
      if ( !v12 )
        break;
      buffData = v12->fields.buffData;
      if ( !buffData )
        break;
      BattleBuffData__DeleteDummyBuff(buffData, 0LL);
      v14 = BattleServantData__get_BuffData(v12, 0LL);
      if ( !v14 )
        break;
      BattleBuffData__SetNoActBuffWithoutExecuteServant(v14, v9, 0LL);
      max_length = v9->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_13;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_13:
  if ( isPlayer )
    WarBoardBattleEvent__InitUsePlayerServantData(this, v7);
  if ( WarBoardBattleEvent__IsSettedAllServant(this, v7) )
  {
    v15 = this->fields._Data_k__BackingField;
    if ( !v15 )
      goto LABEL_20;
    logic = v15->fields.logic;
    if ( !logic )
      goto LABEL_20;
    BattleLogic__updateFieldBuff(logic, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__SetServantDataBeforePassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleServantData_array *v8; // x20
  int max_length; // w8
  unsigned int v10; // w23
  Il2CppClass **v11; // x8
  BattleServantData_o *v12; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  v5 = isPlayer
     ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
     : BattleData__getEnemyServantList(Data_k__BackingField, 0LL);
  v8 = v5;
  if ( !v5 )
    goto LABEL_13;
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(v5, v6, v7);
        sub_B170A0();
      }
      v11 = &v8->obj.klass + (int)v10;
      v12 = (BattleServantData_o *)v11[4];
      if ( !v12 )
        break;
      ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
      UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v11[4], 0LL);
      if ( !ServantEvent_k__BackingField )
        break;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0LL);
      BattleServantData__SetTakeoverServantData(v12, EventServantInfo, 0LL);
      max_length = v8->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x19
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x9

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B170D4();
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = UnityEngine_Mathf__Max_40727628(
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
  System_Int32_array *MasterSkillSealedTurnArray; // x0
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v12; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  int32_t v14; // w21
  Il2CppObject *current; // x24
  int32_t v16; // w0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_40F8C4F & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    this = (WarBoardBattleEvent_o *)sub_B16FFC(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v7);
    byte_40F8C4F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
                                 MasterSkillChargeTurnArray,
                                 v3->fields._MasterPlayer_k__BackingField,
                                 v9);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v12 = MasterSkillSealedTurnArray,
        (masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    masterSkillInfo,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v14 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B170D4();
    if ( !BYTE4(v17.fields.current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v14,
                                      (int32_t)v17.fields.current[2].monitor,
                                      (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
      v16 = BasicHelper__IndexValue_int_(
              v12,
              v14,
              (int32_t)current[3].klass,
              (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
      if ( v16 != -1 )
        LODWORD(current[3].klass) = v16;
      ++v14;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_long__int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  struct System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F7AC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    byte_40F7AC4 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_2E0A644 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicDistributeStar,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v15);
  this->fields.fieldIndiv = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AC1 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardBattleEvent___c_TypeInfo, v1);
    byte_40F7AC1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardBattleEvent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBattleEvent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B170D4();
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B170D4();
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B170D4();
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
  struct System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__o *svtList; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverServantData; // x0

  if ( (byte_40F7AC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__, svt);
    byte_40F7AC2 = 1;
  }
  if ( !svt
    || (svtList = this->fields.svtList,
        TakeoverServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleServantData__GetTakeoverServantData(
                                                                                       svt,
                                                                                       this->fields.arg,
                                                                                       0LL),
        !svtList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtList,
    TakeoverServantData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__o *svtList; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *TakeoverServantData; // x0

  if ( (byte_40F7AC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__, svt);
    byte_40F7AC3 = 1;
  }
  if ( !svt
    || (svtList = this->fields.svtList,
        TakeoverServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleServantData__GetTakeoverServantData(
                                                                                       svt,
                                                                                       this->fields.arg,
                                                                                       0LL),
        !svtList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtList,
    TakeoverServantData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
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
    sub_B170D4();
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
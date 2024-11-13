void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattleWarBoardEventLimitTurn_o *v9; // x20
  const MethodInfo *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Int32_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Int32_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B187C7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWarBoardEventLimitTurn_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B187C7 = 1;
  }
  v9 = (BattleWarBoardEventLimitTurn_o *)sub_1BCAA2C(BattleWarBoardEventLimitTurn_TypeInfo, method, v2, v3);
  BattleWarBoardEventLimitTurn___ctor(v9, v10);
  this->fields.eventLimitTurn = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventLimitTurn, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.warBoardDataJson, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.joinCurTurnUniqueIds,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aliveSvtUniqueIds, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v38;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.notTakeOverBuffTypes,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4B187C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&svtUniqueId, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, v10, v11);
    byte_4B187C3 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&svtUniqueId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v18 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v15, v16);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    0LL);
  return BasicHelper__Any_int__49273364(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


// local variable allocation has failed, the output may be wrong!
BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Object_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v15; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__51_0; // x20
  Il2CppObject *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct WarBoardBattleEvent___c_StaticFields *v25; // x0
  PartyOrganizationUtility_o *p__9__51_0; // x0
  Il2CppObject *v28; // x21
  struct WarBoardBattleEvent___c_StaticFields *v29; // x0

  if ( (byte_4B187B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___, warBoardInfo, isPlayer);
    sub_1BCA7E0(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, v10, v11);
    sub_1BCA7E0(&WarBoardBattleEvent___c_TypeInfo, v12, v13);
    byte_4B187B3 = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = (System_Object_array *)warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
  v15 = WarBoardBattleEvent___c_TypeInfo;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo, warBoardInfo);
    v15 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  if ( isPlayer )
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, warBoardInfo);
        v15 = WarBoardBattleEvent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                 System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                                 warBoardInfo,
                                                 isPlayer,
                                                 method);
      System_Predicate_object____ctor(_9__51_0, v18, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, 0LL);
      v25 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v25->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (PartyOrganizationUtility_o *)&v25->__9__51_0;
LABEL_17:
      sub_1BCA784(p__9__51_0, (int64_t)_9__51_0, v19, v20, v21, v22, v23, v24);
    }
  }
  else
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_1;
    if ( !_9__51_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, warBoardInfo);
        v15 = WarBoardBattleEvent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v15->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                 System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                                 warBoardInfo,
                                                 isPlayer,
                                                 method);
      System_Predicate_object____ctor(_9__51_0, v28, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, 0LL);
      v29 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v29->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (PartyOrganizationUtility_o *)&v29->__9__51_1;
      goto LABEL_17;
    }
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_object_(
                                                      masterInfo,
                                                      (System_Predicate_T__o *)_9__51_0,
                                                      (const MethodInfo_300CA48 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_long__o *v21; // x19
  __int64 v22; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject v30; // q0
  int64_t v31; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4B187C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    byte_4B187C6 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_24;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v37.fields.currentCryptoKey;
  v38.fields._current = (Il2CppObject *)v37.fields.fakeValue;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v24 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1BCAA3C(v24, v25);
    if ( BattleServantData__isDead((BattleServantData_o *)v38.fields._current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_1BCAA3C(0LL, v28);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v30 = current[3];
        *(Il2CppObject *)&v37.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v37.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
        v36 = v37;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
        if ( !v21 )
          sub_1BCAA3C(v31, v31);
        items = v21->fields._items;
        v33 = Method_System_Collections_Generic_List_long__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(v31, v31);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v21,
            v31,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = size + 1;
          items->m_Items[size] = v31;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v21 )
LABEL_24:
    sub_1BCAA3C(Data_k__BackingField, v22);
  return System_Collections_Generic_List_long___ToArray(
           v21,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B187B1 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, masterInfo, method);
    byte_4B187B1 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_1BCAA44(result, v5);
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

  if ( (byte_4B187B2 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, masterInfo, method);
    byte_4B187B2 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_1BCAA44(result, v5);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x19
  System_Int32_array *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4B187B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_15648/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/, v14, v15);
    byte_4B187B9 = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ConstantStrMaster__GetValueArray(
               (ConstantStrMaster_o *)Instance,
               (System_String_o *)StringLiteral_15648/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
               0LL,
               0LL);
  if ( !Instance )
  {
    if ( v16 )
      return System_Collections_Generic_List_int___ToArray(
               v16,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1BCAA3C(Instance, v18);
  }
  if ( !v16 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_4B187B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, *(_QWORD *)&curBgmId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    this = (WarBoardBattleEvent_o *)sub_1BCA7E0(&StringLiteral_15649/*"WAR_BOARD_BATTLE_LOSE_BGM"*/, v7, v8);
    byte_4B187B4 = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_39773052(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15649/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_1BCAA3C(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&save->fields.joinCurTurnUniqueIds,
    (int64_t)joinCurTurnUniqueIds,
    (int64_t)method,
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
  const MethodInfo *v5; // x2

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
    sub_1BCAA3C(this, svtData);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, v5);
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
  int32_t forceId; // w19
  int32_t groupId; // w22
  BattleWarBoardInfo_WarBoardMasterInfo_Fields *p_fields; // t2
  System_Int32_array *v12; // x20
  WarBoardBattleEvent_o *EnemyMasterCommandSpellCnt; // x0
  const MethodInfo *v14; // x6

  if ( (byte_4B187BD & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, enemyMaster, method);
    byte_4B187BD = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v6 = sub_1BCA888(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(v6, v7);
  p_fields = &enemyMaster->fields;
  forceId = enemyMaster->fields.forceId;
  groupId = p_fields->groupId;
  v12 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0LL);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v12,
           (int32_t)EnemyMasterCommandSpellCnt,
           v14);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  __int64 v25; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x25
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  __int64 klass_low; // x1
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  UserGameEntity_o *v38; // x21
  System_Int32_array *v39; // x19
  System_Int32_array *v40; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v42; // x6
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B187BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B187BC = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_28;
  masterSkillInfo = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    masterSkillInfo,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v27 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1BCAA3C(v27, v28);
    if ( !BYTE4(v45.fields._current[1].monitor) )
    {
      if ( !v19 )
        sub_1BCAA3C(v27, v28);
      monitor_low = LODWORD(v45.fields._current[2].monitor);
      items = v19->fields._items;
      v32 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BCAA3C(v27, monitor_low);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          monitor_low,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
      if ( !v23 )
        sub_1BCAA3C(v27, monitor_low);
      klass_low = LODWORD(current[3].klass);
      v35 = v23->fields._items;
      v36 = Method_System_Collections_Generic_List_int__Add__;
      ++v23->fields._version;
      if ( !v35 )
        sub_1BCAA3C(v27, klass_low);
      v37 = v23->fields._size;
      if ( (unsigned int)v37 >= v35->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v23,
          klass_low,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v23->fields._size = v37 + 1;
        v35->m_Items[v37 + 1] = klass_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v19
    || (v38 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v19,
                                                                         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v23)
    || (v39 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v23,
                                                                         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v38) )
  {
LABEL_28:
    sub_1BCAA3C(masterSkillInfo, v25);
  }
  v40 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v38, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v39, v40, (int32_t)CommandSpell, v42);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool v11; // w20

  if ( (byte_4B187BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&WarBoardManager_TypeInfo, v4, v5);
    byte_4B187BE = 1;
  }
  WarBoardDataEntityFromResponse = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0LL) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v6);
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v11 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 80, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v10);
  }
  if ( v11 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, WarBoardDataEntityFromResponse, 0LL);
  else
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      80,
      1,
      WarBoardDataEntityFromResponse,
      0,
      0LL);
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
          sub_1BCAA44(this, result);
        if ( !result )
          sub_1BCAA3C(this, result);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  BattleInfoData_o *BattleInfo; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int64_t svtInfo; // x21
  int64_t v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  WarBoardBattleEvent_o *v38; // x0
  const MethodInfo *v39; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  WarBoardBattleEvent_o *v47; // x0
  const MethodInfo *v48; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  BaseBattleEvent_o *v56; // x0
  const MethodInfo *v57; // x3
  WarBoardBattleEvent_o *v58; // x0
  const MethodInfo *v59; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  BattleWarBoardInfo_o *v73; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4B187AD & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardBattleServantEvent_TypeInfo, data, method);
    byte_4B187AD = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, v10);
  if ( !BattleInfo )
    sub_1BCAA3C(0LL, v12);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int64_t)warBoardBattleInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    svtInfo = (int64_t)WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v25 = sub_1BCAA2C(WarBoardBattleServantEvent_TypeInfo, v20, v21, v22);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_QWORD *)(v25 + 16) = svtInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), svtInfo, v26, v27, v28, v29, v30, v31);
  this->fields._ServantEvent_k__BackingField = (struct WarBoardBattleServantEvent_o *)v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantEvent_k__BackingField,
    v25,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v38,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v39);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterPlayer_k__BackingField,
    (int64_t)EventMasterInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = WarBoardBattleEvent__GetEventMasterInfo(v47, this->fields._WarBoardBattleInfo_k__BackingField, 0, v48);
  this->fields._MasterEnemy_k__BackingField = v49;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterEnemy_k__BackingField,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (BaseBattleEvent_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                               this,
                               this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager(v56, (unsigned __int8)v56 & 1, data, v57);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v58, v59);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.notTakeOverBuffTypes,
    (int64_t)ResetBuffTypes,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v73 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v73 )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(v73, 0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleSquareIndividualityList,
    (int64_t)BattleSquareIndividuality,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
}


bool __fastcall WarBoardBattleEvent__InitBGData(
        WarBoardBattleEvent_o *this,
        int32_t *bgNo,
        int32_t *bgType,
        const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  int32_t v5; // w9
  int32_t v6; // w8
  bool result; // w0

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( !WarBoardBattleInfo_k__BackingField )
    return 0;
  v5 = WarBoardBattleInfo_k__BackingField->fields.bgNo;
  if ( v5 >= 1 )
    *bgNo = v5;
  v6 = WarBoardBattleInfo_k__BackingField->fields.bgType;
  result = v5 > 0;
  if ( v6 >= 1 )
  {
    result = 1;
    *bgType = v6;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  BattleData_o *Data_k__BackingField; // x0
  __int64 v24; // x1
  char v25; // w23
  int v26; // w20
  _BOOL4 v27; // w21
  BattleServantData_array *FieldServantList; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  WarBoardBattleEvent___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_object__bool__o *_9__73_0; // x25
  Il2CppObject *v35; // x26
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  WarBoardBattleEvent___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  char v49; // w23
  System_Func_object__int__o *_9__73_1; // x25
  Il2CppObject *v51; // x22
  struct WarBoardBattleEvent___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  struct System_Int32_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1

  if ( (byte_4B187C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, isPlayer, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, v19, v20);
    sub_1BCA7E0(&WarBoardBattleEvent___c_TypeInfo, v21, v22);
    byte_4B187C2 = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v25 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v26 = (int)Data_k__BackingField,
        v27 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_1BCAA3C(Data_k__BackingField, v24);
  }
  FieldServantList = BattleData__getFieldServantList(Data_k__BackingField, 0, 0LL);
  v32 = WarBoardBattleEvent___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo, v29);
    v32 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__73_0 = (System_Func_object__bool__o *)v32->static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = WarBoardBattleEvent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__73_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v29, v30, v31);
    System_Func_object__bool____ctor(_9__73_0, v35, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__73_0,
      (int64_t)_9__73_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v47 = WarBoardBattleEvent___c_TypeInfo;
  v48 = v43;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo, v44);
    v47 = WarBoardBattleEvent___c_TypeInfo;
  }
  v49 = v25 ^ isPlayer;
  _9__73_1 = (System_Func_object__int__o *)v47->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47, v44);
      v47 = WarBoardBattleEvent___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v47->static_fields->__9;
    _9__73_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v44, v45, v46);
    System_Func_object__int____ctor(_9__73_1, v51, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, 0LL);
    v52 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v52->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v52->__9__73_1, (int64_t)_9__73_1, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v48,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v60 = System_Linq_Enumerable__ToArray_int_(
          v59,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v60;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aliveSvtUniqueIds, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  if ( (v49 & 1) != 0 )
  {
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    v74 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
    v75 = System_Linq_Enumerable__Distinct_int_(
            v74,
            (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
    aliveSvtUniqueIds = System_Linq_Enumerable__ToArray_int_(
                          v75,
                          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_joinCurTurnUniqueIds,
    (int64_t)aliveSvtUniqueIds,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( (v26 & v27 & 1) != 0 )
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
  const MethodInfo *v6; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0

  if ( !svtData
    || (ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField,
        v5 = this,
        this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0LL),
        !ServantEvent_k__BackingField) )
  {
    sub_1BCAA3C(this, svtData);
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, v6);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, v5->fields._Data_k__BackingField, 0LL);
}


void __fastcall WarBoardBattleEvent__InitStageData(
        WarBoardBattleEvent_o *this,
        StageEntity_o *stage,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleWarBoardEventLimitTurn_o *eventLimitTurn; // x0
  const MethodInfo *v6; // x1

  eventLimitTurn = this->fields.eventLimitTurn;
  if ( !eventLimitTurn )
    sub_1BCAA3C(0LL, stage);
  BattleWarBoardEventLimitTurn__InitLimitInfo(eventLimitTurn, this, stage, v3);
  WarBoardBattleEvent__TakeoverEnemyMasterInfo(this, v6);
}


void __fastcall WarBoardBattleEvent__InitStartResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardBattleEvent_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v13; // x3

  v5 = this;
  if ( (byte_4B187B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    this = (WarBoardBattleEvent_o *)sub_1BCA7E0(&StringLiteral_15650/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/, v8, v9);
    byte_4B187B6 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15650/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v13);
}


void __fastcall WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v6; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  Data_k__BackingField = (BattleData_o *)BattleData__getPlayerServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_12;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v6 = Data_k__BackingField;
  if ( (int)m_CancellationTokenSource < 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(Data_k__BackingField, method);
      Data_k__BackingField = (BattleData_o *)WarBoardBattleEvent__GetServantHaveStar(
                                               this,
                                               *((BattleServantData_o **)&v6->fields.rootfsm + v8),
                                               v4);
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v8;
      v7 += (int)Data_k__BackingField;
    }
    while ( (__int64)v8 < (int)m_CancellationTokenSource );
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
LABEL_12:
    sub_1BCAA3C(Data_k__BackingField, method);
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
    sub_1BCAA3C(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__getDefeatPoint(svtData, 0LL) > 0;
}


bool __fastcall WarBoardBattleEvent__IsPossibleAddBuffParam(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v5; // x1

  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(
                                (BaseBattleEvent_o *)this,
                                (const MethodInfo *)svtData);
  if ( IsBattleEndReduceBuffTurn )
    return 1;
  if ( !svtData )
    sub_1BCAA3C(IsBattleEndReduceBuffTurn, v5);
  return BattleServantData__isAlive(svtData, 0, 0LL);
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
    sub_1BCAA3C(Data_k__BackingField, method);
  }
  return 0;
}


bool __fastcall WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardBattleEvent_o *v3; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  v3 = this;
  if ( (byte_4B187AF & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_BattleServantData__get_Count__,
                                      method,
                                      v2);
    byte_4B187AF = 1;
  }
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  _BOOL8 isParam; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v29; // x20

  if ( (byte_4B187C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, buff, buffEnt);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, v13, v14);
    byte_4B187C0 = 1;
  }
  v15 = sub_1BCAA2C(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo, buff, buffEnt, baseVals);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = buffEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)buffEnt, v18, v19, v20, v21, v22, v23);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_1BCAA3C(isParam, v17);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v29 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v25, v26, v27);
  System_Func_int__bool____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    0LL);
  return !BasicHelper__Any_int__49273364(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v29,
            (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_long__int__o *v19; // x19
  __int64 v20; // x1
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  WarBoardBattleEvent___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__bool__o *_9__57_0; // x22
  Il2CppObject *v29; // x23
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v39; // x21
  struct BattleData_o *v40; // x9
  int32_t criticalstars; // w9
  unsigned int v42; // w20
  int v43; // w22
  int i; // w23
  int32_t v45; // w2

  if ( (byte_4B187B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, v15, v16);
    sub_1BCA7E0(&WarBoardBattleEvent___c_TypeInfo, v17, v18);
    byte_4B187B8 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v19,
    (const MethodInfo_323D83C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_23;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(Data_k__BackingField, 0LL);
  v26 = WarBoardBattleEvent___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo, v23);
    v26 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__bool__o *)v26->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v23);
      v26 = WarBoardBattleEvent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__57_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v23, v24, v25);
    System_Func_object__bool____ctor(_9__57_0, v29, Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                                           v37,
                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_23;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v39 = Data_k__BackingField;
  if ( m_CancellationTokenSource )
  {
    v40 = this->fields._Data_k__BackingField;
    if ( !v40 )
      goto LABEL_23;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      criticalstars = v40->fields.criticalstars;
      v42 = 0;
      v43 = criticalstars / (int)m_CancellationTokenSource;
      for ( i = criticalstars % (int)m_CancellationTokenSource; ; --i )
      {
        if ( v42 >= (unsigned int)m_CancellationTokenSource )
          sub_1BCAA44(Data_k__BackingField, v20);
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v39->fields.rootfsm + (int)v42);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v19 )
          break;
        if ( i <= 0 )
          v45 = v43;
        else
          v45 = v43 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v19,
          (int64_t)Data_k__BackingField,
          v45,
          (const MethodInfo_323E210 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(m_CancellationTokenSource) = v39->fields.m_CancellationTokenSource;
        if ( (int)++v42 >= (int)m_CancellationTokenSource )
          return v19;
      }
LABEL_23:
      sub_1BCAA3C(Data_k__BackingField, v20);
    }
  }
  return v19;
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
  __int64 v13; // x2
  BattleWarBoardInfo_WarBoardMasterInfo_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B187BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo, v12, v13);
    byte_4B187BB = 1;
  }
  v14 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_1BCAA2C(
                                                     BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo,
                                                     *(_QWORD *)&forceId,
                                                     *(_QWORD *)&groupId,
                                                     chargeArray);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v14->fields.forceId = forceId;
  v14->fields.groupId = groupId;
  v14->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v14->fields.commandSpellNum = spellNum;
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4B187C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&selfUniqueId, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, v10, v11);
    byte_4B187C4 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo, *(_QWORD *)&selfUniqueId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v18 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v15, v16);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    0LL);
  if ( BasicHelper__Any_int__49273364(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x20
  BattleData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x9
  int64_t v33; // x22
  const MethodInfo *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  int64_t logic; // x1
  const MethodInfo *v43; // x1
  System_Collections_Generic_Dictionary_long__int__o *DistributeStar; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Int32_array *QuestIndividualities; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x23
  BattleData_o **v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x2
  __int64 v83; // x3
  struct BattleData_o *v84; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x23
  System_Action_object__o *v86; // x24
  __int64 v87; // x2
  __int64 v88; // x3
  struct BattleData_o *v89; // x8
  System_Collections_Generic_List_object__o *enemy_datalist; // x23
  System_Action_object__o *v91; // x24
  System_Object_array *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  const MethodInfo *v99; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardMasterArray; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7

  if ( (byte_4B187B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantData__TypeInfo, method, v2);
    sub_1BCA7E0(&BattleWarBoardInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__, v19, v20);
    sub_1BCA7E0(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, v21, v22);
    byte_4B187B7 = 1;
  }
  v23 = sub_1BCAA2C(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  v27 = sub_1BCAA2C(BattleWarBoardInfo_TypeInfo, v24, v25, v26);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v27, 0LL);
  v28 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                          this,
                          this->klass->vtable._5_Init.methodPtr);
  if ( !v27 )
    goto LABEL_17;
  *(_BYTE *)(v27 + 20) = (unsigned __int8)v28 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
  {
    *(_DWORD *)(v27 + 24) = WarBoardBattleInfo_k__BackingField->fields.battleTurn;
    LODWORD(WarBoardBattleInfo_k__BackingField) = WarBoardBattleInfo_k__BackingField->fields.stageId;
  }
  else
  {
    *(_DWORD *)(v27 + 24) = -1;
  }
  *(_DWORD *)(v27 + 16) = (_DWORD)WarBoardBattleInfo_k__BackingField;
  v33 = sub_1BCAA2C(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo, v29, v30, v31);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v33, v34);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_17;
  if ( !v33 )
    goto LABEL_17;
  logic = (int64_t)Data_k__BackingField->fields.logic;
  *(_QWORD *)(v33 + 16) = logic;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), logic, v35, v36, v37, v38, v39, v40);
  DistributeStar = WarBoardBattleEvent__MakeDistributeStar(this, v43);
  *(_QWORD *)(v33 + 24) = DistributeStar;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)DistributeStar, v45, v46, v47, v48, v49, v50);
  v28 = this->fields._Data_k__BackingField;
  if ( !v28 )
    goto LABEL_17;
  QuestIndividualities = BattleData__getQuestIndividualities(v28, 0LL);
  *(_QWORD *)(v33 + 32) = QuestIndividualities;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)QuestIndividualities, v52, v53, v54, v55, v56, v57);
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v33 + 40) = ServantEvent_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v33 + 40),
    (int64_t)ServantEvent_k__BackingField,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !v23 )
    goto LABEL_17;
  *(_QWORD *)(v23 + 24) = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), v33, v65, v66, v67, v68, v69, v70);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo,
                                                       v71,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v23 + 16) = v74;
  v75 = (BattleData_o **)(v23 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)v74, v76, v77, v78, v79, v80, v81);
  v84 = this->fields._Data_k__BackingField;
  if ( !v84 )
    goto LABEL_17;
  player_datalist = (System_Collections_Generic_List_object__o *)v84->fields.player_datalist;
  v86 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleServantData__TypeInfo, v29, v82, v83);
  System_Action_object____ctor(
    v86,
    (Il2CppObject *)v23,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    0LL);
  if ( !player_datalist
    || (System_Collections_Generic_List_object___ForEach(
          player_datalist,
          (System_Action_T__o *)v86,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v89 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_object__o *)v89->fields.enemy_datalist,
        v91 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleServantData__TypeInfo, v29, v87, v88),
        System_Action_object____ctor(
          v91,
          (Il2CppObject *)v23,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          0LL),
        !enemy_datalist)
    || (System_Collections_Generic_List_object___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v91,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v28 = *v75) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(v28, v29);
  }
  v92 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v28,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v27 + 32) = v92;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v92, v93, v94, v95, v96, v97, v98);
  WarBoardMasterArray = WarBoardBattleEvent__MakeWarBoardMasterArray(this, v99);
  *(_QWORD *)(v27 + 40) = WarBoardMasterArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v27 + 40),
    (int64_t)WarBoardMasterArray,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
           this,
           this->klass[1]._1.image);
  *(_QWORD *)(v27 + 56) = v107;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 56), v107, v108, v109, v110, v111, v112, v113);
  return (BattleWarBoardInfo_o *)v27;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x1
  Il2CppObject *TakeoverPlayerMasterInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0

  if ( (byte_4B187BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo, v9, v10);
    byte_4B187BA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(this, v12);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v11 )
      goto LABEL_15;
    items = v11->fields._items;
    v22 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v11->fields._size;
    v24 = (int64_t)TakeoverPlayerMasterInfo;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        TakeoverPlayerMasterInfo,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), v24, (int64_t)v15, v16, v17, v18, v19, v20);
    }
  }
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                               this,
                                               this->fields._MasterEnemy_k__BackingField,
                                               v15);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v11 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v11,
                                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_15:
    sub_1BCAA3C(TakeoverPlayerMasterInfo, v14);
  }
  if ( !v11 )
    goto LABEL_15;
  v32 = v11->fields._items;
  v33 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
  ++v11->fields._version;
  if ( !v32 )
    goto LABEL_15;
  v34 = v11->fields._size;
  v35 = (int64_t)TakeoverPlayerMasterInfo;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      TakeoverPlayerMasterInfo,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v32->obj.klass + v34;
    v11->fields._size = v34 + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                          v11,
                                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  const MethodInfo *v18; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  BattleStartServantAiResetChecker_o *v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B187C1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleStartServantAiResetChecker_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10, v11);
    byte_4B187C1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v13 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1BCAA3C(v13, v14);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v29.fields._current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_1BCAA3C(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, v18);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v25 = (BattleStartServantAiResetChecker_o *)sub_1BCAA2C(BattleStartServantAiResetChecker_TypeInfo, v22, v23, v24);
      BattleStartServantAiResetChecker___ctor(v25, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_1BCAA3C(v26, v27);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v25, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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

  if ( !buff )
    sub_1BCAA3C(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && buff->fields.isProgressEndEnemyTurn == isEndEnemyTurn )
  {
    buff->fields.turn = (buff->fields.turn - 2) & ~((buff->fields.turn - 2) >> 31);
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  bool v24; // w21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v37; // x1
  struct BattleData_o *v38; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B187C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Except_int___, execUniqueIds, isEndEnemyTurn);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    byte_4B187C5 = 1;
  }
  v15 = System_Linq_Enumerable__Except_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
          (const MethodInfo_2F31CA8 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  klass = v15->klass;
  v18 = v15;
  v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v15, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1BCAA3C(0LL, v22);
  v24 = isEndEnemyTurn;
  while ( 1 )
  {
    v25 = *(_QWORD *)v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_16:
      v28 = sub_1C1C7C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v23, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v23;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_23;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_23:
      v32 = sub_1C1C7C0(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1BCAA3C(0LL, v33);
    ServantData = BattleData__getServantData(Data_k__BackingField, v34, 0LL);
    if ( ServantData )
    {
      v38 = this->fields._Data_k__BackingField;
      if ( !v38 )
        sub_1BCAA3C(ServantData, v37);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_1BCAA3C(0LL, v37);
      BattleBuffData__turnProgressing(buffData, v38->fields.logic, v24, v34, 0LL);
    }
  }
  v40 = *(_QWORD *)v23;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_34;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_34:
    v43 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v23, *(_QWORD *)(v43 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Request_object; // x0
  const MethodInfo *v14; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v16; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_object__o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_4B187B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, arg, func);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardBattleEvent_SetResponseWarBoardData__, v11, v12);
    byte_4B187B5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, arg);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v16 = (WarBoardBattleResultRequest_o *)Request_object;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v14);
  v22 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v19, v20, v21);
  System_Action_object____ctor(v22, (Il2CppObject *)this, Method_WarBoardBattleEvent_SetResponseWarBoardData__, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v23, v24);
  WarBoardBattleResultRequest__beginRequest(v16, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v22, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BCAA3C(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.warBoardDataJson = json;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warBoardDataJson,
    (int64_t)json,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleData_SaveData_o *v8; // x20
  WarBoardBattleEvent_o *v9; // x19

  v8 = save;
  v9 = this;
  if ( (byte_4B187BF & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1BCA7E0(&int___TypeInfo, save, method);
    byte_4B187BF = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_1BCA888(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_1BCAA3C(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v9->fields.joinCurTurnUniqueIds,
    (int64_t)save,
    (int64_t)method,
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
  int m_CancellationTokenSource; // w8
  unsigned int v8; // w23
  BattleServantData_o *v9; // x22
  struct BattleData_o *v10; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0LL)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0LL));
  v6 = (BattleServantData_array *)Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  m_CancellationTokenSource = (int)Data_k__BackingField->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= m_CancellationTokenSource )
        sub_1BCAA44(Data_k__BackingField, isPlayer);
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
      m_CancellationTokenSource = v6->max_length;
      if ( (int)++v8 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_20:
    sub_1BCAA3C(Data_k__BackingField, isPlayer);
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
  __int64 Data_k__BackingField; // x0
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  BattleServantData_o *v10; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  const MethodInfo *v12; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  struct BattleData_o *v14; // x8
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x25
  __int64 v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct BattleData_o *v25; // x8
  __int64 v26; // x0

  if ( (byte_4B187AE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantData___TypeInfo, isPlayer, method);
    byte_4B187AE = 1;
  }
  Data_k__BackingField = (__int64)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (!isPlayer
      ? (Data_k__BackingField = (__int64)BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL))
      : (Data_k__BackingField = (__int64)BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)),
        (v6 = Data_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1BCAA3C(Data_k__BackingField, isPlayer);
  }
  v7 = *(_DWORD *)(Data_k__BackingField + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( v8 < v7 )
    {
      v9 = v6 + 8LL * (int)v8;
      v10 = *(BattleServantData_o **)(v9 + 32);
      if ( !v10 )
        goto LABEL_22;
      ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
      Data_k__BackingField = BattleServantData__getUserSvtId(*(BattleServantData_o **)(v9 + 32), 0LL);
      if ( !ServantEvent_k__BackingField )
        goto LABEL_22;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(
                           ServantEvent_k__BackingField,
                           Data_k__BackingField,
                           v12);
      BattleServantData__SetTakeoverServantData(v10, EventServantInfo, 0LL);
      v14 = this->fields._Data_k__BackingField;
      if ( !v14 )
        goto LABEL_22;
      FieldEnvData_k__BackingField = v14->fields._FieldEnvData_k__BackingField;
      Data_k__BackingField = sub_1BCA888(BattleServantData___TypeInfo, 1LL);
      if ( !Data_k__BackingField )
        goto LABEL_22;
      v16 = Data_k__BackingField;
      Data_k__BackingField = sub_1BCA91C(v10, *(_QWORD *)(*(_QWORD *)Data_k__BackingField + 64LL));
      if ( !Data_k__BackingField )
      {
        v26 = sub_1BCAA60(0LL);
        sub_1BCA908(v26, 0LL);
      }
      if ( !*(_DWORD *)(v16 + 24) )
        break;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v10, v17, v18, v19, v20, v21, v22);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        (BattleFieldEnvironmentData_o *)Data_k__BackingField,
        (BattleServantData_array *)v16,
        v23);
      v25 = this->fields._Data_k__BackingField;
      if ( !v25 )
        goto LABEL_22;
      Data_k__BackingField = (__int64)v25->fields._FieldEnvData_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__AddServantChangeBgm((BattleFieldEnvironmentData_o *)Data_k__BackingField, v10, v24);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
    sub_1BCAA44(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x9
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x10

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = (enemyMasterInfo->fields.maxCommandSpell
                                                                  - MasterEnemy_k__BackingField->fields.commandSpellNum) & ~((enemyMasterInfo->fields.maxCommandSpell - MasterEnemy_k__BackingField->fields.commandSpellNum) >> 31);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverPlayerMasterSkill(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardBattleEvent_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_object__o *MasterSkillSealedTurnArray; // x0
  __int64 v15; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v17; // x20
  int32_t v18; // w21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x25
  int32_t v22; // w0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4B187B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v8, v9);
    this = (WarBoardBattleEvent_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__,
                                      v10,
                                      v11);
    byte_4B187B0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
                                                                              MasterSkillChargeTurnArray,
                                                                              v3->fields._MasterPlayer_k__BackingField,
                                                                              v13);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v17 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_1BCAA3C(MasterSkillSealedTurnArray, v15);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    MasterSkillSealedTurnArray,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v18 = 0;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v19 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1BCAA3C(v19, v20);
    if ( !BYTE4(v23.fields._current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v18,
                                      (int32_t)v23.fields._current[2].monitor,
                                      (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
      v22 = BasicHelper__IndexValue_int_(
              v17,
              v18,
              (int32_t)current[3].klass,
              (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
      if ( v22 != -1 )
        LODWORD(current[3].klass) = v22;
      ++v18;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterEnemy_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterEnemy_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterPlayer_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterPlayer_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantEvent_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantEvent_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_long__int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Int32_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B187C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    byte_4B187C8 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v9,
    (const MethodInfo_323D83C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicDistributeStar, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B187C9 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardBattleEvent___c_TypeInfo, v1, v2);
    byte_4B187C9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardBattleEvent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardBattleEvent___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardBattleEvent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCAA3C(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCAA3C(this, 0LL);
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
  System_Collections_Generic_List_object__o *svtList; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4B187CA & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1BCA7E0(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt,
                                                            method);
    byte_4B187CA = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1BCAA3C(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4B187CB & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1BCA7E0(
                                                            &Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
                                                            svt,
                                                            method);
    byte_4B187CB = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1BCAA3C(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 4), (int64_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall WarBoardBattleEvent___c__DisplayClass69_0___ctor(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardBattleEvent___c__DisplayClass69_0___IsTakeOverNextBattleBuff_b__0(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1BCAA3C(this, *(_QWORD *)&type);
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
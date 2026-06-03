void WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Int32_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4E7A21E & 1) == 0 )
  {
    sub_1D0F0B4(&BattleWarBoardEventLimitTurn_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7A21E = 1;
  }
  v3 = (BattleWarBoardEventLimitTurn_o *)sub_1D0F300(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v3, 0);
  this->fields.eventLimitTurn = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.eventLimitTurn, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.warBoardDataJson, v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  this->fields.joinCurTurnUniqueIds = v17;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.joinCurTurnUniqueIds,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (struct System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  this->fields.aliveSvtUniqueIds = v24;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.aliveSvtUniqueIds,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  this->fields.notTakeOverBuffTypes = v31;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.notTakeOverBuffTypes,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass76_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4E7A21A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__);
    sub_1D0F0B4(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
    byte_4E7A21A = 1;
  }
  v5 = (WarBoardBattleEvent___c__DisplayClass76_0_o *)sub_1D0F300(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass76_0___ctor(v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  v5->fields.svtUniqueId = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    0);
  return BasicHelper__Any_int__52658284(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__GetEventMasterInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *warBoardInfo,
        bool isPlayer,
        const MethodInfo *method)
{
  System_Object_array *masterInfo; // x19
  WarBoardBattleEvent___c_c *v7; // x0
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__51_0; // x20
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardBattleEvent___c_StaticFields *v17; // x0
  GrandQuestFolderBoardItem_o *p__9__51_0; // x0
  Il2CppObject *v20; // x21
  struct WarBoardBattleEvent___c_StaticFields *v21; // x0

  if ( (byte_4E7A20A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    sub_1D0F0B4(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__);
    sub_1D0F0B4(&WarBoardBattleEvent___c_TypeInfo);
    byte_4E7A20A = 1;
  }
  if ( !warBoardInfo )
    return 0;
  masterInfo = (System_Object_array *)warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0;
  v7 = WarBoardBattleEvent___c_TypeInfo;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v7 = WarBoardBattleEvent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( isPlayer )
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = WarBoardBattleEvent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v10, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, 0);
      v17 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v17->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (GrandQuestFolderBoardItem_o *)&v17->__9__51_0;
LABEL_17:
      sub_1D0F058(p__9__51_0, (int32_t)_9__51_0, v11, v12, v13, v14, v15, v16);
    }
  }
  else
  {
    _9__51_0 = (System_Predicate_object__o *)static_fields->__9__51_1;
    if ( !_9__51_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = WarBoardBattleEvent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v7->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v20, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, 0);
      v21 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v21->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (GrandQuestFolderBoardItem_o *)&v21->__9__51_1;
      goto LABEL_17;
    }
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_object_(
                                                      masterInfo,
                                                      (System_Predicate_T__o *)_9__51_0,
                                                      (const MethodInfo_3356F50 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *WarBoardBattleEvent__GetForceDeadSvtIdArray(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x19
  __int64 v4; // x1
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v10; // x1
  Il2CppObject v11; // q0
  int64_t v12; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4E7A21D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7A21D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_24;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0);
  if ( !Data_k__BackingField )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  *(_OWORD *)&v19.fields._list = *(_OWORD *)&v18.fields.currentCryptoKey;
  v19.fields._current = (Il2CppObject *)v18.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v6 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1D0F30C(v6, v7);
    if ( BattleServantData__isDead((BattleServantData_o *)v19.fields._current, 0) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0);
      if ( !BuffData )
        sub_1D0F30C(0, v10);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0) )
      {
        v11 = current[3];
        *(Il2CppObject *)&v18.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v18.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v17, 0);
        if ( !v3 )
          sub_1D0F30C(v12, v12);
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_long__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1D0F30C(v12, v12);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_3944444 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v12;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_24:
    sub_1D0F30C(Data_k__BackingField, v4);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  unsigned int max_length; // w8

  if ( (byte_4E7A208 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A208 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  result = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 3);
  if ( !result )
    sub_1D0F30C(0, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[1] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_1D0F314(result);
  }
  result->m_Items[2] = masterInfo->fields.skill3Ct;
  return result;
}


System_Int32_array *WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  unsigned int max_length; // w8

  if ( (byte_4E7A209 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A209 = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  result = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 3);
  if ( !result )
    sub_1D0F30C(0, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[1] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_1D0F314(result);
  }
  result->m_Items[2] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *WarBoardBattleEvent__GetResetBuffTypes(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v2; // x19
  System_Int32_array *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E7A210 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_15672/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/);
    byte_4E7A210 = 1;
  }
  v2 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ConstantStrMaster__GetValueArray(
               (ConstantStrMaster_o *)Instance,
               (System_String_o *)StringLiteral_15672/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
               0,
               0);
  if ( !Instance )
  {
    if ( v2 )
      return System_Collections_Generic_List_int___ToArray(
               v2,
               (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1D0F30C(Instance, v4);
  }
  if ( !v2 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v2,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v2,
           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardBattleEvent__GetResultBgmId(WarBoardBattleEvent_o *this, int32_t curBgmId, const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_4E7A20B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_1D0F0B4(&StringLiteral_15673/*"WAR_BOARD_BATTLE_LOSE_BGM"*/);
    byte_4E7A20B = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_43273052(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15673/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0);
    }
LABEL_9:
    sub_1D0F30C(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_1D0F30C(this, 0);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&save->fields.joinCurTurnUniqueIds,
    (int32_t)joinCurTurnUniqueIds,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BaseBattleServantEvent_o *WarBoardBattleEvent__GetServantEvent(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  return (BaseBattleServantEvent_o *)this->fields._ServantEvent_k__BackingField;
}


int32_t WarBoardBattleEvent__GetServantHaveStar(
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
  this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0);
  if ( !ServantEvent_k__BackingField )
LABEL_8:
    sub_1D0F30C(this, svtData);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0);
  if ( EventServantInfo )
    LODWORD(EventServantInfo) = EventServantInfo->fields.criticalStars;
  return (int)EventServantInfo;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
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

  if ( (byte_4E7A214 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A214 = 1;
  }
  if ( !enemyMaster )
    return 0;
  v5 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  v6 = sub_1D0F15C(int___TypeInfo, 0);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1D0F30C(v6, v7);
  p_fields = &enemyMaster->fields;
  forceId = enemyMaster->fields.forceId;
  groupId = p_fields->groupId;
  v12 = (System_Int32_array *)v6;
  EnemyMasterCommandSpellCnt = (WarBoardBattleEvent_o *)BattleData__getEnemyMasterCommandSpellCnt(
                                                          Data_k__BackingField,
                                                          0);
  return WarBoardBattleEvent__MakeMasterInfo(
           EnemyMasterCommandSpellCnt,
           forceId,
           groupId,
           v5,
           v12,
           (int32_t)EnemyMasterCommandSpellCnt,
           v14);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  __int64 klass_low; // x1
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  UserGameEntity_o *v20; // x21
  System_Int32_array *v21; // x19
  System_Int32_array *v22; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v24; // x6
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E7A213 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E7A213 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_28;
  masterSkillInfo = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    masterSkillInfo,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v8 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1D0F30C(v8, v9);
    if ( !BYTE4(v27.fields._current[1].monitor) )
    {
      v11 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v27.fields._current->klass->vtable[6].methodPtr)(
              v27.fields._current,
              v27.fields._current->klass->vtable[6].method);
      v12 = (unsigned int)v11;
      if ( !v3 )
        sub_1D0F30C(v11, (unsigned int)v11);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1D0F30C(v11, (unsigned int)v11);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v11,
          *(const MethodInfo_393F3EC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v11;
      }
      if ( !v4 )
        sub_1D0F30C(v11, v12);
      klass_low = LODWORD(current[3].klass);
      v17 = v4->fields._items;
      v18 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v17 )
        sub_1D0F30C(v11, klass_low);
      v19 = v4->fields._size;
      if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          klass_low,
          *(const MethodInfo_393F3EC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v19 + 1;
        v17->m_Items[v19] = klass_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !v3
    || (v20 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v3,
                                                                         (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v4)
    || (v21 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v4,
                                                                         (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v20) )
  {
LABEL_28:
    sub_1D0F30C(masterSkillInfo, v6);
  }
  v22 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v20, 0);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v21, v22, (int32_t)CommandSpell, v24);
}


System_Collections_Generic_List_int__o *WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool v7; // w20

  if ( (byte_4E7A215 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&WarBoardManager_TypeInfo);
    byte_4E7A215 = 1;
  }
  WarBoardDataEntityFromResponse = 0;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v7 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 80, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1D0F30C(Instance, v6);
  }
  if ( v7 )
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, WarBoardDataEntityFromResponse, 0);
  else
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      80,
      1,
      WarBoardDataEntityFromResponse,
      0,
      0);
  return 1;
}


void WarBoardBattleEvent__HideTargetsResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        System_Int32_array *hideTypes,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21

  if ( hideTypes )
  {
    max_length = hideTypes->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      do
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1D0F314(this);
        if ( !result )
          sub_1D0F30C(this, result);
        BattleResultComponent_resultData__disableResultDispFlag(result, 1 << hideTypes->m_Items[v7], 0);
        LODWORD(max_length) = hideTypes->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
    }
  }
}


void WarBoardBattleEvent__Init(WarBoardBattleEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  BattleInfoData_o *BattleInfo; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  WarBoardBattleServantEvent_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  WarBoardBattleEvent_o *v29; // x0
  const MethodInfo *v30; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  WarBoardBattleEvent_o *v38; // x0
  const MethodInfo *v39; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  BaseBattleEvent_o *v47; // x0
  const MethodInfo *v48; // x3
  WarBoardBattleEvent_o *v49; // x0
  const MethodInfo *v50; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  BattleWarBoardInfo_o *v64; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4E7A204 & 1) == 0 )
  {
    sub_1D0F0B4(&WarBoardBattleServantEvent_TypeInfo);
    byte_4E7A204 = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, v10);
  if ( !BattleInfo )
    sub_1D0F30C(0, v12);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)warBoardBattleInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    svtInfo = WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0;
  v22 = (WarBoardBattleServantEvent_o *)sub_1D0F300(WarBoardBattleServantEvent_TypeInfo);
  WarBoardBattleServantEvent___ctor(v22, svtInfo, 0);
  this->fields._ServantEvent_k__BackingField = v22;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEvent_k__BackingField,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v29,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v30);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterPlayer_k__BackingField,
    (int32_t)EventMasterInfo,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v40 = WarBoardBattleEvent__GetEventMasterInfo(v38, this->fields._WarBoardBattleInfo_k__BackingField, 0, v39);
  this->fields._MasterEnemy_k__BackingField = v40;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterEnemy_k__BackingField,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (BaseBattleEvent_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.methodPtr)(
                               this,
                               this->klass->vtable._4_get_IsPrecedingPlayer.method);
  BaseBattleEvent__InitAtkManager(v47, (unsigned __int8)v47 & 1, data, v48);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v49, v50);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.notTakeOverBuffTypes,
    (int32_t)ResetBuffTypes,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v64 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v64 )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(v64, 0);
  else
    BattleSquareIndividuality = 0;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleSquareIndividualityList,
    (int32_t)BattleSquareIndividuality,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
}


bool WarBoardBattleEvent__InitBGData(
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


void WarBoardBattleEvent__InitBattleStartTurn(WarBoardBattleEvent_o *this, bool isPlayer, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  __int64 v6; // x1
  char v7; // w23
  int v8; // w20
  _BOOL4 v9; // w21
  BattleServantData_array *FieldServantList; // x0
  WarBoardBattleEvent___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x24
  System_Func_object__bool__o *_9__73_0; // x25
  Il2CppObject *v14; // x26
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  WarBoardBattleEvent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  char v25; // w23
  System_Func_object__int__o *_9__73_1; // x25
  Il2CppObject *v27; // x22
  struct WarBoardBattleEvent___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  struct System_Int32_array *v52; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1

  if ( (byte_4E7A219 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1D0F0B4(&System_Func_BattleServantData__int__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__);
    sub_1D0F0B4(&WarBoardBattleEvent___c_TypeInfo);
    byte_4E7A219 = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_IsPrecedingPlayer.method,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v7 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0),
        !this->fields._Data_k__BackingField)
    || (v8 = (int)Data_k__BackingField,
        v9 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_1D0F30C(Data_k__BackingField, v6);
  }
  FieldServantList = BattleData__getFieldServantList(Data_k__BackingField, 0, 0);
  v11 = WarBoardBattleEvent___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v11 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__73_0 = (System_Func_object__bool__o *)v11->static_fields->__9__73_0;
  if ( !_9__73_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = WarBoardBattleEvent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__73_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__73_0, v14, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, 0);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__73_0,
      (int32_t)_9__73_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v23 = WarBoardBattleEvent___c_TypeInfo;
  v24 = v22;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v23 = WarBoardBattleEvent___c_TypeInfo;
  }
  v25 = v7 ^ isPlayer;
  _9__73_1 = (System_Func_object__int__o *)v23->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardBattleEvent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v23->static_fields->__9;
    _9__73_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__73_1, v27, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, 0);
    v28 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v28->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v28->__9__73_1, (int32_t)_9__73_1, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v36 = System_Linq_Enumerable__ToArray_int_(
          v35,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v36;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.aliveSvtUniqueIds,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( (v25 & 1) != 0 )
  {
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    v50 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_326BFA4 *)Method_System_Linq_Enumerable_Concat_int___);
    v51 = System_Linq_Enumerable__Distinct_int_(
            v50,
            (const MethodInfo_3272944 *)Method_System_Linq_Enumerable_Distinct_int___);
    v52 = System_Linq_Enumerable__ToArray_int_(
            v51,
            (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
    LODWORD(aliveSvtUniqueIds) = (_DWORD)v52;
    this->fields.joinCurTurnUniqueIds = v52;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)p_joinCurTurnUniqueIds,
    (int32_t)aliveSvtUniqueIds,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( (v8 & v9 & 1) != 0 )
    this->fields.curTurnCondState |= 1u;
}


// attributes: thunk
void WarBoardBattleEvent__InitPlayerMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent__TakeoverPlayerMasterSkill(this, method);
}


void WarBoardBattleEvent__InitServantDataPrevAdd(
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
        this = (WarBoardBattleEvent_o *)BattleServantData__getUserSvtId(svtData, 0),
        !ServantEvent_k__BackingField) )
  {
    sub_1D0F30C(this, svtData);
  }
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, (int64_t)this, 0);
  BattleServantData__SetTakeoverServantDataPrevAdd(svtData, EventServantInfo, v5->fields._Data_k__BackingField, 0);
}


void WarBoardBattleEvent__InitStageData(WarBoardBattleEvent_o *this, StageEntity_o *stage, const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *eventLimitTurn; // x0
  const MethodInfo *v5; // x1

  eventLimitTurn = this->fields.eventLimitTurn;
  if ( !eventLimitTurn )
    sub_1D0F30C(0, stage);
  BattleWarBoardEventLimitTurn__InitLimitInfo(eventLimitTurn, this, stage, 0);
  WarBoardBattleEvent__TakeoverEnemyMasterInfo(this, v5);
}


void WarBoardBattleEvent__InitStartResult(
        WarBoardBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardBattleEvent_o *v5; // x20
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v9; // x3

  v5 = this;
  if ( (byte_4E7A20D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_1D0F0B4(&StringLiteral_15674/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/);
    byte_4E7A20D = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
LABEL_9:
    sub_1D0F30C(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15674/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0,
                                          0);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v9);
}


void WarBoardBattleEvent__InitUsePlayerServantData(WarBoardBattleEvent_o *this, const MethodInfo *method)
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
  Data_k__BackingField = (BattleData_o *)BattleData__getPlayerServantList(Data_k__BackingField, 0);
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
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1D0F314(Data_k__BackingField);
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
    sub_1D0F30C(Data_k__BackingField, method);
  BattleData__InitCriticalPoint(Data_k__BackingField, v7, 0);
}


void WarBoardBattleEvent__InitWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


bool WarBoardBattleEvent__IsActionPassiveSkillOnBattle(
        WarBoardBattleEvent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( !skillInfo )
    sub_1D0F30C(this, 0);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 0x64
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0);
}


bool WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1D0F30C(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1D0F30C(this, 0);
  return BattleServantData__getDefeatPoint(svtData, 0) > 0;
}


bool WarBoardBattleEvent__IsPossibleAddBuffParam(
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
    sub_1D0F30C(IsBattleEndReduceBuffTurn, v5);
  return BattleServantData__isAlive(svtData, 0, 0);
}


bool WarBoardBattleEvent__IsRemainBattleEndWave(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  struct BattleData_o *v4; // x8
  struct BattleAttackManager_o *battleAtkManager; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_7;
  Data_k__BackingField = (BattleData_o *)BattleData__IsEndWaveBattle(Data_k__BackingField, 0);
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
    sub_1D0F30C(Data_k__BackingField, method);
  }
  return 0;
}


bool WarBoardBattleEvent__IsSettedAllServant(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  WarBoardBattleEvent_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct System_Collections_Generic_List_BattleServantData__o *enemy_datalist; // x9
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x8

  v2 = this;
  if ( (byte_4E7A206 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_4E7A206 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1D0F30C(this, method);
  enemy_datalist = Data_k__BackingField->fields.enemy_datalist;
  return enemy_datalist
      && enemy_datalist->fields._size >= 1
      && (player_datalist = Data_k__BackingField->fields.player_datalist) != 0
      && player_datalist->fields._size > 0;
}


bool WarBoardBattleEvent__IsTakeOverNextBattleBuff(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        BuffEntity_o *buffEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v9; // x22
  _BOOL8 isParam; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v20; // x20

  if ( (byte_4E7A217 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__);
    sub_1D0F0B4(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
    byte_4E7A217 = 1;
  }
  v9 = sub_1D0F300(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass69_0___ctor((WarBoardBattleEvent___c__DisplayClass69_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = buffEnt;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)buffEnt, v12, v13, v14, v15, v16, v17);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 71, 0);
  if ( isParam )
    return DataVals__GetParam(baseVals, 71, 0, 0) > 0;
  if ( !buff )
LABEL_13:
    sub_1D0F30C(isParam, v11);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 0x64 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v20 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    0);
  return !BasicHelper__Any_int__52658284(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v20,
            (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680);
}


bool WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1D0F30C(this, 0);
  return BattleServantData__getDefeatPoint(svtData, 0) >= 1
      && !BattleServantData__isLogicResultAlive(svtData, 0)
      && (((int (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._9_get_hp.methodPtr)(
            svtData,
            svtData->klass->vtable._9_get_hp.method) > 0
       || BattleServantData__isOverKill(svtData, 0));
}


System_Collections_Generic_Dictionary_long__int__o *WarBoardBattleEvent__MakeDistributeStar(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x19
  __int64 v4; // x1
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  WarBoardBattleEvent___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  System_Func_object__bool__o *_9__57_0; // x22
  Il2CppObject *v10; // x23
  struct WarBoardBattleEvent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v20; // x21
  struct BattleData_o *v21; // x9
  int32_t criticalstars; // w9
  unsigned int v23; // w20
  int v24; // w22
  int i; // w23
  int32_t v26; // w2

  if ( (byte_4E7A20F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1D0F0B4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__);
    sub_1D0F0B4(&WarBoardBattleEvent___c_TypeInfo);
    byte_4E7A20F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1D0F300(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_35D3E64 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_23;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(Data_k__BackingField, 0);
  v7 = WarBoardBattleEvent___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v7 = WarBoardBattleEvent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__bool__o *)v7->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardBattleEvent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__57_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v10, Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, 0);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0,
      (int32_t)_9__57_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                                           v18,
                                           (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_23;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v20 = Data_k__BackingField;
  if ( m_CancellationTokenSource )
  {
    v21 = this->fields._Data_k__BackingField;
    if ( !v21 )
      goto LABEL_23;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      criticalstars = v21->fields.criticalstars;
      v23 = 0;
      v24 = criticalstars / (int)m_CancellationTokenSource;
      for ( i = criticalstars % (int)m_CancellationTokenSource; ; --i )
      {
        if ( v23 >= (unsigned int)m_CancellationTokenSource )
          sub_1D0F314(Data_k__BackingField);
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v20->fields.rootfsm + (int)v23);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0);
        if ( !v3 )
          break;
        if ( i <= 0 )
          v26 = v24;
        else
          v26 = v24 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v3,
          (int64_t)Data_k__BackingField,
          v26,
          (const MethodInfo_35D4838 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
        if ( (int)++v23 >= (int)m_CancellationTokenSource )
          return v3;
      }
LABEL_23:
      sub_1D0F30C(Data_k__BackingField, v4);
    }
  }
  return v3;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__MakeMasterInfo(
        WarBoardBattleEvent_o *this,
        int32_t forceId,
        int32_t groupId,
        System_Int32_array *chargeArray,
        System_Int32_array *sealedArray,
        int32_t spellNum,
        const MethodInfo *method)
{
  BattleWarBoardInfo_WarBoardMasterInfo_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4E7A212 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IndexValue_int____80375232);
    sub_1D0F0B4(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
    byte_4E7A212 = 1;
  }
  v12 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_1D0F300(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v12, 0);
  if ( !v12 )
    sub_1D0F30C(v13, v14);
  v12->fields.forceId = forceId;
  v12->fields.groupId = groupId;
  v12->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v12->fields.commandSpellNum = spellNum;
  return v12;
}


int32_t WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass78_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4E7A21B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__);
    sub_1D0F0B4(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
    byte_4E7A21B = 1;
  }
  v5 = (WarBoardBattleEvent___c__DisplayClass78_0_o *)sub_1D0F300(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass78_0___ctor(v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  v5->fields.selfUniqueId = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    0);
  if ( BasicHelper__Any_int__52658284(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v9,
         (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680) )
  {
    return 2;
  }
  else
  {
    return 0;
  }
}


BattleWarBoardInfo_o *WarBoardBattleEvent__MakeWarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 v4; // x20
  BattleData_o *v5; // x0
  __int64 v6; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x9
  __int64 v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x1
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_long__int__o *DistributeStar; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Int32_array *QuestIndividualities; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x23
  BattleData_o **v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct BattleData_o *v53; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x23
  System_Action_object__o *v55; // x24
  struct BattleData_o *v56; // x8
  System_Collections_Generic_List_object__o *enemy_datalist; // x23
  System_Action_object__o *v58; // x24
  System_Object_array *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  const MethodInfo *v66; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardMasterArray; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7

  if ( (byte_4E7A20E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_BattleServantData__TypeInfo);
    sub_1D0F0B4(&BattleWarBoardInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
    sub_1D0F0B4(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__);
    sub_1D0F0B4(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__);
    sub_1D0F0B4(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
    byte_4E7A20E = 1;
  }
  v3 = sub_1D0F300(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  WarBoardBattleEvent___c__DisplayClass56_0___ctor((WarBoardBattleEvent___c__DisplayClass56_0_o *)v3, 0);
  v4 = sub_1D0F300(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v4, 0);
  v5 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.methodPtr)(
                         this,
                         this->klass->vtable._4_get_IsPrecedingPlayer.method);
  if ( !v4 )
    goto LABEL_17;
  *(_BYTE *)(v4 + 20) = (unsigned __int8)v5 & 1;
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
  {
    *(_DWORD *)(v4 + 24) = WarBoardBattleInfo_k__BackingField->fields.battleTurn;
    LODWORD(WarBoardBattleInfo_k__BackingField) = WarBoardBattleInfo_k__BackingField->fields.stageId;
  }
  else
  {
    *(_DWORD *)(v4 + 24) = -1;
  }
  *(_DWORD *)(v4 + 16) = (_DWORD)WarBoardBattleInfo_k__BackingField;
  v8 = sub_1D0F300(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v8, 0);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_17;
  if ( !v8 )
    goto LABEL_17;
  logic = Data_k__BackingField->fields.logic;
  *(_QWORD *)(v8 + 16) = logic;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)logic, v9, v10, v11, v12, v13, v14);
  DistributeStar = WarBoardBattleEvent__MakeDistributeStar(this, v17);
  *(_QWORD *)(v8 + 24) = DistributeStar;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)DistributeStar, v19, v20, v21, v22, v23, v24);
  v5 = this->fields._Data_k__BackingField;
  if ( !v5 )
    goto LABEL_17;
  QuestIndividualities = BattleData__getQuestIndividualities(v5, 0);
  *(_QWORD *)(v8 + 32) = QuestIndividualities;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)QuestIndividualities, v26, v27, v28, v29, v30, v31);
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v8 + 40) = ServantEvent_k__BackingField;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)(v8 + 40),
    (int32_t)ServantEvent_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v3 )
    goto LABEL_17;
  *(_QWORD *)(v3 + 24) = v8;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), v8, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v3 + 16) = v45;
  v46 = (BattleData_o **)(v3 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v45, v47, v48, v49, v50, v51, v52);
  v53 = this->fields._Data_k__BackingField;
  if ( !v53 )
    goto LABEL_17;
  player_datalist = (System_Collections_Generic_List_object__o *)v53->fields.player_datalist;
  v55 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v55,
    (Il2CppObject *)v3,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    0);
  if ( !player_datalist
    || (System_Collections_Generic_List_object___ForEach(
          player_datalist,
          (System_Action_T__o *)v55,
          (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v56 = this->fields._Data_k__BackingField) == 0)
    || (enemy_datalist = (System_Collections_Generic_List_object__o *)v56->fields.enemy_datalist,
        v58 = (System_Action_object__o *)sub_1D0F300(System_Action_BattleServantData__TypeInfo),
        System_Action_object____ctor(
          v58,
          (Il2CppObject *)v3,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          0),
        !enemy_datalist)
    || (System_Collections_Generic_List_object___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v58,
          (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v5 = *v46) == 0) )
  {
LABEL_17:
    sub_1D0F30C(v5, v6);
  }
  v59 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v5,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v4 + 32) = v59;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)v59, v60, v61, v62, v63, v64, v65);
  WarBoardMasterArray = WarBoardBattleEvent__MakeWarBoardMasterArray(this, v66);
  *(_QWORD *)(v4 + 40) = WarBoardMasterArray;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)WarBoardMasterArray, v68, v69, v70, v71, v72, v73);
  v74 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, const MethodInfo *))this->klass->vtable._37_GetForceDeadSvtIdArray.methodPtr)(
          this,
          this->klass->vtable._37_GetForceDeadSvtIdArray.method);
  *(_QWORD *)(v4 + 56) = v74;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 56), v74, v75, v76, v77, v78, v79, v80);
  return (BattleWarBoardInfo_o *)v4;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  Il2CppObject *TakeoverPlayerMasterInfo; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppObject *v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4E7A211 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    byte_4E7A211 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(this, v4);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v3 )
      goto LABEL_15;
    items = v3->fields._items;
    v14 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v3->fields._size;
    v16 = TakeoverPlayerMasterInfo;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        TakeoverPlayerMasterInfo,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v16;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, (int32_t)v7, v8, v9, v10, v11, v12);
    }
  }
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverEnemyMasterInfo(
                                               this,
                                               this->fields._MasterEnemy_k__BackingField,
                                               v7);
  if ( !TakeoverPlayerMasterInfo )
  {
    if ( v3 )
      return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v3,
                                                              (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_15:
    sub_1D0F30C(TakeoverPlayerMasterInfo, v6);
  }
  if ( !v3 )
    goto LABEL_15;
  v24 = v3->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
  ++v3->fields._version;
  if ( !v24 )
    goto LABEL_15;
  v26 = v3->fields._size;
  v27 = TakeoverPlayerMasterInfo;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      TakeoverPlayerMasterInfo,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v24->obj.klass + v26;
    v3->fields._size = v26 + 1;
    v28[4] = (Il2CppClass *)v27;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                          v3,
                                                          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4E7A218 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleStartServantAiResetChecker_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    byte_4E7A218 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0)) == 0 )
  {
    sub_1D0F30C(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1D0F30C(v4, v5);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v16.fields._current, 0);
    if ( !ServantEvent_k__BackingField )
      sub_1D0F30C(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, 0);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v12 = (BattleStartServantAiResetChecker_o *)sub_1D0F300(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v12, (BattleServantData_o *)current, EventServantInfo, 0);
      if ( !AiStateManager )
        sub_1D0F30C(v13, v14);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v12, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
}


void WarBoardBattleEvent__ProcOnActAiFixed(
        WarBoardBattleEvent_o *this,
        AiState_o *aiState,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  if ( aiState )
    AiState__SetOverwriteAiGroupId(aiState, aiBaseEnt, 0);
}


void WarBoardBattleEvent__ProgressBuffTurn(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  int32_t progressTurnCond; // w8

  if ( !buff )
    sub_1D0F30C(this, 0);
  progressTurnCond = buff->fields.progressTurnCond;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0)
    && buff->fields.isProgressEndEnemyTurn == isEndEnemyTurn )
  {
    buff->fields.turn = (buff->fields.turn - 2) & ~((buff->fields.turn - 2) >> 31);
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0);
  }
}


void WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
        WarBoardBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  bool v16; // w21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w22
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v29; // x1
  struct BattleData_o *v30; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  if ( (byte_4E7A21C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Except_int___);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E7A21C = 1;
  }
  v7 = System_Linq_Enumerable__Except_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
         (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
         (const MethodInfo_3274F9C *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v7 )
    sub_1D0F30C(0, v8);
  klass = v7->klass;
  v10 = v7;
  v11 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_1CE5430(v7, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v13)(
          v10,
          *(_QWORD *)(v13 + 8));
  if ( !v15 )
    sub_1D0F30C(0, v14);
  v16 = isEndEnemyTurn;
  while ( 1 )
  {
    v17 = *(_QWORD *)v15;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_1CE5430(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v15;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v23 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_1CE5430(v15, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v15, *(_QWORD *)(v24 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1D0F30C(0, v25);
    ServantData = BattleData__getServantData(Data_k__BackingField, v26, 0);
    if ( ServantData )
    {
      v30 = this->fields._Data_k__BackingField;
      if ( !v30 )
        sub_1D0F30C(ServantData, v29);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_1D0F30C(0, v29);
      BattleBuffData__turnProgressing(buffData, v30->fields.logic, v16, v26, 0, 0);
    }
  }
  v32 = *(_QWORD *)v15;
  v33 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_34:
    v35 = sub_1CE5430(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
}


bool WarBoardBattleEvent__SendBattleResult(
        WarBoardBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  const MethodInfo *v8; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  WarBoardBattleResultRequest_o *v10; // x21
  int32_t stageId; // w22
  Il2CppObject *WarBoardBattleInfo; // x23
  System_Action_object__o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4E7A20C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_WarBoardBattleEvent_SetResponseWarBoardData__);
    byte_4E7A20C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v10 = (WarBoardBattleResultRequest_o *)Request_object;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v8);
  v13 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
  System_Action_object____ctor(v13, (Il2CppObject *)this, Method_WarBoardBattleEvent_SetResponseWarBoardData__, 0);
  if ( !v10 )
    sub_1D0F30C(v14, v15);
  WarBoardBattleResultRequest__beginRequest(v10, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v13, 0);
  return 1;
}


void WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1D0F30C(this, 0);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0);
}


void WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.warBoardDataJson = json;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardDataJson,
    (int32_t)json,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent__SetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleData_SaveData_o *v8; // x20
  WarBoardBattleEvent_o *v9; // x19

  v8 = save;
  v9 = this;
  if ( (byte_4E7A216 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A216 = 1;
  }
  if ( !v8 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v8->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_1D0F15C(int___TypeInfo, 0);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v9 )
LABEL_8:
    sub_1D0F30C(this, save);
  v9->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v9->fields.joinCurTurnUniqueIds,
    (int32_t)save,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBattleEvent__SetServantDataAfterPassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  BattleData_o *v6; // x21
  int m_CancellationTokenSource; // w8
  unsigned int v8; // w23
  BattleServantData_o *v9; // x22
  struct BattleData_o *v10; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  Data_k__BackingField = (BattleData_o *)(isPlayer
                                        ? BattleData__getPlayerServantList(Data_k__BackingField, 0)
                                        : BattleData__getEnemyServantList(Data_k__BackingField, 0));
  v6 = Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_20;
  m_CancellationTokenSource = (int)Data_k__BackingField->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= m_CancellationTokenSource )
        sub_1D0F314(Data_k__BackingField);
      v9 = (BattleServantData_o *)*((_QWORD *)&v6->fields.rootfsm + (int)v8);
      if ( !v9 )
        break;
      Data_k__BackingField = (BattleData_o *)v9->fields.buffData;
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__DeleteDummyBuff((BattleBuffData_o *)Data_k__BackingField, 0);
      Data_k__BackingField = (BattleData_o *)BattleServantData__get_BuffData(v9, 0);
      if ( !Data_k__BackingField )
        break;
      BattleBuffData__SetNoActBuffWithoutExecuteServant(
        (BattleBuffData_o *)Data_k__BackingField,
        (BattleServantData_array *)v6,
        0);
      m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
      if ( (int)++v8 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_20:
    sub_1D0F30C(Data_k__BackingField, isPlayer);
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
    BattleLogic__updateFieldBuff((BattleLogic_o *)Data_k__BackingField, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBattleEvent__SetServantDataBeforePassiveAdded(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 Data_k__BackingField; // x0
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w24
  __int64 v9; // x8
  BattleServantData_o *v10; // x21
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x22
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  struct BattleData_o *v13; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  __int64 v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct BattleData_o *v22; // x8
  __int64 v23; // x0

  if ( (byte_4E7A205 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleServantData___TypeInfo);
    byte_4E7A205 = 1;
  }
  Data_k__BackingField = (__int64)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (!isPlayer
      ? (Data_k__BackingField = (__int64)BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0))
      : (Data_k__BackingField = (__int64)BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0)),
        (v6 = Data_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1D0F30C(Data_k__BackingField, isPlayer);
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
      Data_k__BackingField = BattleServantData__getUserSvtId(*(BattleServantData_o **)(v9 + 32), 0);
      if ( !ServantEvent_k__BackingField )
        goto LABEL_22;
      EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(
                           ServantEvent_k__BackingField,
                           Data_k__BackingField,
                           0);
      BattleServantData__SetTakeoverServantData(v10, EventServantInfo, 0);
      v13 = this->fields._Data_k__BackingField;
      if ( !v13 )
        goto LABEL_22;
      FieldEnvData_k__BackingField = v13->fields._FieldEnvData_k__BackingField;
      Data_k__BackingField = sub_1D0F15C(BattleServantData___TypeInfo, 1);
      if ( !Data_k__BackingField )
        goto LABEL_22;
      v15 = Data_k__BackingField;
      Data_k__BackingField = sub_1D0F1F0(v10, *(_QWORD *)(*(_QWORD *)Data_k__BackingField + 64LL));
      if ( !Data_k__BackingField )
      {
        v23 = sub_1D0F330(0);
        sub_1D0F1DC(v23, 0);
      }
      if ( !*(_DWORD *)(v15 + 24) )
        break;
      *(_QWORD *)(v15 + 32) = v10;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)v10, v16, v17, v18, v19, v20, v21);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        FieldEnvData_k__BackingField,
        (BattleServantData_array *)v15,
        0);
      v22 = this->fields._Data_k__BackingField;
      if ( !v22 )
        goto LABEL_22;
      Data_k__BackingField = (__int64)v22->fields._FieldEnvData_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__AddServantChangeBgm((BattleFieldEnvironmentData_o *)Data_k__BackingField, v10, 0);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
    sub_1D0F314(Data_k__BackingField);
  }
}


void WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x9
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x10

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1D0F30C(this, method);
  enemyMasterInfo = Data_k__BackingField->fields.enemyMasterInfo;
  if ( enemyMasterInfo )
  {
    MasterEnemy_k__BackingField = this->fields._MasterEnemy_k__BackingField;
    if ( MasterEnemy_k__BackingField )
      Data_k__BackingField->fields.enemyMasterCommandSpellUseCnt = (enemyMasterInfo->fields.maxCommandSpell
                                                                  - MasterEnemy_k__BackingField->fields.commandSpellNum)
                                                                 & ~((enemyMasterInfo->fields.maxCommandSpell
                                                                    - MasterEnemy_k__BackingField->fields.commandSpellNum) >> 31);
  }
}


void WarBoardBattleEvent__TakeoverPlayerMasterSkill(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardBattleEvent_o *v3; // x20
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_object__o *MasterSkillSealedTurnArray; // x0
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v9; // x20
  int32_t v10; // w21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t *current; // x22
  int32_t v14; // w0
  unsigned int v15; // w0
  int32_t v16; // w0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_4E7A207 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IndexValue_int____80375232);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    this = (WarBoardBattleEvent_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    byte_4E7A207 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  MasterSkillChargeTurnArray = (WarBoardBattleEvent_o *)WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
                                                          this,
                                                          v3->fields._MasterPlayer_k__BackingField,
                                                          v2);
  MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)WarBoardBattleEvent__GetMasterSkillSealedTurnArray(
                                                                              MasterSkillChargeTurnArray,
                                                                              v3->fields._MasterPlayer_k__BackingField,
                                                                              v5);
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (v9 = (System_Int32_array *)MasterSkillSealedTurnArray,
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo) == 0) )
  {
    sub_1D0F30C(MasterSkillSealedTurnArray, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    MasterSkillSealedTurnArray,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v10 = 0;
  v18 = v17;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v11 )
      break;
    current = (int32_t *)v18.fields._current;
    if ( !v18.fields._current )
      sub_1D0F30C(v11, v12);
    if ( !BYTE4(v18.fields._current[1].monitor) )
    {
      v14 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v18.fields._current->klass->vtable[6].methodPtr)(
              v18.fields._current,
              v18.fields._current->klass->vtable[6].method);
      v15 = BasicHelper__IndexValue_int_(
              (System_Int32_array *)MasterSkillChargeTurnArray,
              v10,
              v14,
              (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
      (*(void (__fastcall **)(int32_t *, _QWORD, _QWORD))(*(_QWORD *)current + 424LL))(
        current,
        v15,
        *(_QWORD *)(*(_QWORD *)current + 432LL));
      v16 = BasicHelper__IndexValue_int_(
              v9,
              v10,
              current[12],
              (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
      if ( v16 != -1 )
        current[12] = v16;
      ++v10;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
}


int32_t WarBoardBattleEvent__get_BgNo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgNo;
  else
    return 0;
}


int32_t WarBoardBattleEvent__get_BgType(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.bgType;
  else
    return 0;
}


bool WarBoardBattleEvent__get_IsPrecedingPlayer(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  return !WarBoardBattleInfo_k__BackingField || WarBoardBattleInfo_k__BackingField->fields.isPrecedingPlayer;
}


int32_t WarBoardBattleEvent__get_LimitBattleTurn(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.battleTurn;
  else
    return -1;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__get_MasterEnemy(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterEnemy_k__BackingField;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *WarBoardBattleEvent__get_MasterPlayer(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._MasterPlayer_k__BackingField;
}


WarBoardBattleServantEvent_o *WarBoardBattleEvent__get_ServantEvent(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEvent_k__BackingField;
}


BattleWarBoardInfo_o *WarBoardBattleEvent__get_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields._WarBoardBattleInfo_k__BackingField;
}


int32_t WarBoardBattleEvent__get_WarBoardStageId(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8

  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    return WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    return 0;
}


void WarBoardBattleEvent__set_MasterEnemy(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MasterEnemy_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterEnemy_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent__set_MasterPlayer(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MasterPlayer_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterPlayer_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent__set_ServantEvent(
        WarBoardBattleEvent_o *this,
        WarBoardBattleServantEvent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantEvent_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEvent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent__set_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent_TakeoverSvtArg___ctor(WarBoardBattleEvent_TakeoverSvtArg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_Int32_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E7A21F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A21F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1D0F300(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_35D3E64 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.dicDistributeStar, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  this->fields.fieldIndiv = v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.fieldIndiv, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7A220 & 1) == 0 )
  {
    sub_1D0F0B4(&WarBoardBattleEvent___c_TypeInfo);
    byte_4E7A220 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBattleEvent___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)WarBoardBattleEvent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardBattleEvent___c___ctor(WarBoardBattleEvent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardBattleEvent___c___GetEventMasterInfo_b__51_0(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1D0F30C(this, 0);
  return BattleServantData__isAlive(svt, 0, 0);
}


int32_t WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1D0F30C(this, 0);
  return svt->fields.uniqueId;
}


bool WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1D0F30C(this, 0);
  return BattleServantData__isAlive(svt, 0, 0);
}


void WarBoardBattleEvent___c__DisplayClass56_0___ctor(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__0(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4E7A221 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_4E7A221 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1D0F30C(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_4E7A222 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_4E7A222 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0),
        !svtList)
    || (items = svtList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1D0F30C(this, svt);
  }
  size = svtList->fields._size;
  v15 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void WarBoardBattleEvent___c__DisplayClass69_0___ctor(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardBattleEvent___c__DisplayClass69_0___IsTakeOverNextBattleBuff_b__0(
        WarBoardBattleEvent___c__DisplayClass69_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1D0F30C(this, type);
  return buffEnt->fields.type == type;
}


void WarBoardBattleEvent___c__DisplayClass76_0___ctor(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardBattleEvent___c__DisplayClass76_0___CheckBuffCommonProgressTurn_b__0(
        WarBoardBattleEvent___c__DisplayClass76_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.svtUniqueId == id;
}


void WarBoardBattleEvent___c__DisplayClass78_0___ctor(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardBattleEvent___c__DisplayClass78_0___MakeTurnCondStateByServant_b__0(
        WarBoardBattleEvent___c__DisplayClass78_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.selfUniqueId == id;
}
void __fastcall WarBoardBattleEvent___ctor(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleWarBoardEventLimitTurn_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int32_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5D6E1 & 1) == 0 )
  {
    sub_1B885B0(&BattleWarBoardEventLimitTurn_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D6E1 = 1;
  }
  v3 = (BattleWarBoardEventLimitTurn_o *)sub_1B887FC(BattleWarBoardEventLimitTurn_TypeInfo);
  BattleWarBoardEventLimitTurn___ctor(v3, v4);
  this->fields.eventLimitTurn = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventLimitTurn, (int32_t)v3, v5, v6);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.warBoardDataJson = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warBoardDataJson, v7, v8, v9);
  v10 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.joinCurTurnUniqueIds = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.joinCurTurnUniqueIds, (int32_t)v10, v11, v12);
  v13 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.aliveSvtUniqueIds = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aliveSvtUniqueIds, (int32_t)v13, v14, v15);
  v16 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.notTakeOverBuffTypes = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.notTakeOverBuffTypes, (int32_t)v16, v17, v18);
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleEvent__CheckBuffCommonProgressTurn(
        WarBoardBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *joinCurTurnUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4A5D6DD & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__);
    sub_1B885B0(&WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
    byte_4A5D6DD = 1;
  }
  v5 = sub_1B887FC(WarBoardBattleEvent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtUniqueId;
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass76_0__CheckBuffCommonProgressTurn_b__0__,
    0LL);
  return BasicHelper__Any_int__48671312(
           joinCurTurnUniqueIds,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__GetEventMasterInfo(
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
  struct WarBoardBattleEvent___c_StaticFields *v13; // x0
  ServantStatusBattleListViewItem_o *p__9__51_0; // x0
  Il2CppObject *v16; // x21
  struct WarBoardBattleEvent___c_StaticFields *v17; // x0

  if ( (byte_4A5D6CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
    sub_1B885B0(&System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__);
    sub_1B885B0(&WarBoardBattleEvent___c_TypeInfo);
    byte_4A5D6CD = 1;
  }
  if ( !warBoardInfo )
    return 0LL;
  masterInfo = (System_Object_array *)warBoardInfo->fields.masterInfo;
  if ( !masterInfo )
    return 0LL;
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
      _9__51_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v10, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_0__, 0LL);
      v13 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v13->__9__51_0 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (ServantStatusBattleListViewItem_o *)&v13->__9__51_0;
LABEL_17:
      sub_1B88554(p__9__51_0, (int32_t)_9__51_0, v11, v12);
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
      v16 = (Il2CppObject *)v7->static_fields->__9;
      _9__51_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
      System_Predicate_object____ctor(_9__51_0, v16, Method_WarBoardBattleEvent___c__GetEventMasterInfo_b__51_1__, 0LL);
      v17 = WarBoardBattleEvent___c_TypeInfo->static_fields;
      v17->__9__51_1 = (struct System_Predicate_BattleWarBoardInfo_WarBoardMasterInfo__o *)_9__51_0;
      p__9__51_0 = (ServantStatusBattleListViewItem_o *)&v17->__9__51_1;
      goto LABEL_17;
    }
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_o *)System_Array__Find_object_(
                                                      masterInfo,
                                                      (System_Predicate_T__o *)_9__51_0,
                                                      (const MethodInfo_2F78480 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardMasterInfo___);
}


System_Int64_array *__fastcall WarBoardBattleEvent__GetForceDeadSvtIdArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5D6E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5D6E0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_24;
  Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL);
  if ( !Data_k__BackingField )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  *(_OWORD *)&v19.fields._list = *(_OWORD *)&v18.fields.currentCryptoKey;
  v19.fields._current = (Il2CppObject *)v18.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v6 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B8880C(v6, v7);
    if ( BattleServantData__isDead((BattleServantData_o *)v19.fields._current, 0LL) )
    {
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)current, 0LL);
      if ( !BuffData )
        sub_1B8880C(0LL, v10);
      if ( BattleBuffData__isIgnoreDefeatPoint(BuffData, 0LL) )
      {
        v11 = current[3];
        *(Il2CppObject *)&v18.fields.currentCryptoKey = current[2];
        *(Il2CppObject *)&v18.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
        if ( !v3 )
          sub_1B8880C(v12, v12);
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_long__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(v12, v12);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_24:
    sub_1B8880C(Data_k__BackingField, v4);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetMasterSkillChargeTurnArray(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *masterInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A5D6CB & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D6CB = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B8880C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1Ct, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2Ct, max_length <= 2) )
  {
    sub_1B88814(result, v5);
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

  if ( (byte_4A5D6CC & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D6CC = 1;
  }
  if ( !masterInfo )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B8880C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = masterInfo->fields.skill1SealedTurn, max_length == 1)
    || (result->m_Items[2] = masterInfo->fields.skill2SealedTurn, max_length <= 2) )
  {
    sub_1B88814(result, v5);
  }
  result->m_Items[3] = masterInfo->fields.skill3SealedTurn;
  return result;
}


System_Int32_array *__fastcall WarBoardBattleEvent__GetResetBuffTypes(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v2; // x19
  System_Int32_array *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5D6D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15481/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/);
    byte_4A5D6D3 = 1;
  }
  v2 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = ConstantStrMaster__GetValueArray(
               (ConstantStrMaster_o *)Instance,
               (System_String_o *)StringLiteral_15481/*"WAR_BOARD_BATTLE_END_RESET_BUFF_TYPES"*/,
               0LL,
               0LL);
  if ( !Instance )
  {
    if ( v2 )
      return System_Collections_Generic_List_int___ToArray(
               v2,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  if ( !v2 )
    goto LABEL_10;
  System_Collections_Generic_List_int___AddRange(
    v2,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v2,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardBattleEvent__GetResultBgmId(
        WarBoardBattleEvent_o *this,
        int32_t curBgmId,
        const MethodInfo *method)
{
  WarBoardBattleEvent_o *v4; // x20
  struct BattleData_o *Data_k__BackingField; // x8

  v4 = this;
  if ( (byte_4A5D6CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_1B885B0(&StringLiteral_15482/*"WAR_BOARD_BATTLE_LOSE_BGM"*/);
    byte_4A5D6CE = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_9;
  if ( Data_k__BackingField->fields.isLoseRetireClear )
  {
    this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
      if ( this )
        return ConstantMaster__GetValue_39051884(
                 (ConstantMaster_o *)this,
                 (System_String_o *)StringLiteral_15482/*"WAR_BOARD_BATTLE_LOSE_BGM"*/,
                 -1,
                 0LL);
    }
LABEL_9:
    sub_1B8880C(this, *(_QWORD *)&curBgmId);
  }
  return curBgmId;
}


void __fastcall WarBoardBattleEvent__GetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Int32_array *joinCurTurnUniqueIds; // x8

  if ( !save )
    sub_1B8880C(this, 0LL);
  joinCurTurnUniqueIds = this->fields.joinCurTurnUniqueIds;
  save->fields.joinCurTurnUniqueIds = joinCurTurnUniqueIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&save->fields.joinCurTurnUniqueIds,
    (int32_t)joinCurTurnUniqueIds,
    (int32_t)method,
    v3);
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
    sub_1B8880C(this, svtData);
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

  if ( (byte_4A5D6D7 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D6D7 = 1;
  }
  if ( !enemyMaster )
    return 0LL;
  v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v6 = sub_1B88658(int___TypeInfo, 0LL);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(v6, v7);
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
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x25
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 klass_low; // x1
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  UserGameEntity_o *v19; // x21
  System_Int32_array *v20; // x19
  System_Int32_array *v21; // x20
  WarBoardBattleEvent_o *CommandSpell; // x0
  const MethodInfo *v23; // x6
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5D6D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D6D6 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_28;
  masterSkillInfo = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    masterSkillInfo,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v8 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B8880C(v8, v9);
    if ( !BYTE4(v26.fields._current[1].monitor) )
    {
      if ( !v3 )
        sub_1B8880C(v8, v9);
      monitor_low = LODWORD(v26.fields._current[2].monitor);
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(v8, monitor_low);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          monitor_low,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
      if ( !v4 )
        sub_1B8880C(v8, monitor_low);
      klass_low = LODWORD(current[3].klass);
      v16 = v4->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !v16 )
        sub_1B8880C(v8, klass_low);
      v18 = v4->fields._size;
      if ( (unsigned int)v18 >= v16->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          klass_low,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v18 + 1;
        v16->m_Items[v18 + 1] = klass_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !v3
    || (v19 = (UserGameEntity_o *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v3,
                                                                         (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v4)
    || (v20 = (System_Int32_array *)masterSkillInfo,
        masterSkillInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___ToArray(
                                                                         v4,
                                                                         (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v19) )
  {
LABEL_28:
    sub_1B8880C(masterSkillInfo, v6);
  }
  v21 = (System_Int32_array *)masterSkillInfo;
  CommandSpell = (WarBoardBattleEvent_o *)UserGameEntity__getCommandSpell(v19, 0LL);
  return WarBoardBattleEvent__MakeMasterInfo(CommandSpell, 0, 0, v20, v21, (int32_t)CommandSpell, v23);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardBattleEvent__GetWarBoardSquareIndividualityList(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSquareIndividualityList;
}


bool __fastcall WarBoardBattleEvent__GoNextScene(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  Il2CppObject *WarBoardDataEntityFromResponse; // x19
  System_String_o *warBoardDataJson; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool v7; // w20

  if ( (byte_4A5D6D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&WarBoardManager_TypeInfo);
    byte_4A5D6D8 = 1;
  }
  WarBoardDataEntityFromResponse = 0LL;
  if ( !System_String__IsNullOrEmpty(this->fields.warBoardDataJson, 0LL) )
  {
    warBoardDataJson = this->fields.warBoardDataJson;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    WarBoardDataEntityFromResponse = (Il2CppObject *)WarBoardManager__GetWarBoardDataEntityFromResponse(
                                                       warBoardDataJson,
                                                       0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (v7 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 80, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  if ( v7 )
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
          sub_1B88814(this, result);
        if ( !result )
          sub_1B8880C(this, result);
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
  const MethodInfo *v6; // x1
  BattleInfoData_o *BattleInfo; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleWarBoardInfo_o *warBoardBattleInfo; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x8
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x21
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  WarBoardBattleEvent_o *v19; // x0
  const MethodInfo *v20; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *EventMasterInfo; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  WarBoardBattleEvent_o *v24; // x0
  const MethodInfo *v25; // x3
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  BaseBattleEvent_o *v29; // x0
  const MethodInfo *v30; // x3
  WarBoardBattleEvent_o *v31; // x0
  const MethodInfo *v32; // x1
  struct System_Int32_array *ResetBuffTypes; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  BattleWarBoardInfo_o *v38; // x0
  struct System_Collections_Generic_List_int__o *BattleSquareIndividuality; // x1

  if ( (byte_4A5D6C7 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardBattleServantEvent_TypeInfo);
    byte_4A5D6C7 = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  BattleInfo = BaseBattleEvent__get_BattleInfo((BaseBattleEvent_o *)this, v6);
  if ( !BattleInfo )
    sub_1B8880C(0LL, v8);
  warBoardBattleInfo = BattleInfo->fields.warBoardBattleInfo;
  this->fields._WarBoardBattleInfo_k__BackingField = warBoardBattleInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)warBoardBattleInfo,
    v9,
    v10);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( WarBoardBattleInfo_k__BackingField )
    svtInfo = WarBoardBattleInfo_k__BackingField->fields.svtInfo;
  else
    svtInfo = 0LL;
  v14 = sub_1B887FC(WarBoardBattleServantEvent_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_QWORD *)(v14 + 16) = svtInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)svtInfo, v15, v16);
  this->fields._ServantEvent_k__BackingField = (struct WarBoardBattleServantEvent_o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ServantEvent_k__BackingField, v14, v17, v18);
  EventMasterInfo = WarBoardBattleEvent__GetEventMasterInfo(
                      v19,
                      this->fields._WarBoardBattleInfo_k__BackingField,
                      1,
                      v20);
  this->fields._MasterPlayer_k__BackingField = EventMasterInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterPlayer_k__BackingField,
    (int32_t)EventMasterInfo,
    v22,
    v23);
  v26 = WarBoardBattleEvent__GetEventMasterInfo(v24, this->fields._WarBoardBattleInfo_k__BackingField, 0, v25);
  this->fields._MasterEnemy_k__BackingField = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._MasterEnemy_k__BackingField, (int32_t)v26, v27, v28);
  v29 = (BaseBattleEvent_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                               this,
                               this->klass->vtable._5_Init.methodPtr);
  BaseBattleEvent__InitAtkManager(v29, (unsigned __int8)v29 & 1, data, v30);
  ResetBuffTypes = WarBoardBattleEvent__GetResetBuffTypes(v31, v32);
  this->fields.notTakeOverBuffTypes = ResetBuffTypes;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.notTakeOverBuffTypes,
    (int32_t)ResetBuffTypes,
    v34,
    v35);
  v38 = this->fields._WarBoardBattleInfo_k__BackingField;
  if ( v38 )
    BattleSquareIndividuality = BattleWarBoardInfo__GetBattleSquareIndividuality(v38, 0LL);
  else
    BattleSquareIndividuality = 0LL;
  this->fields.battleSquareIndividualityList = BattleSquareIndividuality;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleSquareIndividualityList,
    (int32_t)BattleSquareIndividuality,
    v36,
    v37);
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


void __fastcall WarBoardBattleEvent__InitBattleStartTurn(
        WarBoardBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  WarBoardBattleEvent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  char v21; // w23
  System_Func_object__int__o *_9__73_1; // x25
  Il2CppObject *v23; // x22
  struct WarBoardBattleEvent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Int32_array **p_joinCurTurnUniqueIds; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  struct System_Int32_array *v36; // x0
  struct System_Int32_array *aliveSvtUniqueIds; // x1

  if ( (byte_4A5D6DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__);
    sub_1B885B0(&WarBoardBattleEvent___c_TypeInfo);
    byte_4A5D6DC = 1;
  }
  Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                                           this,
                                           this->klass->vtable._5_Init.methodPtr,
                                           method);
  if ( !this->fields._Data_k__BackingField
    || (v7 = (char)Data_k__BackingField,
        Data_k__BackingField = (BattleData_o *)BattleData__checkAlivePlayers(this->fields._Data_k__BackingField, 0LL),
        !this->fields._Data_k__BackingField)
    || (v8 = (int)Data_k__BackingField,
        v9 = BattleData__checkAliveEnemys(this->fields._Data_k__BackingField, 0LL),
        Data_k__BackingField = this->fields._Data_k__BackingField,
        this->fields.curTurnCondState = 0,
        !Data_k__BackingField) )
  {
    sub_1B8880C(Data_k__BackingField, v6);
  }
  FieldServantList = BattleData__getFieldServantList(Data_k__BackingField, 0, 0LL);
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
    _9__73_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__73_0, v14, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Func_BattleServantData__bool__o *)_9__73_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__73_0, (int32_t)_9__73_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__73_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v19 = WarBoardBattleEvent___c_TypeInfo;
  v20 = v18;
  if ( !WarBoardBattleEvent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBattleEvent___c_TypeInfo);
    v19 = WarBoardBattleEvent___c_TypeInfo;
  }
  v21 = v7 ^ isPlayer;
  _9__73_1 = (System_Func_object__int__o *)v19->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = WarBoardBattleEvent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v19->static_fields->__9;
    _9__73_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__73_1, v23, Method_WarBoardBattleEvent___c__InitBattleStartTurn_b__73_1__, 0LL);
    v24 = WarBoardBattleEvent___c_TypeInfo->static_fields;
    v24->__9__73_1 = (struct System_Func_BattleServantData__int__o *)_9__73_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__73_1, (int32_t)_9__73_1, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__73_1,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.aliveSvtUniqueIds = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aliveSvtUniqueIds, (int32_t)v28, v29, v30);
  if ( (v21 & 1) != 0 )
  {
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
    v34 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.aliveSvtUniqueIds,
            (const MethodInfo_2E99484 *)Method_System_Linq_Enumerable_Concat_int___);
    v35 = System_Linq_Enumerable__Distinct_int_(
            v34,
            (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
    v36 = System_Linq_Enumerable__ToArray_int_(
            v35,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    LODWORD(aliveSvtUniqueIds) = (_DWORD)v36;
    this->fields.joinCurTurnUniqueIds = v36;
  }
  else
  {
    aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
    this->fields.joinCurTurnUniqueIds = aliveSvtUniqueIds;
    p_joinCurTurnUniqueIds = &this->fields.joinCurTurnUniqueIds;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_joinCurTurnUniqueIds, (int32_t)aliveSvtUniqueIds, v31, v32);
  if ( (v8 & v9 & 1) != 0 )
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
    sub_1B8880C(this, svtData);
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
    sub_1B8880C(0LL, stage);
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
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 isLoseRetireClear; // w20
  WarBoardBattleEvent_o *ValueArray; // x0
  const MethodInfo *v9; // x3

  v5 = this;
  if ( (byte_4A5D6D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (WarBoardBattleEvent_o *)sub_1B885B0(&StringLiteral_15483/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/);
    byte_4A5D6D0 = 1;
  }
  Data_k__BackingField = v5->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || !result )
    goto LABEL_9;
  isLoseRetireClear = Data_k__BackingField->fields.isLoseRetireClear;
  WarBoardBattleEvent__HideTargetsResult(this, result, result->fields.disableResultDispTypes, v3);
  if ( isLoseRetireClear )
    return;
  this = (WarBoardBattleEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleEvent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(this, result);
  }
  ValueArray = (WarBoardBattleEvent_o *)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)this,
                                          (System_String_o *)StringLiteral_15483/*"WAR_BOARD_BATTLE_WIN_HIDE_RESULT_TYPES"*/,
                                          0LL,
                                          0LL);
  WarBoardBattleEvent__HideTargetsResult(ValueArray, result, (System_Int32_array *)ValueArray, v9);
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
        sub_1B88814(Data_k__BackingField, method);
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
    sub_1B8880C(Data_k__BackingField, method);
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
    sub_1B8880C(this, 0LL);
  return (skillInfo->fields.type & 0xFFFFFFFE) == 100
      || BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(skillInfo, 0LL);
}


bool __fastcall WarBoardBattleEvent__IsCommandAttackable(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(this, method);
  return Data_k__BackingField->fields.isCommandSelected;
}


bool __fastcall WarBoardBattleEvent__IsLogicEscape(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(IsBattleEndReduceBuffTurn, v5);
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
    sub_1B8880C(Data_k__BackingField, method);
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
  if ( (byte_4A5D6C9 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    byte_4A5D6C9 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(this, method);
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
  __int64 v9; // x22
  _BOOL8 isParam; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Int32_array *notTakeOverBuffTypes; // x19
  System_Func_int__bool__o *v16; // x20

  if ( (byte_4A5D6DA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__);
    sub_1B885B0(&WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
    byte_4A5D6DA = 1;
  }
  v9 = sub_1B887FC(WarBoardBattleEvent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = buffEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)buffEnt, v12, v13);
  if ( !baseVals )
    goto LABEL_13;
  isParam = DataVals__isParam(baseVals, 68, 0LL);
  if ( isParam )
    return DataVals__GetParam(baseVals, 68, 0, 0LL) > 0;
  if ( !buff )
LABEL_13:
    sub_1B8880C(isParam, v11);
  if ( BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    return 1;
  if ( (buff->fields.grantSkillType & 0xFFFFFFFE) == 100 )
    return 0;
  notTakeOverBuffTypes = this->fields.notTakeOverBuffTypes;
  v16 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_WarBoardBattleEvent___c__DisplayClass69_0__IsTakeOverNextBattleBuff_b__0__,
    0LL);
  return !BasicHelper__Any_int__48671312(
            notTakeOverBuffTypes,
            (System_Func_T__bool__o *)v16,
            (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
}


bool __fastcall WarBoardBattleEvent__IsUseDefeatPointReady(
        WarBoardBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B8880C(this, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v16; // x21
  struct BattleData_o *v17; // x9
  int32_t criticalstars; // w9
  unsigned int v19; // w20
  int v20; // w22
  int i; // w23
  int32_t v22; // w2

  if ( (byte_4A5D6D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__);
    sub_1B885B0(&WarBoardBattleEvent___c_TypeInfo);
    byte_4A5D6D2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_31A5A84 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_23;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(Data_k__BackingField, 0LL);
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
    _9__57_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v10, Method_WarBoardBattleEvent___c__MakeDistributeStar_b__57_0__, 0LL);
    static_fields = WarBoardBattleEvent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__bool__o *)_9__57_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  Data_k__BackingField = (BattleData_o *)System_Linq_Enumerable__ToArray_object_(
                                           v14,
                                           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !Data_k__BackingField )
    goto LABEL_23;
  m_CancellationTokenSource = Data_k__BackingField->fields.m_CancellationTokenSource;
  v16 = Data_k__BackingField;
  if ( m_CancellationTokenSource )
  {
    v17 = this->fields._Data_k__BackingField;
    if ( !v17 )
      goto LABEL_23;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      criticalstars = v17->fields.criticalstars;
      v19 = 0;
      v20 = criticalstars / (int)m_CancellationTokenSource;
      for ( i = criticalstars % (int)m_CancellationTokenSource; ; --i )
      {
        if ( v19 >= (unsigned int)m_CancellationTokenSource )
          sub_1B88814(Data_k__BackingField, v4);
        Data_k__BackingField = (BattleData_o *)*((_QWORD *)&v16->fields.rootfsm + (int)v19);
        if ( !Data_k__BackingField )
          break;
        Data_k__BackingField = (BattleData_o *)BattleServantData__getUserSvtId(
                                                 (BattleServantData_o *)Data_k__BackingField,
                                                 0LL);
        if ( !v3 )
          break;
        if ( i <= 0 )
          v22 = v20;
        else
          v22 = v20 + 1;
        System_Collections_Generic_Dictionary_long__int___Add(
          v3,
          (int64_t)Data_k__BackingField,
          v22,
          (const MethodInfo_31A6458 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
        LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
        if ( (int)++v19 >= (int)m_CancellationTokenSource )
          return v3;
      }
LABEL_23:
      sub_1B8880C(Data_k__BackingField, v4);
    }
  }
  return v3;
}


BattleWarBoardInfo_WarBoardMasterInfo_o *__fastcall WarBoardBattleEvent__MakeMasterInfo(
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

  if ( (byte_4A5D6D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
    byte_4A5D6D5 = 1;
  }
  v12 = (BattleWarBoardInfo_WarBoardMasterInfo_o *)sub_1B887FC(BattleWarBoardInfo_WarBoardMasterInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardMasterInfo___ctor(v12, 0LL);
  if ( !v12 )
    sub_1B8880C(v13, v14);
  v12->fields.forceId = forceId;
  v12->fields.groupId = groupId;
  v12->fields.skill1Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           0,
                           0,
                           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.skill2Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           1,
                           0,
                           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.skill3Ct = BasicHelper__IndexValue_int_(
                           chargeArray,
                           2,
                           0,
                           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.skill1SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   0,
                                   0,
                                   (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.skill2SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   1,
                                   0,
                                   (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.skill3SealedTurn = BasicHelper__IndexValue_int_(
                                   sealedArray,
                                   2,
                                   0,
                                   (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v12->fields.commandSpellNum = spellNum;
  return v12;
}


int32_t __fastcall WarBoardBattleEvent__MakeTurnCondStateByServant(
        WarBoardBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *aliveSvtUniqueIds; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4A5D6DE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__);
    sub_1B885B0(&WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
    byte_4A5D6DE = 1;
  }
  v5 = sub_1B887FC(WarBoardBattleEvent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = selfUniqueId;
  aliveSvtUniqueIds = this->fields.aliveSvtUniqueIds;
  v9 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleEvent___c__DisplayClass78_0__MakeTurnCondStateByServant_b__0__,
    0LL);
  if ( BasicHelper__Any_int__48671312(
         aliveSvtUniqueIds,
         (System_Func_T__bool__o *)v9,
         (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
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
  __int64 v3; // x21
  __int64 v4; // x20
  BattleData_o *v5; // x0
  __int64 v6; // x1
  struct BattleWarBoardInfo_o *WarBoardBattleInfo_k__BackingField; // x9
  __int64 v8; // x22
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x1
  const MethodInfo *v14; // x1
  System_Collections_Generic_Dictionary_long__int__o *DistributeStar; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Int32_array *QuestIndividualities; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x23
  BattleData_o **v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattleData_o *v30; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x23
  System_Action_object__o *v32; // x24
  struct BattleData_o *v33; // x8
  System_Collections_Generic_List_object__o *enemy_datalist; // x23
  System_Action_object__o *v35; // x24
  System_Object_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  BattleWarBoardInfo_WarBoardMasterInfo_array *WarBoardMasterArray; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_4A5D6D1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&BattleWarBoardInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
    sub_1B885B0(&WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__);
    sub_1B885B0(&Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__);
    sub_1B885B0(&WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
    byte_4A5D6D1 = 1;
  }
  v3 = sub_1B887FC(WarBoardBattleEvent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  v4 = sub_1B887FC(BattleWarBoardInfo_TypeInfo);
  BattleWarBoardInfo___ctor((BattleWarBoardInfo_o *)v4, 0LL);
  v5 = (BattleData_o *)((__int64 (__fastcall *)(WarBoardBattleEvent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_IsPrecedingPlayer.method)(
                         this,
                         this->klass->vtable._5_Init.methodPtr);
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
  v8 = sub_1B887FC(WarBoardBattleEvent_TakeoverSvtArg_TypeInfo);
  WarBoardBattleEvent_TakeoverSvtArg___ctor((WarBoardBattleEvent_TakeoverSvtArg_o *)v8, v9);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_17;
  if ( !v8 )
    goto LABEL_17;
  logic = Data_k__BackingField->fields.logic;
  *(_QWORD *)(v8 + 16) = logic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)logic, v10, v11);
  DistributeStar = WarBoardBattleEvent__MakeDistributeStar(this, v14);
  *(_QWORD *)(v8 + 24) = DistributeStar;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)DistributeStar, v16, v17);
  v5 = this->fields._Data_k__BackingField;
  if ( !v5 )
    goto LABEL_17;
  QuestIndividualities = BattleData__getQuestIndividualities(v5, 0LL);
  *(_QWORD *)(v8 + 32) = QuestIndividualities;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)QuestIndividualities, v19, v20);
  ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
  *(_QWORD *)(v8 + 40) = ServantEvent_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)ServantEvent_k__BackingField, v22, v23);
  if ( !v3 )
    goto LABEL_17;
  *(_QWORD *)(v3 + 24) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), v8, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  *(_QWORD *)(v3 + 16) = v26;
  v27 = (BattleData_o **)(v3 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v26, v28, v29);
  v30 = this->fields._Data_k__BackingField;
  if ( !v30 )
    goto LABEL_17;
  player_datalist = (System_Collections_Generic_List_object__o *)v30->fields.player_datalist;
  v32 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__0__,
    0LL);
  if ( !player_datalist
    || (System_Collections_Generic_List_object___ForEach(
          player_datalist,
          (System_Action_T__o *)v32,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v33 = this->fields._Data_k__BackingField) == 0LL)
    || (enemy_datalist = (System_Collections_Generic_List_object__o *)v33->fields.enemy_datalist,
        v35 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo),
        System_Action_object____ctor(
          v35,
          (Il2CppObject *)v3,
          Method_WarBoardBattleEvent___c__DisplayClass56_0__MakeWarBoardBattleInfo_b__1__,
          0LL),
        !enemy_datalist)
    || (System_Collections_Generic_List_object___ForEach(
          enemy_datalist,
          (System_Action_T__o *)v35,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__),
        (v5 = *v27) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(v5, v6);
  }
  v36 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)v5,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__ToArray__);
  *(_QWORD *)(v4 + 32) = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)v36, v37, v38);
  WarBoardMasterArray = WarBoardBattleEvent__MakeWarBoardMasterArray(this, v39);
  *(_QWORD *)(v4 + 40) = WarBoardMasterArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)WarBoardMasterArray, v41, v42);
  v43 = ((__int64 (__fastcall *)(WarBoardBattleEvent_o *, void *))this->klass->vtable._37_GetForceDeadSvtIdArray.method)(
          this,
          this->klass[1]._1.image);
  *(_QWORD *)(v4 + 56) = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 56), v43, v44, v45);
  return (BattleWarBoardInfo_o *)v4;
}


BattleWarBoardInfo_WarBoardMasterInfo_array *__fastcall WarBoardBattleEvent__MakeWarBoardMasterArray(
        WarBoardBattleEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  Il2CppObject *TakeoverPlayerMasterInfo; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppObject *v12; // x1
  Il2CppClass **v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4A5D6D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
    byte_4A5D6D4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo___ctor__);
  TakeoverPlayerMasterInfo = (Il2CppObject *)WarBoardBattleEvent__GetTakeoverPlayerMasterInfo(this, v4);
  if ( TakeoverPlayerMasterInfo )
  {
    if ( !v3 )
      goto LABEL_15;
    items = v3->fields._items;
    v10 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v3->fields._size;
    v12 = TakeoverPlayerMasterInfo;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        TakeoverPlayerMasterInfo,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v12, (int32_t)v7, v8);
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
                                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
LABEL_15:
    sub_1B8880C(TakeoverPlayerMasterInfo, v6);
  }
  if ( !v3 )
    goto LABEL_15;
  v16 = v3->fields._items;
  v17 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__Add__;
  ++v3->fields._version;
  if ( !v16 )
    goto LABEL_15;
  v18 = v3->fields._size;
  v19 = TakeoverPlayerMasterInfo;
  if ( (unsigned int)v18 >= v16->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      TakeoverPlayerMasterInfo,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v16->obj.klass + v18;
    v3->fields._size = v18 + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  return (BattleWarBoardInfo_WarBoardMasterInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                          v3,
                                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardMasterInfo__ToArray__);
}


void __fastcall WarBoardBattleEvent__OnTurnCond(WarBoardBattleEvent_o *this, int32_t cond, const MethodInfo *method)
{
  this->fields.curTurnCondState |= cond;
}


void __fastcall WarBoardBattleEvent__PrevEndLoadNStage(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  WarBoardBattleServantEvent_o *ServantEvent_k__BackingField; // x21
  int64_t UserSvtId; // x0
  const MethodInfo *v9; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x21
  AiStateManager_o *AiStateManager; // x22
  BattleWarBoardInfo_TakeOverAiStateData_array *aiStateSaveData; // x23
  BattleStartServantAiResetChecker_o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5D6DB & 1) == 0 )
  {
    sub_1B885B0(&BattleStartServantAiResetChecker_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    byte_4A5D6DB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__getServantList(Data_k__BackingField, 0LL)) == 0LL )
  {
    sub_1B8880C(Data_k__BackingField, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)Data_k__BackingField,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B8880C(v4, v5);
    ServantEvent_k__BackingField = this->fields._ServantEvent_k__BackingField;
    UserSvtId = BattleServantData__getUserSvtId((BattleServantData_o *)v17.fields._current, 0LL);
    if ( !ServantEvent_k__BackingField )
      sub_1B8880C(UserSvtId, UserSvtId);
    EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(ServantEvent_k__BackingField, UserSvtId, v9);
    if ( EventServantInfo )
    {
      AiStateManager = BattleServantData__get_AiStateManager((BattleServantData_o *)current, 0LL);
      aiStateSaveData = EventServantInfo->fields.aiStateSaveData;
      v13 = (BattleStartServantAiResetChecker_o *)sub_1B887FC(BattleStartServantAiResetChecker_TypeInfo);
      BattleStartServantAiResetChecker___ctor(v13, (BattleServantData_o *)current, EventServantInfo, 0LL);
      if ( !AiStateManager )
        sub_1B8880C(v14, v15);
      AiStateManager__SetTakeOverAiState(AiStateManager, aiStateSaveData, (AiResetChecker_o *)v13, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
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
    sub_1B8880C(this, buffData);
  progressTurnCond = buff->fields.progressTurnCond;
  if ( (!progressTurnCond || ((this->fields.curTurnCondState | defCondState) & progressTurnCond) == progressTurnCond)
    && BattleBuffData_BuffData__checkProgressTurn(buff, 0LL)
    && buff->fields.isProgressEndEnemyTurn == isEndEnemyTurn )
  {
    buff->fields.turn = (buff->fields.turn - 2) & ~((buff->fields.turn - 2) >> 31);
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0LL);
  }
}


void __fastcall WarBoardBattleEvent__ProgressNoExecJoinServantsBuff(
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
  __int64 p_method; // x0
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

  if ( (byte_4A5D6DF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Except_int___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5D6DF = 1;
  }
  v7 = System_Linq_Enumerable__Except_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.joinCurTurnUniqueIds,
         (System_Collections_Generic_IEnumerable_TSource__o *)execUniqueIds,
         (const MethodInfo_2EA0740 *)Method_System_Linq_Enumerable_Except_int___);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  klass = v7->klass;
  v10 = v7;
  v11 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(v7, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v10,
          *(_QWORD *)(p_method + 8));
  if ( !v15 )
    sub_1B8880C(0LL, v14);
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
      v20 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_1BDA590(v15, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v15, *(_QWORD *)(v24 + 8));
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1B8880C(0LL, v25);
    ServantData = BattleData__getServantData(Data_k__BackingField, v26, 0LL);
    if ( ServantData )
    {
      v30 = this->fields._Data_k__BackingField;
      if ( !v30 )
        sub_1B8880C(ServantData, v29);
      buffData = ServantData->fields.buffData;
      if ( !buffData )
        sub_1B8880C(0LL, v29);
      BattleBuffData__turnProgressing(buffData, v30->fields.logic, v16, v26, 0LL);
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
    v35 = sub_1BDA590(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
}


bool __fastcall WarBoardBattleEvent__SendBattleResult(
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

  if ( (byte_4A5D6CF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_WarBoardBattleEvent_SetResponseWarBoardData__);
    byte_4A5D6CF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardBattleResultRequest___);
  WarBoardBattleInfo_k__BackingField = this->fields._WarBoardBattleInfo_k__BackingField;
  v10 = (WarBoardBattleResultRequest_o *)Request_object;
  if ( WarBoardBattleInfo_k__BackingField )
    stageId = WarBoardBattleInfo_k__BackingField->fields.stageId;
  else
    stageId = 0;
  WarBoardBattleInfo = (Il2CppObject *)WarBoardBattleEvent__MakeWarBoardBattleInfo(this, v8);
  v13 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v13, (Il2CppObject *)this, Method_WarBoardBattleEvent_SetResponseWarBoardData__, 0LL);
  if ( !v10 )
    sub_1B8880C(v14, v15);
  WarBoardBattleResultRequest__beginRequest(v10, stageId, arg, WarBoardBattleInfo, (System_Action_string__o *)v13, 0LL);
  return 1;
}


void __fastcall WarBoardBattleEvent__SetDefaultPassiveBuffShowState(
        WarBoardBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B8880C(this, 0LL);
  if ( buff->fields.grantSkillType == 100 )
    BattleBuffData_BuffData__onState(buff, 4, 0LL);
}


void __fastcall WarBoardBattleEvent__SetResponseWarBoardData(
        WarBoardBattleEvent_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.warBoardDataJson = json;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warBoardDataJson, (int32_t)json, (int32_t)method, v3);
}


void __fastcall WarBoardBattleEvent__SetSaveData(
        WarBoardBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleData_SaveData_o *v4; // x20
  WarBoardBattleEvent_o *v5; // x19

  v4 = save;
  v5 = this;
  if ( (byte_4A5D6D9 & 1) == 0 )
  {
    this = (WarBoardBattleEvent_o *)sub_1B885B0(&int___TypeInfo);
    byte_4A5D6D9 = 1;
  }
  if ( !v4 )
    goto LABEL_8;
  save = (BattleData_SaveData_o *)v4->fields.joinCurTurnUniqueIds;
  if ( !save )
  {
    this = (WarBoardBattleEvent_o *)sub_1B88658(int___TypeInfo, 0LL);
    save = (BattleData_SaveData_o *)this;
  }
  if ( !v5 )
LABEL_8:
    sub_1B8880C(this, save);
  v5->fields.joinCurTurnUniqueIds = (struct System_Int32_array *)save;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.joinCurTurnUniqueIds, (int32_t)save, (int32_t)method, v3);
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
        sub_1B88814(Data_k__BackingField, isPlayer);
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
    sub_1B8880C(Data_k__BackingField, isPlayer);
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
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  struct BattleData_o *v21; // x8
  __int64 v22; // x0

  if ( (byte_4A5D6C8 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData___TypeInfo);
    byte_4A5D6C8 = 1;
  }
  Data_k__BackingField = (__int64)this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (!isPlayer
      ? (Data_k__BackingField = (__int64)BattleData__getEnemyServantList((BattleData_o *)Data_k__BackingField, 0LL))
      : (Data_k__BackingField = (__int64)BattleData__getPlayerServantList((BattleData_o *)Data_k__BackingField, 0LL)),
        (v6 = Data_k__BackingField) == 0) )
  {
LABEL_22:
    sub_1B8880C(Data_k__BackingField, isPlayer);
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
      Data_k__BackingField = sub_1B88658(BattleServantData___TypeInfo, 1LL);
      if ( !Data_k__BackingField )
        goto LABEL_22;
      v16 = Data_k__BackingField;
      Data_k__BackingField = sub_1B886EC(v10, *(_QWORD *)(*(_QWORD *)Data_k__BackingField + 64LL));
      if ( !Data_k__BackingField )
      {
        v22 = sub_1B88830(0LL);
        sub_1B886D8(v22, 0LL);
      }
      if ( !*(_DWORD *)(v16 + 24) )
        break;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v10, v17, v18);
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        (BattleFieldEnvironmentData_o *)Data_k__BackingField,
        (BattleServantData_array *)v16,
        v19);
      v21 = this->fields._Data_k__BackingField;
      if ( !v21 )
        goto LABEL_22;
      Data_k__BackingField = (__int64)v21->fields._FieldEnvData_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_22;
      BattleFieldEnvironmentData__AddServantChangeBgm((BattleFieldEnvironmentData_o *)Data_k__BackingField, v10, v20);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
    sub_1B88814(Data_k__BackingField, isPlayer);
  }
}


void __fastcall WarBoardBattleEvent__TakeoverEnemyMasterInfo(WarBoardBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x9
  struct BattleWarBoardInfo_WarBoardMasterInfo_o *MasterEnemy_k__BackingField; // x10

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(this, method);
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
  WarBoardBattleEvent_o *MasterSkillChargeTurnArray; // x19
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_object__o *MasterSkillSealedTurnArray; // x0
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Int32_array *v9; // x20
  int32_t v10; // w21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x25
  int32_t v14; // w0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4A5D6CA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    this = (WarBoardBattleEvent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    byte_4A5D6CA = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
        (MasterSkillSealedTurnArray = (System_Collections_Generic_List_object__o *)Data_k__BackingField->fields.masterSkillInfo) == 0LL) )
  {
    sub_1B8880C(MasterSkillSealedTurnArray, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    MasterSkillSealedTurnArray,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v10 = 0;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v11 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1B8880C(v11, v12);
    if ( !BYTE4(v15.fields._current[1].monitor) )
    {
      LODWORD(current[2].monitor) = BasicHelper__IndexValue_int_(
                                      (System_Int32_array *)MasterSkillChargeTurnArray,
                                      v10,
                                      (int32_t)v15.fields._current[2].monitor,
                                      (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
      v14 = BasicHelper__IndexValue_int_(
              v9,
              v10,
              (int32_t)current[3].klass,
              (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
      if ( v14 != -1 )
        LODWORD(current[3].klass) = v14;
      ++v10;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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

  this->fields._MasterEnemy_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterEnemy_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardBattleEvent__set_MasterPlayer(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MasterPlayer_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterPlayer_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardBattleEvent__set_ServantEvent(
        WarBoardBattleEvent_o *this,
        WarBoardBattleServantEvent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ServantEvent_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEvent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardBattleEvent__set_WarBoardBattleInfo(
        WarBoardBattleEvent_o *this,
        BattleWarBoardInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._WarBoardBattleInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._WarBoardBattleInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardBattleEvent_TakeoverSvtArg___ctor(
        WarBoardBattleEvent_TakeoverSvtArg_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D6E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D6E2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_31A5A84 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.dicDistributeStar = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicDistributeStar, (int32_t)v3, v4, v5);
  v6 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldIndiv, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardBattleEvent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D6E3 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardBattleEvent___c_TypeInfo);
    byte_4A5D6E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardBattleEvent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardBattleEvent___c_TypeInfo->static_fields->__9 = (struct WarBoardBattleEvent___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardBattleEvent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return !x->fields.forceId && x->fields.groupId == 0;
}


bool __fastcall WarBoardBattleEvent___c___GetEventMasterInfo_b__51_1(
        WarBoardBattleEvent___c_o *this,
        BattleWarBoardInfo_WarBoardMasterInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.forceId || x->fields.groupId != 0;
}


bool __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B8880C(this, 0LL);
  return BattleServantData__isAlive(svt, 0, 0LL);
}


int32_t __fastcall WarBoardBattleEvent___c___InitBattleStartTurn_b__73_1(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B8880C(this, 0LL);
  return svt->fields.uniqueId;
}


bool __fastcall WarBoardBattleEvent___c___MakeDistributeStar_b__57_0(
        WarBoardBattleEvent___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B8880C(this, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v11; // x1
  Il2CppClass **v12; // x0

  v4 = this;
  if ( (byte_4A5D6E4 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_4A5D6E4 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v9 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1B8880C(this, svt);
  }
  size = svtList->fields._size;
  v11 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v12 = &items->obj.klass + size;
    v12[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)v11, v6, v7);
  }
}


void __fastcall WarBoardBattleEvent___c__DisplayClass56_0___MakeWarBoardBattleInfo_b__1(
        WarBoardBattleEvent___c__DisplayClass56_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  WarBoardBattleEvent___c__DisplayClass56_0_o *v4; // x21
  System_Collections_Generic_List_object__o *svtList; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  WarBoardBattleEvent___c__DisplayClass56_0_o *v11; // x1
  Il2CppClass **v12; // x0

  v4 = this;
  if ( (byte_4A5D6E5 & 1) == 0 )
  {
    this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__);
    byte_4A5D6E5 = 1;
  }
  if ( !svt
    || (svtList = (System_Collections_Generic_List_object__o *)v4->fields.svtList,
        this = (WarBoardBattleEvent___c__DisplayClass56_0_o *)BattleServantData__GetTakeoverServantData(
                                                                svt,
                                                                v4->fields.arg,
                                                                0LL),
        !svtList)
    || (items = svtList->fields._items,
        v9 = Method_System_Collections_Generic_List_BattleWarBoardInfo_WarBoardServantInfo__Add__,
        ++svtList->fields._version,
        !items) )
  {
    sub_1B8880C(this, svt);
  }
  size = svtList->fields._size;
  v11 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      svtList,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    svtList->fields._size = size + 1;
    v12 = &items->obj.klass + size;
    v12[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)v11, v6, v7);
  }
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
    sub_1B8880C(this, type);
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
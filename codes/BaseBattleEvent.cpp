void __fastcall BaseBattleEvent___ctor(BaseBattleEvent_o *this, const MethodInfo *method)
{
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BaseBattleEvent__CheckBuffCommonProgressTurn(
        BaseBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  return 1;
}


System_Int64_array *__fastcall BaseBattleEvent__GetForceDeadSvtIdArray(
        BaseBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B187AB & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, method, v2);
    byte_4B187AB = 1;
  }
  return (System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v6; // x1
  int32_t type; // w19

  if ( (byte_4B187A9 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, buffEnt, method);
    byte_4B187A9 = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_11:
    sub_1BCAA3C(IsBattleEndReduceBuffTurn, v6);
  }
  if ( !buffEnt )
    goto LABEL_11;
  if ( !BuffEntity__IsBattleEndNotReduceTurn(buffEnt, 0LL) )
    return 0;
LABEL_8:
  type = buffEnt->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v6);
  return BuffList__GetProgressTurnCond(type, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetResultBgmId(BaseBattleEvent_o *this, int32_t curBgmId, const MethodInfo *method)
{
  return curBgmId;
}


void __fastcall BaseBattleEvent__GetSaveData(
        BaseBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  ;
}


BaseBattleServantEvent_o *__fastcall BaseBattleEvent__GetServantEvent(
        BaseBattleEvent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B187A8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseBattleServantEvent_TypeInfo, method, v2);
    byte_4B187A8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BaseBattleServantEvent_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (BaseBattleServantEvent_o *)v4;
}


System_Collections_Generic_List_int__o *__fastcall BaseBattleEvent__GetWarBoardSquareIndividualityList(
        BaseBattleEvent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


bool __fastcall BaseBattleEvent__GoNextScene(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall BaseBattleEvent__Init(BaseBattleEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Data_k__BackingField = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8
  struct BattleAttackManager_o *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_1BCAA3C(this, isPrecedingPlayer);
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  data->fields.battleAtkManager = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&data->fields.battleAtkManager, (int64_t)v6, v7, v8, v9, v10, v11, v12);
}


bool __fastcall BaseBattleEvent__InitBGData(
        BaseBattleEvent_o *this,
        int32_t *bgNo,
        int32_t *bgType,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BaseBattleEvent__InitBattleStartTurn(BaseBattleEvent_o *this, bool isPlayer, const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__InitPlayerMasterInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__InitServantDataPrevAdd(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__InitStageData(BaseBattleEvent_o *this, StageEntity_o *stage, const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__InitStartResult(
        BaseBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__InitWave(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall BaseBattleEvent__IsActionPassiveSkillOnBattle(
        BaseBattleEvent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BaseBattleEvent__IsCommandAttackable(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall BaseBattleEvent__IsLogicEscape(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BaseBattleEvent__IsPossibleAddBuffParam(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAlive(svtData, 0, 0LL);
}


bool __fastcall BaseBattleEvent__IsRemainBattleEndWave(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BaseBattleEvent__IsTakeOverNextBattleBuff(
        BaseBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        BuffEntity_o *buffEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BaseBattleEvent__IsUseDefeatPointReady(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return 0;
}


BaseBattleEvent_o *__fastcall BaseBattleEvent__MakeBattleEvent(BattleData_o *data, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct QuestEntity_o *quest_ent; // x21
  __int64 v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  const MethodInfo *v11; // x1

  v4 = data;
  if ( (byte_4B187A6 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseBattleEvent_TypeInfo, method, v2);
    data = (BattleData_o *)sub_1BCA7E0(&WarBoardBattleEvent_TypeInfo, v5, v6);
    byte_4B187A6 = 1;
  }
  if ( !v4
    || (quest_ent = v4->fields.quest_ent,
        v8 = sub_1BCAA2C(BaseBattleEvent_TypeInfo, method, v2, v3),
        *(_DWORD *)(v8 + 24) = -1,
        System_Object___ctor((Il2CppObject *)v8, 0LL),
        !quest_ent)
    || quest_ent->fields.type == 7
    && (v8 = sub_1BCAA2C(WarBoardBattleEvent_TypeInfo, method, v9, v10),
        WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v8, v11),
        !v8) )
  {
    sub_1BCAA3C(data, method);
  }
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v8 + 392LL))(
    v8,
    v4,
    *(_QWORD *)(*(_QWORD *)v8 + 400LL));
  return (BaseBattleEvent_o *)v8;
}


int32_t __fastcall BaseBattleEvent__MakeTurnCondStateByServant(
        BaseBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BaseBattleEvent__PrevEndLoadNStage(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__ProcOnActAiFixed(
        BaseBattleEvent_o *this,
        AiState_o *aiState,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__ProgressBuffTurn(
        BaseBattleEvent_o *this,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  if ( !buffData )
    goto LABEL_6;
  this = (BaseBattleEvent_o *)BattleBuffData__ProgressBuffTurn(buffData, buff, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( buff )
    {
      BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0LL);
      return;
    }
LABEL_6:
    sub_1BCAA3C(this, buffData);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  BattleData_o *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_T__o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_object__o *v48; // x21

  if ( (byte_4B187AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantData__TypeInfo, execUniqueIds, isEndEnemyTurn);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleServantData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v15, v16);
    sub_1BCA7E0(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v17, v18);
    sub_1BCA7E0(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v19, v20);
    byte_4B187AA = 1;
  }
  v21 = sub_1BCAA2C(BaseBattleEvent___c__DisplayClass44_0_TypeInfo, execUniqueIds, isEndEnemyTurn, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_7;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = execUniqueIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)execUniqueIds, v30, v31, v32, v33, v34, v35);
  *(_BYTE *)(v21 + 32) = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v36 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(Data_k__BackingField, v23);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v36, 1, 0LL);
  v39 = System_Linq_Enumerable__Concat_object_(
          v37,
          SubServantArray,
          (const MethodInfo_2F2AA5C *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v43 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v40, v41, v42);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v21,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    0LL);
  v44 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v39,
                                                         (System_Func_TSource__bool__o *)v43,
                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v48 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleServantData__TypeInfo, v45, v46, v47);
  System_Action_object____ctor(
    v48,
    (Il2CppObject *)v21,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v44,
    (System_Action_T__o *)v48,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleServantData___);
}


bool __fastcall BaseBattleEvent__SendBattleResult(
        BaseBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BaseBattleEvent__SetDefaultPassiveBuffShowState(
        BaseBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__SetSaveData(
        BaseBattleEvent_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__SetServantDataAfterPassiveAdded(
        BaseBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  ;
}


void __fastcall BaseBattleEvent__SetServantDataBeforePassiveAdded(
        BaseBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  ;
}


BattleEntity_o *__fastcall BaseBattleEvent__get_BattleEnt(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_1BCAA3C(this, method);
  return battle_ent->fields.battleInfo;
}


BattleData_o *__fastcall BaseBattleEvent__get_Data(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BaseBattleEvent__get_IsBattleEndReduceBuffTurn(BaseBattleEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t battleEndReduceBuffTurnFlag; // w8
  int32_t Value; // w0

  if ( (byte_4B187A7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15647/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, method, v2);
    byte_4B187A7 = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15647/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
    battleEndReduceBuffTurnFlag = Value & ~(Value >> 31);
    this->fields.battleEndReduceBuffTurnFlag = battleEndReduceBuffTurnFlag;
  }
  return battleEndReduceBuffTurnFlag > 0;
}


bool __fastcall BaseBattleEvent__get_IsPrecedingPlayer(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall BaseBattleEvent__set_Data(BaseBattleEvent_o *this, BattleData_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BaseBattleEvent___c__DisplayClass44_0___ctor(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BaseBattleEvent___c__DisplayClass44_0___ProgressNoExecJoinServantsBuff_b__0(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BaseBattleEvent___c__DisplayClass44_0_o *v4; // x20
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 v7; // w0

  v4 = this;
  if ( (byte_4B187AC & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_1BCA7E0(&Method_System_Array_IndexOf_int___, x, method);
    byte_4B187AC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_1BCAA3C(this, x);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) >> 31;
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}


void __fastcall BaseBattleEvent___c__DisplayClass44_0___ProgressNoExecJoinServantsBuff_b__1(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x9
  BattleBuffData_o *buffData; // x8

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL
    || (buffData = x->fields.buffData) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
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
  if ( (byte_4B472C1 & 1) == 0 )
  {
    sub_1BDB878(&long___TypeInfo, method);
    byte_4B472C1 = 1;
  }
  return (System_Int64_array *)sub_1BDB920(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v6; // x1
  int32_t type; // w19

  if ( (byte_4B472BF & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, buffEnt);
    byte_4B472BF = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_11:
    sub_1BDBAD4(IsBattleEndReduceBuffTurn, v6);
  }
  if ( !buffEnt )
    goto LABEL_11;
  if ( !BuffEntity__IsBattleEndNotReduceTurn(buffEnt, 0LL) )
    return 0;
LABEL_8:
  type = buffEnt->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
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
  Il2CppObject *v2; // x19

  if ( (byte_4B472BE & 1) == 0 )
  {
    sub_1BDB878(&BaseBattleServantEvent_TypeInfo, method);
    byte_4B472BE = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BaseBattleServantEvent_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (BaseBattleServantEvent_o *)v2;
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
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = data;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
}


void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8
  struct BattleAttackManager_o *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_1BDBAD4(this, isPrecedingPlayer);
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  data->fields.battleAtkManager = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&data->fields.battleAtkManager, (int32_t)v6, v7, v8);
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
    sub_1BDBAD4(this, 0LL);
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
  BattleData_o *v2; // x19
  __int64 v3; // x1
  struct QuestEntity_o *quest_ent; // x21
  __int64 v5; // x20
  const MethodInfo *v6; // x1

  v2 = data;
  if ( (byte_4B472BC & 1) == 0 )
  {
    sub_1BDB878(&BaseBattleEvent_TypeInfo, method);
    data = (BattleData_o *)sub_1BDB878(&WarBoardBattleEvent_TypeInfo, v3);
    byte_4B472BC = 1;
  }
  if ( !v2
    || (quest_ent = v2->fields.quest_ent,
        v5 = sub_1BDBAC4(BaseBattleEvent_TypeInfo),
        *(_DWORD *)(v5 + 24) = -1,
        System_Object___ctor((Il2CppObject *)v5, 0LL),
        !quest_ent)
    || quest_ent->fields.type == 7
    && (v5 = sub_1BDBAC4(WarBoardBattleEvent_TypeInfo), WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v5, v6), !v5) )
  {
    sub_1BDBAD4(data, method);
  }
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v5 + 392LL))(
    v5,
    v2,
    *(_QWORD *)(*(_QWORD *)v5 + 400LL));
  return (BaseBattleEvent_o *)v5;
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
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BDBAD4(this, 0LL);
  if ( BattleBuffData_BuffData__ProgressBuffTurn(buff, 0LL) )
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0LL);
}


void __fastcall BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattleData_o *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  System_Action_object__o *v27; // x21

  if ( (byte_4B472C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleServantData__TypeInfo, execUniqueIds);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleServantData___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_1BDB878(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_1BDB878(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v11);
    sub_1BDB878(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v12);
    sub_1BDB878(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v13);
    byte_4B472C0 = 1;
  }
  v14 = sub_1BDBAC4(BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = execUniqueIds;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)execUniqueIds, v19, v20);
  *(_BYTE *)(v14 + 32) = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v21 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_1BDBAD4(Data_k__BackingField, v16);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v21, 1, 0LL);
  v24 = System_Linq_Enumerable__Concat_object_(
          v22,
          SubServantArray,
          (const MethodInfo_304C4A8 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v25 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    0LL);
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v24,
                                                         (System_Func_TSource__bool__o *)v25,
                                                         (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v27 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v26,
    (System_Action_T__o *)v27,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_1BDBAD4(this, method);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_1BDBAD4(this, method);
  return battle_ent->fields.battleInfo;
}


BattleData_o *__fastcall BaseBattleEvent__get_Data(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BaseBattleEvent__get_IsBattleEndReduceBuffTurn(BaseBattleEvent_o *this, const MethodInfo *method)
{
  int32_t battleEndReduceBuffTurnFlag; // w8
  int32_t Value; // w0

  if ( (byte_4B472BD & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15452/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, method);
    byte_4B472BD = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15452/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  if ( (byte_4B472C2 & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_1BDB878(&Method_System_Array_IndexOf_int___, x);
    byte_4B472C2 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_1BDBAD4(this, x);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___) >> 31;
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
    sub_1BDBAD4(this, x);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
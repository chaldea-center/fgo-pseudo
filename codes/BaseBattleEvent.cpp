void BaseBattleEvent___ctor(BaseBattleEvent_o *this, const MethodInfo *method)
{
  this->fields.battleEndReduceBuffTurnFlag = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BaseBattleEvent__CheckBuffCommonProgressTurn(
        BaseBattleEvent_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  return 1;
}


System_Int64_array *BaseBattleEvent__GetForceDeadSvtIdArray(BaseBattleEvent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A407 & 1) == 0 )
  {
    sub_1C32C20(&long___TypeInfo);
    byte_4C3A407 = 1;
  }
  return (System_Int64_array *)sub_1C32CC8(long___TypeInfo, 0);
}


int32_t BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  int32_t type; // w19

  if ( (byte_4C3A405 & 1) == 0 )
  {
    sub_1C32C20(&BuffList_TypeInfo);
    byte_4C3A405 = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_11:
    sub_1C32E7C(IsBattleEndReduceBuffTurn);
  }
  if ( !buffEnt )
    goto LABEL_11;
  if ( !BuffEntity__IsBattleEndNotReduceTurn(buffEnt, 0) )
    return 0;
LABEL_8:
  type = buffEnt->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__GetProgressTurnCond(type, 0);
}


int32_t BaseBattleEvent__GetResultBgmId(BaseBattleEvent_o *this, int32_t curBgmId, const MethodInfo *method)
{
  return curBgmId;
}


void BaseBattleEvent__GetSaveData(BaseBattleEvent_o *this, BattleData_SaveData_o *save, const MethodInfo *method)
{
  ;
}


BaseBattleServantEvent_o *BaseBattleEvent__GetServantEvent(BaseBattleEvent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C3A404 & 1) == 0 )
  {
    sub_1C32C20(&BaseBattleServantEvent_TypeInfo);
    byte_4C3A404 = 1;
  }
  v2 = (Il2CppObject *)sub_1C32E6C(BaseBattleServantEvent_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BaseBattleServantEvent_o *)v2;
}


System_Collections_Generic_List_int__o *BaseBattleEvent__GetWarBoardSquareIndividualityList(
        BaseBattleEvent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BaseBattleEvent__GoNextScene(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 0;
}


void BaseBattleEvent__Init(BaseBattleEvent_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
}


void BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8
  struct BattleAttackManager_o *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( !data || (logic = data->fields.logic) == 0 )
    sub_1C32E7C(this);
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0);
  data->fields.battleAtkManager = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&data->fields.battleAtkManager, (int32_t)v6, v7, v8);
}


bool BaseBattleEvent__InitBGData(BaseBattleEvent_o *this, int32_t *bgNo, int32_t *bgType, const MethodInfo *method)
{
  return 0;
}


void BaseBattleEvent__InitBattleStartTurn(BaseBattleEvent_o *this, bool isPlayer, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__InitPlayerMasterInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__InitServantDataPrevAdd(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__InitStageData(BaseBattleEvent_o *this, StageEntity_o *stage, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__InitStartResult(
        BaseBattleEvent_o *this,
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__InitWave(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


bool BaseBattleEvent__IsActionPassiveSkillOnBattle(
        BaseBattleEvent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  return 1;
}


bool BaseBattleEvent__IsCommandAttackable(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 1;
}


bool BaseBattleEvent__IsLogicEscape(BaseBattleEvent_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  return 0;
}


bool BaseBattleEvent__IsPossibleAddBuffParam(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C32E7C(this);
  return BattleServantData__isAlive(svtData, 0, 0);
}


bool BaseBattleEvent__IsRemainBattleEndWave(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 0;
}


bool BaseBattleEvent__IsTakeOverNextBattleBuff(
        BaseBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        BuffEntity_o *buffEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  return 1;
}


bool BaseBattleEvent__IsUseDefeatPointReady(
        BaseBattleEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return 0;
}


BaseBattleEvent_o *BaseBattleEvent__MakeBattleEvent(BattleData_o *data, const MethodInfo *method)
{
  BattleData_o *v2; // x19
  struct QuestEntity_o *quest_ent; // x21
  __int64 v4; // x20
  const MethodInfo *v5; // x1

  v2 = data;
  if ( (byte_4C3A402 & 1) == 0 )
  {
    sub_1C32C20(&BaseBattleEvent_TypeInfo);
    data = (BattleData_o *)sub_1C32C20(&WarBoardBattleEvent_TypeInfo);
    byte_4C3A402 = 1;
  }
  if ( !v2
    || (quest_ent = v2->fields.quest_ent,
        v4 = sub_1C32E6C(BaseBattleEvent_TypeInfo),
        *(_DWORD *)(v4 + 24) = -1,
        System_Object___ctor((Il2CppObject *)v4, 0),
        !quest_ent)
    || quest_ent->fields.type == 7
    && (v4 = sub_1C32E6C(WarBoardBattleEvent_TypeInfo), WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v4, v5), !v4) )
  {
    sub_1C32E7C(data);
  }
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v4 + 392LL))(
    v4,
    v2,
    *(_QWORD *)(*(_QWORD *)v4 + 400LL));
  return (BaseBattleEvent_o *)v4;
}


int32_t BaseBattleEvent__MakeTurnCondStateByServant(
        BaseBattleEvent_o *this,
        int32_t selfUniqueId,
        const MethodInfo *method)
{
  return 0;
}


void BaseBattleEvent__PrevEndLoadNStage(BaseBattleEvent_o *this, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__ProcOnActAiFixed(
        BaseBattleEvent_o *this,
        AiState_o *aiState,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__ProgressBuffTurn(
        BaseBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C32E7C(this);
  if ( BattleBuffData_BuffData__ProgressBuffTurn(buff, 0) )
    BattleBuffData_BuffData__TryExtendLife(buff, isEndEnemyTurn, 0);
}


void BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v7; // x19
  BattleData_o *Data_k__BackingField; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleData_o *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Action_object__o *v19; // x21

  if ( (byte_4C3A406 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleServantData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__);
    sub_1C32C20(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__);
    sub_1C32C20(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
    byte_4C3A406 = 1;
  }
  v7 = sub_1C32E6C(BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = execUniqueIds;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)execUniqueIds, v11, v12);
  *(_BYTE *)(v7 + 32) = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0),
        (v13 = this->fields._Data_k__BackingField) == 0) )
  {
LABEL_7:
    sub_1C32E7C(Data_k__BackingField);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v13, 1, 0);
  v16 = System_Linq_Enumerable__Concat_object_(
          v14,
          SubServantArray,
          (const MethodInfo_30F9DF8 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    0);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v16,
                                                         (System_Func_TSource__bool__o *)v17,
                                                         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v19 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleServantData__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v18,
    (System_Action_T__o *)v19,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleServantData___);
}


bool BaseBattleEvent__SendBattleResult(
        BaseBattleEvent_o *this,
        BattleResultRequest_Argument_o *arg,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  return 0;
}


void BaseBattleEvent__SetDefaultPassiveBuffShowState(
        BaseBattleEvent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__SetSaveData(BaseBattleEvent_o *this, BattleData_SaveData_o *save, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__SetServantDataAfterPassiveAdded(BaseBattleEvent_o *this, bool isPlayer, const MethodInfo *method)
{
  ;
}


void BaseBattleEvent__SetServantDataBeforePassiveAdded(
        BaseBattleEvent_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  ;
}


BattleEntity_o *BaseBattleEvent__get_BattleEnt(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C32E7C(this);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0 )
    sub_1C32E7C(this);
  return battle_ent->fields.battleInfo;
}


BattleData_o *BaseBattleEvent__get_Data(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool BaseBattleEvent__get_IsBattleEndReduceBuffTurn(BaseBattleEvent_o *this, const MethodInfo *method)
{
  int32_t battleEndReduceBuffTurnFlag; // w8
  int32_t Value; // w0

  if ( (byte_4C3A403 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15466/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/);
    byte_4C3A403 = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( battleEndReduceBuffTurnFlag < 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15466/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0);
    battleEndReduceBuffTurnFlag = Value & ~(Value >> 31);
    this->fields.battleEndReduceBuffTurnFlag = battleEndReduceBuffTurnFlag;
  }
  return battleEndReduceBuffTurnFlag > 0;
}


bool BaseBattleEvent__get_IsPrecedingPlayer(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return 1;
}


void BaseBattleEvent__set_Data(BaseBattleEvent_o *this, BattleData_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BaseBattleEvent___c__DisplayClass44_0___ctor(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BaseBattleEvent___c__DisplayClass44_0___ProgressNoExecJoinServantsBuff_b__0(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BaseBattleEvent___c__DisplayClass44_0_o *v4; // x20
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 v7; // w0

  v4 = this;
  if ( (byte_4C3A408 & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_1C32C20(&Method_System_Array_IndexOf_int___);
    byte_4C3A408 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0 || !x )
    sub_1C32E7C(this);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___) >> 31;
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}


void BaseBattleEvent___c__DisplayClass44_0___ProgressNoExecJoinServantsBuff_b__1(
        BaseBattleEvent___c__DisplayClass44_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x9
  BattleBuffData_o *buffData; // x8

  if ( !x
    || (_4__this = this->fields.__4__this) == 0
    || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0
    || (buffData = x->fields.buffData) == 0 )
  {
    sub_1C32E7C(this);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0,
    0);
  BattleServantData__FixHpWhenHpBaseBuffReleased(x, 0);
  BattleServantData__ResetBaseHpBuffActivedTimeHealValue(x, 0);
}
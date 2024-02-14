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
  if ( (byte_421163F & 1) == 0 )
  {
    sub_B0D8A4(&long___TypeInfo, method);
    byte_421163F = 1;
  }
  return (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  int32_t type; // w19

  if ( (byte_421163D & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, buffEnt);
    byte_421163D = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_12:
    sub_B0D97C(IsBattleEndReduceBuffTurn);
  }
  if ( !buffEnt )
    goto LABEL_12;
  if ( !BuffEntity__IsBattleEndNotReduceTurn(buffEnt, 0LL) )
    return 0;
LABEL_8:
  type = buffEnt->fields.type;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_421163C & 1) == 0 )
  {
    sub_B0D8A4(&BaseBattleServantEvent_TypeInfo, method);
    byte_421163C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BaseBattleServantEvent_TypeInfo, method, v2);
  System_Object___ctor(v3, 0LL);
  return (BaseBattleServantEvent_o *)v3;
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
  this->fields._Data_k__BackingField = data;
  sub_B0D840(&this->fields, data);
}


void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8
  struct BattleAttackManager_o *v6; // x1

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_B0D97C(this);
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  data->fields.battleAtkManager = v6;
  sub_B0D840(&data->fields.battleAtkManager, v6);
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
    sub_B0D97C(this);
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
  BattleData_o *v3; // x19
  __int64 v4; // x1
  struct QuestEntity_o *quest_ent; // x21
  __int64 v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2

  v3 = data;
  if ( (byte_421163A & 1) == 0 )
  {
    sub_B0D8A4(&BaseBattleEvent_TypeInfo, method);
    data = (BattleData_o *)sub_B0D8A4(&WarBoardBattleEvent_TypeInfo, v4);
    byte_421163A = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  quest_ent = v3->fields.quest_ent;
  v6 = sub_B0D974(BaseBattleEvent_TypeInfo, method, v2);
  *(_DWORD *)(v6 + 24) = -1;
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !quest_ent )
    goto LABEL_9;
  if ( quest_ent->fields.type == 7 )
  {
    v6 = sub_B0D974(WarBoardBattleEvent_TypeInfo, v7, v8);
    WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v6, 0LL);
  }
  if ( !v6 )
LABEL_9:
    sub_B0D97C(data);
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v6 + 392LL))(
    v6,
    v3,
    *(_QWORD *)(*(_QWORD *)v6 + 400LL));
  return (BaseBattleEvent_o *)v6;
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
    sub_B0D97C(this);
  BattleBuffData__ProgressBuffTurn(buffData, buff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x1
  __int64 v15; // x1
  BaseBattleEvent___c__DisplayClass44_0_o *v16; // x19
  BattleData_o *Data_k__BackingField; // x0
  BattleData_o *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_T__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x21

  if ( (byte_421163E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleServantData___ctor__, execUniqueIds);
    sub_B0D8A4(&System_Action_BattleServantData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleServantData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v13);
    sub_B0D8A4(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v14);
    sub_B0D8A4(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v15);
    byte_421163E = 1;
  }
  v16 = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B0D974(
                                                     BaseBattleEvent___c__DisplayClass44_0_TypeInfo,
                                                     execUniqueIds,
                                                     isEndEnemyTurn);
  BaseBattleEvent___c__DisplayClass44_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_7;
  v16->fields.__4__this = this;
  sub_B0D840(&v16->fields, this);
  v16->fields.execUniqueIds = execUniqueIds;
  sub_B0D840(&v16->fields.execUniqueIds, execUniqueIds);
  v16->fields.isEndEnemyTurn = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v18 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(Data_k__BackingField);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v18, 1, 0LL);
  v21 = System_Linq_Enumerable__Concat_WarBoardTaskBase_(
          v19,
          SubServantArray,
          (const MethodInfo_1B44DD8 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v16,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v21,
                                                         (System_Func_TSource__bool__o *)v24,
                                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleServantData__TypeInfo,
                                                                               v26,
                                                                               v27);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v28,
    (Il2CppObject *)v16,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v25,
    (System_Action_T__o *)v28,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_B0D97C(this);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_B0D97C(this);
  return battle_ent->fields.battleInfo;
}


BattleData_o *__fastcall BaseBattleEvent__get_Data(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BaseBattleEvent__get_IsBattleEndReduceBuffTurn(BaseBattleEvent_o *this, const MethodInfo *method)
{
  int32_t battleEndReduceBuffTurnFlag; // w0
  int32_t Value; // w0

  if ( (byte_421163B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15375/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, method);
    byte_421163B = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15375/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
    battleEndReduceBuffTurnFlag = UnityEngine_Mathf__Max_40819140(0, Value, 0LL);
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
  this->fields._Data_k__BackingField = value;
  sub_B0D840(&this->fields, value);
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
  if ( (byte_4213998 & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B0D8A4(&Method_System_Array_IndexOf_int___, x);
    byte_4213998 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_B0D97C(this);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >> 31;
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
    sub_B0D97C(this);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
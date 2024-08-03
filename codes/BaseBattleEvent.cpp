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
  if ( (byte_49FE91D & 1) == 0 )
  {
    sub_1B640C8(&long___TypeInfo, method);
    byte_49FE91D = 1;
  }
  return (System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  int32_t type; // w19

  if ( (byte_49FE91B & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, buffEnt);
    byte_49FE91B = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_11:
    sub_1B64324(IsBattleEndReduceBuffTurn);
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
  __int64 v2; // x2
  BaseBattleServantEvent_o *v3; // x19

  if ( (byte_49FE91A & 1) == 0 )
  {
    sub_1B640C8(&BaseBattleServantEvent_TypeInfo, method);
    byte_49FE91A = 1;
  }
  v3 = (BaseBattleServantEvent_o *)sub_1B64314(BaseBattleServantEvent_TypeInfo, method, v2);
  BaseBattleServantEvent___ctor(v3, 0LL);
  return v3;
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

  this->fields._Data_k__BackingField = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
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
  int32_t v8; // w3

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_1B64324(this);
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  data->fields.battleAtkManager = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&data->fields.battleAtkManager, (int32_t)v6, v7, v8);
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
    sub_1B64324(this);
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
  const MethodInfo *v9; // x1

  v3 = data;
  if ( (byte_49FE918 & 1) == 0 )
  {
    sub_1B640C8(&BaseBattleEvent_TypeInfo, method);
    data = (BattleData_o *)sub_1B640C8(&WarBoardBattleEvent_TypeInfo, v4);
    byte_49FE918 = 1;
  }
  if ( !v3
    || (quest_ent = v3->fields.quest_ent,
        v6 = sub_1B64314(BaseBattleEvent_TypeInfo, method, v2),
        *(_DWORD *)(v6 + 24) = -1,
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        !quest_ent)
    || quest_ent->fields.type == 7
    && (v6 = sub_1B64314(WarBoardBattleEvent_TypeInfo, v7, v8),
        WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v6, v9),
        !v6) )
  {
    sub_1B64324(data);
  }
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
    goto LABEL_9;
  this = (BaseBattleEvent_o *)BattleBuffData__ProgressBuffTurn(buffData, buff, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !buff )
LABEL_9:
    sub_1B64324(this);
  if ( !isEndEnemyTurn && !buff->fields.turn && buff->fields.isDelayRemoveIfExpiredOnPlayerTurn )
    buff->fields._IsExtendingLife_k__BackingField = 1;
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
  __int64 v14; // x19
  BattleData_o *Data_k__BackingField; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  BattleData_o *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_object__o *v30; // x21

  if ( (byte_49FE91C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantData__TypeInfo, execUniqueIds);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleServantData___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v11);
    sub_1B640C8(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v12);
    sub_1B640C8(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v13);
    byte_49FE91C = 1;
  }
  v14 = sub_1B64314(BaseBattleEvent___c__DisplayClass44_0_TypeInfo, execUniqueIds, isEndEnemyTurn);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = execUniqueIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)execUniqueIds, v18, v19);
  *(_BYTE *)(v14 + 32) = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v20 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_1B64324(Data_k__BackingField);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v20, 1, 0LL);
  v23 = System_Linq_Enumerable__Concat_object_(
          v21,
          SubServantArray,
          (const MethodInfo_2E52788 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    0LL);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v23,
                                                         (System_Func_TSource__bool__o *)v26,
                                                         (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v30 = (System_Action_object__o *)sub_1B64314(System_Action_BattleServantData__TypeInfo, v28, v29);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v14,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v27,
    (System_Action_T__o *)v30,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_1B64324(this);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_1B64324(this);
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

  if ( (byte_49FE919 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15412/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, method);
    byte_49FE919 = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15412/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
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

  this->fields._Data_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  if ( (byte_49FE91E & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_1B640C8(&Method_System_Array_IndexOf_int___, x);
    byte_49FE91E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_1B64324(this);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) >> 31;
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
    sub_1B64324(this);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
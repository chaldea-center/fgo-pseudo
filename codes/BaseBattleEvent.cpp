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
  if ( (byte_42ACF09 & 1) == 0 )
  {
    sub_B52984(&long___TypeInfo);
    byte_42ACF09 = 1;
  }
  return (System_Int64_array *)sub_B5299C(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v6; // x1
  int32_t type; // w19

  if ( (byte_42ACF07 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    byte_42ACF07 = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_12:
    sub_B52A5C(IsBattleEndReduceBuffTurn, v6);
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
  Il2CppObject *v2; // x19

  if ( (byte_42ACF06 & 1) == 0 )
  {
    sub_B52984(&BaseBattleServantEvent_TypeInfo);
    byte_42ACF06 = 1;
  }
  v2 = (Il2CppObject *)sub_B52A54(BaseBattleServantEvent_TypeInfo);
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
  this->fields._Data_k__BackingField = data;
  sub_B52920(&this->fields);
}


void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_B52A5C(this, isPrecedingPlayer);
  data->fields.battleAtkManager = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  sub_B52920(&data->fields.battleAtkManager);
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
    sub_B52A5C(this, 0LL);
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
  struct QuestEntity_o *quest_ent; // x21
  __int64 v4; // x20

  v2 = data;
  if ( (byte_42ACF04 & 1) == 0 )
  {
    sub_B52984(&BaseBattleEvent_TypeInfo);
    data = (BattleData_o *)sub_B52984(&WarBoardBattleEvent_TypeInfo);
    byte_42ACF04 = 1;
  }
  if ( !v2 )
    goto LABEL_9;
  quest_ent = v2->fields.quest_ent;
  v4 = sub_B52A54(BaseBattleEvent_TypeInfo);
  *(_DWORD *)(v4 + 24) = -1;
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !quest_ent )
    goto LABEL_9;
  if ( quest_ent->fields.type == 7 )
  {
    v4 = sub_B52A54(WarBoardBattleEvent_TypeInfo);
    WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v4, 0LL);
  }
  if ( !v4 )
LABEL_9:
    sub_B52A5C(data, method);
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v4 + 392LL))(
    v4,
    v2,
    *(_QWORD *)(*(_QWORD *)v4 + 400LL));
  return (BaseBattleEvent_o *)v4;
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
    sub_B52A5C(this, buffData);
  }
}


void __fastcall BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  BaseBattleEvent___c__DisplayClass44_0_o *v7; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v9; // x1
  BattleData_o *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_T__o *v15; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x21

  if ( (byte_42ACF08 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleServantData___ctor__);
    sub_B52984(&System_Action_BattleServantData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Concat_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__);
    sub_B52984(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__);
    sub_B52984(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
    byte_42ACF08 = 1;
  }
  v7 = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B52A54(BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
  BaseBattleEvent___c__DisplayClass44_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.execUniqueIds = execUniqueIds;
  sub_B52920(&v7->fields.execUniqueIds);
  v7->fields.isEndEnemyTurn = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v10 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_B52A5C(Data_k__BackingField, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v10, 1, 0LL);
  v13 = System_Linq_Enumerable__Concat_WarBoardTaskBase_(
          v11,
          SubServantArray,
          (const MethodInfo_1B5BAA8 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v13,
                                                         (System_Func_TSource__bool__o *)v14,
                                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleServantData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v15,
    (System_Action_T__o *)v16,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_B52A5C(this, method);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_B52A5C(this, method);
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

  if ( (byte_42ACF05 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15428/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/);
    byte_42ACF05 = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15428/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
    battleEndReduceBuffTurnFlag = UnityEngine_Mathf__Max_41525284(0, Value, 0LL);
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
  sub_B52920(&this->fields);
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
  if ( (byte_42AEC36 & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B52984(&Method_System_Array_IndexOf_int___);
    byte_42AEC36 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_B52A5C(this, x);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v4->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) >> 31;
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
    sub_B52A5C(this, x);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
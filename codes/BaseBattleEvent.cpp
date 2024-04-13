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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E662E & 1) == 0 )
  {
    sub_B5D5C4(&long___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E662E = 1;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 IsBattleEndReduceBuffTurn; // x0
  __int64 v7; // x1
  int32_t type; // w19

  if ( (byte_42E662C & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)buffEnt, (_DWORD)method, v3);
    byte_42E662C = 1;
  }
  IsBattleEndReduceBuffTurn = BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt);
  if ( !IsBattleEndReduceBuffTurn )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_12:
    sub_B5D69C(IsBattleEndReduceBuffTurn, v7);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_42E662B & 1) == 0 )
  {
    sub_B5D5C4(&BaseBattleServantEvent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E662B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BaseBattleServantEvent_TypeInfo);
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
  this->fields._Data_k__BackingField = data;
  sub_B5D560(&this->fields);
}


void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_B5D69C(this, isPrecedingPlayer);
  data->fields.battleAtkManager = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  sub_B5D560(&data->fields.battleAtkManager);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct QuestEntity_o *quest_ent; // x21
  __int64 v9; // x20

  v4 = data;
  if ( (byte_42E6629 & 1) == 0 )
  {
    sub_B5D5C4(&BaseBattleEvent_TypeInfo, (_DWORD)method, v2, v3);
    data = (BattleData_o *)sub_B5D5C4(&WarBoardBattleEvent_TypeInfo, v5, v6, v7);
    byte_42E6629 = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  quest_ent = v4->fields.quest_ent;
  v9 = sub_B5D694(BaseBattleEvent_TypeInfo);
  *(_DWORD *)(v9 + 24) = -1;
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !quest_ent )
    goto LABEL_9;
  if ( quest_ent->fields.type == 7 )
  {
    v9 = sub_B5D694(WarBoardBattleEvent_TypeInfo);
    WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v9, 0LL);
  }
  if ( !v9 )
LABEL_9:
    sub_B5D69C(data, method);
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v9 + 392LL))(
    v9,
    v4,
    *(_QWORD *)(*(_QWORD *)v9 + 400LL));
  return (BaseBattleEvent_o *)v9;
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
    sub_B5D69C(this, buffData);
  }
}


void __fastcall BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  BaseBattleEvent___c__DisplayClass44_0_o *v34; // x19
  BattleData_o *Data_k__BackingField; // x0
  __int64 v36; // x1
  BattleData_o *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SubServantArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x21
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x21

  if ( (byte_42E662D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleServantData___ctor__, (_DWORD)execUniqueIds, isEndEnemyTurn, method);
    sub_B5D5C4(&System_Action_BattleServantData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleServantData___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v25, v26, v27);
    sub_B5D5C4(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v28, v29, v30);
    sub_B5D5C4(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v31, v32, v33);
    byte_42E662D = 1;
  }
  v34 = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B5D694(BaseBattleEvent___c__DisplayClass44_0_TypeInfo);
  BaseBattleEvent___c__DisplayClass44_0___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_7;
  v34->fields.__4__this = this;
  sub_B5D560(&v34->fields);
  v34->fields.execUniqueIds = execUniqueIds;
  sub_B5D560(&v34->fields.execUniqueIds);
  v34->fields.isEndEnemyTurn = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (Data_k__BackingField = (BattleData_o *)BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v37 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(Data_k__BackingField, v36);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField;
  SubServantArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v37, 1, 0LL);
  v40 = System_Linq_Enumerable__Concat_WarBoardTaskBase_(
          v38,
          SubServantArray,
          (const MethodInfo_1CA4980 *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v34,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v40,
                                                         (System_Func_TSource__bool__o *)v41,
                                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v43,
    (Il2CppObject *)v34,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v42,
    (System_Action_T__o *)v43,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_B5D69C(this, method);
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_B5D69C(this, method);
  return battle_ent->fields.battleInfo;
}


BattleData_o *__fastcall BaseBattleEvent__get_Data(BaseBattleEvent_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BaseBattleEvent__get_IsBattleEndReduceBuffTurn(BaseBattleEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t battleEndReduceBuffTurnFlag; // w0
  int32_t Value; // w0

  if ( (byte_42E662A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15487/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, (_DWORD)method, v2, v3);
    byte_42E662A = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15487/*"WAR_BOARD_BATTLE_END_REDUCE_BUFF_TURN_FLAG"*/, 0LL);
    battleEndReduceBuffTurnFlag = UnityEngine_Mathf__Max_41629432(0, Value, 0LL);
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
  sub_B5D560(&this->fields);
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
  __int64 v3; // x3
  BaseBattleEvent___c__DisplayClass44_0_o *v5; // x20
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 v8; // w0

  v5 = this;
  if ( (byte_42E754E & 1) == 0 )
  {
    this = (BaseBattleEvent___c__DisplayClass44_0_o *)sub_B5D5C4(
                                                        &Method_System_Array_IndexOf_int___,
                                                        (_DWORD)x,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E754E = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_B5D69C(this, x);
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           v5->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >> 31;
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  return v8;
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
    sub_B5D69C(this, x);
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
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

  if ( (byte_40F6EF2 & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, method);
    byte_40F6EF2 = 1;
  }
  return (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v2);
}


int32_t __fastcall BaseBattleEvent__GetProgressBuffTurnCond(
        BaseBattleEvent_o *this,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_40F6EF0 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, buffEnt);
    byte_40F6EF0 = 1;
  }
  if ( !BaseBattleEvent__get_IsBattleEndReduceBuffTurn(this, (const MethodInfo *)buffEnt) )
  {
    if ( buffEnt )
      goto LABEL_8;
LABEL_12:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F6EEF & 1) == 0 )
  {
    sub_B16FFC(&BaseBattleServantEvent_TypeInfo, method);
    byte_40F6EEF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BaseBattleServantEvent_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  return (BaseBattleServantEvent_o *)v5;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Data_k__BackingField = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BaseBattleEvent__InitAtkManager(
        BaseBattleEvent_o *this,
        bool isPrecedingPlayer,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8
  struct BattleAttackManager_o *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !data || (logic = data->fields.logic) == 0LL )
    sub_B170D4();
  v6 = BattleAttackManager__Make(isPrecedingPlayer, logic->fields.logiclist, 0LL);
  data->fields.battleAtkManager = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&data->fields.battleAtkManager,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  struct QuestEntity_o *quest_ent; // x21
  __int64 v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4

  if ( (byte_40F6EED & 1) == 0 )
  {
    sub_B16FFC(&BaseBattleEvent_TypeInfo, method);
    sub_B16FFC(&WarBoardBattleEvent_TypeInfo, v6);
    byte_40F6EED = 1;
  }
  if ( !data )
    goto LABEL_9;
  quest_ent = data->fields.quest_ent;
  v8 = sub_B170CC(BaseBattleEvent_TypeInfo, method, v2, v3, v4);
  *(_DWORD *)(v8 + 24) = -1;
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !quest_ent )
    goto LABEL_9;
  if ( quest_ent->fields.type == 7 )
  {
    v8 = sub_B170CC(WarBoardBattleEvent_TypeInfo, v9, v10, v11, v12);
    WarBoardBattleEvent___ctor((WarBoardBattleEvent_o *)v8, 0LL);
  }
  if ( !v8 )
LABEL_9:
    sub_B170D4();
  (*(void (__fastcall **)(__int64, BattleData_o *, _QWORD))(*(_QWORD *)v8 + 392LL))(
    v8,
    data,
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
    sub_B170D4();
  BattleBuffData__ProgressBuffTurn(buffData, buff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BaseBattleEvent__ProgressNoExecJoinServantsBuff(
        BaseBattleEvent_o *this,
        System_Int32_array *execUniqueIds,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleData_o *Data_k__BackingField; // x0
  BattleServantData_array *SubServantArray; // x0
  BattleData_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x21
  System_Collections_Generic_IEnumerable_T__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v46; // x21

  if ( (byte_40F6EF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantData___ctor__, execUniqueIds);
    sub_B16FFC(&System_Action_BattleServantData__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleServantData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_BattleServantData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B16FFC(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__, v14);
    sub_B16FFC(&Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__, v15);
    sub_B16FFC(&BaseBattleEvent___c__DisplayClass44_0_TypeInfo, v16);
    byte_40F6EF1 = 1;
  }
  v17 = sub_B170CC(BaseBattleEvent___c__DisplayClass44_0_TypeInfo, execUniqueIds, isEndEnemyTurn, method, v4);
  BaseBattleEvent___c__DisplayClass44_0___ctor((BaseBattleEvent___c__DisplayClass44_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_7;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 24) = execUniqueIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 24),
    (System_Int32_array **)execUniqueIds,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_BYTE *)(v17 + 32) = isEndEnemyTurn;
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (SubServantArray = BattleData__GetSubServantArray(Data_k__BackingField, 0, 0LL),
        (v32 = this->fields._Data_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)SubServantArray;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetSubServantArray(v32, 1, 0LL);
  v35 = System_Linq_Enumerable__Concat_WarBoardTaskBase_(
          v33,
          v34,
          (const MethodInfo_18D172C *)Method_System_Linq_Enumerable_Concat_BattleServantData___);
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v36,
                                                                             v37,
                                                                             v38,
                                                                             v39);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)v17,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v35,
                                                         (System_Func_TSource__bool__o *)v40,
                                                         (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleServantData__TypeInfo,
                                                                               v42,
                                                                               v43,
                                                                               v44,
                                                                               v45);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v46,
    (Il2CppObject *)v17,
    Method_BaseBattleEvent___c__DisplayClass44_0__ProgressNoExecJoinServantsBuff_b__1__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleServantData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v41,
    (System_Action_T__o *)v46,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleServantData___);
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
    sub_B170D4();
  return Data_k__BackingField->fields.battle_ent;
}


BattleInfoData_o *__fastcall BaseBattleEvent__get_BattleInfo(BaseBattleEvent_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField || (battle_ent = Data_k__BackingField->fields.battle_ent) == 0LL )
    sub_B170D4();
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

  if ( (byte_40F6EEE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15268, method);
    byte_40F6EEE = 1;
  }
  battleEndReduceBuffTurnFlag = this->fields.battleEndReduceBuffTurnFlag;
  if ( (battleEndReduceBuffTurnFlag & 0x80000000) != 0 )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_15268, 0LL);
    battleEndReduceBuffTurnFlag = UnityEngine_Mathf__Max_40727628(0, Value, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct BaseBattleEvent_o *_4__this; // x8
  struct BattleData_o *Data_k__BackingField; // x8
  _BOOL4 v7; // w0

  if ( (byte_40F9158 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, x);
    byte_40F9158 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Data_k__BackingField = _4__this->fields._Data_k__BackingField) == 0LL || !x )
    sub_B170D4();
  if ( BattleServantData__IsMoveToSubMember(
         x,
         Data_k__BackingField->fields.wavecount,
         Data_k__BackingField->fields.turnCount,
         0LL) )
  {
    return (unsigned int)System_Array__IndexOf_int_(
                           this->fields.execUniqueIds,
                           x->fields.uniqueId,
                           (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >> 31;
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
    sub_B170D4();
  }
  BattleBuffData__turnProgressing(
    buffData,
    Data_k__BackingField->fields.logic,
    this->fields.isEndEnemyTurn,
    x->fields.uniqueId,
    0LL);
}
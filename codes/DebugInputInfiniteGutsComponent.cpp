void DebugInputInfiniteGutsComponent___ctor(DebugInputInfiniteGutsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputInfiniteGutsComponent__AddBuffGuts(
        DebugInputInfiniteGutsComponent_o *this,
        BattleServantData_o *svtData,
        BuffEntity_o *paramBuffEntity,
        const MethodInfo *method)
{
  __int64 v6; // x20
  struct UIToggle_o *addUnSubStateToggleOption; // x0
  __int64 v8; // x1
  Il2CppClass *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int m_CancellationTokenSource; // w8

  if ( (byte_5939CAF & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_BuffData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_5939CAF = 1;
  }
  v6 = sub_21FFEBC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v6, 0);
  if ( !paramBuffEntity )
    goto LABEL_14;
  if ( !v6 )
    goto LABEL_14;
  *(_DWORD *)(v6 + 16) = paramBuffEntity->fields.id;
  v9 = int___TypeInfo;
  *(_DWORD *)(v6 + 28) = 100;
  *(_QWORD *)(v6 + 20) = -1;
  addUnSubStateToggleOption = (struct UIToggle_o *)sub_21FFD10(v9, 2);
  if ( !addUnSubStateToggleOption )
    goto LABEL_14;
  m_CancellationTokenSource = (int)addUnSubStateToggleOption->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (addUnSubStateToggleOption->fields.group = 1000, m_CancellationTokenSource == 1) )
    sub_21FFED4(addUnSubStateToggleOption);
  *(&addUnSubStateToggleOption->fields.group + 1) = 1;
  *(_QWORD *)(v6 + 40) = addUnSubStateToggleOption;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v6 + 40),
    (int32_t)addUnSubStateToggleOption,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_DWORD *)(v6 + 52) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v6, 1, 0);
  addUnSubStateToggleOption = this->fields.addUnSubStateToggleOption;
  if ( !addUnSubStateToggleOption )
LABEL_14:
    sub_21FFECC(addUnSubStateToggleOption, v8);
  if ( UIToggle__get_value(addUnSubStateToggleOption, 0) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v6, 0x80000, 0);
  if ( BuffEntity__getAppearanceId(paramBuffEntity, 0) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v6, 256, 0);
}


void DebugInputInfiniteGutsComponent__Cancel(DebugInputInfiniteGutsComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_21FFECC(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


bool DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts(
        DebugInputInfiniteGutsComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleBuffData_o *buffData; // x0
  BuffList_TYPE_array *v6; // x1
  System_Object_array *BuffList; // x20
  System_Func_object__bool__o *v8; // x21

  if ( (byte_5939CAE & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&BuffList_TYPE___TypeInfo);
    byte_5939CAE = 1;
  }
  buffData = (struct BattleBuffData_o *)sub_21FFD10(BuffList_TYPE___TypeInfo, 1);
  if ( !buffData )
    goto LABEL_8;
  v6 = (BuffList_TYPE_array *)buffData;
  if ( !buffData->fields.resumptionHpFromLossMaxHp )
    sub_21FFED4(buffData);
  LODWORD(buffData->fields.passiveList) = 37;
  if ( !svtData || (buffData = svtData->fields.buffData) == 0 )
LABEL_8:
    sub_21FFECC(buffData, v6);
  BuffList = (System_Object_array *)BattleBuffData__GetBuffList(buffData, v6, 0, 1, 0);
  v8 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__,
    0);
  return BasicHelper__Find_object_(
           BuffList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_37DD66C *)Method_BasicHelper_Find_BattleBuffData_BuffData___) != 0;
}


bool DebugInputInfiniteGutsComponent__MatchUnSubState(
        DebugInputInfiniteGutsComponent_o *this,
        BattleBuffData_BuffData_o *added,
        const MethodInfo *method)
{
  UIToggle_o *addUnSubStateToggleOption; // x0

  addUnSubStateToggleOption = this->fields.addUnSubStateToggleOption;
  if ( !addUnSubStateToggleOption )
    goto LABEL_7;
  addUnSubStateToggleOption = (UIToggle_o *)UIToggle__get_value(addUnSubStateToggleOption, 0);
  if ( ((unsigned __int8)addUnSubStateToggleOption & 1) != 0 )
  {
    if ( added )
      return BattleBuffData_BuffData__checkState(added, 0x80000, 0);
LABEL_7:
    sub_21FFECC(addUnSubStateToggleOption, added);
  }
  if ( !added )
    goto LABEL_7;
  return !BattleBuffData_BuffData__checkState(added, 0x80000, 0);
}


void DebugInputInfiniteGutsComponent__Open(
        DebugInputInfiniteGutsComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DebugInputInfiniteGutsComponent_o *v8; // x19
  DebugInputInfiniteGutsComponent_o **p_debugMenuTran; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !this->fields.targetPlayerToggleList )
    goto LABEL_7;
  v8 = this;
  if ( !this->fields.targetEnemyToggleList )
    goto LABEL_7;
  this->fields.data = inputData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (System_String_o *)inputDebugMenuTran,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputInfiniteGutsComponent_o **)&v8->fields.debugMenuTran;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.debugMenuTran,
    (int32_t)inputDebugMenuTran,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (this = *p_debugMenuTran) == 0)
    || (this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0 )
  {
LABEL_7:
    sub_21FFECC(this, inputData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DebugInputInfiniteGutsComponent__Submit(DebugInputInfiniteGutsComponent_o *this, const MethodInfo *method)
{
  ;
}


bool DebugInputInfiniteGutsComponent___CheckHaveInfiniteGuts_b__8_0(
        DebugInputInfiniteGutsComponent_o *this,
        BattleBuffData_BuffData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.turn == -1
      && n->fields.count == -1
      && n->fields.param == 100
      && !n->fields.paramAdd
      && !n->fields.paramMax
      && DebugInputInfiniteGutsComponent__MatchUnSubState(this, n, method);
}
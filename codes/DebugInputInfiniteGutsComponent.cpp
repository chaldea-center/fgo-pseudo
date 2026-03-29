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
  int32_t id; // w9
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int m_CancellationTokenSource; // w8

  if ( (byte_4D31F7A & 1) == 0 )
  {
    sub_1C93AD4(&BattleBuffData_BuffData_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31F7A = 1;
  }
  v6 = sub_1C93D20(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v6, 0);
  if ( !paramBuffEntity )
    goto LABEL_14;
  if ( !v6 )
    goto LABEL_14;
  id = paramBuffEntity->fields.id;
  *(_QWORD *)(v6 + 20) = -1;
  *(_DWORD *)(v6 + 16) = id;
  *(_DWORD *)(v6 + 28) = 100;
  addUnSubStateToggleOption = (struct UIToggle_o *)sub_1C93B7C(int___TypeInfo, 2);
  if ( !addUnSubStateToggleOption )
    goto LABEL_14;
  m_CancellationTokenSource = (int)addUnSubStateToggleOption->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (addUnSubStateToggleOption->fields.group = 1000, m_CancellationTokenSource == 1) )
    sub_1C93D34(addUnSubStateToggleOption);
  *(&addUnSubStateToggleOption->fields.group + 1) = 1;
  *(_QWORD *)(v6 + 40) = addUnSubStateToggleOption;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v6 + 40),
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
    sub_1C93D2C(addUnSubStateToggleOption, v8);
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
    sub_1C93D2C(debugMenuTran, method);
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

  if ( (byte_4D31F79 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_BattleBuffData_BuffData___);
    sub_1C93AD4(&Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__);
    sub_1C93AD4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C93AD4(&BuffList_TYPE___TypeInfo);
    byte_4D31F79 = 1;
  }
  buffData = (struct BattleBuffData_o *)sub_1C93B7C(BuffList_TYPE___TypeInfo, 1);
  if ( !buffData )
    goto LABEL_8;
  v6 = (BuffList_TYPE_array *)buffData;
  if ( !buffData->fields.resumptionHpFromLossMaxHp )
    sub_1C93D34(buffData);
  LODWORD(buffData->fields.passiveList) = 37;
  if ( !svtData || (buffData = svtData->fields.buffData) == 0 )
LABEL_8:
    sub_1C93D2C(buffData, v6);
  BuffList = (System_Object_array *)BattleBuffData__GetBuffList(buffData, v6, 0, 1, 0);
  v8 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__,
    0);
  return BasicHelper__Find_object_(
           BuffList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_318E744 *)Method_BasicHelper_Find_BattleBuffData_BuffData___) != 0;
}


bool DebugInputInfiniteGutsComponent__MatchUnSubState(
        DebugInputInfiniteGutsComponent_o *this,
        BattleBuffData_BuffData_o *added,
        const MethodInfo *method)
{
  UIToggle_o *addUnSubStateToggleOption; // x0

  addUnSubStateToggleOption = this->fields.addUnSubStateToggleOption;
  if ( !addUnSubStateToggleOption
    || (addUnSubStateToggleOption = (UIToggle_o *)UIToggle__get_value(addUnSubStateToggleOption, 0), !added) )
  {
    sub_1C93D2C(addUnSubStateToggleOption, added);
  }
  return ((unsigned __int8)addUnSubStateToggleOption ^ ~BattleBuffData_BuffData__checkState(added, 0x80000, 0)) & 1;
}


void DebugInputInfiniteGutsComponent__Open(
        DebugInputInfiniteGutsComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIToggle_array *targetPlayerToggleList; // x8
  int max_length; // w8
  DebugInputInfiniteGutsComponent_o *v11; // x19
  int v12; // w9
  struct UIToggle_array *targetEnemyToggleList; // x8
  int v14; // w8
  int v15; // w9
  DebugInputInfiniteGutsComponent_o **p_debugMenuTran; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
    goto LABEL_11;
  max_length = targetPlayerToggleList->max_length;
  v11 = this;
  v12 = -1;
  do
    ++v12;
  while ( v12 < max_length );
  targetEnemyToggleList = this->fields.targetEnemyToggleList;
  if ( !targetEnemyToggleList )
    goto LABEL_11;
  v14 = targetEnemyToggleList->max_length;
  v15 = -1;
  do
    ++v15;
  while ( v15 < v14 );
  this->fields.data = inputData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (int32_t)inputDebugMenuTran,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputInfiniteGutsComponent_o **)&v11->fields.debugMenuTran;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v11->fields.debugMenuTran,
    (int32_t)inputDebugMenuTran,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (this = *p_debugMenuTran) == 0)
    || (this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0 )
  {
LABEL_11:
    sub_1C93D2C(this, inputData);
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
    sub_1C93D2C(this, 0);
  return n->fields.turn == -1
      && n->fields.count == -1
      && n->fields.param == 100
      && !n->fields.paramAdd
      && !n->fields.paramMax
      && DebugInputInfiniteGutsComponent__MatchUnSubState(this, n, method);
}
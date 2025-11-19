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
  const MethodInfo *v11; // x3
  int m_CancellationTokenSource; // w8

  if ( (byte_4CB78C3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleBuffData_BuffData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB78C3 = 1;
  }
  v6 = sub_1C6BC54(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v6, 0);
  if ( !paramBuffEntity )
    goto LABEL_14;
  if ( !v6 )
    goto LABEL_14;
  id = paramBuffEntity->fields.id;
  *(_QWORD *)(v6 + 20) = -1;
  *(_DWORD *)(v6 + 16) = id;
  *(_DWORD *)(v6 + 28) = 100;
  addUnSubStateToggleOption = (struct UIToggle_o *)sub_1C6BAB0(int___TypeInfo, 2);
  if ( !addUnSubStateToggleOption )
    goto LABEL_14;
  m_CancellationTokenSource = (int)addUnSubStateToggleOption->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (addUnSubStateToggleOption->fields.group = 1000, m_CancellationTokenSource == 1) )
    sub_1C6BC68(addUnSubStateToggleOption);
  *(&addUnSubStateToggleOption->fields.group + 1) = 1;
  *(_QWORD *)(v6 + 40) = addUnSubStateToggleOption;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)addUnSubStateToggleOption, v10, v11);
  *(_DWORD *)(v6 + 52) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v6, 1, 0);
  addUnSubStateToggleOption = this->fields.addUnSubStateToggleOption;
  if ( !addUnSubStateToggleOption )
LABEL_14:
    sub_1C6BC60(addUnSubStateToggleOption, v8);
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
    sub_1C6BC60(debugMenuTran, method);
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

  if ( (byte_4CB78C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__);
    sub_1C6BA08(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C6BA08(&BuffList_TYPE___TypeInfo);
    byte_4CB78C2 = 1;
  }
  buffData = (struct BattleBuffData_o *)sub_1C6BAB0(BuffList_TYPE___TypeInfo, 1);
  if ( !buffData )
    goto LABEL_8;
  v6 = (BuffList_TYPE_array *)buffData;
  if ( !buffData->fields.resumptionHpFromLossMaxHp )
    sub_1C6BC68(buffData);
  LODWORD(buffData->fields.passiveList) = 37;
  if ( !svtData || (buffData = svtData->fields.buffData) == 0 )
LABEL_8:
    sub_1C6BC60(buffData, v6);
  BuffList = (System_Object_array *)BattleBuffData__GetBuffList(buffData, v6, 0, 1, 0);
  v8 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DebugInputInfiniteGutsComponent__CheckHaveInfiniteGuts_b__8_0__,
    0);
  return BasicHelper__Find_object_(
           BuffList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_3124FFC *)Method_BasicHelper_Find_BattleBuffData_BuffData___) != 0;
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
    sub_1C6BC60(addUnSubStateToggleOption, added);
  }
  return ((unsigned __int8)addUnSubStateToggleOption ^ ~BattleBuffData_BuffData__checkState(added, 0x80000, 0)) & 1;
}


void DebugInputInfiniteGutsComponent__Open(
        DebugInputInfiniteGutsComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  struct UIToggle_array *targetPlayerToggleList; // x8
  int max_length; // w8
  DebugInputInfiniteGutsComponent_o *v7; // x19
  int v8; // w9
  struct UIToggle_array *targetEnemyToggleList; // x8
  int v10; // w8
  int v11; // w9
  DebugInputInfiniteGutsComponent_o **p_debugMenuTran; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  targetPlayerToggleList = this->fields.targetPlayerToggleList;
  if ( !targetPlayerToggleList )
    goto LABEL_11;
  max_length = targetPlayerToggleList->max_length;
  v7 = this;
  v8 = -1;
  do
    ++v8;
  while ( v8 < max_length );
  targetEnemyToggleList = this->fields.targetEnemyToggleList;
  if ( !targetEnemyToggleList )
    goto LABEL_11;
  v10 = targetEnemyToggleList->max_length;
  v11 = -1;
  do
    ++v11;
  while ( v11 < v10 );
  this->fields.data = inputData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)inputData, (int32_t)inputDebugMenuTran, method);
  v7->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputInfiniteGutsComponent_o **)&v7->fields.debugMenuTran;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.debugMenuTran, (int32_t)inputDebugMenuTran, v13, v14);
  this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (this = *p_debugMenuTran) == 0)
    || (this = (DebugInputInfiniteGutsComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0 )
  {
LABEL_11:
    sub_1C6BC60(this, inputData);
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
    sub_1C6BC60(this, 0);
  return n->fields.turn == -1
      && n->fields.count == -1
      && n->fields.param == 100
      && !n->fields.paramAdd
      && !n->fields.paramMax
      && DebugInputInfiniteGutsComponent__MatchUnSubState(this, n, method);
}
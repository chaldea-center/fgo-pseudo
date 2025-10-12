void WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_C0CA20;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_C0C220;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, 0);
}


void WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v5; // x19
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C352C0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C352C0 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  CriticalStars = WarBoardPieceData__get_CriticalStars(pieceData, 0);
  criticalStarsLabel = (UnityEngine_Object_o *)this->fields.criticalStarsLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsLabel, 0, 0) )
  {
    v5 = this->fields.criticalStarsLabel;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&CriticalStars, 0);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)pieceData, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(pieceData);
  }
}


void WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4C352BF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_12724/*"ServantDying"*/);
    byte_4C352BF = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12724/*"ServantDying"*/,
      0);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0, 0) )
    {
      pieceData = this->fields.faceEffect;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive(pieceData, 0, 0);
        return;
      }
LABEL_13:
      sub_1C32E7C(pieceData);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12724/*"ServantDying"*/,
      0);
  }
}


void WarBoardServantPieceComponent__ChangeStatus(
        WarBoardServantPieceComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  UIBasicSprite_o *hpBar; // x20
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *npBarEffect; // x20
  float v10; // s0
  const MethodInfo *v11; // x1

  if ( !isBreak )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData
      || (hpBar = (UIBasicSprite_o *)this->fields.hpBar,
          CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(pieceData, 0),
          !hpBar) )
    {
LABEL_9:
      sub_1C32E7C(pieceData);
    }
    UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_9;
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0);
  WarBoardServantPieceComponent__UpdateNpBars(this, CurrentNpProgress, v8);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_9;
  npBarEffect = this->fields.npBarEffect;
  v10 = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0);
  if ( !npBarEffect )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(npBarEffect, v10 >= 1.0, 0);
  WarBoardServantPieceComponent__ChangeDyingAnimation(this, v11);
}


void WarBoardServantPieceComponent__ClearPartyBuff(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *partyBuffComponent; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  WarBoardServantPiecePartyBuffComponent_o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4C352CB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C352CB = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_1C32E7C(v4);
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v6, v5);
    WarBoardServantPiecePartyBuffComponent__SetActive(v6, 0, v7);
  }
}


void WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  struct ServantClassCompatibilityIconComponent_o *v6; // x0
  System_Int32_array *v7; // x2
  struct WarBoardPieceData_o *pieceData; // x8

  if ( (byte_4C352C9 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C352C9 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0) )
  {
    if ( selectPiece )
    {
      v6 = (struct ServantClassCompatibilityIconComponent_o *)sub_1C32CC8(int___TypeInfo, 1);
      if ( v6 )
      {
        v7 = (System_Int32_array *)v6;
        if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
          sub_1C32E84(v6);
        LODWORD(v6->fields.upIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v6 = this->fields.classCompatibilityIcon;
          if ( v6 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v6,
              pieceData->fields._iconClassId_k__BackingField,
              v7,
              4,
              0);
            return;
          }
        }
      }
LABEL_14:
      sub_1C32E7C(v6);
    }
    v6 = this->fields.classCompatibilityIcon;
    if ( !v6 )
      goto LABEL_14;
    ServantClassCompatibilityIconComponent__Clear(v6, 0);
  }
}


WarBoardTaskBase_o *WarBoardServantPieceComponent__CreateBossUIBreakTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x19
  System_Delegate_o **v13; // x21
  System_Delegate_o *v14; // x22
  WarBoardTaskBase_TaskCallback_o *v15; // x23
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Delegate_o *v19; // x8
  WarBoardTaskBase_TaskCallback_c *v20; // x1

  if ( (byte_4C352C7 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_1C32C20(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_1C32C20(&WarBoardWaitTime_TypeInfo);
    byte_4C352C7 = 1;
  }
  v6 = sub_1C32E6C(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)eventBossUI, v8, v9),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)endAction, v10, v11),
        v12 = sub_1C32E6C(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v12, 0.0, 0),
        !v12) )
  {
    sub_1C32E7C(v7);
  }
  v13 = (System_Delegate_o **)(v12 + 40);
  v14 = *(System_Delegate_o **)(v12 + 40);
  v15 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0);
  v16 = System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0);
  v19 = v16;
  if ( !v16 )
    goto LABEL_9;
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v16->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v13 = v16, (WarBoardTaskBase_TaskCallback_c *)v16->klass != v20) )
  {
    sub_1C3313C(v16);
LABEL_9:
    *v13 = v19;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 40), (int32_t)v19, v17, v18);
  *(_BYTE *)(v12 + 26) = 1;
  return (WarBoardTaskBase_o *)v12;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Func_bool__o *v8; // x20
  UnityEngine_WaitUntil_o *v9; // x21
  __int64 v10; // x20
  System_Delegate_o **v11; // x21
  System_Delegate_o *v12; // x22
  WarBoardTaskBase_TaskCallback_o *v13; // x23
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Delegate_o *v17; // x8
  WarBoardTaskBase_TaskCallback_c *v18; // x1

  if ( (byte_4C352C6 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_1C32C20(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    byte_4C352C6 = 1;
  }
  v4 = sub_1C32E6C(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 24), (int32_t)eventBossUI, v6, v7);
  *(_BYTE *)(v4 + 16) = 0;
  v8 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0);
  v9 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0);
  v10 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v10, (UnityEngine_CustomYieldInstruction_o *)v9, 0);
  if ( !v10 )
LABEL_11:
    sub_1C32E7C(v5);
  v11 = (System_Delegate_o **)(v10 + 32);
  v12 = *(System_Delegate_o **)(v10 + 32);
  v13 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0);
  v14 = System_Delegate__Combine(v12, (System_Delegate_o *)v13, 0);
  v17 = v14;
  if ( !v14 )
    goto LABEL_9;
  v18 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v14->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v11 = v14, (WarBoardTaskBase_TaskCallback_c *)v14->klass != v18) )
  {
    sub_1C3313C(v14);
LABEL_9:
    *v11 = v17;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v17, v15, v16);
  return (WarBoardCallbackTask_o *)v10;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Func_bool__o *v8; // x20
  UnityEngine_WaitUntil_o *v9; // x21
  __int64 v10; // x20
  System_Delegate_o **v11; // x21
  System_Delegate_o *v12; // x22
  WarBoardTaskBase_TaskCallback_o *v13; // x23
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Delegate_o *v17; // x8
  WarBoardTaskBase_TaskCallback_c *v18; // x1

  if ( (byte_4C352C8 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_1C32C20(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    byte_4C352C8 = 1;
  }
  v4 = sub_1C32E6C(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 24), (int32_t)eventBossUI, v6, v7);
  *(_BYTE *)(v4 + 16) = 0;
  v8 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0);
  v9 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0);
  v10 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v10, (UnityEngine_CustomYieldInstruction_o *)v9, 0);
  if ( !v10 )
LABEL_11:
    sub_1C32E7C(v5);
  v11 = (System_Delegate_o **)(v10 + 32);
  v12 = *(System_Delegate_o **)(v10 + 32);
  v13 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0);
  v14 = System_Delegate__Combine(v12, (System_Delegate_o *)v13, 0);
  v17 = v14;
  if ( !v14 )
    goto LABEL_9;
  v18 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v14->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v11 = v14, (WarBoardTaskBase_TaskCallback_c *)v14->klass != v18) )
  {
    sub_1C3313C(v14);
LABEL_9:
    *v11 = v17;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v17, v15, v16);
  return (WarBoardCallbackTask_o *)v10;
}


void WarBoardServantPieceComponent__EditPiece(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4C352BE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C352BE = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C32E7C(0);
  WarBoardManager__OpenPartyMenu(v6, this->fields.pieceData, 0);
}


UnityEngine_Transform_o *WarBoardServantPieceComponent__GetEffectDisplayTransform(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.effectDisplayTransform;
}


UnityEngine_Vector3_o WarBoardServantPieceComponent__GetIconLocalPosition(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantIcon; // x0

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon
    || (servantIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(servantIcon, 0)) == 0 )
  {
    sub_1C32E7C(servantIcon);
  }
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)servantIcon, 0);
}


UnityEngine_Vector3_o WarBoardServantPieceComponent__GetIconPosition(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantIcon; // x0

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon
    || (servantIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(servantIcon, 0)) == 0 )
  {
    sub_1C32E7C(servantIcon);
  }
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)servantIcon, 0);
}


System_Int32_array *WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(
        WarBoardServantPieceComponent_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  long double inited; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  unsigned int v9; // w9
  _QWORD *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  WarBoardServantPieceComponent___c_c *v17; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v19; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4C352C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_1C32C20(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_4C352C1 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C32CC8(int___TypeInfo, 3);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v9 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v9
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v9 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v9 <= 2) )
  {
    sub_1C32E84(BattleParticipantInfo);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v10[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C83334(inited);
  if ( !warBoardData
    || (v13 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0)) == 0) )
  {
LABEL_27:
    sub_1C32E7C(BattleParticipantInfo);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0);
    v16 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v15,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v17 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v17 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v17->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v19,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v16,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_311683C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v23,
                                                                 (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v24 = System_Linq_Enumerable__Concat_int_(
          v8,
          v13,
          (const MethodInfo_30F9D18 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4C352D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4C352D0 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0) )
  {
    sub_1C32E7C(button);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0);
}


void WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *hpBar; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UISprite_o *frameSprite; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v24; // x2
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C352B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20237/*"icon_strong_enemy"*/);
    sub_1C32C20(&StringLiteral_20024/*"hp_gauge_boss"*/);
    sub_1C32C20(&StringLiteral_23283/*"servant_base_{0}"*/);
    byte_4C352B9 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v25 = pieceData->fields._forceId_k__BackingField + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v6, v7, v8, v9, v10, v11);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23283/*"servant_base_{0}"*/, v13, 0);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20024/*"hp_gauge_boss"*/, 0);
  }
  if ( pieceData->fields._battleServant_k__BackingField )
  {
    ((void (__fastcall *)(WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._15_ChangeStatus.methodPtr)(
      this,
      0,
      this->klass->vtable._15_ChangeStatus.method);
  }
  else
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UIBasicSprite__set_fillAmount((UIBasicSprite_o *)hpBar, 1.0, 0);
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v15);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v14);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v14);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0, 0) )
  {
    v17 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
    if ( !v17 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v17, (unsigned __int8)hpBar & 1, 0);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
  {
    hpBar = (System_String_o *)this->fields.classCompatibilityIcon;
    if ( !hpBar )
      goto LABEL_39;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)hpBar, 0);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0, 0) )
  {
    battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      if ( battleServant_k__BackingField->fields.isEnemy && pieceData->fields._roleType_k__BackingField == 1 )
      {
        hpBar = (System_String_o *)this->fields.RoleTypeLabel;
        if ( hpBar )
        {
          hpBar = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)hpBar,
                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20237/*"icon_strong_enemy"*/, 0);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1C32E7C(hpBar);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1C32BC4((CGThumbnailListItem_o *)&buffTrunNotice->fields.pieceData, (int32_t)pieceData, v20, v21);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v24);
  }
}


bool WarBoardServantPieceComponent__IsModifyStatus(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  struct UISprite_o *hpBar; // x8
  WarBoardServantPieceComponent_o *v3; // x19
  float mFillAmount; // s8
  float nowNpProgress; // s8
  const MethodInfo *v6; // x1

  hpBar = this->fields.hpBar;
  if ( !hpBar )
    goto LABEL_8;
  v3 = this;
  this = (WarBoardServantPieceComponent_o *)this->fields.pieceData;
  if ( !this )
    goto LABEL_8;
  mFillAmount = hpBar->fields.mFillAmount;
  if ( mFillAmount != WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)this, 0) )
    return 1;
  this = (WarBoardServantPieceComponent_o *)v3->fields.pieceData;
  if ( !this )
LABEL_8:
    sub_1C32E7C(this);
  nowNpProgress = v3->fields.nowNpProgress;
  if ( nowNpProgress == WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0) )
  {
    WarBoardServantPieceComponent__ChangeDyingAnimation(v3, v6);
    return 0;
  }
  return 1;
}


void WarBoardServantPieceComponent__LongTapIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C352BD & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 1, 0);
}


void WarBoardServantPieceComponent__OnBreak(
        WarBoardServantPieceComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  __int64 v12; // x25
  UnityEngine_Transform_o *transform; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  WarBoardManager_TaskList_o *v16; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_38C2B00 *v18; // x2
  System_Nullable_float__o v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v25; // x1
  Il2CppClass **v26; // x0
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v28; // x28
  System_Collections_Generic_List_object__o *v29; // x26
  const MethodInfo *v30; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v32; // x27
  const MethodInfo_38C2B00 *v33; // x2
  System_Nullable_float__o v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct WarBoardTaskBase_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  UnityEngine_Transform_o *v40; // x1
  Il2CppClass **v41; // x0
  bool IsStageBoss; // w0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v46; // x27
  WarBoardEventBossUIComponent_o **v47; // x27
  UnityEngine_Object_o *v48; // x28
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct WarBoardTaskBase_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  UnityEngine_Transform_o *v56; // x1
  Il2CppClass **v57; // x0
  WarBoardServantPieceComponent_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct WarBoardTaskBase_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  UnityEngine_Transform_o *v65; // x1
  Il2CppClass **v66; // x0
  System_Nullable_float__o v67; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v71; // x21
  System_Delegate_o **v72; // x22
  System_Delegate_o *v73; // x23
  WarBoardTaskBase_TaskCallback_o *v74; // x24
  System_Delegate_o *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Delegate_o *v78; // x8
  WarBoardTaskBase_TaskCallback_c *v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct WarBoardTaskBase_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  WarBoardManager_TaskList_o *v86; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v88; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v91; // 0:x0.16
  System_Nullable_Vector3__o v92; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4C352C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&WarBoardManager_TaskList_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_1C32C20(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C32C20(&WarBoardGaugePerformance_TypeInfo);
    byte_4C352C3 = 1;
  }
  priority = 0;
  v12 = sub_1C32E6C(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v14, v15);
  v16 = (WarBoardManager_TaskList_o *)sub_1C32E6C(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v16, 0);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v91.fields.hasValue = &v88;
    *(_QWORD *)&v88.fields.hasValue = 0;
    *(_QWORD *)&v88.fields.value.fields.y = 0;
    *(_QWORD *)&v91.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v91, localPosition, v18);
    if ( !Instance )
      goto LABEL_58;
    v19 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v88,
                                             v19,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v16 )
      goto LABEL_58;
    items = v16->fields._items;
    v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v16->fields._size;
    v25 = transform;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v16,
        (Il2CppObject *)transform,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v25;
      sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
    }
  }
  v86 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v30);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_37937196(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v28 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v28,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_37937196(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v29 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v16 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v16,
    (System_Collections_Generic_IEnumerable_T__o *)v28,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    v94 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v92.fields.hasValue = &v88;
    v88 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v92.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v92, v94, v33);
    if ( !v32 )
      goto LABEL_58;
    v34 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v32,
                                             v88,
                                             v34,
                                             1,
                                             1,
                                             0,
                                             0);
    v37 = v16->fields._items;
    v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v37 )
      goto LABEL_58;
    v39 = v16->fields._size;
    v40 = transform;
    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v16,
        (Il2CppObject *)transform,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v37->obj.klass + v39;
      v16->fields._size = v39 + 1;
      v41[4] = (Il2CppClass *)v40;
      sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0);
  EventBossUI = 0;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v46 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v46 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v46, (int32_t)transform, 0);
  }
  *(_QWORD *)(v12 + 16) = EventBossUI;
  v47 = (WarBoardEventBossUIComponent_o **)(v12 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 16), (int32_t)EventBossUI, v43, v44);
  v48 = *(UnityEngine_Object_o **)(v12 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v49 = UnityEngine_Object__op_Inequality(v48, 0, 0);
  if ( v49 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v49,
                                             *v47,
                                             v50);
    v53 = v16->fields._items;
    v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v53 )
      goto LABEL_58;
    v55 = v16->fields._size;
    v56 = transform;
    if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v16,
        (Il2CppObject *)transform,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v53->obj.klass + v55;
      v16->fields._size = v55 + 1;
      v57[4] = (Il2CppClass *)v56;
      sub_1C32BC4((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v56, v51, v52);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v58, *v47, 0, v59);
    v62 = v16->fields._items;
    v63 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v62 )
      goto LABEL_58;
    v64 = v16->fields._size;
    v65 = transform;
    if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v16,
        (Il2CppObject *)transform,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = &v62->obj.klass + v64;
      v16->fields._size = v64 + 1;
      v66[4] = (Il2CppClass *)v65;
      sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v65, v60, v61);
    }
  }
  v67 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v67,
    v16,
    dummyPointa,
    0,
    1,
    0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_58;
  if ( pieceData->fields._isDead_k__BackingField )
    goto LABEL_54;
  transform = (UnityEngine_Transform_o *)this->fields.hpBar;
  if ( !transform )
    goto LABEL_58;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)transform, 0.0, 0);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v71 = sub_1C32E6C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v71, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0);
  if ( !v71 )
    goto LABEL_58;
  v72 = (System_Delegate_o **)(v71 + 32);
  v73 = *(System_Delegate_o **)(v71 + 32);
  v74 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v74,
    (Il2CppObject *)v12,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0);
  v75 = System_Delegate__Combine(v73, (System_Delegate_o *)v74, 0);
  v78 = v75;
  if ( v75 )
  {
    v79 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v75->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v72 = v75;
      if ( (WarBoardTaskBase_TaskCallback_c *)v75->klass == v79 )
        goto LABEL_50;
    }
    sub_1C3313C(v75);
  }
  *v72 = v78;
LABEL_50:
  sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 32), (int32_t)v78, v76, v77);
  *(_BYTE *)(v71 + 26) = 1;
  v82 = v16->fields._items;
  v83 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v16->fields._version;
  if ( !v82 )
    goto LABEL_58;
  v84 = v16->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v16,
      (Il2CppObject *)v71,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &v82->obj.klass + v84;
    v16->fields._size = v84 + 1;
    v85[4] = (Il2CppClass *)v71;
    sub_1C32BC4((CGThumbnailListItem_o *)(v85 + 4), v71, v80, v81);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v16,
    (System_Collections_Generic_IEnumerable_T__o *)v29,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v86 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v86,
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v86->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1C32E7C(transform);
  WarBoardManager__AddTask_37974444(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
    0);
}


void WarBoardServantPieceComponent__OnDamage(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardManager_o *pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x21
  WarBoardServantPieceComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  WarBoardManager_o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4C352C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352C2 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_20;
    v7 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v7 )
      goto LABEL_20;
    EventBossUI = WarBoardManager__GetEventBossUI(v7, (int32_t)pieceData, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0, 0) )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v9, EventBossUI, v10);
    if ( v8 )
    {
      items = v8->fields._items;
      v14 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        v16 = pieceData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
        }
        WarBoardPieceBaseComponent__OnDamage(
          (WarBoardPieceBaseComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v8,
          0);
        if ( taskList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v8,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_37974444(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v8, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C32E7C(pieceData);
  }
}


void WarBoardServantPieceComponent__OnDead(
        WarBoardServantPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  void *gameObject; // x0
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v11; // x21
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_object__o *v13; // x21
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass *v21; // x1
  Il2CppClass **v22; // x0
  WarBoardServantPieceComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass *v30; // x1
  Il2CppClass **v31; // x0
  WarBoardManager_o *v32; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v34; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v37; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_37937196; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v40; // x0
  const MethodInfo *v41; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v43; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v44; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v46; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_38C2B00 *v48; // x2
  System_Nullable_float__o v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass *v55; // x1
  Il2CppClass **v56; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v58; // x8
  System_String_o *v59; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x23
  __int64 v63; // x25
  __int64 v64; // x26
  ServantEntity_o *v65; // x25
  int v66; // w23
  bool v67; // w0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  Il2CppObject *v74; // x0
  CGThumbnailListItem_o *v75; // x23
  System_Delegate_o *v76; // x25
  Il2CppObject *v77; // x22
  WarBoardTaskBase_TaskCallback_o *v78; // x26
  System_Delegate_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Delegate_o *v82; // x8
  WarBoardTaskBase_TaskCallback_c *v83; // x1
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  WarBoardWaitTime_o *v90; // x20
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v98; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C352C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&WarBoardManager_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_1C32C20(&WarBoardWaitTime_TypeInfo);
    sub_1C32C20(&StringLiteral_6186/*"Escape_Effect"*/);
    sub_1C32C20(&StringLiteral_6049/*"Enemy_Dead_Effect"*/);
    sub_1C32C20(&StringLiteral_12747/*"Servant_Dead_Effect"*/);
    sub_1C32C20(&StringLiteral_12966/*"Special_Effect{0:D2}"*/);
    byte_4C352C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_101;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    return;
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v11 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v11 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v11, (int32_t)gameObject, 0);
  }
  gameObject = this->fields.hpBar;
  if ( !gameObject )
    goto LABEL_101;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)gameObject, 0.0, 0);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0, 0) )
  {
    gameObject = this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality(EventBossUI, 0, 0);
  if ( v14 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v14,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v15);
    if ( !v13 )
      goto LABEL_101;
    items = v13->fields._items;
    v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_101;
    v20 = v13->fields._size;
    v21 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v20 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + v20;
      v13->fields._size = v20 + 1;
      v22[4] = v21;
      sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v23,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v24);
    v27 = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v13->fields._version;
    if ( !v27 )
      goto LABEL_101;
    v29 = v13->fields._size;
    v30 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v27->obj.klass + v29;
      v13->fields._size = v29 + 1;
      v31[4] = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v32 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v32 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v32, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v34 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v37 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v37,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v34 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v34, 0) )
  {
    gameObject = (void *)WarBoardData__get_id(v34, 0);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0);
    id = WarBoardData__get_id(v34, 0);
    v37 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0, 0);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0, 0);
  if ( !v37 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_37937196 = WarBoardManager__GetEventTasks_37937196((WarBoardManager_o *)gameObject, 24, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_37937196,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v40 = WarBoardManager__GetEventTasks_37937196((WarBoardManager_o *)gameObject, 25, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)v40,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v34, v41);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v43 = WarBoardManager__GetEventTasks_37937196(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v43,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v44 = WarBoardManager__GetEventTasks_37937196(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)v44,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v46 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)v46,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    *(_QWORD *)&v100.fields.hasValue = &v98;
    *(_QWORD *)&v98.fields.hasValue = 0;
    *(_QWORD *)&v98.fields.value.fields.y = 0;
    *(_QWORD *)&v100.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v100, localPosition, v48);
    if ( !Instance )
      goto LABEL_101;
    v49 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v98, v49, 1, 1, 0, 0);
    if ( !v13 )
      goto LABEL_101;
    v52 = v13->fields._items;
    v53 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v13->fields._version;
    if ( !v52 )
      goto LABEL_101;
    v54 = v13->fields._size;
    v55 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v52->obj.klass + v54;
      v13->fields._size = v54 + 1;
      v56[4] = v55;
      sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0);
  v58 = (System_String_o **)&StringLiteral_6049/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v58 = (System_String_o **)&StringLiteral_12747/*"Servant_Dead_Effect"*/;
  v59 = *v58;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v64 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v64;
  *(_QWORD *)&v101.fields.fakeValue = v63;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v101, 0);
  if ( !v62 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v62,
                 (int32_t)gameObject,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v65 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0);
  if ( !v65 )
    goto LABEL_101;
  v66 = (int)gameObject;
  v67 = ServantEntity__checkIsHeroineSvt(v65, 0);
  if ( v66 == 1 || v67 )
  {
    v59 = (System_String_o *)StringLiteral_6186/*"Escape_Effect"*/;
  }
  else if ( v66 >= 2 )
  {
    *(_DWORD *)&v98.fields.hasValue = v66;
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v68, v69, v70, v71, v72, v73);
    v59 = System_String__Format((System_String_o *)StringLiteral_12966/*"Special_Effect{0:D2}"*/, v74, 0);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v59, 0);
  if ( !gameObject )
LABEL_101:
    sub_1C32E7C(gameObject);
  v75 = (CGThumbnailListItem_o *)((char *)gameObject + 40);
  v76 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v77 = (Il2CppObject *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v78 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v78,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0);
  v79 = System_Delegate__Combine(v76, (System_Delegate_o *)v78, 0);
  v82 = v79;
  if ( !v79 )
    goto LABEL_82;
  v83 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v79->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v75->klass = (CGThumbnailListItem_c *)v79, (WarBoardTaskBase_TaskCallback_c *)v79->klass != v83) )
  {
    sub_1C3313C(v79);
LABEL_82:
    v75->klass = (CGThumbnailListItem_c *)v82;
  }
  sub_1C32BC4(v75, (int32_t)v82, v80, v81);
  if ( !v13 )
    goto LABEL_101;
  v86 = v13->fields._items;
  v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !v86 )
    goto LABEL_101;
  v88 = v13->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      v77,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &v86->obj.klass + v88;
    v13->fields._size = v88 + 1;
    v89[4] = (Il2CppClass *)v77;
    sub_1C32BC4((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v77, v84, v85);
  }
  v90 = (WarBoardWaitTime_o *)sub_1C32E6C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v90, 0.5, 0);
  v93 = v13->fields._items;
  v94 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !v93 )
    goto LABEL_101;
  v95 = v13->fields._size;
  if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v90,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = &v93->obj.klass + v95;
    v13->fields._size = v95 + 1;
    v96[4] = (Il2CppClass *)v90;
    sub_1C32BC4((CGThumbnailListItem_o *)(v96 + 4), (int32_t)v90, v91, v92);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v37,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_37966928(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
      0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0);
}


void WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C352CF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18839/*"ef_guts"*/);
    byte_4C352CF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18839/*"ef_guts"*/,
      taskList,
      0);
}


void WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C352CE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18860/*"ef_special_invincible01"*/);
    byte_4C352CE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18860/*"ef_special_invincible01"*/,
      taskList,
      0);
}


void WarBoardServantPieceComponent__OnMapDamage(
        WarBoardServantPieceComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  int v9; // w23
  int v10; // w24
  int v11; // w25
  int32_t MaxHp; // w0
  int v13; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v16; // s10
  __int64 v17; // x21
  System_Delegate_o **v18; // x22
  System_Delegate_o *v19; // x23
  WarBoardServantPieceComponent___c_c *v20; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v22; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4C352CC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_1C32C20(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C32C20(&WarBoardGaugePerformance_TypeInfo);
    byte_4C352CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)gameObject, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v9 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v10 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v11 = (int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  v13 = v11 - damage;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v16 = (float)v13 / (float)MaxHp;
  v17 = sub_1C32E6C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v17,
    hpBar,
    (float)v9 / (float)v10,
    v16,
    gaugeAnimationFullDuration,
    0);
  if ( !v17 )
    goto LABEL_30;
  v18 = (System_Delegate_o **)(v17 + 32);
  v19 = *(System_Delegate_o **)(v17 + 32);
  v20 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v20 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__57_0 = v20->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v22,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v24, v25);
  }
  v26 = System_Delegate__Combine(v19, (System_Delegate_o *)_9__57_0, 0);
  if ( !v26 )
  {
    *v18 = 0;
    goto LABEL_22;
  }
  v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v18 = v26;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v29 )
    {
LABEL_22:
      sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v26, v27, v28);
      *(_BYTE *)(v17 + 26) = 0;
      if ( v8 )
      {
        items = v8->fields._items;
        v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v8->fields._version;
        if ( items )
        {
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v17,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v35 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v17;
            sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 4), v17, v30, v31);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v8,
                (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_37974444(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v8,
              0);
            return;
          }
        }
      }
LABEL_30:
      sub_1C32E7C(gameObject);
    }
  }
  sub_1C3313C(v26);
}


void WarBoardServantPieceComponent__OnMapGainHP(
        WarBoardServantPieceComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  float v11; // s8
  int32_t MaxHp; // w0
  int v13; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v16; // s10
  __int64 v17; // x21
  System_Delegate_o **v18; // x22
  System_Delegate_o *v19; // x23
  WarBoardServantPieceComponent___c_c *v20; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v22; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4C352D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_1C32C20(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C32C20(&WarBoardGaugePerformance_TypeInfo);
    byte_4C352D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v11 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  v13 = gainHp + oldHp;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v16 = (float)v13 / (float)MaxHp;
  v17 = sub_1C32E6C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v17, hpBar, v11, v16, gaugeAnimationFullDuration, 0);
  if ( !v17 )
    goto LABEL_28;
  v18 = (System_Delegate_o **)(v17 + 32);
  v19 = *(System_Delegate_o **)(v17 + 32);
  v20 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v20 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__63_0 = v20->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v22,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v24, v25);
  }
  v26 = System_Delegate__Combine(v19, (System_Delegate_o *)_9__63_0, 0);
  if ( !v26 )
  {
    *v18 = 0;
    goto LABEL_20;
  }
  v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v18 = v26;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v29 )
    {
LABEL_20:
      sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v26, v27, v28);
      *(_BYTE *)(v17 + 26) = 0;
      if ( v10 )
      {
        items = v10->fields._items;
        v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v10->fields._version;
        if ( items )
        {
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v17,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v35 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v17;
            sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 4), v17, v30, v31);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v10,
                (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_37974444(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
              0);
            return;
          }
        }
      }
LABEL_28:
      sub_1C32E7C(gameObject);
    }
  }
  sub_1C3313C(v26);
}


void WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_o *Instance; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v7; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v9; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v13; // x21
  Il2CppObject *v14; // x22
  const MethodInfo_38C2B00 *v15; // x2
  System_Nullable_float__o v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v22; // x1
  Il2CppClass **v23; // x0
  CGThumbnailListItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v26; // x22
  WarBoardTaskBase_TaskCallback_o *v27; // x25
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  WarBoardWaitTime_o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Nullable_Vector3__o v46; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v47; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C352C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_1C32C20(&WarBoardWaitTime_TypeInfo);
    sub_1C32C20(&StringLiteral_12748/*"Servant_Regenerate_Effect"*/);
    byte_4C352C5 = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v7 = 0;
  while ( (int)v7 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v7 >= LODWORD(breakPoints->max_length) )
        sub_1C32E84(Instance);
      Instance = breakPoints->m_Items[v7];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0);
        pieceData = this->fields.pieceData;
        ++v7;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v9 = this->fields.pieceData;
  if ( !v9 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v9->fields._nowSquareIndex_k__BackingField,
                     0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)Instance,
                                                0);
  if ( !Instance )
    goto LABEL_10;
  v49.fields.x = x;
  v49.fields.y = y;
  v49.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v49, 0);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v47.fields.hasValue = &v46;
  *(_QWORD *)&v46.fields.hasValue = 0;
  *(_QWORD *)&v46.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v47, localPosition, v15);
  if ( !v14 )
    goto LABEL_10;
  v16 = 0;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v14,
                                                v46,
                                                v16,
                                                1,
                                                0,
                                                1,
                                                0);
  if ( !v13 )
    goto LABEL_10;
  items = v13->fields._items;
  v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v13->fields._size;
  v22 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12748/*"Servant_Regenerate_Effect"*/,
                                                0);
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(Instance);
  p_activeObject = (CGThumbnailListItem_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v26 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0);
  v28 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v27, 0);
  v31 = v28;
  if ( v28 )
  {
    v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (CGThumbnailListItem_c *)v28;
      if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == v32 )
        goto LABEL_28;
    }
    sub_1C3313C(v28);
  }
  p_activeObject->klass = (CGThumbnailListItem_c *)v31;
LABEL_28:
  sub_1C32BC4(p_activeObject, (int32_t)v31, v29, v30);
  v35 = v13->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !v35 )
    goto LABEL_10;
  v37 = v13->fields._size;
  if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      v26,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v13->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v26;
    sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v26, v33, v34);
  }
  v39 = (WarBoardWaitTime_o *)sub_1C32E6C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v39, 0.5, 0);
  v42 = v13->fields._items;
  v43 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !v42 )
    goto LABEL_10;
  v44 = v13->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v39,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v13->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v39;
    sub_1C32BC4((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v13,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_37966928(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
    0);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0);
}


void WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_38C2B00 *v13; // x2
  System_Nullable_float__o v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  Il2CppObject *v22; // x20
  CGThumbnailListItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v25; // x24
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Delegate_o *v29; // x8
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  Il2CppObject *v37; // x20
  System_Nullable_Vector3__o v38; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v39; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C352CD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_1C32C20(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C32C20(&StringLiteral_11281/*"Reinforcement_Effect_1"*/);
    byte_4C352CD = 1;
  }
  v5 = sub_1C32E6C(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v39.fields.hasValue = &v38;
  *(_QWORD *)&v38.fields.hasValue = 0;
  *(_QWORD *)&v38.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v39, localPosition, v13);
  if ( !Instance )
    goto LABEL_23;
  v14 = 0;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                           (WarBoardManager_o *)Instance,
                                           v38,
                                           v14,
                                           1,
                                           0,
                                           1,
                                           0);
  if ( !v11 )
    goto LABEL_23;
  items = v11->fields._items;
  v18 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v11->fields._size;
  v20 = transform;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)transform,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
  }
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_11281/*"Reinforcement_Effect_1"*/,
                                           0);
  if ( !transform )
LABEL_23:
    sub_1C32E7C(transform);
  v22 = (Il2CppObject *)transform;
  p_fields = (CGThumbnailListItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0);
  v26 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v25, 0);
  v29 = v26;
  if ( v26 )
  {
    v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_fields->klass = (CGThumbnailListItem_c *)v26;
      if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v30 )
        goto LABEL_17;
    }
    sub_1C3313C(v26);
  }
  p_fields->klass = (CGThumbnailListItem_c *)v29;
LABEL_17:
  sub_1C32BC4(p_fields, (int32_t)v29, v27, v28);
  v33 = v11->fields._items;
  v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v33 )
    goto LABEL_23;
  v35 = v11->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v22,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v11->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v22, v31, v32);
  }
  v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v37 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v37, (WarBoardTaskBase_array *)transform, 0);
}


void WarBoardServantPieceComponent__SetActiveNpBarEffect(
        WarBoardServantPieceComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *npBarEffect; // x19
  bool v4; // w1

  npBarEffect = this->fields.npBarEffect;
  if ( active )
  {
    this = (WarBoardServantPieceComponent_o *)this->fields.pieceData;
    if ( !this )
      goto LABEL_7;
    v4 = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0) >= 1.0;
  }
  else
  {
    v4 = 0;
  }
  if ( !npBarEffect )
LABEL_7:
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive(npBarEffect, v4, 0);
}


void WarBoardServantPieceComponent__SetClassIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *classIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v5; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  il2cpp_array_size_t max_length; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v15; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C352BA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_22393/*"onBoard_initial_placement_class2_{0}"*/);
    byte_4C352BA = 1;
  }
  classIconRoot = this->fields.classIconRoot;
  if ( !classIconRoot )
    goto LABEL_22;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0);
  if ( !classIconRoot )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(classIconRoot, 1, 0);
  classIconRoot = this->fields.servantIconRoot;
  if ( !classIconRoot )
    goto LABEL_22;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0);
  if ( !classIconRoot )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(classIconRoot, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1C32E7C(classIconRoot);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_3396884 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v5 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_22;
LABEL_19:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v5, 0);
    if ( !classIconRoot )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !classIconRoot )
    goto LABEL_22;
  ServantClassEntities = WarBoardIndividualityClassMaster__GetServantClassEntities(
                           (WarBoardIndividualityClassMaster_o *)classIconRoot,
                           (System_Int32_array *)entity[2].monitor,
                           0);
  if ( !ServantClassEntities )
    goto LABEL_19;
  max_length = ServantClassEntities->max_length;
  if ( !max_length )
    goto LABEL_19;
  if ( !(_DWORD)max_length )
    sub_1C32E84(ServantClassEntities);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  m_CachedPtr_high = HIDWORD(classIconRoot[1].fields.m_CachedPtr);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr_high, v7, v8, v9, v10, v11, v12);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22393/*"onBoard_initial_placement_class2_{0}"*/, v15, 0);
  if ( !classIcon )
    goto LABEL_22;
  UISprite__set_spriteName(classIcon, (System_String_o *)classIconRoot, 0);
}


void WarBoardServantPieceComponent__SetPartyBuffLevel(
        WarBoardServantPieceComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyBuffComponent; // x21
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C352CA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C352CA = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0) )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_14;
    if ( WarBoardPieceData__get_BuffData(pieceData, 0) )
    {
      pieceData = this->fields.pieceData;
      if ( !pieceData )
        goto LABEL_14;
      pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_BuffData(pieceData, 0);
      if ( !pieceData )
        goto LABEL_14;
      CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
                                         (BattleBuffData_o *)pieceData,
                                         0);
      if ( System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
             (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v9);
        return;
      }
    }
    pieceData = (WarBoardPieceData_o *)this->fields.partyBuffComponent;
    if ( pieceData )
    {
      WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        (WarBoardServantPiecePartyBuffComponent_o *)pieceData,
        level,
        v7);
      return;
    }
LABEL_14:
    sub_1C32E7C(pieceData);
  }
}


void WarBoardServantPieceComponent__SetServant(
        WarBoardServantPieceComponent_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C32E7C(this);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantId);
}


void WarBoardServantPieceComponent__SetServantEquip(
        WarBoardServantPieceComponent_o *this,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C32E7C(this);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


void WarBoardServantPieceComponent__SetServantIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardServantPieceComponent_o *v2; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  struct WarBoardPieceData_o *v5; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v8; // x8
  int32_t v9; // w23
  UISprite_o *servantIcon; // x24
  bool v11; // w20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  int32_t servantLevel; // w20
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v29; // x21
  UISprite_o *v30; // x21
  System_String_o *v31; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v33; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v40; // x1
  Il2CppClass **v41; // x0
  struct WarBoardPieceData_o *v42; // x8
  struct WarBoardPieceData_o *v43; // x8
  WarBoardSquareData_o *v44; // x0
  bool v45; // w20
  struct WarBoardPieceData_o *v46; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v51; // x8
  UISprite_o *v52; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v54; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v56; // x20
  UnityEngine_Object_o *v57; // x20
  UILabel_o *v58; // x20
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  struct WarBoardPieceData_o *v65; // x8
  WarBoardServantPieceComponent_o *v66; // x21
  Il2CppObject *v67; // x0
  struct WarBoardPieceData_o *v68; // x8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v72; // w20
  struct WarBoardPieceData_o *v73; // x8
  struct WarBoardPieceData_o *v74; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v76; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t v78; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C352BB & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22896/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_1C32C20(&StringLiteral_15410/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_4C352BB = 1;
  }
  pieceData = v2->fields.pieceData;
  if ( !pieceData )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)v2->fields.classIconRoot;
  if ( !this )
    goto LABEL_113;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_113;
  if ( iconId_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
    if ( !this )
      goto LABEL_113;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v5 = v2->fields.pieceData;
    if ( !v5 )
      goto LABEL_113;
    npcImageSvtId_k__BackingField = v5->fields._npcImageSvtId_k__BackingField;
    if ( npcImageSvtId_k__BackingField <= 0 )
      npcImageSvtId_k__BackingField = v5->fields._iconId_k__BackingField;
    v78 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v5->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v5->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v8 = v2->fields.pieceData;
    if ( !v8 )
      goto LABEL_113;
    if ( !this )
      goto LABEL_113;
    this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                (ServantLimitImageMaster_o *)this,
                                                v8->fields._iconId_k__BackingField,
                                                npcDispLimitCount_k__BackingField,
                                                0);
    if ( !v2->fields.pieceData )
      goto LABEL_113;
    v9 = (int)this;
    if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0) )
      goto LABEL_23;
    servantIcon = (UISprite_o *)v2->fields.servantIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v11 = 1;
    if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v9, 1, 0, 0) )
    {
LABEL_23:
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_113;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v12, v13, v14, v15, v16, v17);
      v76 = npcDispLimitCount_k__BackingField;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v20, v21, v22, v23, v24, v25);
      v27 = System_String__Concat(v19, v26, 0);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v29 = v27;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_40507600(servantLevel, enemyIcon, v29, 0) )
        goto LABEL_30;
      v30 = (UISprite_o *)v2->fields.enemyIcon;
      v31 = System_Int32__ToString((int32_t)&v78, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_40507600(servantLevel, v30, v31, 0) )
      {
LABEL_30:
        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
        if ( !this )
          goto LABEL_113;
        WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v2->fields.enemyIcon, 0);
      }
      enemyIconBg = v2->fields.enemyIconBg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_40507600(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_22896/*"questinfo_enemyface_bg"*/,
                                                  0);
      v33 = v2->fields.pieceData;
      if ( !v33 )
        goto LABEL_113;
      if ( v33->fields._IsShadow_k__BackingField )
      {
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( !this )
          goto LABEL_113;
        removeTweenTargetObjects = (System_Collections_Generic_List_object__o *)v2->fields.removeTweenTargetObjects;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( !removeTweenTargetObjects )
          goto LABEL_113;
        items = removeTweenTargetObjects->fields._items;
        v38 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_113;
        size = removeTweenTargetObjects->fields._size;
        v40 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
        }
        ((void (__fastcall *)(WarBoardServantPieceComponent_o *, const MethodInfo *))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
          v2,
          v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
      }
      v11 = 0;
    }
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIcon;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0);
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( this )
          {
            v45 = !v11;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v45, 0);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v45, 0);
                v46 = v2->fields.pieceData;
                if ( v46 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v46->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v46->fields._iconFrameType_k__BackingField;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetClassIcon(
                    frameInClassIcon,
                    IconClassImageId_k__BackingField,
                    iconFrameType_k__BackingField,
                    0,
                    0,
                    0);
                  equipeIcon = (UnityEngine_Object_o *)v2->fields.equipeIcon;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v51 = v2->fields.pieceData;
                    if ( !v51 )
                      goto LABEL_113;
                    v52 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v51->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v52, iconEquipId_k__BackingField, 0, 0);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
                    v54 = v2->fields.pieceData;
                    if ( v54 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v54->fields._iconEquipId_k__BackingField > 0,
                          0);
                        supportSprite = (UnityEngine_Object_o *)v2->fields.supportSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
                        {
                          this = (WarBoardServantPieceComponent_o *)v2->fields.supportSprite;
                          if ( !this )
                            goto LABEL_113;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                          if ( !v2->fields.pieceData )
                            goto LABEL_113;
                          v56 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0);
                          if ( !v56 )
                            goto LABEL_113;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v56,
                            (unsigned __int8)this & 1,
                            0);
                        }
                        v57 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v57, 0, 0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_105;
                        v58 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15410/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0);
                        v65 = v2->fields.pieceData;
                        if ( !v65 )
                          goto LABEL_113;
                        v66 = this;
                        iconLevel_k__BackingField = v65->fields._iconLevel_k__BackingField;
                        v67 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &iconLevel_k__BackingField,
                                                v59,
                                                v60,
                                                v61,
                                                v62,
                                                v63,
                                                v64);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format((System_String_o *)v66, v67, 0);
                        if ( !v58 )
                          goto LABEL_113;
                        UILabel__set_text(v58, (System_String_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_113;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0);
                        v68 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v68 )
                            goto LABEL_113;
                          if ( v68->fields._roleType_k__BackingField == 1 )
                          {
                            this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
                            if ( !this )
                              goto LABEL_113;
                            this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
                            if ( !this )
                              goto LABEL_113;
                            p_z = &v2->fields.positionLevelDanger.fields.z;
                            p_x = &v2->fields.positionLevelDanger.fields.x;
                            p_y = &v2->fields.positionLevelDanger.fields.y;
                            goto LABEL_104;
                          }
                        }
                        else if ( !v68 )
                        {
                          goto LABEL_113;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_113;
                        v72 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0);
                        if ( (v72 & 1) != 0 )
                        {
                          if ( !this )
                            goto LABEL_113;
                          p_z = &v2->fields.positionLevelNpc.fields.z;
                          p_x = &v2->fields.positionLevelNpc.fields.x;
                          p_y = &v2->fields.positionLevelNpc.fields.y;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_113;
                          p_z = &v2->fields.positionLevel.fields.z;
                          p_x = &v2->fields.positionLevel.fields.x;
                          p_y = &v2->fields.positionLevel.fields.y;
                        }
LABEL_104:
                        v79.fields.z = *p_z;
                        v79.fields.y = *p_y;
                        v79.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v79, 0);
LABEL_105:
                        v73 = v2->fields.pieceData;
                        if ( v73 )
                        {
                          if ( !v73->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                          if ( this )
                          {
                            v74 = v2->fields.pieceData;
                            if ( v74 )
                            {
                              this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                              if ( this )
                              {
                                Square = WarBoardData__GetSquare(
                                           (WarBoardData_o *)this,
                                           v74->fields._nowSquareIndex_k__BackingField,
                                           0);
                                if ( Square )
                                  WarBoardSquareData__DeactiveEditPointArrow(Square, 0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_113:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v42 = v2->fields.pieceData;
  if ( !v42 )
    goto LABEL_113;
  if ( !v42->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_113;
  v43 = v2->fields.pieceData;
  if ( !v43 )
    goto LABEL_113;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_113;
  v44 = WarBoardData__GetSquare((WarBoardData_o *)this, v43->fields._nowSquareIndex_k__BackingField, 0);
  if ( v44 )
    WarBoardSquareData__ActiveEditPointArrow(v44, 0);
}


bool WarBoardServantPieceComponent__ShowStatus(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C352BC & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C352BC = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
    sub_1C32E7C(transform);
  WarBoardManager__ShowServantSimplePopup(v7, pieceData, position, 0);
  return 1;
}


void WarBoardServantPieceComponent__UpdateNpBars(
        WarBoardServantPieceComponent_o *this,
        float progress,
        const MethodInfo *method)
{
  struct UISprite_array *npBars; // x8
  il2cpp_array_size_t max_length; // x9
  WarBoardServantPieceComponent_o *v5; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  this->fields.nowNpProgress = progress;
  if ( npBars )
  {
    max_length = npBars->max_length;
    v5 = this;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_27;
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0);
      npBars = v5->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( SLODWORD(npBars->max_length) >= 2 )
    {
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[1];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v7 = v5->fields.npBars;
        if ( !v7 )
          goto LABEL_26;
        if ( LODWORD(v7->max_length) <= 1 )
          goto LABEL_27;
        this = (WarBoardServantPieceComponent_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0);
      }
    }
    v8 = v5->fields.npBars;
    if ( !v8 )
      goto LABEL_26;
    if ( SLODWORD(v8->max_length) < 3 )
      return;
    this = (WarBoardServantPieceComponent_o *)v8->m_Items[2];
    if ( !this )
      goto LABEL_26;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_26;
    if ( progress <= 2.0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v9 = v5->fields.npBars;
    if ( !v9 )
LABEL_26:
      sub_1C32E7C(this);
    if ( LODWORD(v9->max_length) > 2 )
    {
      this = (WarBoardServantPieceComponent_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1C32E84(this);
  }
}


bool WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0 )
    sub_1C32E7C(this);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void WarBoardServantPieceComponent___OnDead_b__46_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardServantPieceComponent___OnRevive_b__47_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4C352D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4C352D2 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(button);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 1, 0);
}


WarBoardServantPieceBuffTurnComponent_o *WarBoardServantPieceComponent__get_BuffTrunNotice(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTrunNotice;
}


void WarBoardServantPieceComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C352D3 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_4C352D3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardServantPieceComponent___c___ctor(WarBoardServantPieceComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *WarBoardServantPieceComponent___c___GetLatestBattleTargetAndAttacker_b__43_1(
        WarBoardServantPieceComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  unsigned int monitor; // w8

  if ( (byte_4C352D4 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C352D4 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1C32CC8(int___TypeInfo, 3);
  if ( !x || !result )
    sub_1C32E7C(result);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1C32E84(result);
  }
  LODWORD(result[2].monitor) = x->fields._index_k__BackingField;
  return result;
}


void WarBoardServantPieceComponent___c___OnMapDamage_b__57_0(
        WarBoardServantPieceComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardServantPieceComponent___c___OnMapGainHP_b__63_0(
        WarBoardServantPieceComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardServantPieceComponent___c__DisplayClass45_0___OnBreak_b__0(
        WarBoardServantPieceComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x20
  WarBoardEventBossUIComponent_o *Instance; // x0
  struct UISprite_o *hpBarWhiteSprite; // x8
  const MethodInfo *v7; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4C352D5 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    byte_4C352D5 = 1;
  }
  v3 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  hpBarWhiteSprite = Instance[1].fields.hpBarWhiteSprite;
  if ( !hpBarWhiteSprite )
    goto LABEL_11;
  OverwriteAssetSoundName__PlaySe(v4, *(System_String_o **)&hpBarWhiteSprite->fields.updateAnchors, 0, 0);
  Instance = this->fields.eventBossUI;
  if ( Instance )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0, v7);
      return;
    }
LABEL_11:
    sub_1C32E7C(Instance);
  }
}


void WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  return this->fields.effectEnded;
}


void WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__1(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardServantPieceComponent___c__DisplayClass49_0_o *v3; // x19
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C352D6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_4C352D6 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !eventBossUI )
    sub_1C32E7C(this);
  WarBoardEventBossUIComponent__PlayHpCut(eventBossUI, 1.0, _9__2, v2);
}


void WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__2(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  this->fields.effectEnded = 1;
}


void WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardServantPieceComponent___c__DisplayClass50_0___CreateBossUIBreakTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.eventBossUI )
    sub_1C32E7C(this);
  WarBoardEventBossUIComponent__PlayPointBreakAnim(this->fields.eventBossUI, this->fields.endAction, v2);
}


void WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  return this->fields.effectEnded;
}


void WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__1(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardServantPieceComponent___c__DisplayClass51_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C352D7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1C32C20(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_4C352D7 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !eventBossUI )
    sub_1C32E7C(this);
  WarBoardEventBossUIComponent__PlayDaedAnim(eventBossUI, _9__2, v2);
}


void WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__2(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  this->fields.effectEnded = 1;
}


void WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardServantPieceComponent___c__DisplayClass58_0___Reinforcements_b__0(
        WarBoardServantPieceComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardServantPieceComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._15_ChangeStatus.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._15_ChangeStatus.method);
}
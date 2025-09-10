void WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_C09650;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_C08E60;
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

  if ( (byte_4C24BEC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24BEC = 1;
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
    sub_1C2D6EC(pieceData, method);
  }
}


void WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4C24BEB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_12720/*"ServantDying"*/);
    byte_4C24BEB = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12720/*"ServantDying"*/,
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
      sub_1C2D6EC(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12720/*"ServantDying"*/,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C2D6EC(pieceData, isBreak);
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

  if ( (byte_4C24BF7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24BF7 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_1C2D6EC(v4, v5);
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
  __int64 v6; // x1
  struct ServantClassCompatibilityIconComponent_o *v7; // x0
  System_Int32_array *v8; // x2
  struct WarBoardPieceData_o *pieceData; // x8

  if ( (byte_4C24BF5 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24BF5 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0) )
  {
    if ( selectPiece )
    {
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_1C2D538(int___TypeInfo, 1);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          sub_1C2D6F4(v7, v6, v7);
        LODWORD(v7->fields.upIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v7 = this->fields.classCompatibilityIcon;
          if ( v7 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v7,
              pieceData->fields._iconClassId_k__BackingField,
              v8,
              4,
              0);
            return;
          }
        }
      }
LABEL_14:
      sub_1C2D6EC(v7, v6);
    }
    v7 = this->fields.classCompatibilityIcon;
    if ( !v7 )
      goto LABEL_14;
    ServantClassCompatibilityIconComponent__Clear(v7, 0);
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
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x19
  System_Delegate_o **v14; // x21
  System_Delegate_o *v15; // x22
  WarBoardTaskBase_TaskCallback_o *v16; // x23
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Delegate_o *v20; // x8
  WarBoardTaskBase_TaskCallback_c *v21; // x1

  if ( (byte_4C24BF3 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_1C2D490(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_1C2D490(&WarBoardWaitTime_TypeInfo);
    byte_4C24BF3 = 1;
  }
  v6 = sub_1C2D6DC(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)eventBossUI, v9, v10),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)endAction, v11, v12),
        v13 = sub_1C2D6DC(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v13, 0.0, 0),
        !v13) )
  {
    sub_1C2D6EC(v7, v8);
  }
  v14 = (System_Delegate_o **)(v13 + 40);
  v15 = *(System_Delegate_o **)(v13 + 40);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v6,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0);
  v20 = v17;
  if ( !v17 )
    goto LABEL_9;
  v21 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v14 = v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v21) )
  {
    sub_1C2D9AC(v17);
LABEL_9:
    *v14 = v20;
  }
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v20, v18, v19);
  *(_BYTE *)(v13 + 26) = 1;
  return (WarBoardTaskBase_o *)v13;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitUntil_o *v10; // x21
  __int64 v11; // x20
  System_Delegate_o **v12; // x21
  System_Delegate_o *v13; // x22
  WarBoardTaskBase_TaskCallback_o *v14; // x23
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Delegate_o *v18; // x8
  WarBoardTaskBase_TaskCallback_c *v19; // x1

  if ( (byte_4C24BF2 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_1C2D490(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    byte_4C24BF2 = 1;
  }
  v4 = sub_1C2D6DC(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8);
  *(_BYTE *)(v4 + 16) = 0;
  v9 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  v11 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, (UnityEngine_CustomYieldInstruction_o *)v10, 0);
  if ( !v11 )
LABEL_11:
    sub_1C2D6EC(v5, v6);
  v12 = (System_Delegate_o **)(v11 + 32);
  v13 = *(System_Delegate_o **)(v11 + 32);
  v14 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0);
  v15 = System_Delegate__Combine(v13, (System_Delegate_o *)v14, 0);
  v18 = v15;
  if ( !v15 )
    goto LABEL_9;
  v19 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v15->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v12 = v15, (WarBoardTaskBase_TaskCallback_c *)v15->klass != v19) )
  {
    sub_1C2D9AC(v15);
LABEL_9:
    *v12 = v18;
  }
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v18, v16, v17);
  return (WarBoardCallbackTask_o *)v11;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_bool__o *v9; // x20
  UnityEngine_WaitUntil_o *v10; // x21
  __int64 v11; // x20
  System_Delegate_o **v12; // x21
  System_Delegate_o *v13; // x22
  WarBoardTaskBase_TaskCallback_o *v14; // x23
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Delegate_o *v18; // x8
  WarBoardTaskBase_TaskCallback_c *v19; // x1

  if ( (byte_4C24BF4 & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_1C2D490(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    byte_4C24BF4 = 1;
  }
  v4 = sub_1C2D6DC(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8);
  *(_BYTE *)(v4 + 16) = 0;
  v9 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  v11 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, (UnityEngine_CustomYieldInstruction_o *)v10, 0);
  if ( !v11 )
LABEL_11:
    sub_1C2D6EC(v5, v6);
  v12 = (System_Delegate_o **)(v11 + 32);
  v13 = *(System_Delegate_o **)(v11 + 32);
  v14 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0);
  v15 = System_Delegate__Combine(v13, (System_Delegate_o *)v14, 0);
  v18 = v15;
  if ( !v15 )
    goto LABEL_9;
  v19 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v15->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v12 = v15, (WarBoardTaskBase_TaskCallback_c *)v15->klass != v19) )
  {
    sub_1C2D9AC(v15);
LABEL_9:
    *v12 = v18;
  }
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v18, v16, v17);
  return (WarBoardCallbackTask_o *)v11;
}


void WarBoardServantPieceComponent__EditPiece(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4C24BEA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C24BEA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(servantIcon, method);
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
    sub_1C2D6EC(servantIcon, method);
  }
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)servantIcon, 0);
}


System_Int32_array *WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(
        WarBoardServantPieceComponent_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  long double inited; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  unsigned int v11; // w9
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  WarBoardServantPieceComponent___c_c *v19; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v21; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4C24BED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C2D490(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C2D490(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_1C2D490(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_4C24BED = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C2D538(int___TypeInfo, 3);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v11 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v11
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v11 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v11 <= 2) )
  {
    sub_1C2D6F4(BattleParticipantInfo, v6, v7);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v12[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C7DBA4(inited);
  if ( !warBoardData
    || (v15 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0)) == 0) )
  {
LABEL_27:
    sub_1C2D6EC(BattleParticipantInfo, v6);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v17 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0);
    v18 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v19 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v19 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v19->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v21,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v23, v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v18,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v25,
                                                                 (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v26 = System_Linq_Enumerable__Concat_int_(
          v10,
          v15,
          (const MethodInfo_30EB278 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4C24BFC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4C24BFC = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0) )
  {
    sub_1C2D6EC(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0);
}


void WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *hpBar; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UISprite_o *frameSprite; // x21
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v22; // x2
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C24BE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20225/*"icon_strong_enemy"*/);
    sub_1C2D490(&StringLiteral_20012/*"hp_gauge_boss"*/);
    sub_1C2D490(&StringLiteral_23265/*"servant_base_{0}"*/);
    byte_4C24BE5 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v23 = pieceData->fields._forceId_k__BackingField + 1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v7, v8, v9);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23265/*"servant_base_{0}"*/, v11, 0);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20012/*"hp_gauge_boss"*/, 0);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v13);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v12);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v12);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0, 0) )
  {
    v15 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
    if ( !v15 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v15, (unsigned __int8)hpBar & 1, 0);
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
                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20225/*"icon_strong_enemy"*/, 0);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1C2D6EC(hpBar, v6);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1C2D434((CGThumbnailListItem_o *)&buffTrunNotice->fields.pieceData, (int32_t)pieceData, v18, v19);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v22);
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
    sub_1C2D6EC(this, method);
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
  __int64 v4; // x1

  if ( (byte_4C24BE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BE9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  WarBoardManager_TaskList_o *v17; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_38B3EC8 *v19; // x2
  System_Nullable_float__o v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v26; // x1
  Il2CppClass **v27; // x0
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v29; // x28
  System_Collections_Generic_List_object__o *v30; // x26
  const MethodInfo *v31; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v33; // x27
  const MethodInfo_38B3EC8 *v34; // x2
  System_Nullable_float__o v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardTaskBase_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  UnityEngine_Transform_o *v41; // x1
  Il2CppClass **v42; // x0
  bool IsStageBoss; // w0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v47; // x27
  WarBoardEventBossUIComponent_o **v48; // x27
  UnityEngine_Object_o *v49; // x28
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x2
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct WarBoardTaskBase_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  UnityEngine_Transform_o *v57; // x1
  Il2CppClass **v58; // x0
  WarBoardServantPieceComponent_o *v59; // x0
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct WarBoardTaskBase_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  UnityEngine_Transform_o *v66; // x1
  Il2CppClass **v67; // x0
  System_Nullable_float__o v68; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v72; // x21
  System_Delegate_o **v73; // x22
  System_Delegate_o *v74; // x23
  WarBoardTaskBase_TaskCallback_o *v75; // x24
  System_Delegate_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Delegate_o *v79; // x8
  WarBoardTaskBase_TaskCallback_c *v80; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct WarBoardTaskBase_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  WarBoardManager_TaskList_o *v87; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v89; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v92; // 0:x0.16
  System_Nullable_Vector3__o v93; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4C24BEF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&WarBoardManager_TaskList_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_1C2D490(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C2D490(&WarBoardGaugePerformance_TypeInfo);
    byte_4C24BEF = 1;
  }
  priority = 0;
  v12 = sub_1C2D6DC(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  v17 = (WarBoardManager_TaskList_o *)sub_1C2D6DC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v17, 0);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v92.fields.hasValue = &v89;
    *(_QWORD *)&v89.fields.hasValue = 0;
    *(_QWORD *)&v89.fields.value.fields.y = 0;
    *(_QWORD *)&v92.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v92, localPosition, v19);
    if ( !Instance )
      goto LABEL_58;
    v20 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v89,
                                             v20,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v17 )
      goto LABEL_58;
    items = v17->fields._items;
    v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v17->fields._size;
    v26 = transform;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)transform,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v26;
      sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
    }
  }
  v87 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v29 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v31);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_37818516(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v29 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_37818516(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v30 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v17 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v17,
    (System_Collections_Generic_IEnumerable_T__o *)v29,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    v95 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v93.fields.hasValue = &v89;
    v89 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v93.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v93, v95, v34);
    if ( !v33 )
      goto LABEL_58;
    v35 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v33,
                                             v89,
                                             v35,
                                             1,
                                             1,
                                             0,
                                             0);
    v38 = v17->fields._items;
    v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !v38 )
      goto LABEL_58;
    v40 = v17->fields._size;
    v41 = transform;
    if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)transform,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v38->obj.klass + v40;
      v17->fields._size = v40 + 1;
      v42[4] = (Il2CppClass *)v41;
      sub_1C2D434((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0);
  EventBossUI = 0;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v47 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v47 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v47, (int32_t)transform, 0);
  }
  *(_QWORD *)(v12 + 16) = EventBossUI;
  v48 = (WarBoardEventBossUIComponent_o **)(v12 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), (int32_t)EventBossUI, v44, v45);
  v49 = *(UnityEngine_Object_o **)(v12 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v50 = UnityEngine_Object__op_Inequality(v49, 0, 0);
  if ( v50 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v50,
                                             *v48,
                                             v51);
    v54 = v17->fields._items;
    v55 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !v54 )
      goto LABEL_58;
    v56 = v17->fields._size;
    v57 = transform;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)transform,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v54->obj.klass + v56;
      v17->fields._size = v56 + 1;
      v58[4] = (Il2CppClass *)v57;
      sub_1C2D434((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v57, v52, v53);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v59, *v48, 0, v60);
    v63 = v17->fields._items;
    v64 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v17->fields._version;
    if ( !v63 )
      goto LABEL_58;
    v65 = v17->fields._size;
    v66 = transform;
    if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)transform,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &v63->obj.klass + v65;
      v17->fields._size = v65 + 1;
      v67[4] = (Il2CppClass *)v66;
      sub_1C2D434((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v66, v61, v62);
    }
  }
  v68 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v68,
    v17,
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
  v72 = sub_1C2D6DC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v72, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0);
  if ( !v72 )
    goto LABEL_58;
  v73 = (System_Delegate_o **)(v72 + 32);
  v74 = *(System_Delegate_o **)(v72 + 32);
  v75 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v75,
    (Il2CppObject *)v12,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0);
  v76 = System_Delegate__Combine(v74, (System_Delegate_o *)v75, 0);
  v79 = v76;
  if ( v76 )
  {
    v80 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v76->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v73 = v76;
      if ( (WarBoardTaskBase_TaskCallback_c *)v76->klass == v80 )
        goto LABEL_50;
    }
    sub_1C2D9AC(v76);
  }
  *v73 = v79;
LABEL_50:
  sub_1C2D434((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v79, v77, v78);
  *(_BYTE *)(v72 + 26) = 1;
  v83 = v17->fields._items;
  v84 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v17->fields._version;
  if ( !v83 )
    goto LABEL_58;
  v85 = v17->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v17,
      (Il2CppObject *)v72,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = &v83->obj.klass + v85;
    v17->fields._size = v85 + 1;
    v86[4] = (Il2CppClass *)v72;
    sub_1C2D434((CGThumbnailListItem_o *)(v86 + 4), v72, v81, v82);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v17,
    (System_Collections_Generic_IEnumerable_T__o *)v30,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v87 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v87,
      (System_Collections_Generic_IEnumerable_T__o *)v17,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v87->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1C2D6EC(transform, v14);
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v17,
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

  if ( (byte_4C24BEE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24BEE = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_37855764(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v8, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C2D6EC(pieceData, taskList);
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
  __int64 v10; // x1
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v12; // x21
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_object__o *v14; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass *v22; // x1
  Il2CppClass **v23; // x0
  WarBoardServantPieceComponent_o *v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass *v31; // x1
  Il2CppClass **v32; // x0
  WarBoardManager_o *v33; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v35; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v38; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_37818516; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v41; // x0
  const MethodInfo *v42; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v44; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v45; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v47; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_38B3EC8 *v49; // x2
  System_Nullable_float__o v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass *v56; // x1
  Il2CppClass **v57; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v59; // x8
  System_String_o *v60; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x23
  __int64 v64; // x25
  __int64 v65; // x26
  ServantEntity_o *v66; // x25
  int v67; // w23
  bool v68; // w0
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  CGThumbnailListItem_o *v73; // x23
  System_Delegate_o *v74; // x25
  Il2CppObject *v75; // x22
  WarBoardTaskBase_TaskCallback_o *v76; // x26
  System_Delegate_o *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Delegate_o *v80; // x8
  WarBoardTaskBase_TaskCallback_c *v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  WarBoardWaitTime_o *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v96; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24BF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&WarBoardManager_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_1C2D490(&WarBoardWaitTime_TypeInfo);
    sub_1C2D490(&StringLiteral_6178/*"Escape_Effect"*/);
    sub_1C2D490(&StringLiteral_6041/*"Enemy_Dead_Effect"*/);
    sub_1C2D490(&StringLiteral_12743/*"Servant_Dead_Effect"*/);
    sub_1C2D490(&StringLiteral_12963/*"Special_Effect{0:D2}"*/);
    byte_4C24BF0 = 1;
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
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v12 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v12 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v12, (int32_t)gameObject, 0);
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
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality(EventBossUI, 0, 0);
  if ( v15 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v15,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v16);
    if ( !v14 )
      goto LABEL_101;
    items = v14->fields._items;
    v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !items )
      goto LABEL_101;
    v21 = v14->fields._size;
    v22 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v21 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + v21;
      v14->fields._size = v21 + 1;
      v23[4] = v22;
      sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v24,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v25);
    v28 = v14->fields._items;
    v29 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !v28 )
      goto LABEL_101;
    v30 = v14->fields._size;
    v31 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &v28->obj.klass + v30;
      v14->fields._size = v30 + 1;
      v32[4] = v31;
      sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v33 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v33 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v33, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v35 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v38 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v38,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v35 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v35, 0) )
  {
    gameObject = (void *)WarBoardData__get_id(v35, 0);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0);
    id = WarBoardData__get_id(v35, 0);
    v38 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0, 0);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0, 0);
  if ( !v38 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_37818516 = WarBoardManager__GetEventTasks_37818516((WarBoardManager_o *)gameObject, 24, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_37818516,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v41 = WarBoardManager__GetEventTasks_37818516((WarBoardManager_o *)gameObject, 25, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)v41,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v35, v42);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v44 = WarBoardManager__GetEventTasks_37818516(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v44,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v45 = WarBoardManager__GetEventTasks_37818516(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)v45,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v47 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)v47,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    *(_QWORD *)&v98.fields.hasValue = &v96;
    *(_QWORD *)&v96.fields.hasValue = 0;
    *(_QWORD *)&v96.fields.value.fields.y = 0;
    *(_QWORD *)&v98.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v98, localPosition, v49);
    if ( !Instance )
      goto LABEL_101;
    v50 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v96, v50, 1, 1, 0, 0);
    if ( !v14 )
      goto LABEL_101;
    v53 = v14->fields._items;
    v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !v53 )
      goto LABEL_101;
    v55 = v14->fields._size;
    v56 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v53->obj.klass + v55;
      v14->fields._size = v55 + 1;
      v57[4] = v56;
      sub_1C2D434((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v56, v51, v52);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0);
  v59 = (System_String_o **)&StringLiteral_6041/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v59 = (System_String_o **)&StringLiteral_12743/*"Servant_Dead_Effect"*/;
  v60 = *v59;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v65 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v99.fields.currentCryptoKey = v65;
  *(_QWORD *)&v99.fields.fakeValue = v64;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v99, 0);
  if ( !v63 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v63,
                 (int32_t)gameObject,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v66 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0);
  if ( !v66 )
    goto LABEL_101;
  v67 = (int)gameObject;
  v68 = ServantEntity__checkIsHeroineSvt(v66, 0);
  if ( v67 == 1 || v68 )
  {
    v60 = (System_String_o *)StringLiteral_6178/*"Escape_Effect"*/;
  }
  else if ( v67 >= 2 )
  {
    *(_DWORD *)&v96.fields.hasValue = v67;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v69, v70, v71);
    v60 = System_String__Format((System_String_o *)StringLiteral_12963/*"Special_Effect{0:D2}"*/, v72, 0);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v60, 0);
  if ( !gameObject )
LABEL_101:
    sub_1C2D6EC(gameObject, v10);
  v73 = (CGThumbnailListItem_o *)((char *)gameObject + 40);
  v74 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v75 = (Il2CppObject *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v76 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v76,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0);
  v77 = System_Delegate__Combine(v74, (System_Delegate_o *)v76, 0);
  v80 = v77;
  if ( !v77 )
    goto LABEL_82;
  v81 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v77->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v73->klass = (CGThumbnailListItem_c *)v77, (WarBoardTaskBase_TaskCallback_c *)v77->klass != v81) )
  {
    sub_1C2D9AC(v77);
LABEL_82:
    v73->klass = (CGThumbnailListItem_c *)v80;
  }
  sub_1C2D434(v73, (int32_t)v80, v78, v79);
  if ( !v14 )
    goto LABEL_101;
  v84 = v14->fields._items;
  v85 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v84 )
    goto LABEL_101;
  v86 = v14->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v75,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = &v84->obj.klass + v86;
    v14->fields._size = v86 + 1;
    v87[4] = (Il2CppClass *)v75;
    sub_1C2D434((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v75, v82, v83);
  }
  v88 = (WarBoardWaitTime_o *)sub_1C2D6DC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v88, 0.5, 0);
  v91 = v14->fields._items;
  v92 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v91 )
    goto LABEL_101;
  v93 = v14->fields._size;
  if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v88,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v14->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v88;
    sub_1C2D434((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v88, v89, v90);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v38,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v38,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v14,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_37848248(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
      0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v6; // x1

  if ( (byte_4C24BFB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18830/*"ef_guts"*/);
    byte_4C24BFB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18830/*"ef_guts"*/,
      taskList,
      0);
}


void WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4C24BFA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18851/*"ef_special_invincible01"*/);
    byte_4C24BFA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18851/*"ef_special_invincible01"*/,
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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int v10; // w23
  int v11; // w24
  int v12; // w25
  int32_t MaxHp; // w0
  int v14; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v17; // s10
  __int64 v18; // x21
  System_Delegate_o **v19; // x22
  System_Delegate_o *v20; // x23
  WarBoardServantPieceComponent___c_c *v21; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v23; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4C24BF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_1C2D490(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C2D490(&WarBoardGaugePerformance_TypeInfo);
    byte_4C24BF8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)gameObject, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v10 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v11 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v12 = (int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  v14 = v12 - damage;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v17 = (float)v14 / (float)MaxHp;
  v18 = sub_1C2D6DC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v18,
    hpBar,
    (float)v10 / (float)v11,
    v17,
    gaugeAnimationFullDuration,
    0);
  if ( !v18 )
    goto LABEL_30;
  v19 = (System_Delegate_o **)(v18 + 32);
  v20 = *(System_Delegate_o **)(v18 + 32);
  v21 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v21 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__57_0 = v21->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v23,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v25, v26);
  }
  v27 = System_Delegate__Combine(v20, (System_Delegate_o *)_9__57_0, 0);
  if ( !v27 )
  {
    *v19 = 0;
    goto LABEL_22;
  }
  v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v19 = v27;
    if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == v30 )
    {
LABEL_22:
      sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v27, v28, v29);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v9 )
      {
        items = v9->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v9->fields._version;
        if ( items )
        {
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v18,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v36 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v18;
            sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), v18, v31, v32);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v9,
                (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_37855764(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
              0);
            return;
          }
        }
      }
LABEL_30:
      sub_1C2D6EC(gameObject, v8);
    }
  }
  sub_1C2D9AC(v27);
}


void WarBoardServantPieceComponent__OnMapGainHP(
        WarBoardServantPieceComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  float v12; // s8
  int32_t MaxHp; // w0
  int v14; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v17; // s10
  __int64 v18; // x21
  System_Delegate_o **v19; // x22
  System_Delegate_o *v20; // x23
  WarBoardServantPieceComponent___c_c *v21; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v23; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4C24BFD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_1C2D490(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C2D490(&WarBoardGaugePerformance_TypeInfo);
    byte_4C24BFD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v12 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  v14 = gainHp + oldHp;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v17 = (float)v14 / (float)MaxHp;
  v18 = sub_1C2D6DC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v18, hpBar, v12, v17, gaugeAnimationFullDuration, 0);
  if ( !v18 )
    goto LABEL_28;
  v19 = (System_Delegate_o **)(v18 + 32);
  v20 = *(System_Delegate_o **)(v18 + 32);
  v21 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v21 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__63_0 = v21->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v23,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v25, v26);
  }
  v27 = System_Delegate__Combine(v20, (System_Delegate_o *)_9__63_0, 0);
  if ( !v27 )
  {
    *v19 = 0;
    goto LABEL_20;
  }
  v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v19 = v27;
    if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == v30 )
    {
LABEL_20:
      sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v27, v28, v29);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v11 )
      {
        items = v11->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v36 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v18;
            sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), v18, v31, v32);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_37855764(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0);
            return;
          }
        }
      }
LABEL_28:
      sub_1C2D6EC(gameObject, v10);
    }
  }
  sub_1C2D9AC(v27);
}


void WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v9; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v11; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v15; // x21
  Il2CppObject *v16; // x22
  const MethodInfo_38B3EC8 *v17; // x2
  System_Nullable_float__o v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v24; // x1
  Il2CppClass **v25; // x0
  CGThumbnailListItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v28; // x22
  WarBoardTaskBase_TaskCallback_o *v29; // x25
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Delegate_o *v33; // x8
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  WarBoardWaitTime_o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  System_Nullable_Vector3__o v48; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24BF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_1C2D490(&WarBoardWaitTime_TypeInfo);
    sub_1C2D490(&StringLiteral_12744/*"Servant_Regenerate_Effect"*/);
    byte_4C24BF1 = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v9 = 0;
  while ( (int)v9 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v9 >= LODWORD(breakPoints->max_length) )
        sub_1C2D6F4(Instance, v6, v7);
      Instance = breakPoints->m_Items[v9];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0);
        pieceData = this->fields.pieceData;
        ++v9;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v11 = this->fields.pieceData;
  if ( !v11 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v11->fields._nowSquareIndex_k__BackingField,
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
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v51, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v49.fields.hasValue = &v48;
  *(_QWORD *)&v48.fields.hasValue = 0;
  *(_QWORD *)&v48.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v49, localPosition, v17);
  if ( !v16 )
    goto LABEL_10;
  v18 = 0;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v16,
                                                v48,
                                                v18,
                                                1,
                                                0,
                                                1,
                                                0);
  if ( !v15 )
    goto LABEL_10;
  items = v15->fields._items;
  v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v15->fields._size;
  v24 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)Instance,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v24;
    sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12744/*"Servant_Regenerate_Effect"*/,
                                                0);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v6);
  p_activeObject = (CGThumbnailListItem_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v28 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0);
  v30 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v29, 0);
  v33 = v30;
  if ( v30 )
  {
    v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v30->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (CGThumbnailListItem_c *)v30;
      if ( (WarBoardTaskBase_TaskCallback_c *)v30->klass == v34 )
        goto LABEL_28;
    }
    sub_1C2D9AC(v30);
  }
  p_activeObject->klass = (CGThumbnailListItem_c *)v33;
LABEL_28:
  sub_1C2D434(p_activeObject, (int32_t)v33, v31, v32);
  v37 = v15->fields._items;
  v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v37 )
    goto LABEL_10;
  v39 = v15->fields._size;
  if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v28,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    v15->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)v28;
    sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v28, v35, v36);
  }
  v41 = (WarBoardWaitTime_o *)sub_1C2D6DC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v41, 0.5, 0);
  v44 = v15->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v44 )
    goto LABEL_10;
  v46 = v15->fields._size;
  if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v41,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v47 = &v44->obj.klass + v46;
    v15->fields._size = v46 + 1;
    v47[4] = (Il2CppClass *)v41;
    sub_1C2D434((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_37848248(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
    0);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_38B3EC8 *v14; // x2
  System_Nullable_float__o v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v21; // x1
  Il2CppClass **v22; // x0
  Il2CppObject *v23; // x20
  CGThumbnailListItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v26; // x24
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Delegate_o *v30; // x8
  WarBoardTaskBase_TaskCallback_c *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  Il2CppObject *v38; // x20
  System_Nullable_Vector3__o v39; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24BF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_1C2D490(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11275/*"Reinforcement_Effect_1"*/);
    byte_4C24BF9 = 1;
  }
  v5 = sub_1C2D6DC(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v40.fields.hasValue = &v39;
  *(_QWORD *)&v39.fields.hasValue = 0;
  *(_QWORD *)&v39.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v40, localPosition, v14);
  if ( !Instance )
    goto LABEL_23;
  v15 = 0;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                           (WarBoardManager_o *)Instance,
                                           v39,
                                           v15,
                                           1,
                                           0,
                                           1,
                                           0);
  if ( !v12 )
    goto LABEL_23;
  items = v12->fields._items;
  v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v12->fields._size;
  v21 = transform;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)transform,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_11275/*"Reinforcement_Effect_1"*/,
                                           0);
  if ( !transform )
LABEL_23:
    sub_1C2D6EC(transform, v7);
  v23 = (Il2CppObject *)transform;
  p_fields = (CGThumbnailListItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v26 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0);
  v27 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v26, 0);
  v30 = v27;
  if ( v27 )
  {
    v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_fields->klass = (CGThumbnailListItem_c *)v27;
      if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == v31 )
        goto LABEL_17;
    }
    sub_1C2D9AC(v27);
  }
  p_fields->klass = (CGThumbnailListItem_c *)v30;
LABEL_17:
  sub_1C2D434(p_fields, (int32_t)v30, v28, v29);
  v34 = v12->fields._items;
  v35 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v12->fields._version;
  if ( !v34 )
    goto LABEL_23;
  v36 = v12->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      v23,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v12->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v23;
    sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v23, v32, v33);
  }
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___ToArray(
                                           v12,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v38 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v38, (WarBoardTaskBase_array *)transform, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardServantPieceComponent__SetActiveNpBarEffect(
        WarBoardServantPieceComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *npBarEffect; // x19

  npBarEffect = this->fields.npBarEffect;
  if ( active )
  {
    this = (WarBoardServantPieceComponent_o *)this->fields.pieceData;
    if ( !this )
      goto LABEL_7;
    *(_QWORD *)&active = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0) >= 1.0;
  }
  else
  {
    *(_QWORD *)&active = 0;
  }
  if ( !npBarEffect )
LABEL_7:
    sub_1C2D6EC(this, active);
  UnityEngine_GameObject__SetActive(npBarEffect, active, 0);
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
  il2cpp_array_size_t max_length; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v12; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24BE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_22376/*"onBoard_initial_placement_class2_{0}"*/);
    byte_4C24BE6 = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1C2D6EC(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
    sub_1C2D6F4(ServantClassEntities, method, v7);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  m_CachedPtr_high = HIDWORD(classIconRoot[1].fields.m_CachedPtr);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr_high, v7, v8, v9);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22376/*"onBoard_initial_placement_class2_{0}"*/, v12, 0);
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
  const MethodInfo *v6; // x1
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_4C24BF6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24BF6 = 1;
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
             (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v6);
        return;
      }
    }
    pieceData = (WarBoardPieceData_o *)this->fields.partyBuffComponent;
    if ( pieceData )
    {
      WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        (WarBoardServantPiecePartyBuffComponent_o *)pieceData,
        level,
        v8);
      return;
    }
LABEL_14:
    sub_1C2D6EC(pieceData, v6);
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
    sub_1C2D6EC(this, userServantId);
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
    sub_1C2D6EC(this, userServantEquipId);
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
  int32_t servantLevel; // w20
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v23; // x21
  UISprite_o *v24; // x21
  System_String_o *v25; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v27; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v34; // x1
  Il2CppClass **v35; // x0
  struct WarBoardPieceData_o *v36; // x8
  struct WarBoardPieceData_o *v37; // x8
  WarBoardSquareData_o *v38; // x0
  bool v39; // w20
  struct WarBoardPieceData_o *v40; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v45; // x8
  UISprite_o *v46; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v48; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v50; // x20
  UnityEngine_Object_o *v51; // x20
  UILabel_o *v52; // x20
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct WarBoardPieceData_o *v56; // x8
  WarBoardServantPieceComponent_o *v57; // x21
  Il2CppObject *v58; // x0
  struct WarBoardPieceData_o *v59; // x8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v63; // w20
  struct WarBoardPieceData_o *v64; // x8
  struct WarBoardPieceData_o *v65; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v67; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C24BE7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_22879/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_1C2D490(&StringLiteral_15409/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_4C24BE7 = 1;
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
    v69 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v5->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v5->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_113;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v12, v13, v14);
      v67 = npcDispLimitCount_k__BackingField;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v17, v18, v19);
      v21 = System_String__Concat(v16, v20, 0);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v23 = v21;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_40385372(servantLevel, enemyIcon, v23, 0) )
        goto LABEL_30;
      v24 = (UISprite_o *)v2->fields.enemyIcon;
      v25 = System_Int32__ToString((int32_t)&v69, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_40385372(servantLevel, v24, v25, 0) )
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
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_40385372(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_22879/*"questinfo_enemyface_bg"*/,
                                                  0);
      v27 = v2->fields.pieceData;
      if ( !v27 )
        goto LABEL_113;
      if ( v27->fields._IsShadow_k__BackingField )
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
        v32 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_113;
        size = removeTweenTargetObjects->fields._size;
        v34 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v34;
          sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
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
            v39 = !v11;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39, 0);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39, 0);
                v40 = v2->fields.pieceData;
                if ( v40 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v40->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v40->fields._iconFrameType_k__BackingField;
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
                    v45 = v2->fields.pieceData;
                    if ( !v45 )
                      goto LABEL_113;
                    v46 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v45->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v46, iconEquipId_k__BackingField, 0, 0);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
                    v48 = v2->fields.pieceData;
                    if ( v48 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v48->fields._iconEquipId_k__BackingField > 0,
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
                          v50 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0);
                          if ( !v50 )
                            goto LABEL_113;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v50,
                            (unsigned __int8)this & 1,
                            0);
                        }
                        v51 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_105;
                        v52 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15409/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0);
                        v56 = v2->fields.pieceData;
                        if ( !v56 )
                          goto LABEL_113;
                        v57 = this;
                        iconLevel_k__BackingField = v56->fields._iconLevel_k__BackingField;
                        v58 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &iconLevel_k__BackingField,
                                                v53,
                                                v54,
                                                v55);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format((System_String_o *)v57, v58, 0);
                        if ( !v52 )
                          goto LABEL_113;
                        UILabel__set_text(v52, (System_String_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_113;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0);
                        v59 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v59 )
                            goto LABEL_113;
                          if ( v59->fields._roleType_k__BackingField == 1 )
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
                        else if ( !v59 )
                        {
                          goto LABEL_113;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_113;
                        v63 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0);
                        if ( (v63 & 1) != 0 )
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
                        v70.fields.z = *p_z;
                        v70.fields.y = *p_y;
                        v70.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v70, 0);
LABEL_105:
                        v64 = v2->fields.pieceData;
                        if ( v64 )
                        {
                          if ( !v64->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                          if ( this )
                          {
                            v65 = v2->fields.pieceData;
                            if ( v65 )
                            {
                              this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                              if ( this )
                              {
                                Square = WarBoardData__GetSquare(
                                           (WarBoardData_o *)this,
                                           v65->fields._nowSquareIndex_k__BackingField,
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
    sub_1C2D6EC(this, method);
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
  v36 = v2->fields.pieceData;
  if ( !v36 )
    goto LABEL_113;
  if ( !v36->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_113;
  v37 = v2->fields.pieceData;
  if ( !v37 )
    goto LABEL_113;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_113;
  v38 = WarBoardData__GetSquare((WarBoardData_o *)this, v37->fields._nowSquareIndex_k__BackingField, 0);
  if ( v38 )
    WarBoardSquareData__ActiveEditPointArrow(v38, 0);
}


bool WarBoardServantPieceComponent__ShowStatus(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24BE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C24BE8 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
    sub_1C2D6EC(transform, v9);
  WarBoardManager__ShowServantSimplePopup(v7, pieceData, position, 0);
  return 1;
}


void WarBoardServantPieceComponent__UpdateNpBars(
        WarBoardServantPieceComponent_o *this,
        float progress,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct UISprite_array *npBars; // x8
  il2cpp_array_size_t max_length; // x9
  WarBoardServantPieceComponent_o *v6; // x19
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x8

  npBars = this->fields.npBars;
  this->fields.nowNpProgress = progress;
  if ( npBars )
  {
    max_length = npBars->max_length;
    v6 = this;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_27;
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0);
      npBars = v6->fields.npBars;
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
        v8 = v6->fields.npBars;
        if ( !v8 )
          goto LABEL_26;
        if ( LODWORD(v8->max_length) <= 1 )
          goto LABEL_27;
        this = (WarBoardServantPieceComponent_o *)v8->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0);
      }
    }
    v9 = v6->fields.npBars;
    if ( !v9 )
      goto LABEL_26;
    if ( SLODWORD(v9->max_length) < 3 )
      return;
    this = (WarBoardServantPieceComponent_o *)v9->m_Items[2];
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
    v10 = v6->fields.npBars;
    if ( !v10 )
LABEL_26:
      sub_1C2D6EC(this, method);
    if ( LODWORD(v10->max_length) > 2 )
    {
      this = (WarBoardServantPieceComponent_o *)v10->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1C2D6F4(this, method, v3);
  }
}


bool WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void WarBoardServantPieceComponent___OnDead_b__46_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardServantPieceComponent___OnRevive_b__47_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4C24BFE & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4C24BFE = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(button, method);
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

  if ( (byte_4C24BFF & 1) == 0 )
  {
    sub_1C2D490(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_4C24BFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int monitor; // w8

  if ( (byte_4C24C00 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C24C00 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1C2D538(int___TypeInfo, 3);
  if ( !x || !result )
    sub_1C2D6EC(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1C2D6F4(result, v5, v6);
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
  __int64 v6; // x1
  struct UISprite_o *hpBarWhiteSprite; // x8
  const MethodInfo *v8; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4C24C01 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    byte_4C24C01 = 1;
  }
  v3 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0, v8);
      return;
    }
LABEL_11:
    sub_1C2D6EC(Instance, v6);
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
  if ( (byte_4C24C02 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_4C24C02 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !eventBossUI )
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C24C03 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1C2D490(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_4C24C03 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !eventBossUI )
    sub_1C2D6EC(this, method);
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
  __int64 v3; // x1
  struct WarBoardServantPieceComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._15_ChangeStatus.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._15_ChangeStatus.method);
}
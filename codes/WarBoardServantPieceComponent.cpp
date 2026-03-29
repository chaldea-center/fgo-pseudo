void WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_D00A30;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_D00240;
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

  if ( (byte_4D2E206 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E206 = 1;
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
    sub_1C93D2C(pieceData, method);
  }
}


void WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4D2E205 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_12823/*"ServantDying"*/);
    byte_4D2E205 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12823/*"ServantDying"*/,
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
      sub_1C93D2C(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12823/*"ServantDying"*/,
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
      sub_1C93D2C(pieceData, isBreak);
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

  if ( (byte_4D2E211 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E211 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D2E20F & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E20F = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0) )
  {
    if ( selectPiece )
    {
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_1C93B7C(int___TypeInfo, 1);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          sub_1C93D34(v7);
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
      sub_1C93D2C(v7, v6);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x19
  System_Delegate_o **v22; // x21
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Delegate_o *v32; // x8
  WarBoardTaskBase_TaskCallback_c *v33; // x1

  if ( (byte_4D2E20D & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_1C93AD4(&WarBoardWaitTime_TypeInfo);
    byte_4D2E20D = 1;
  }
  v6 = sub_1C93D20(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)eventBossUI, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)endAction, v15, v16, v17, v18, v19, v20),
        v21 = sub_1C93D20(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v21, 0.0, 0),
        !v21) )
  {
    sub_1C93D2C(v7, v8);
  }
  v22 = (System_Delegate_o **)(v21 + 40);
  v23 = *(System_Delegate_o **)(v21 + 40);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v6,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0);
  v32 = v25;
  if ( !v25 )
    goto LABEL_9;
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v22 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v33) )
  {
    sub_1C940C8(v25);
LABEL_9:
    *v22 = v32;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 40), (int32_t)v32, v26, v27, v28, v29, v30, v31);
  *(_BYTE *)(v21 + 26) = 1;
  return (WarBoardTaskBase_o *)v21;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Func_bool__o *v13; // x20
  UnityEngine_WaitUntil_o *v14; // x21
  __int64 v15; // x20
  System_Delegate_o **v16; // x21
  System_Delegate_o *v17; // x22
  WarBoardTaskBase_TaskCallback_o *v18; // x23
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Delegate_o *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_4D2E20C & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    byte_4D2E20C = 1;
  }
  v4 = sub_1C93D20(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v4 + 16) = 0;
  v13 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0);
  v14 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0);
  v15 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v15, (UnityEngine_CustomYieldInstruction_o *)v14, 0);
  if ( !v15 )
LABEL_11:
    sub_1C93D2C(v5, v6);
  v16 = (System_Delegate_o **)(v15 + 32);
  v17 = *(System_Delegate_o **)(v15 + 32);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0);
  v26 = v19;
  if ( !v19 )
    goto LABEL_9;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v16 = v19, (WarBoardTaskBase_TaskCallback_c *)v19->klass != v27) )
  {
    sub_1C940C8(v19);
LABEL_9:
    *v16 = v26;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)v26, v20, v21, v22, v23, v24, v25);
  return (WarBoardCallbackTask_o *)v15;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Func_bool__o *v13; // x20
  UnityEngine_WaitUntil_o *v14; // x21
  __int64 v15; // x20
  System_Delegate_o **v16; // x21
  System_Delegate_o *v17; // x22
  WarBoardTaskBase_TaskCallback_o *v18; // x23
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Delegate_o *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_4D2E20E & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    byte_4D2E20E = 1;
  }
  v4 = sub_1C93D20(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v4 + 16) = 0;
  v13 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0);
  v14 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0);
  v15 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v15, (UnityEngine_CustomYieldInstruction_o *)v14, 0);
  if ( !v15 )
LABEL_11:
    sub_1C93D2C(v5, v6);
  v16 = (System_Delegate_o **)(v15 + 32);
  v17 = *(System_Delegate_o **)(v15 + 32);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0);
  v26 = v19;
  if ( !v19 )
    goto LABEL_9;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v16 = v19, (WarBoardTaskBase_TaskCallback_c *)v19->klass != v27) )
  {
    sub_1C940C8(v19);
LABEL_9:
    *v16 = v26;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)v26, v20, v21, v22, v23, v24, v25);
  return (WarBoardCallbackTask_o *)v15;
}


void WarBoardServantPieceComponent__EditPiece(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4D2E204 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E204 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(servantIcon, method);
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
    sub_1C93D2C(servantIcon, method);
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
  long double inited; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  unsigned int v10; // w9
  _QWORD *v11; // x22
  __int64 v12; // x8
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  WarBoardServantPieceComponent___c_c *v18; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v20; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4D2E207 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_4D2E207 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C93B7C(int___TypeInfo, 3);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v10 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v10
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v10 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v10 <= 2) )
  {
    sub_1C93D34(BattleParticipantInfo);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v11[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C69B68(inited);
  if ( !warBoardData
    || (v14 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0)) == 0) )
  {
LABEL_27:
    sub_1C93D2C(BattleParticipantInfo, v6);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v16 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0);
    v17 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v18 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v18 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v18->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v20,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_1,
        (int32_t)_9__43_1,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v17,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v28,
                                                                 (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v29 = System_Linq_Enumerable__Concat_int_(
          v9,
          v14,
          (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4D2E216 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4D2E216 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0) )
  {
    sub_1C93D2C(button, method);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v23; // x2
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2E1FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20465/*"icon_strong_enemy"*/);
    sub_1C93AD4(&StringLiteral_20245/*"hp_gauge_boss"*/);
    sub_1C93AD4(&StringLiteral_23585/*"servant_base_{0}"*/);
    byte_4D2E1FF = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v24 = pieceData->fields._forceId_k__BackingField + 1;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23585/*"servant_base_{0}"*/, v8, 0);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20245/*"hp_gauge_boss"*/, 0);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v10);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v9);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v9);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0, 0) )
  {
    v12 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
    if ( !v12 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v12, (unsigned __int8)hpBar & 1, 0);
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
                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20465/*"icon_strong_enemy"*/, 0);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1C93D2C(hpBar, v6);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&buffTrunNotice->fields.pieceData,
      (int32_t)pieceData,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v23);
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2E203 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E203 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  WarBoardManager_TaskList_o *v21; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_39A43D0 *v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v33; // x1
  Il2CppClass **v34; // x0
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v36; // x28
  System_Collections_Generic_List_object__o *v37; // x26
  const MethodInfo *v38; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v40; // x27
  const MethodInfo_39A43D0 *v41; // x2
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct WarBoardTaskBase_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  UnityEngine_Transform_o *v51; // x1
  Il2CppClass **v52; // x0
  bool IsStageBoss; // w0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v61; // x27
  WarBoardEventBossUIComponent_o **v62; // x27
  UnityEngine_Object_o *v63; // x28
  _BOOL8 v64; // x0
  const MethodInfo *v65; // x2
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct WarBoardTaskBase_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  UnityEngine_Transform_o *v75; // x1
  Il2CppClass **v76; // x0
  WarBoardServantPieceComponent_o *v77; // x0
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct WarBoardTaskBase_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  UnityEngine_Transform_o *v88; // x1
  Il2CppClass **v89; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v93; // x21
  System_Delegate_o **v94; // x22
  System_Delegate_o *v95; // x23
  WarBoardTaskBase_TaskCallback_o *v96; // x24
  System_Delegate_o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  System_Delegate_o *v104; // x8
  WarBoardTaskBase_TaskCallback_c *v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  struct WarBoardTaskBase_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  WarBoardManager_TaskList_o *v116; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v118; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v121; // 0:x0.16
  System_Nullable_Vector3__o v122; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4D2E209 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&WarBoardManager_TaskList_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_1C93AD4(&WarBoardGaugePerformance_TypeInfo);
    byte_4D2E209 = 1;
  }
  priority = 0;
  v12 = sub_1C93D20(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = (WarBoardManager_TaskList_o *)sub_1C93D20(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v21, 0);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v121.fields.hasValue = &v118;
    *(_QWORD *)&v118.fields.hasValue = 0;
    *(_QWORD *)&v118.fields.value.fields.y = 0;
    *(_QWORD *)&v121.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v121, localPosition, v23);
    if ( !Instance )
      goto LABEL_58;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v118,
                                             cameraSize,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v21 )
      goto LABEL_58;
    items = v21->fields._items;
    v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v21->fields._size;
    v33 = transform;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v33;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v33, v24, v25, v26, v27, v28, v29);
    }
  }
  v116 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v36 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v38);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_38642196(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v36 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v36,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_38642196(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v37 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v21 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v36,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    v124 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v122.fields.hasValue = &v118;
    v118 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v122.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v122, v124, v41);
    if ( !v40 )
      goto LABEL_58;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v40,
                                             v118,
                                             cameraSize,
                                             1,
                                             1,
                                             0,
                                             0);
    v48 = v21->fields._items;
    v49 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v48 )
      goto LABEL_58;
    v50 = v21->fields._size;
    v51 = transform;
    if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &v48->obj.klass + v50;
      v21->fields._size = v50 + 1;
      v52[4] = (Il2CppClass *)v51;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v51, v42, v43, v44, v45, v46, v47);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0);
  EventBossUI = 0;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v61 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v61 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v61, (int32_t)transform, 0);
  }
  *(_QWORD *)(v12 + 16) = EventBossUI;
  v62 = (WarBoardEventBossUIComponent_o **)(v12 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)EventBossUI, v54, v55, v56, v57, v58, v59);
  v63 = *(UnityEngine_Object_o **)(v12 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v64 = UnityEngine_Object__op_Inequality(v63, 0, 0);
  if ( v64 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v64,
                                             *v62,
                                             v65);
    v72 = v21->fields._items;
    v73 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v72 )
      goto LABEL_58;
    v74 = v21->fields._size;
    v75 = transform;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &v72->obj.klass + v74;
      v21->fields._size = v74 + 1;
      v76[4] = (Il2CppClass *)v75;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 4), (int32_t)v75, v66, v67, v68, v69, v70, v71);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v77, *v62, 0, v78);
    v85 = v21->fields._items;
    v86 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v85 )
      goto LABEL_58;
    v87 = v21->fields._size;
    v88 = transform;
    if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v85->obj.klass + v87;
      v21->fields._size = v87 + 1;
      v89[4] = (Il2CppClass *)v88;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v88, v79, v80, v81, v82, v83, v84);
    }
  }
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    cameraSize,
    v21,
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
  v93 = sub_1C93D20(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v93, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0);
  if ( !v93 )
    goto LABEL_58;
  v94 = (System_Delegate_o **)(v93 + 32);
  v95 = *(System_Delegate_o **)(v93 + 32);
  v96 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v96,
    (Il2CppObject *)v12,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0);
  v97 = System_Delegate__Combine(v95, (System_Delegate_o *)v96, 0);
  v104 = v97;
  if ( v97 )
  {
    v105 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v97->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v94 = v97;
      if ( (WarBoardTaskBase_TaskCallback_c *)v97->klass == v105 )
        goto LABEL_50;
    }
    sub_1C940C8(v97);
  }
  *v94 = v104;
LABEL_50:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v93 + 32), (int32_t)v104, v98, v99, v100, v101, v102, v103);
  *(_BYTE *)(v93 + 26) = 1;
  v112 = v21->fields._items;
  v113 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v112 )
    goto LABEL_58;
  v114 = v21->fields._size;
  if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v21,
      (Il2CppObject *)v93,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v115 = &v112->obj.klass + v114;
    v21->fields._size = v114 + 1;
    v115[4] = (Il2CppClass *)v93;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v115 + 4), v93, v106, v107, v108, v109, v110, v111);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v37,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v116 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v116,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v116->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1C93D2C(transform, v14);
  WarBoardManager__AddTask_38679444(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  WarBoardManager_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4D2E208 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E208 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v9, EventBossUI, v10);
    if ( v8 )
    {
      items = v8->fields._items;
      v18 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        v20 = pieceData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_38679444(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v8, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C93D2C(pieceData, taskList);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass *v26; // x1
  Il2CppClass **v27; // x0
  WarBoardServantPieceComponent_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  WarBoardManager_o *v41; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v43; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v46; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_38642196; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v49; // x0
  const MethodInfo *v50; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v52; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v53; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v55; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_39A43D0 *v57; // x2
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass *v67; // x1
  Il2CppClass **v68; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v70; // x8
  System_String_o *v71; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x23
  __int64 v75; // x25
  __int64 v76; // x26
  ServantEntity_o *v77; // x25
  int v78; // w23
  bool v79; // w0
  Il2CppObject *v80; // x0
  GrandQuestFolderBoardItem_o *v81; // x23
  System_Delegate_o *v82; // x25
  Il2CppObject *v83; // x22
  WarBoardTaskBase_TaskCallback_o *v84; // x26
  System_Delegate_o *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  System_Delegate_o *v92; // x8
  WarBoardTaskBase_TaskCallback_c *v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  WarBoardWaitTime_o *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v116; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E20A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&WarBoardManager_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_1C93AD4(&WarBoardWaitTime_TypeInfo);
    sub_1C93AD4(&StringLiteral_6218/*"Escape_Effect"*/);
    sub_1C93AD4(&StringLiteral_6079/*"Enemy_Dead_Effect"*/);
    sub_1C93AD4(&StringLiteral_12846/*"Servant_Dead_Effect"*/);
    sub_1C93AD4(&StringLiteral_13064/*"Special_Effect{0:D2}"*/);
    byte_4D2E20A = 1;
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
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !items )
      goto LABEL_101;
    v25 = v14->fields._size;
    v26 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v25 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + v25;
      v14->fields._size = v25 + 1;
      v27[4] = v26;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v28,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v29);
    v36 = v14->fields._items;
    v37 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !v36 )
      goto LABEL_101;
    v38 = v14->fields._size;
    v39 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v36->obj.klass + v38;
      v14->fields._size = v38 + 1;
      v40[4] = v39;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v39, v30, v31, v32, v33, v34, v35);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v41 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v41 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v41, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v43 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v46 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v46,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v43 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v43, 0) )
  {
    gameObject = (void *)WarBoardData__get_id(v43, 0);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0);
    id = WarBoardData__get_id(v43, 0);
    v46 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0, 0);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0, 0);
  if ( !v46 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_38642196 = WarBoardManager__GetEventTasks_38642196((WarBoardManager_o *)gameObject, 24, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_38642196,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v49 = WarBoardManager__GetEventTasks_38642196((WarBoardManager_o *)gameObject, 25, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)v49,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v43, v50);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v52 = WarBoardManager__GetEventTasks_38642196(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v52,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v53 = WarBoardManager__GetEventTasks_38642196(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)v53,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v55 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)v55,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    *(_QWORD *)&v118.fields.hasValue = &v116;
    *(_QWORD *)&v116.fields.hasValue = 0;
    *(_QWORD *)&v116.fields.value.fields.y = 0;
    *(_QWORD *)&v118.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v118, localPosition, v57);
    if ( !Instance )
      goto LABEL_101;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v116, size, 1, 1, 0, 0);
    if ( !v14 )
      goto LABEL_101;
    v64 = v14->fields._items;
    v65 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v14->fields._version;
    if ( !v64 )
      goto LABEL_101;
    v66 = v14->fields._size;
    v67 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v64->obj.klass + v66;
      v14->fields._size = v66 + 1;
      v68[4] = v67;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v67, v58, v59, v60, v61, v62, v63);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0);
  v70 = (System_String_o **)&StringLiteral_6079/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v70 = (System_String_o **)&StringLiteral_12846/*"Servant_Dead_Effect"*/;
  v71 = *v70;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v76 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v119.fields.currentCryptoKey = v76;
  *(_QWORD *)&v119.fields.fakeValue = v75;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v119, 0);
  if ( !v74 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v74,
                 (int32_t)gameObject,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v77 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0);
  if ( !v77 )
    goto LABEL_101;
  v78 = (int)gameObject;
  v79 = ServantEntity__checkIsHeroineSvt(v77, 0);
  if ( v78 == 1 || v79 )
  {
    v71 = (System_String_o *)StringLiteral_6218/*"Escape_Effect"*/;
  }
  else if ( v78 >= 2 )
  {
    *(_DWORD *)&v116.fields.hasValue = v78;
    v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
    v71 = System_String__Format((System_String_o *)StringLiteral_13064/*"Special_Effect{0:D2}"*/, v80, 0);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v71, 0);
  if ( !gameObject )
LABEL_101:
    sub_1C93D2C(gameObject, v10);
  v81 = (GrandQuestFolderBoardItem_o *)((char *)gameObject + 40);
  v82 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v83 = (Il2CppObject *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v84 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v84,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0);
  v85 = System_Delegate__Combine(v82, (System_Delegate_o *)v84, 0);
  v92 = v85;
  if ( !v85 )
    goto LABEL_82;
  v93 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v85->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v81->klass = (GrandQuestFolderBoardItem_c *)v85, (WarBoardTaskBase_TaskCallback_c *)v85->klass != v93) )
  {
    sub_1C940C8(v85);
LABEL_82:
    v81->klass = (GrandQuestFolderBoardItem_c *)v92;
  }
  sub_1C93A78(v81, (int32_t)v92, v86, v87, v88, v89, v90, v91);
  if ( !v14 )
    goto LABEL_101;
  v100 = v14->fields._items;
  v101 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v100 )
    goto LABEL_101;
  v102 = v14->fields._size;
  if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v83,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
  }
  else
  {
    v103 = &v100->obj.klass + v102;
    v14->fields._size = v102 + 1;
    v103[4] = (Il2CppClass *)v83;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v103 + 4), (int32_t)v83, v94, v95, v96, v97, v98, v99);
  }
  v104 = (WarBoardWaitTime_o *)sub_1C93D20(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v104, 0.5, 0);
  v111 = v14->fields._items;
  v112 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v111 )
    goto LABEL_101;
  v113 = v14->fields._size;
  if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v104,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v14->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v104;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v114 + 4), (int32_t)v104, v105, v106, v107, v108, v109, v110);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v46,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v46,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v14,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_38671928(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
      0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4D2E215 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19015/*"ef_guts"*/);
    byte_4D2E215 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19015/*"ef_guts"*/,
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

  if ( (byte_4D2E214 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19037/*"ef_special_invincible01"*/);
    byte_4D2E214 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19037/*"ef_special_invincible01"*/,
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4D2E212 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C93AD4(&WarBoardGaugePerformance_TypeInfo);
    byte_4D2E212 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v18 = sub_1C93D20(WarBoardGaugePerformance_TypeInfo);
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
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v23,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0,
      (int32_t)_9__57_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Delegate__Combine(v20, (System_Delegate_o *)_9__57_0, 0);
  if ( !v31 )
  {
    *v19 = 0;
    goto LABEL_22;
  }
  v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v19 = v31;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == v38 )
    {
LABEL_22:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v9 )
      {
        items = v9->fields._items;
        v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v9->fields._version;
        if ( items )
        {
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v18,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v48 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v18;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 4), v18, v39, v40, v41, v42, v43, v44);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v9,
                (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_38679444(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
              0);
            return;
          }
        }
      }
LABEL_30:
      sub_1C93D2C(gameObject, v8);
    }
  }
  sub_1C940C8(v31);
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4D2E217 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_1C93AD4(&WarBoardGaugePerformance_TypeInfo);
    byte_4D2E217 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v18 = sub_1C93D20(WarBoardGaugePerformance_TypeInfo);
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
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v23,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__63_0,
      (int32_t)_9__63_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Delegate__Combine(v20, (System_Delegate_o *)_9__63_0, 0);
  if ( !v31 )
  {
    *v19 = 0;
    goto LABEL_20;
  }
  v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v19 = v31;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == v38 )
    {
LABEL_20:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v11 )
      {
        items = v11->fields._items;
        v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v48 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v18;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 4), v18, v39, v40, v41, v42, v43, v44);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_38679444(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0);
            return;
          }
        }
      }
LABEL_28:
      sub_1C93D2C(gameObject, v10);
    }
  }
  sub_1C940C8(v31);
}


void WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v8; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppObject *v12; // x22
  const MethodInfo_39A43D0 *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v23; // x1
  Il2CppClass **v24; // x0
  GrandQuestFolderBoardItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v27; // x22
  WarBoardTaskBase_TaskCallback_o *v28; // x25
  System_Delegate_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Delegate_o *v36; // x8
  WarBoardTaskBase_TaskCallback_c *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  WarBoardWaitTime_o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Nullable_Vector3__o v59; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  System_Nullable_Vector3__o v61; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E20B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_1C93AD4(&WarBoardWaitTime_TypeInfo);
    sub_1C93AD4(&StringLiteral_12847/*"Servant_Regenerate_Effect"*/);
    byte_4D2E20B = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v8 = 0;
  while ( (int)v8 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v8 >= LODWORD(breakPoints->max_length) )
        sub_1C93D34(Instance);
      Instance = breakPoints->m_Items[v8];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0);
        pieceData = this->fields.pieceData;
        ++v8;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = this->fields.pieceData;
  if ( !v10 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v10->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)Instance,
                                                0);
  if ( !Instance )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, SquarePosition, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v61.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v61.fields.hasValue = &v59;
  *(_QWORD *)&v59.fields.hasValue = 0;
  *(_QWORD *)&v59.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v61, localPosition, v13);
  if ( !v12 )
    goto LABEL_10;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v12,
                                                v59,
                                                0,
                                                1,
                                                0,
                                                1,
                                                0);
  if ( !v11 )
    goto LABEL_10;
  items = v11->fields._items;
  v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v11->fields._size;
  v23 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Instance,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12847/*"Servant_Regenerate_Effect"*/,
                                                0);
  if ( !Instance )
LABEL_10:
    sub_1C93D2C(Instance, v6);
  p_activeObject = (GrandQuestFolderBoardItem_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v27 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v28 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v28,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0);
  v29 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v28, 0);
  v36 = v29;
  if ( v29 )
  {
    v37 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v29->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (GrandQuestFolderBoardItem_c *)v29;
      if ( (WarBoardTaskBase_TaskCallback_c *)v29->klass == v37 )
        goto LABEL_28;
    }
    sub_1C940C8(v29);
  }
  p_activeObject->klass = (GrandQuestFolderBoardItem_c *)v36;
LABEL_28:
  sub_1C93A78(p_activeObject, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  v44 = v11->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v44 )
    goto LABEL_10;
  v46 = v11->fields._size;
  if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v27,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v44->obj.klass + v46;
    v11->fields._size = v46 + 1;
    v47[4] = (Il2CppClass *)v27;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v27, v38, v39, v40, v41, v42, v43);
  }
  v48 = (WarBoardWaitTime_o *)sub_1C93D20(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v48, 0.5, 0);
  v55 = v11->fields._items;
  v56 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v55 )
    goto LABEL_10;
  v57 = v11->fields._size;
  if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v48,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v11->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v48;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v48, v49, v50, v51, v52, v53, v54);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_38671928(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
    0);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_39A43D0 *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v32; // x1
  Il2CppClass **v33; // x0
  Il2CppObject *v34; // x20
  GrandQuestFolderBoardItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Delegate_o *v45; // x8
  WarBoardTaskBase_TaskCallback_c *v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  Il2CppObject *v57; // x20
  System_Nullable_Vector3__o v58; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v59; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E213 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_1C93AD4(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_11368/*"Reinforcement_Effect_1"*/);
    byte_4D2E213 = 1;
  }
  v5 = sub_1C93D20(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  *(_QWORD *)&v59.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v59.fields.hasValue = &v58;
  *(_QWORD *)&v58.fields.hasValue = 0;
  *(_QWORD *)&v58.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v59, localPosition, v22);
  if ( !Instance )
    goto LABEL_23;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                           (WarBoardManager_o *)Instance,
                                           v58,
                                           0,
                                           1,
                                           0,
                                           1,
                                           0);
  if ( !v20 )
    goto LABEL_23;
  items = v20->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v20->fields._size;
  v32 = transform;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)transform,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v32, v23, v24, v25, v26, v27, v28);
  }
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_11368/*"Reinforcement_Effect_1"*/,
                                           0);
  if ( !transform )
LABEL_23:
    sub_1C93D2C(transform, v7);
  v34 = (Il2CppObject *)transform;
  p_fields = (GrandQuestFolderBoardItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v37 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0);
  v38 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v37, 0);
  v45 = v38;
  if ( v38 )
  {
    v46 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_fields->klass = (GrandQuestFolderBoardItem_c *)v38;
      if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == v46 )
        goto LABEL_17;
    }
    sub_1C940C8(v38);
  }
  p_fields->klass = (GrandQuestFolderBoardItem_c *)v45;
LABEL_17:
  sub_1C93A78(p_fields, (int32_t)v45, v39, v40, v41, v42, v43, v44);
  v53 = v20->fields._items;
  v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !v53 )
    goto LABEL_23;
  v55 = v20->fields._size;
  if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      v34,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v20->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v34;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 4), (int32_t)v34, v47, v48, v49, v50, v51, v52);
  }
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___ToArray(
                                           v20,
                                           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v57 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v57, (WarBoardTaskBase_array *)transform, 0);
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
    sub_1C93D2C(this, active);
  UnityEngine_GameObject__SetActive(npBarEffect, active, 0);
}


void WarBoardServantPieceComponent__SetClassIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *classIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v5; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  il2cpp_array_size_t max_length; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v9; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E200 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_22669/*"onBoard_initial_placement_class2_{0}"*/);
    byte_4D2E200 = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1C93D2C(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_34632C0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
    sub_1C93D34(ServantClassEntities);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  m_CachedPtr_high = HIDWORD(classIconRoot[1].fields.m_CachedPtr);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr_high);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22669/*"onBoard_initial_placement_class2_{0}"*/, v9, 0);
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

  if ( (byte_4D2E210 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E210 = 1;
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
             (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
    sub_1C93D2C(pieceData, v6);
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
    sub_1C93D2C(this, userServantId);
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
    sub_1C93D2C(this, userServantEquipId);
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
  int32_t servantLevel; // w20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v17; // x21
  UISprite_o *v18; // x21
  System_String_o *v19; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v21; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v32; // x1
  Il2CppClass **v33; // x0
  struct WarBoardPieceData_o *v34; // x8
  struct WarBoardPieceData_o *v35; // x8
  WarBoardSquareData_o *v36; // x0
  bool v37; // w20
  struct WarBoardPieceData_o *v38; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v43; // x8
  UISprite_o *v44; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v46; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v48; // x20
  UnityEngine_Object_o *v49; // x20
  UILabel_o *v50; // x20
  struct WarBoardPieceData_o *v51; // x8
  WarBoardServantPieceComponent_o *v52; // x21
  Il2CppObject *v53; // x0
  struct WarBoardPieceData_o *v54; // x8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v58; // w20
  struct WarBoardPieceData_o *v59; // x8
  struct WarBoardPieceData_o *v60; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2E201 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_23185/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_1C93AD4(&StringLiteral_15511/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_4D2E201 = 1;
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
    v64 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v5->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v5->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_113;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
      v62 = npcDispLimitCount_k__BackingField;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
      v15 = System_String__Concat(v13, v14, 0);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v17 = v15;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_41320352(servantLevel, enemyIcon, v17, 0) )
        goto LABEL_30;
      v18 = (UISprite_o *)v2->fields.enemyIcon;
      v19 = System_Int32__ToString((int32_t)&v64, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_41320352(servantLevel, v18, v19, 0) )
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
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_41320352(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_23185/*"questinfo_enemyface_bg"*/,
                                                  0);
      v21 = v2->fields.pieceData;
      if ( !v21 )
        goto LABEL_113;
      if ( v21->fields._IsShadow_k__BackingField )
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
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_113;
        size = removeTweenTargetObjects->fields._size;
        v32 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v32, v23, v24, v25, v26, v27, v28);
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
            v37 = !v11;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v37, 0);
                v38 = v2->fields.pieceData;
                if ( v38 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v38->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v38->fields._iconFrameType_k__BackingField;
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
                    v43 = v2->fields.pieceData;
                    if ( !v43 )
                      goto LABEL_113;
                    v44 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v43->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v44, iconEquipId_k__BackingField, 0, 0);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
                    v46 = v2->fields.pieceData;
                    if ( v46 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v46->fields._iconEquipId_k__BackingField > 0,
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
                          v48 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0);
                          if ( !v48 )
                            goto LABEL_113;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v48,
                            (unsigned __int8)this & 1,
                            0);
                        }
                        v49 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_105;
                        v50 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15511/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0);
                        v51 = v2->fields.pieceData;
                        if ( !v51 )
                          goto LABEL_113;
                        v52 = this;
                        iconLevel_k__BackingField = v51->fields._iconLevel_k__BackingField;
                        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format((System_String_o *)v52, v53, 0);
                        if ( !v50 )
                          goto LABEL_113;
                        UILabel__set_text(v50, (System_String_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_113;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0);
                        v54 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v54 )
                            goto LABEL_113;
                          if ( v54->fields._roleType_k__BackingField == 1 )
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
                        else if ( !v54 )
                        {
                          goto LABEL_113;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_113;
                        v58 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0);
                        if ( (v58 & 1) != 0 )
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
                        v65.fields.z = *p_z;
                        v65.fields.y = *p_y;
                        v65.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v65, 0);
LABEL_105:
                        v59 = v2->fields.pieceData;
                        if ( v59 )
                        {
                          if ( !v59->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                          if ( this )
                          {
                            v60 = v2->fields.pieceData;
                            if ( v60 )
                            {
                              this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                              if ( this )
                              {
                                Square = WarBoardData__GetSquare(
                                           (WarBoardData_o *)this,
                                           v60->fields._nowSquareIndex_k__BackingField,
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
    sub_1C93D2C(this, method);
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
  v34 = v2->fields.pieceData;
  if ( !v34 )
    goto LABEL_113;
  if ( !v34->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_113;
  v35 = v2->fields.pieceData;
  if ( !v35 )
    goto LABEL_113;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_113;
  v36 = WarBoardData__GetSquare((WarBoardData_o *)this, v35->fields._nowSquareIndex_k__BackingField, 0);
  if ( v36 )
    WarBoardSquareData__ActiveEditPointArrow(v36, 0);
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

  if ( (byte_4D2E202 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E202 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
    sub_1C93D2C(transform, v9);
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
      sub_1C93D2C(this, method);
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
    sub_1C93D34(this);
  }
}


bool WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0 )
    sub_1C93D2C(this, x);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void WarBoardServantPieceComponent___OnDead_b__46_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardServantPieceComponent___OnRevive_b__47_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4D2E218 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4D2E218 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(button, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E219 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_4D2E219 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  unsigned int monitor; // w8

  if ( (byte_4D2E21A & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2E21A = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1C93B7C(int___TypeInfo, 3);
  if ( !x || !result )
    sub_1C93D2C(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1C93D34(result);
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

  if ( (byte_4D2E21B & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    byte_4D2E21B = 1;
  }
  v3 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C93D2C(Instance, v6);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D2E21C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_4D2E21C = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D2E21D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1C93AD4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_4D2E21D = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(0, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._15_ChangeStatus.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._15_ChangeStatus.method);
}
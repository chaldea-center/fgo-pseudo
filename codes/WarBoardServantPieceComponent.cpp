void WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_E93E70;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_E94040;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, 0);
}


void WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t CriticalStars; // w8
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5935EBB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EBB = 1;
  }
  pieceData = this->fields.pieceData;
  v9 = 0;
  if ( !pieceData )
    goto LABEL_10;
  CriticalStars = WarBoardPieceData__get_CriticalStars(pieceData, 0);
  criticalStarsLabel = (UnityEngine_Object_o *)this->fields.criticalStarsLabel;
  v9 = CriticalStars;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(criticalStarsLabel, 0, 0) )
  {
    v8 = this->fields.criticalStarsLabel;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&v9, 0);
    if ( v8 )
    {
      UILabel__set_text(v8, (System_String_o *)pieceData, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(pieceData, method);
  }
}


void WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *pieceData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_5935EBA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13238/*"ServantDying"*/);
    byte_5935EBA = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_13238/*"ServantDying"*/,
      0);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0, 0) )
    {
      pieceData = this->fields.faceEffect;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive(pieceData, 0, 0);
        return;
      }
LABEL_13:
      sub_21FFECC(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_13238/*"ServantDying"*/,
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
      sub_21FFECC(pieceData, isBreak);
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
  __int64 v2; // x2
  UnityEngine_Object_o *partyBuffComponent; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  WarBoardServantPiecePartyBuffComponent_o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_5935EC6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EC6 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0);
  if ( !v5 )
  {
    v7 = this->fields.partyBuffComponent;
    if ( !v7 )
      sub_21FFECC(v5, v6);
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v7, v6);
    WarBoardServantPiecePartyBuffComponent__SetActive(v7, 0, v8);
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

  if ( (byte_5935EC4 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EC4 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selectPiece, method);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0) )
  {
    if ( selectPiece )
    {
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_21FFD10(int___TypeInfo, 1);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          sub_21FFED4(v7);
        pieceData = this->fields.pieceData;
        LODWORD(v7->fields.upIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
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
      sub_21FFECC(v7, v6);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x19
  System_Delegate_o **v22; // x21
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Delegate_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w8
  WarBoardTaskBase_TaskCallback_c *v33; // x1
  WarBoardTaskBase_o *result; // x0

  if ( (byte_5935EC2 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_21FFC50(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_21FFC50(&WarBoardWaitTime_TypeInfo);
    byte_5935EC2 = 1;
  }
  v6 = sub_21FFEBC(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)eventBossUI, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)endAction, v15, v16, v17, v18, v19, v20),
        v21 = sub_21FFEBC(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v21, 0.0, 0),
        !v21) )
  {
    sub_21FFECC(v7, v8);
  }
  v22 = (System_Delegate_o **)(v21 + 40);
  v23 = *(System_Delegate_o **)(v21 + 40);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v6,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0);
  v32 = (int)v25;
  if ( !v25 )
    goto LABEL_9;
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v22 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v33) )
  {
    sub_220024C(v25, v33, v26, v27);
LABEL_9:
    *v22 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 40), v32, v26, v27, v28, v29, v30, v31);
  result = (WarBoardTaskBase_o *)v21;
  *(_BYTE *)(v21 + 26) = 1;
  return result;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Func_bool__c *v13; // x0
  System_Func_bool__o *v14; // x20
  UnityEngine_WaitUntil_o *v15; // x21
  __int64 v16; // x20
  System_Delegate_o **v17; // x21
  System_Delegate_o *v18; // x22
  WarBoardTaskBase_TaskCallback_o *v19; // x23
  System_Delegate_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w8
  WarBoardTaskBase_TaskCallback_c *v28; // x1

  if ( (byte_5935EC1 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_21FFC50(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    byte_5935EC1 = 1;
  }
  v4 = sub_21FFEBC(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  v13 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v4 + 16) = 0;
  v14 = (System_Func_bool__o *)sub_21FFEBC(v13);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  v16 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, (UnityEngine_CustomYieldInstruction_o *)v15, 0);
  if ( !v16 )
LABEL_11:
    sub_21FFECC(v5, v6);
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0);
  v27 = (int)v20;
  if ( !v20 )
    goto LABEL_9;
  v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v17 = v20, (WarBoardTaskBase_TaskCallback_c *)v20->klass != v28) )
  {
    sub_220024C(v20, v28, v21, v22);
LABEL_9:
    *v17 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
  return (WarBoardCallbackTask_o *)v16;
}


WarBoardCallbackTask_o *WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Func_bool__c *v13; // x0
  System_Func_bool__o *v14; // x20
  UnityEngine_WaitUntil_o *v15; // x21
  __int64 v16; // x20
  System_Delegate_o **v17; // x21
  System_Delegate_o *v18; // x22
  WarBoardTaskBase_TaskCallback_o *v19; // x23
  System_Delegate_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w8
  WarBoardTaskBase_TaskCallback_c *v28; // x1

  if ( (byte_5935EC3 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_21FFC50(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    byte_5935EC3 = 1;
  }
  v4 = sub_21FFEBC(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  v13 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v4 + 16) = 0;
  v14 = (System_Func_bool__o *)sub_21FFEBC(v13);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  v16 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, (UnityEngine_CustomYieldInstruction_o *)v15, 0);
  if ( !v16 )
LABEL_11:
    sub_21FFECC(v5, v6);
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0);
  v27 = (int)v20;
  if ( !v20 )
    goto LABEL_9;
  v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v17 = v20, (WarBoardTaskBase_TaskCallback_c *)v20->klass != v28) )
  {
    sub_220024C(v20, v28, v21, v22);
LABEL_9:
    *v17 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
  return (WarBoardCallbackTask_o *)v16;
}


void WarBoardServantPieceComponent__EditPiece(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_5935EB9 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_5935EB9 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_21FFECC(0, method);
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
    sub_21FFECC(servantIcon, method);
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
    sub_21FFECC(servantIcon, method);
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
  long double v8; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  unsigned int v11; // w9
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  WarBoardServantPieceComponent___c_c *v21; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v24; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_5935EBC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_21FFC50(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_5935EBC = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_21FFD10(int___TypeInfo, 3);
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
    sub_21FFED4(BattleParticipantInfo);
  }
  v12 = Method_System_Array_Empty_int___;
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v13 = v12[7];
  if ( !v13 )
  {
    sub_2237B54(v12);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, v6, v7);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v12[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)&BattleParticipantInfo[9].fields._Participants_k__BackingField + 5) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_2237AF8(v8);
  if ( !warBoardData
    || (v15 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0)) == 0) )
  {
LABEL_27:
    sub_21FFECC(BattleParticipantInfo, v6);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0);
    v20 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v21 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !*(&WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v18, v19);
      v21 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__43_1 = (System_Func_object__object__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v18, v19);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v24,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0);
      v25 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v25->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__43_1, (int32_t)_9__43_1, v26, v27, v28, v29, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v32,
                                                                 (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v33 = System_Linq_Enumerable__Concat_int_(
          v10,
          v15,
          (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


void WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_5935ECB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_5935ECB = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0) )
  {
    sub_21FFECC(button, method);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *criticalStarsBase; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v18; // x2
  UnityEngine_Object_o *RoleTypeLabel; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v28; // x2
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5935EB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21176/*"icon_strong_enemy"*/);
    sub_21FFC50(&StringLiteral_20947/*"hp_gauge_boss"*/);
    sub_21FFC50(&StringLiteral_24477/*"servant_base_{0}"*/);
    byte_5935EB4 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v29 = pieceData->fields._forceId_k__BackingField + 1;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
  hpBar = System_String__Format((System_String_o *)StringLiteral_24477/*"servant_base_{0}"*/, v8, 0);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20947/*"hp_gauge_boss"*/, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0, 0) )
  {
    v16 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
    if ( !v16 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v16, (unsigned __int8)hpBar & 1, 0);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
  {
    hpBar = (System_String_o *)this->fields.classCompatibilityIcon;
    if ( !hpBar )
      goto LABEL_39;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)hpBar, 0);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v18);
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
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_21176/*"icon_strong_enemy"*/, 0);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_21FFECC(hpBar, v6);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&buffTrunNotice->fields.pieceData,
      (int32_t)pieceData,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v28);
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
    sub_21FFECC(this, method);
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

  if ( (byte_5935EB8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935EB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  WarBoardManager_TaskList_o *v21; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_45B5018 *v23; // x2
  System_Nullable_float__o v24; // x3
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v34; // x1
  Il2CppClass **v35; // x0
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v37; // x28
  System_Collections_Generic_List_object__o *v38; // x26
  const MethodInfo *v39; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v41; // x27
  const MethodInfo_45B5018 *v42; // x2
  System_Nullable_float__o v43; // x3
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct WarBoardTaskBase_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  UnityEngine_Transform_o *v53; // x1
  Il2CppClass **v54; // x0
  bool IsStageBoss; // w0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v63; // x27
  WarBoardEventBossUIComponent_o **v64; // x27
  __int64 v65; // x1
  __int64 v66; // x2
  UnityEngine_Object_o *v67; // x28
  _BOOL8 v68; // x0
  const MethodInfo *v69; // x2
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  struct WarBoardTaskBase_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  UnityEngine_Transform_o *v79; // x1
  Il2CppClass **v80; // x0
  WarBoardServantPieceComponent_o *v81; // x0
  const MethodInfo *v82; // x3
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct WarBoardTaskBase_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  UnityEngine_Transform_o *v92; // x1
  Il2CppClass **v93; // x0
  System_Nullable_float__o v94; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v98; // x21
  System_Delegate_o **v99; // x22
  System_Delegate_o *v100; // x23
  WarBoardTaskBase_TaskCallback_o *v101; // x24
  System_Delegate_o *v102; // x0
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  int32_t v109; // w8
  WarBoardTaskBase_TaskCallback_c *v110; // x1
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct WarBoardTaskBase_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  WarBoardManager_TaskList_o *v121; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v123; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v126; // 0:x0.16
  System_Nullable_Vector3__o v127; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_5935EBE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&WarBoardManager_TaskList_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_21FFC50(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_21FFC50(&WarBoardGaugePerformance_TypeInfo);
    byte_5935EBE = 1;
  }
  priority = 0;
  v12 = sub_21FFEBC(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = (WarBoardManager_TaskList_o *)sub_21FFEBC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v21, 0);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v126.fields.hasValue = &v123;
    *(_QWORD *)&v123.fields.hasValue = 0;
    *(_QWORD *)&v123.fields.value.fields.y = 0;
    *(_QWORD *)&v126.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v126, localPosition, v23);
    if ( !Instance )
      goto LABEL_58;
    v24 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v123,
                                             v24,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v21 )
      goto LABEL_58;
    items = v21->fields._items;
    v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v21->fields._size;
    v34 = transform;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v34;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
    }
  }
  v121 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v37 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v38 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v39);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_44910852(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v37 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_44910852(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0);
  if ( !v38 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v21 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v37,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    v129 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v127.fields.hasValue = &v123;
    v123 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v127.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v127, v129, v42);
    if ( !v41 )
      goto LABEL_58;
    v43 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v41,
                                             v123,
                                             v43,
                                             1,
                                             1,
                                             0,
                                             0);
    v50 = v21->fields._items;
    v51 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v50 )
      goto LABEL_58;
    v52 = v21->fields._size;
    v53 = transform;
    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v50->obj.klass + v52;
      v21->fields._size = v52 + 1;
      v54[4] = (Il2CppClass *)v53;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v53, v44, v45, v46, v47, v48, v49);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0);
  EventBossUI = 0;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v63 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v63 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v63, (int32_t)transform, 0);
  }
  *(_QWORD *)(v12 + 16) = EventBossUI;
  v64 = (WarBoardEventBossUIComponent_o **)(v12 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)EventBossUI, v56, v57, v58, v59, v60, v61);
  v67 = *(UnityEngine_Object_o **)(v12 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65, v66);
  v68 = UnityEngine_Object__op_Inequality(v67, 0, 0);
  if ( v68 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v68,
                                             *v64,
                                             v69);
    v76 = v21->fields._items;
    v77 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v76 )
      goto LABEL_58;
    v78 = v21->fields._size;
    v79 = transform;
    if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v76->obj.klass + v78;
      v21->fields._size = v78 + 1;
      v80[4] = (Il2CppClass *)v79;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v79, v70, v71, v72, v73, v74, v75);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v81, *v64, 0, v82);
    v89 = v21->fields._items;
    v90 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v89 )
      goto LABEL_58;
    v91 = v21->fields._size;
    v92 = transform;
    if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &v89->obj.klass + v91;
      v21->fields._size = v91 + 1;
      v93[4] = (Il2CppClass *)v92;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v93 + 4), (int32_t)v92, v83, v84, v85, v86, v87, v88);
    }
  }
  v94 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v94,
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
  v98 = sub_21FFEBC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v98, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0);
  if ( !v98 )
    goto LABEL_58;
  v99 = (System_Delegate_o **)(v98 + 32);
  v100 = *(System_Delegate_o **)(v98 + 32);
  v101 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v101,
    (Il2CppObject *)v12,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0);
  v102 = System_Delegate__Combine(v100, (System_Delegate_o *)v101, 0);
  v109 = (int)v102;
  if ( v102 )
  {
    v110 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v102->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v99 = v102;
      if ( (WarBoardTaskBase_TaskCallback_c *)v102->klass == v110 )
        goto LABEL_50;
    }
    sub_220024C(v102, v110, v103, v104);
  }
  *v99 = 0;
LABEL_50:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v98 + 32), v109, v103, v104, v105, v106, v107, v108);
  *(_BYTE *)(v98 + 26) = 1;
  v117 = v21->fields._items;
  v118 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v117 )
    goto LABEL_58;
  v119 = v21->fields._size;
  if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v21,
      (Il2CppObject *)v98,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = &v117->obj.klass + v119;
    v21->fields._size = v119 + 1;
    v120[4] = (Il2CppClass *)v98;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v120 + 4), v98, v111, v112, v113, v114, v115, v116);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v38,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v121 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v121,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v121->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_21FFECC(transform, v14);
  WarBoardManager__AddTask_44947516(
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
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x21
  WarBoardServantPieceComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  WarBoardManager_o *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_5935EBD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935EBD = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_20;
    v9 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0);
    if ( !v9 )
      goto LABEL_20;
    EventBossUI = WarBoardManager__GetEventBossUI(v9, (int32_t)pieceData, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v11, EventBossUI, v12);
    if ( v10 )
    {
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        v22 = pieceData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
        }
        WarBoardPieceBaseComponent__OnDamage(
          (WarBoardPieceBaseComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
          0);
        if ( taskList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v10,
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_44947516(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v10, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_21FFECC(pieceData, taskList);
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
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass *v30; // x1
  Il2CppClass **v31; // x0
  WarBoardServantPieceComponent_o *v32; // x0
  const MethodInfo *v33; // x2
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass *v43; // x1
  Il2CppClass **v44; // x0
  __int64 v45; // x2
  WarBoardManager_o *v46; // x24
  WarBoardTaskBase_o *Task; // x0
  __int64 v48; // x2
  System_Nullable_float__o v49; // x19
  WarBoardData_o *v50; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v53; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_44910852; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v56; // x0
  const MethodInfo *v57; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v59; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v60; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v62; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_45B5018 *v64; // x2
  System_Nullable_float__o v65; // x3
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass *v75; // x1
  Il2CppClass **v76; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v78; // x8
  System_String_o *v79; // x22
  __int64 v80; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x23
  __int64 v84; // x25
  __int64 v85; // x26
  ServantEntity_o *v86; // x25
  int v87; // w23
  Il2CppObject *v88; // x0
  Il2CppObject *v89; // x22
  MissionNaviTransitionBoardItem_o *v90; // x23
  System_Delegate_o *v91; // x25
  WarBoardTaskBase_TaskCallback_o *v92; // x26
  System_Delegate_o *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t v100; // w8
  WarBoardTaskBase_TaskCallback_c *v101; // x1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  WarBoardWaitTime_o *v112; // x20
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  WarBoardManager_TaskList_o *v123; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v124; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935EBF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&WarBoardManager_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_21FFC50(&WarBoardWaitTime_TypeInfo);
    sub_21FFC50(&StringLiteral_6434/*"Escape_Effect"*/);
    sub_21FFC50(&StringLiteral_6295/*"Enemy_Dead_Effect"*/);
    sub_21FFC50(&StringLiteral_13261/*"Servant_Dead_Effect"*/);
    sub_21FFC50(&StringLiteral_13488/*"Special_Effect{0:D2}"*/);
    byte_5935EBF = 1;
  }
  priority = 0;
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
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0, 0) )
  {
    gameObject = this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v123 = taskList;
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  v19 = UnityEngine_Object__op_Inequality(EventBossUI, 0, 0);
  if ( v19 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v19,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v20);
    if ( !v16 )
      goto LABEL_101;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_101;
    size = v16->fields._size;
    v30 = (Il2CppClass *)gameObject;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v31[4] = v30;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v32,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v33);
    v40 = v16->fields._items;
    v41 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v40 )
      goto LABEL_101;
    v42 = v16->fields._size;
    v43 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v40->obj.klass + v42;
      v16->fields._size = v42 + 1;
      v44[4] = v43;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v43, v34, v35, v36, v37, v38, v39);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v46 = (WarBoardManager_o *)gameObject;
    if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v10, v45);
    if ( !v46 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v46, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v49 = cameraSize;
  v50 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v48);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v53,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v50 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v50, 0) )
  {
    gameObject = (void *)WarBoardData__get_id(v50, 0);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0);
    id = WarBoardData__get_id(v50, 0);
    v53 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0, 0);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0, 0);
  if ( !v53 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_44910852 = WarBoardManager__GetEventTasks_44910852((WarBoardManager_o *)gameObject, 24, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_44910852,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v56 = WarBoardManager__GetEventTasks_44910852((WarBoardManager_o *)gameObject, 25, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v56,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v50, v57);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v59 = WarBoardManager__GetEventTasks_44910852(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v59,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v60 = WarBoardManager__GetEventTasks_44910852(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v62 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v62,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    *(_QWORD *)&v126.fields.hasValue = &v124;
    *(_QWORD *)&v124.fields.hasValue = 0;
    *(_QWORD *)&v124.fields.value.fields.y = 0;
    *(_QWORD *)&v126.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v126, localPosition, v64);
    if ( !Instance )
      goto LABEL_101;
    v65 = v49;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v124, v65, 1, 1, 0, 0);
    if ( !v16 )
      goto LABEL_101;
    v72 = v16->fields._items;
    v73 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v72 )
      goto LABEL_101;
    v74 = v16->fields._size;
    v75 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &v72->obj.klass + v74;
      v16->fields._size = v74 + 1;
      v76[4] = v75;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v76 + 4), (int32_t)v75, v66, v67, v68, v69, v70, v71);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0);
  v78 = (System_String_o **)&StringLiteral_6295/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v78 = (System_String_o **)&StringLiteral_13261/*"Servant_Dead_Effect"*/;
  v79 = *v78;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v84 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v85 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v80);
  *(_QWORD *)&v127.fields.currentCryptoKey = v84;
  *(_QWORD *)&v127.fields.fakeValue = v85;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v127, 0);
  if ( !v83 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v83,
                 (int32_t)gameObject,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v86 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0);
  if ( !v86 )
    goto LABEL_101;
  v87 = (int)gameObject;
  if ( ServantEntity__checkIsHeroineSvt(v86, 0) || v87 == 1 )
  {
    v79 = (System_String_o *)StringLiteral_6434/*"Escape_Effect"*/;
  }
  else if ( v87 >= 2 )
  {
    *(_DWORD *)&v124.fields.hasValue = v87;
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v124);
    v79 = System_String__Format((System_String_o *)StringLiteral_13488/*"Special_Effect{0:D2}"*/, v88, 0);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v79, 0);
  if ( !gameObject )
LABEL_101:
    sub_21FFECC(gameObject, v10);
  v89 = (Il2CppObject *)gameObject;
  v90 = (MissionNaviTransitionBoardItem_o *)((char *)gameObject + 40);
  v91 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  *((_BYTE *)gameObject + 26) = 1;
  v92 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v92,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0);
  v93 = System_Delegate__Combine(v91, (System_Delegate_o *)v92, 0);
  v100 = (int)v93;
  if ( !v93 )
    goto LABEL_82;
  v101 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v93->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v90->klass = (MissionNaviTransitionBoardItem_c *)v93, (WarBoardTaskBase_TaskCallback_c *)v93->klass != v101) )
  {
    sub_220024C(v93, v101, v94, v95);
LABEL_82:
    v90->klass = 0;
  }
  sub_21FFBF4(v90, v100, v94, v95, v96, v97, v98, v99);
  if ( !v16 )
    goto LABEL_101;
  v108 = v16->fields._items;
  v109 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v16->fields._version;
  if ( !v108 )
    goto LABEL_101;
  v110 = v16->fields._size;
  if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      v89,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = &v108->obj.klass + v110;
    v16->fields._size = v110 + 1;
    v111[4] = (Il2CppClass *)v89;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)v89, v102, v103, v104, v105, v106, v107);
  }
  v112 = (WarBoardWaitTime_o *)sub_21FFEBC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v112, 0.5, 0);
  v119 = v16->fields._items;
  v120 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v16->fields._version;
  if ( !v119 )
    goto LABEL_101;
  v121 = v16->fields._size;
  if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v112,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = &v119->obj.klass + v121;
    v16->fields._size = v121 + 1;
    v122[4] = (Il2CppClass *)v112;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v122 + 4), (int32_t)v112, v113, v114, v115, v116, v117, v118);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v53,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)v53,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v123 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v123,
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v123->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_44940072(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
      0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_5935ECA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19665/*"ef_guts"*/);
    byte_5935ECA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19665/*"ef_guts"*/,
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

  if ( (byte_5935EC9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19687/*"ef_special_invincible01"*/);
    byte_5935EC9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19687/*"ef_special_invincible01"*/,
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
  float v14; // s0
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s10
  float v17; // s9
  __int64 v18; // x21
  __int64 v19; // x2
  System_Delegate_o **v20; // x22
  System_Delegate_o *v21; // x23
  WarBoardServantPieceComponent___c_c *v22; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v25; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Delegate_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0

  if ( (byte_5935EC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_21FFC50(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_21FFC50(&WarBoardGaugePerformance_TypeInfo);
    byte_5935EC7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v14 = (float)(v12 - damage);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v17 = v14 / (float)MaxHp;
  v18 = sub_21FFEBC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v18,
    hpBar,
    (float)v10 / (float)v11,
    v17,
    gaugeAnimationFullDuration,
    0);
  if ( !v18 )
    goto LABEL_30;
  v20 = (System_Delegate_o **)(v18 + 32);
  v21 = *(System_Delegate_o **)(v18 + 32);
  v22 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !*(&WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v8, v19);
    v22 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__57_0 = static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v8, v19);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v25,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0);
    v26 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    v26->__9__57_0 = _9__57_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__57_0, (int32_t)_9__57_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Delegate__Combine(v21, (System_Delegate_o *)_9__57_0, 0);
  if ( !v33 )
  {
    *v20 = 0;
    goto LABEL_22;
  }
  v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v33->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v20 = v33;
    if ( (WarBoardTaskBase_TaskCallback_c *)v33->klass == v40 )
    {
LABEL_22:
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v9 )
      {
        items = v9->fields._items;
        v48 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v9->fields._version;
        if ( items )
        {
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v18,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v50 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v18;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v50 + 4), v18, v41, v42, v43, v44, v45, v46);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v9,
                (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_44947516(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
              0);
            return;
          }
        }
      }
LABEL_30:
      sub_21FFECC(gameObject, v8);
    }
  }
  sub_220024C(v33, v40, v34, v35);
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
  float v14; // s0
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s10
  float v17; // s9
  __int64 v18; // x21
  __int64 v19; // x2
  System_Delegate_o **v20; // x22
  System_Delegate_o *v21; // x23
  WarBoardServantPieceComponent___c_c *v22; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v25; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Delegate_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0

  if ( (byte_5935ECC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_21FFC50(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_21FFC50(&WarBoardGaugePerformance_TypeInfo);
    byte_5935ECC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v12 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0);
  v14 = (float)(gainHp + oldHp);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v17 = v14 / (float)MaxHp;
  v18 = sub_21FFEBC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v18, hpBar, v12, v17, gaugeAnimationFullDuration, 0);
  if ( !v18 )
    goto LABEL_28;
  v20 = (System_Delegate_o **)(v18 + 32);
  v21 = *(System_Delegate_o **)(v18 + 32);
  v22 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !*(&WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v10, v19);
    v22 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v10, v19);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v25,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0);
    v26 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    v26->__9__63_0 = _9__63_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__63_0, (int32_t)_9__63_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Delegate__Combine(v21, (System_Delegate_o *)_9__63_0, 0);
  if ( !v33 )
  {
    *v20 = 0;
    goto LABEL_20;
  }
  v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v33->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v20 = v33;
    if ( (WarBoardTaskBase_TaskCallback_c *)v33->klass == v40 )
    {
LABEL_20:
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v11 )
      {
        items = v11->fields._items;
        v48 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v50 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v18;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v50 + 4), v18, v41, v42, v43, v44, v45, v46);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_44947516(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0);
            return;
          }
        }
      }
LABEL_28:
      sub_21FFECC(gameObject, v10);
    }
  }
  sub_220024C(v33, v40, v34, v35);
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
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v14; // x21
  Il2CppObject *v15; // x22
  const MethodInfo_45B5018 *v16; // x2
  System_Nullable_float__o v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v27; // x1
  Il2CppClass **v28; // x0
  Il2CppObject *v29; // x22
  WarBoardBreakPointComponent_o *v30; // x23
  WarBoardTaskBase_TaskCallback_c *v31; // x0
  MissionNaviTransitionBoardItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // t1
  WarBoardTaskBase_TaskCallback_o *v34; // x25
  System_Delegate_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w8
  WarBoardTaskBase_TaskCallback_c *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  WarBoardWaitTime_o *v54; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  System_Nullable_Vector3__o v65; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v66; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935EC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_21FFC50(&WarBoardWaitTime_TypeInfo);
    sub_21FFC50(&StringLiteral_13262/*"Servant_Regenerate_Effect"*/);
    byte_5935EC0 = 1;
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
        sub_21FFED4(Instance);
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
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = this->fields.pieceData;
  if ( !v10 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v10->fields._nowSquareIndex_k__BackingField,
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
  v68.fields.x = x;
  v68.fields.y = y;
  v68.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v68, 0);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v66.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v66.fields.hasValue = &v65;
  *(_QWORD *)&v65.fields.hasValue = 0;
  *(_QWORD *)&v65.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v66, localPosition, v16);
  if ( !v15 )
    goto LABEL_10;
  v17 = 0;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v15,
                                                v65,
                                                v17,
                                                1,
                                                0,
                                                1,
                                                0);
  if ( !v14 )
    goto LABEL_10;
  items = v14->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v14->fields._size;
  v27 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)Instance,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v27;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_13262/*"Servant_Regenerate_Effect"*/,
                                                0);
  if ( !Instance )
LABEL_10:
    sub_21FFECC(Instance, v6);
  v29 = (Il2CppObject *)Instance;
  v30 = Instance;
  v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
  activeObject = (System_Delegate_o *)v30->fields.activeObject;
  p_activeObject = (MissionNaviTransitionBoardItem_o *)&v30->fields.activeObject;
  BYTE2(p_activeObject[-1].fields._BoardType_k__BackingField) = 1;
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(v31);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0);
  v35 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v34, 0);
  v42 = (int)v35;
  if ( v35 )
  {
    v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (MissionNaviTransitionBoardItem_c *)v35;
      if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == v43 )
        goto LABEL_28;
    }
    sub_220024C(v35, v43, v36, v37);
  }
  p_activeObject->klass = 0;
LABEL_28:
  sub_21FFBF4(p_activeObject, v42, v36, v37, v38, v39, v40, v41);
  v50 = v14->fields._items;
  v51 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v50 )
    goto LABEL_10;
  v52 = v14->fields._size;
  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v29,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v14->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v29;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v29, v44, v45, v46, v47, v48, v49);
  }
  v54 = (WarBoardWaitTime_o *)sub_21FFEBC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v54, 0.5, 0);
  v61 = v14->fields._items;
  v62 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v61 )
    goto LABEL_10;
  v63 = v14->fields._size;
  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v54,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v14->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)v54;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v54, v55, v56, v57, v58, v59, v60);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v14,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_44940072(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *v20; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_45B5018 *v22; // x2
  System_Nullable_float__o v23; // x3
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v33; // x1
  Il2CppClass **v34; // x0
  Il2CppObject *v35; // x20
  MissionNaviTransitionBoardItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v38; // x24
  System_Delegate_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t v46; // w8
  WarBoardTaskBase_TaskCallback_c *v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  Il2CppObject *v58; // x20
  System_Nullable_Vector3__o v59; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v60; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935EC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_21FFC50(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_21FFC50(&StringLiteral_11752/*"Reinforcement_Effect_1"*/);
    byte_5935EC8 = 1;
  }
  v5 = sub_21FFEBC(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  *(_QWORD *)&v60.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v60.fields.hasValue = &v59;
  *(_QWORD *)&v59.fields.hasValue = 0;
  *(_QWORD *)&v59.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v60, localPosition, v22);
  if ( !Instance )
    goto LABEL_23;
  v23 = 0;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                           (WarBoardManager_o *)Instance,
                                           v59,
                                           v23,
                                           1,
                                           0,
                                           1,
                                           0);
  if ( !v20 )
    goto LABEL_23;
  items = v20->fields._items;
  v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v20->fields._size;
  v33 = transform;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)transform,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v33;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v33, v24, v25, v26, v27, v28, v29);
  }
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_11752/*"Reinforcement_Effect_1"*/,
                                           0);
  if ( !transform )
LABEL_23:
    sub_21FFECC(transform, v7);
  v35 = (Il2CppObject *)transform;
  p_fields = (MissionNaviTransitionBoardItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0);
  v39 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v38, 0);
  v46 = (int)v39;
  if ( v39 )
  {
    v47 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_fields->klass = (MissionNaviTransitionBoardItem_c *)v39;
      if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == v47 )
        goto LABEL_17;
    }
    sub_220024C(v39, v47, v40, v41);
  }
  p_fields->klass = 0;
LABEL_17:
  sub_21FFBF4(p_fields, v46, v40, v41, v42, v43, v44, v45);
  v54 = v20->fields._items;
  v55 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !v54 )
    goto LABEL_23;
  v56 = v20->fields._size;
  if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      v35,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v20->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v35;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v35, v48, v49, v50, v51, v52, v53);
  }
  v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___ToArray(
                                           v20,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v58 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v58, (WarBoardTaskBase_array *)transform, 0);
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
    sub_21FFECC(this, active);
  UnityEngine_GameObject__SetActive(npBarEffect, active, 0);
}


void WarBoardServantPieceComponent__SetClassIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *classIconRoot; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v7; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  il2cpp_array_size_t max_length; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v11; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5935EB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_21FFC50(&StringLiteral_23483/*"onBoard_initial_placement_class2_{0}"*/);
    byte_5935EB5 = 1;
  }
  classIconRoot = this->fields.classIconRoot;
  entity = 0;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RestrictionMaster___);
  pieceData = this->fields.pieceData;
  entity = 0;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_21FFECC(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v7 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_22;
LABEL_19:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v7, 0);
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
    sub_21FFED4(ServantClassEntities);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  m_CachedPtr_high = HIDWORD(classIconRoot[1].fields.m_CachedPtr);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &m_CachedPtr_high);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23483/*"onBoard_initial_placement_class2_{0}"*/, v11, 0);
  if ( !classIcon )
    goto LABEL_22;
  UISprite__set_spriteName(classIcon, (System_String_o *)classIconRoot, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5935EC5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EC5 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&level, method);
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
             (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
    sub_21FFECC(pieceData, v6);
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
    sub_21FFECC(this, userServantId);
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
    sub_21FFECC(this, userServantEquipId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


void WarBoardServantPieceComponent__SetServantIcon(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardServantPieceComponent_o *v2; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v4; // x2
  struct WarBoardPieceData_o *v5; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v8; // x8
  int32_t v9; // w20
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *servantIcon; // x23
  int32_t v13; // w2
  bool v14; // w20
  int32_t servantLevel; // w20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UISprite_o *enemyIcon; // x22
  System_String_o *v22; // x21
  UISprite_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x22
  __int64 v27; // x2
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v29; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v40; // x1
  Il2CppClass **v41; // x0
  struct WarBoardPieceData_o *v42; // x8
  struct WarBoardPieceData_o *v43; // x8
  WarBoardSquareData_o *v44; // x0
  __int64 v45; // x2
  struct WarBoardPieceData_o *v46; // x8
  UISprite_o *frameInClassIcon; // x20
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w22
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *equipeIcon; // x20
  __int64 v53; // x2
  struct WarBoardPieceData_o *v54; // x8
  UISprite_o *v55; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  UnityEngine_Object_o *supportSprite; // x20
  __int64 v61; // x2
  WarBoardServantPieceComponent_o *v62; // x20
  UnityEngine_Object_o *v63; // x20
  __int64 v64; // x2
  UILabel_o *v65; // x20
  struct WarBoardPieceData_o *v66; // x8
  WarBoardServantPieceComponent_o *v67; // x21
  Il2CppObject *v68; // x0
  bool isEnemyServant; // w8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  bool IsNpc; // w8
  struct WarBoardPieceData_o *v74; // x8
  struct WarBoardPieceData_o *v75; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v77; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5935EB6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24045/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_21FFC50(&StringLiteral_15992/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_5935EB6 = 1;
  }
  pieceData = v2->fields.pieceData;
  v79 = 0;
  if ( !pieceData )
    goto LABEL_116;
  this = (WarBoardServantPieceComponent_o *)v2->fields.classIconRoot;
  if ( pieceData->fields._iconId_k__BackingField )
  {
    if ( !this )
      goto LABEL_116;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
    if ( !this )
      goto LABEL_116;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v5 = v2->fields.pieceData;
    if ( !v5 )
      goto LABEL_116;
    npcImageSvtId_k__BackingField = v5->fields._npcImageSvtId_k__BackingField;
    if ( npcImageSvtId_k__BackingField <= 0 )
      npcImageSvtId_k__BackingField = v5->fields._iconId_k__BackingField;
    npcDispLimitCount_k__BackingField = v5->fields._npcDispLimitCount_k__BackingField;
    v79 = npcImageSvtId_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v5->fields._iconLimitCount_k__BackingField;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v4);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v8 = v2->fields.pieceData;
    if ( !v8 )
      goto LABEL_116;
    if ( !this )
      goto LABEL_116;
    this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                (ServantLimitImageMaster_o *)this,
                                                v8->fields._iconId_k__BackingField,
                                                npcDispLimitCount_k__BackingField,
                                                0);
    if ( !v2->fields.pieceData )
      goto LABEL_116;
    v9 = (int)this;
    if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0) )
      goto LABEL_23;
    servantIcon = (UISprite_o *)v2->fields.servantIcon;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
    v13 = v9;
    v14 = 1;
    if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v13, 1, 0, 0, 0) )
    {
LABEL_23:
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
      v77 = npcDispLimitCount_k__BackingField;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v77);
      v18 = System_String__Concat(v16, v17, 0);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v22 = v18;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
      if ( AtlasManager__SetEventUI_47538316(servantLevel, enemyIcon, v22, 0) )
        goto LABEL_30;
      v23 = (UISprite_o *)v2->fields.enemyIcon;
      v26 = System_Int32__ToString((int32_t)&v79, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
      if ( AtlasManager__SetEventUI_47538316(servantLevel, v23, v26, 0) )
      {
LABEL_30:
        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
        if ( !this )
          goto LABEL_116;
        WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v2->fields.enemyIcon, 0);
      }
      enemyIconBg = v2->fields.enemyIconBg;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v27);
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_47538316(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_24045/*"questinfo_enemyface_bg"*/,
                                                  0);
      v29 = v2->fields.pieceData;
      if ( !v29 )
        goto LABEL_116;
      if ( v29->fields._IsShadow_k__BackingField )
      {
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( !this )
          goto LABEL_116;
        removeTweenTargetObjects = (System_Collections_Generic_List_object__o *)v2->fields.removeTweenTargetObjects;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( !removeTweenTargetObjects )
          goto LABEL_116;
        items = removeTweenTargetObjects->fields._items;
        v38 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_116;
        size = removeTweenTargetObjects->fields._size;
        v40 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
        }
        ((void (__fastcall *)(WarBoardServantPieceComponent_o *, const MethodInfo *))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
          v2,
          v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
      }
      v14 = 0;
    }
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIcon;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14, 0);
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v14, 0);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v14, 0);
                v46 = v2->fields.pieceData;
                if ( v46 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v46->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v46->fields._iconFrameType_k__BackingField;
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v45);
                  AtlasManager__SetClassIcon(
                    frameInClassIcon,
                    IconClassImageId_k__BackingField,
                    iconFrameType_k__BackingField,
                    0,
                    0,
                    0);
                  equipeIcon = (UnityEngine_Object_o *)v2->fields.equipeIcon;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
                  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v54 = v2->fields.pieceData;
                    if ( !v54 )
                      goto LABEL_116;
                    v55 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v54->fields._iconEquipId_k__BackingField;
                    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v53);
                    AtlasManager__SetEquipFace(v55, iconEquipId_k__BackingField, 0, 0);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
                    v57 = v2->fields.pieceData;
                    if ( v57 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v57->fields._iconEquipId_k__BackingField > 0,
                          0);
                        supportSprite = (UnityEngine_Object_o *)v2->fields.supportSprite;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
                        if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
                        {
                          this = (WarBoardServantPieceComponent_o *)v2->fields.supportSprite;
                          if ( !this )
                            goto LABEL_116;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                          if ( !v2->fields.pieceData )
                            goto LABEL_116;
                          v62 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0);
                          if ( !v62 )
                            goto LABEL_116;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v62,
                            (unsigned __int8)this & 1,
                            0);
                        }
                        v63 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v61);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v63, 0, 0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_108;
                        v65 = v2->fields.servantLevel;
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v64);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15992/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0);
                        v66 = v2->fields.pieceData;
                        if ( !v66 )
                          goto LABEL_116;
                        v67 = this;
                        iconLevel_k__BackingField = v66->fields._iconLevel_k__BackingField;
                        v68 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format((System_String_o *)v67, v68, 0);
                        if ( !v65 )
                          goto LABEL_116;
                        UILabel__set_text(v65, (System_String_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_116;
                        isEnemyServant = WarBoardPieceData__get_isEnemyServant((WarBoardPieceData_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( isEnemyServant )
                        {
                          if ( !this )
                            goto LABEL_116;
                          if ( HIDWORD(this->fields.removeTweenTargetObjects) == 1 )
                          {
                            this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
                            if ( !this )
                              goto LABEL_116;
                            this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
                            if ( !this )
                              goto LABEL_116;
                            p_z = &v2->fields.positionLevelDanger.fields.z;
                            p_x = &v2->fields.positionLevelDanger.fields.x;
                            p_y = &v2->fields.positionLevelDanger.fields.y;
LABEL_107:
                            v80.fields.z = *p_z;
                            v80.fields.y = *p_y;
                            v80.fields.x = *p_x;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v80, 0);
LABEL_108:
                            v74 = v2->fields.pieceData;
                            if ( v74 )
                            {
                              if ( !v74->fields._isEditing_k__BackingField )
                                return;
                              this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                              if ( this )
                              {
                                v75 = v2->fields.pieceData;
                                if ( v75 )
                                {
                                  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                                  if ( this )
                                  {
                                    Square = WarBoardData__GetSquare(
                                               (WarBoardData_o *)this,
                                               v75->fields._nowSquareIndex_k__BackingField,
                                               0);
                                    if ( Square )
                                      WarBoardSquareData__DeactiveEditPointArrow(Square, 0);
                                    return;
                                  }
                                }
                              }
                            }
                            goto LABEL_116;
                          }
                        }
                        else if ( !this )
                        {
                          goto LABEL_116;
                        }
                        IsNpc = WarBoardPieceData__get_IsNpc((WarBoardPieceData_o *)this, 0);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
                        if ( IsNpc )
                        {
                          if ( !this )
                            goto LABEL_116;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                          if ( !this )
                            goto LABEL_116;
                          p_z = &v2->fields.positionLevelNpc.fields.z;
                          p_x = &v2->fields.positionLevelNpc.fields.x;
                          p_y = &v2->fields.positionLevelNpc.fields.y;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_116;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
                          if ( !this )
                            goto LABEL_116;
                          p_z = &v2->fields.positionLevel.fields.z;
                          p_x = &v2->fields.positionLevel.fields.x;
                          p_y = &v2->fields.positionLevel.fields.y;
                        }
                        goto LABEL_107;
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
LABEL_116:
    sub_21FFECC(this, method);
  }
  if ( !this )
    goto LABEL_116;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
  if ( !this )
    goto LABEL_116;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_116;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_116;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v42 = v2->fields.pieceData;
  if ( !v42 )
    goto LABEL_116;
  if ( !v42->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_116;
  v43 = v2->fields.pieceData;
  if ( !v43 )
    goto LABEL_116;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_116;
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
  __int64 v9; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935EB7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_5935EB7 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
    sub_21FFECC(transform, v9);
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
  WarBoardServantPieceComponent_o *v6; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  this->fields.nowNpProgress = progress;
  if ( npBars )
  {
    max_length = npBars->max_length;
    v6 = this;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_31;
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_30;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0);
      npBars = v6->fields.npBars;
      if ( !npBars )
        goto LABEL_30;
    }
    if ( SLODWORD(npBars->max_length) >= 2 )
    {
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[1];
      if ( progress <= 1.0 )
      {
        if ( !this )
          goto LABEL_30;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_30;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v7 = v6->fields.npBars;
        if ( !v7 )
          goto LABEL_30;
        if ( (v7->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_31;
        this = (WarBoardServantPieceComponent_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_30;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0);
      }
    }
    v8 = v6->fields.npBars;
    if ( !v8 )
      goto LABEL_30;
    if ( SLODWORD(v8->max_length) < 3 )
      return;
    this = (WarBoardServantPieceComponent_o *)v8->m_Items[2];
    if ( progress <= 2.0 )
    {
      if ( this )
      {
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
LABEL_30:
      sub_21FFECC(this, method);
    }
    if ( !this )
      goto LABEL_30;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v9 = v6->fields.npBars;
    if ( !v9 )
      goto LABEL_30;
    if ( LODWORD(v9->max_length) > 2 )
    {
      this = (WarBoardServantPieceComponent_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0);
        return;
      }
      goto LABEL_30;
    }
LABEL_31:
    sub_21FFED4(this);
  }
}


bool WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0 )
    sub_21FFECC(this, x);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void WarBoardServantPieceComponent___OnDead_b__46_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardServantPieceComponent___OnRevive_b__47_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_5935ECD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_5935ECD = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(button, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935ECE & 1) == 0 )
  {
    sub_21FFC50(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_5935ECE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
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

  if ( (byte_5935ECF & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_5935ECF = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_21FFD10(int___TypeInfo, 3);
  if ( !x || !result )
    sub_21FFECC(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_21FFED4(result);
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

  if ( (byte_5935ED0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    byte_5935ED0 = 1;
  }
  v3 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_21FFECC(Instance, v6);
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
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_5935ED1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_5935ED1 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_5935ED2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_21FFC50(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_5935ED2 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_21FFECC(this, method);
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
    sub_21FFECC(0, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._15_ChangeStatus.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._15_ChangeStatus.method);
}
void WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_E9D010;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_E9D1E0;
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

  if ( (byte_596E015 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E015 = 1;
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
    sub_2213CDC(pieceData, method);
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

  if ( (byte_596E014 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13265/*"ServantDying"*/);
    byte_596E014 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_13265/*"ServantDying"*/,
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
      sub_2213CDC(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_13265/*"ServantDying"*/,
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
      sub_2213CDC(pieceData, isBreak);
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

  if ( (byte_596E020 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E020 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(partyBuffComponent, 0, 0);
  if ( !v5 )
  {
    v7 = this->fields.partyBuffComponent;
    if ( !v7 )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596E01E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E01E = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selectPiece, method);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0, 0) )
  {
    if ( selectPiece )
    {
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_2213B20(int___TypeInfo, 1);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          sub_2213CE4(v7);
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
      sub_2213CDC(v7, v6);
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

  if ( (byte_596E01C & 1) == 0 )
  {
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_2213A60(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_2213A60(&WarBoardWaitTime_TypeInfo);
    byte_596E01C = 1;
  }
  v6 = sub_2213CCC(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)eventBossUI, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)endAction, v15, v16, v17, v18, v19, v20),
        v21 = sub_2213CCC(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v21, 0.0, 0),
        !v21) )
  {
    sub_2213CDC(v7, v8);
  }
  v22 = (System_Delegate_o **)(v21 + 40);
  v23 = *(System_Delegate_o **)(v21 + 40);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
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
    sub_221405C(v25, v33, v26, v27);
LABEL_9:
    *v22 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 40), v32, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_596E01B & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_2213A60(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    byte_596E01B = 1;
  }
  v4 = sub_2213CCC(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  v13 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v4 + 16) = 0;
  v14 = (System_Func_bool__o *)sub_2213CCC(v13);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  v16 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, (UnityEngine_CustomYieldInstruction_o *)v15, 0);
  if ( !v16 )
LABEL_11:
    sub_2213CDC(v5, v6);
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
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
    sub_221405C(v20, v28, v21, v22);
LABEL_9:
    *v17 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_596E01D & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_2213A60(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    byte_596E01D = 1;
  }
  v4 = sub_2213CCC(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_11;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)eventBossUI, v7, v8, v9, v10, v11, v12);
  v13 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v4 + 16) = 0;
  v14 = (System_Func_bool__o *)sub_2213CCC(v13);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  v16 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, (UnityEngine_CustomYieldInstruction_o *)v15, 0);
  if ( !v16 )
LABEL_11:
    sub_2213CDC(v5, v6);
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
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
    sub_221405C(v20, v28, v21, v22);
LABEL_9:
    *v17 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
  return (WarBoardCallbackTask_o *)v16;
}


void WarBoardServantPieceComponent__EditPiece(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_596E013 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_596E013 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_2213CDC(0, method);
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
    sub_2213CDC(servantIcon, method);
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
    sub_2213CDC(servantIcon, method);
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

  if ( (byte_596E016 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_2213A60(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_2213A60(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_2213A60(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_596E016 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_2213B20(int___TypeInfo, 3);
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
    sub_2213CE4(BattleParticipantInfo);
  }
  v12 = Method_System_Array_Empty_int___;
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v13 = v12[7];
  if ( !v13 )
  {
    sub_224B964(v12);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, v6, v7);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v12[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)&BattleParticipantInfo[9].fields._Participants_k__BackingField + 5) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_224B908(v8);
  if ( !warBoardData
    || (v15 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0)) == 0) )
  {
LABEL_27:
    sub_2213CDC(BattleParticipantInfo, v6);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0);
    v20 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
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
      _9__43_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v24,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0);
      v25 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v25->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__43_1, (int32_t)_9__43_1, v26, v27, v28, v29, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v32,
                                                                 (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v33 = System_Linq_Enumerable__Concat_int_(
          v10,
          v15,
          (const MethodInfo_3875F9C *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_596E025 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_596E025 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0) )
  {
    sub_2213CDC(button, method);
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

  if ( (byte_596E00E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21217/*"icon_strong_enemy"*/);
    sub_2213A60(&StringLiteral_20988/*"hp_gauge_boss"*/);
    sub_2213A60(&StringLiteral_24525/*"servant_base_{0}"*/);
    byte_596E00E = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v29 = pieceData->fields._forceId_k__BackingField + 1;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v29);
  hpBar = System_String__Format((System_String_o *)StringLiteral_24525/*"servant_base_{0}"*/, v8, 0);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20988/*"hp_gauge_boss"*/, 0);
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
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_21217/*"icon_strong_enemy"*/, 0);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_2213CDC(hpBar, v6);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_2213A04(
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
    sub_2213CDC(this, method);
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

  if ( (byte_596E012 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E012 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  const MethodInfo_45E9150 *v23; // x2
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
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
  const MethodInfo_45E9150 *v41; // x2
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct WarBoardTaskBase_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  UnityEngine_Transform_o *v51; // x1
  Il2CppClass **v52; // x0
  bool IsStageBoss; // w0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v61; // x27
  WarBoardEventBossUIComponent_o **v62; // x27
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_Object_o *v65; // x28
  _BOOL8 v66; // x0
  const MethodInfo *v67; // x2
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct WarBoardTaskBase_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  UnityEngine_Transform_o *v77; // x1
  Il2CppClass **v78; // x0
  WarBoardServantPieceComponent_o *v79; // x0
  const MethodInfo *v80; // x3
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct WarBoardTaskBase_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  UnityEngine_Transform_o *v90; // x1
  Il2CppClass **v91; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v95; // x21
  System_Delegate_o **v96; // x22
  System_Delegate_o *v97; // x23
  WarBoardTaskBase_TaskCallback_o *v98; // x24
  System_Delegate_o *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  int32_t v106; // w8
  WarBoardTaskBase_TaskCallback_c *v107; // x1
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  struct WarBoardTaskBase_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  WarBoardManager_TaskList_o *v118; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v120; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v123; // 0:x0.16
  System_Nullable_Vector3__o v124; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_596E018 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&WarBoardManager_TaskList_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_2213A60(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_2213A60(&WarBoardGaugePerformance_TypeInfo);
    byte_596E018 = 1;
  }
  priority = 0;
  v12 = sub_2213CCC(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = (WarBoardManager_TaskList_o *)sub_2213CCC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v21, 0);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v123.fields.hasValue = &v120;
    *(_QWORD *)&v120.fields.hasValue = 0;
    *(_QWORD *)&v120.fields.value.fields.y = 0;
    *(_QWORD *)&v123.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v123, localPosition, v23);
    if ( !Instance )
      goto LABEL_58;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v120,
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v33, v24, v25, v26, v27, v28, v29);
    }
  }
  v118 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v36 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v38);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_44935116(
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
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_44935116(
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
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v21 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v36,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_58;
    v126 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v124.fields.hasValue = &v120;
    v120 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v124.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v124, v126, v41);
    if ( !v40 )
      goto LABEL_58;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v40,
                                             v120,
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &v48->obj.klass + v50;
      v21->fields._size = v50 + 1;
      v52[4] = (Il2CppClass *)v51;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v51, v42, v43, v44, v45, v46, v47);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0);
  EventBossUI = 0;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)EventBossUI, v54, v55, v56, v57, v58, v59);
  v65 = *(UnityEngine_Object_o **)(v12 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63, v64);
  v66 = UnityEngine_Object__op_Inequality(v65, 0, 0);
  if ( v66 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v66,
                                             *v62,
                                             v67);
    v74 = v21->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v74 )
      goto LABEL_58;
    v76 = v21->fields._size;
    v77 = transform;
    if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v74->obj.klass + v76;
      v21->fields._size = v76 + 1;
      v78[4] = (Il2CppClass *)v77;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v78 + 4), (int32_t)v77, v68, v69, v70, v71, v72, v73);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v79, *v62, 0, v80);
    v87 = v21->fields._items;
    v88 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v21->fields._version;
    if ( !v87 )
      goto LABEL_58;
    v89 = v21->fields._size;
    v90 = transform;
    if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v21,
        (Il2CppObject *)transform,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v87->obj.klass + v89;
      v21->fields._size = v89 + 1;
      v91[4] = (Il2CppClass *)v90;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v90, v81, v82, v83, v84, v85, v86);
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
  v95 = sub_2213CCC(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v95, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0);
  if ( !v95 )
    goto LABEL_58;
  v96 = (System_Delegate_o **)(v95 + 32);
  v97 = *(System_Delegate_o **)(v95 + 32);
  v98 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v98,
    (Il2CppObject *)v12,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0);
  v99 = System_Delegate__Combine(v97, (System_Delegate_o *)v98, 0);
  v106 = (int)v99;
  if ( v99 )
  {
    v107 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v99->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v96 = v99;
      if ( (WarBoardTaskBase_TaskCallback_c *)v99->klass == v107 )
        goto LABEL_50;
    }
    sub_221405C(v99, v107, v100, v101);
  }
  *v96 = 0;
LABEL_50:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 32), v106, v100, v101, v102, v103, v104, v105);
  *(_BYTE *)(v95 + 26) = 1;
  v114 = v21->fields._items;
  v115 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v114 )
    goto LABEL_58;
  v116 = v21->fields._size;
  if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v21,
      (Il2CppObject *)v95,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = &v114->obj.klass + v116;
    v21->fields._size = v116 + 1;
    v117[4] = (Il2CppClass *)v95;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v117 + 4), v95, v108, v109, v110, v111, v112, v113);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v37,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v118 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v118,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v118->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_2213CDC(transform, v14);
  WarBoardManager__AddTask_44971780(
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

  if ( (byte_596E017 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E017 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
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
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_44971780(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v10, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_2213CDC(pieceData, taskList);
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
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_44935116; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v56; // x0
  const MethodInfo *v57; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v59; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v60; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v62; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_45E9150 *v64; // x2
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass *v74; // x1
  Il2CppClass **v75; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v77; // x8
  System_String_o *v78; // x22
  __int64 v79; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x23
  __int64 v83; // x25
  __int64 v84; // x26
  ServantEntity_o *v85; // x25
  int v86; // w23
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x22
  MissionNaviTransitionBoardItem_o *v89; // x23
  System_Delegate_o *v90; // x25
  WarBoardTaskBase_TaskCallback_o *v91; // x26
  System_Delegate_o *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int32_t v99; // w8
  WarBoardTaskBase_TaskCallback_c *v100; // x1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  WarBoardWaitTime_o *v111; // x20
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  WarBoardManager_TaskList_o *v122; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v123; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_Vector3__o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E019 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&WarBoardManager_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_2213A60(&WarBoardWaitTime_TypeInfo);
    sub_2213A60(&StringLiteral_6446/*"Escape_Effect"*/);
    sub_2213A60(&StringLiteral_6307/*"Enemy_Dead_Effect"*/);
    sub_2213A60(&StringLiteral_13288/*"Servant_Dead_Effect"*/);
    sub_2213A60(&StringLiteral_13515/*"Special_Effect{0:D2}"*/);
    byte_596E019 = 1;
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
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v122 = taskList;
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v31[4] = v30;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v40->obj.klass + v42;
      v16->fields._size = v42 + 1;
      v44[4] = v43;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v43, v34, v35, v36, v37, v38, v39);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v46 = (WarBoardManager_o *)gameObject;
    if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v10, v45);
    if ( !v46 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v46, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v49 = cameraSize;
  v50 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v48);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v53,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0, 0);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0, 0);
  if ( !v53 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_44935116 = WarBoardManager__GetEventTasks_44935116((WarBoardManager_o *)gameObject, 24, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_44935116,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v56 = WarBoardManager__GetEventTasks_44935116((WarBoardManager_o *)gameObject, 25, &priority, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v56,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v50, v57);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v59 = WarBoardManager__GetEventTasks_44935116(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v59,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v60 = WarBoardManager__GetEventTasks_44935116(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v62 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v53,
    (System_Collections_Generic_IEnumerable_T__o *)v62,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    *(_QWORD *)&v125.fields.hasValue = &v123;
    *(_QWORD *)&v123.fields.hasValue = 0;
    *(_QWORD *)&v123.fields.value.fields.y = 0;
    *(_QWORD *)&v125.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v125, localPosition, v64);
    if ( !Instance )
      goto LABEL_101;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v123, v49, 1, 1, 0, 0);
    if ( !v16 )
      goto LABEL_101;
    v71 = v16->fields._items;
    v72 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v16->fields._version;
    if ( !v71 )
      goto LABEL_101;
    v73 = v16->fields._size;
    v74 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v71->obj.klass + v73;
      v16->fields._size = v73 + 1;
      v75[4] = v74;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v74, v65, v66, v67, v68, v69, v70);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0);
  v77 = (System_String_o **)&StringLiteral_6307/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v77 = (System_String_o **)&StringLiteral_13288/*"Servant_Dead_Effect"*/;
  v78 = *v77;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v83 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v84 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v79);
  *(_QWORD *)&v126.fields.currentCryptoKey = v83;
  *(_QWORD *)&v126.fields.fakeValue = v84;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v126, 0);
  if ( !v82 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v82,
                 (int32_t)gameObject,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v85 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0);
  if ( !v85 )
    goto LABEL_101;
  v86 = (int)gameObject;
  if ( ServantEntity__checkIsHeroineSvt(v85, 0) || v86 == 1 )
  {
    v78 = (System_String_o *)StringLiteral_6446/*"Escape_Effect"*/;
  }
  else if ( v86 >= 2 )
  {
    *(_DWORD *)&v123.fields.hasValue = v86;
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v123);
    v78 = System_String__Format((System_String_o *)StringLiteral_13515/*"Special_Effect{0:D2}"*/, v87, 0);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v78, 0);
  if ( !gameObject )
LABEL_101:
    sub_2213CDC(gameObject, v10);
  v88 = (Il2CppObject *)gameObject;
  v89 = (MissionNaviTransitionBoardItem_o *)((char *)gameObject + 40);
  v90 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  *((_BYTE *)gameObject + 26) = 1;
  v91 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v91,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0);
  v92 = System_Delegate__Combine(v90, (System_Delegate_o *)v91, 0);
  v99 = (int)v92;
  if ( !v92 )
    goto LABEL_82;
  v100 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v92->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v89->klass = (MissionNaviTransitionBoardItem_c *)v92, (WarBoardTaskBase_TaskCallback_c *)v92->klass != v100) )
  {
    sub_221405C(v92, v100, v93, v94);
LABEL_82:
    v89->klass = 0;
  }
  sub_2213A04(v89, v99, v93, v94, v95, v96, v97, v98);
  if ( !v16 )
    goto LABEL_101;
  v107 = v16->fields._items;
  v108 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v16->fields._version;
  if ( !v107 )
    goto LABEL_101;
  v109 = v16->fields._size;
  if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      v88,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = &v107->obj.klass + v109;
    v16->fields._size = v109 + 1;
    v110[4] = (Il2CppClass *)v88;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v110 + 4), (int32_t)v88, v101, v102, v103, v104, v105, v106);
  }
  v111 = (WarBoardWaitTime_o *)sub_2213CCC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v111, 0.5, 0);
  v118 = v16->fields._items;
  v119 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v16->fields._version;
  if ( !v118 )
    goto LABEL_101;
  v120 = v16->fields._size;
  if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v111,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v121 = &v118->obj.klass + v120;
    v16->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)v111;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v121 + 4), (int32_t)v111, v112, v113, v114, v115, v116, v117);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v53,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)v53,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v122 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v122,
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v122->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_44964336(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
      0);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_596E024 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19707/*"ef_guts"*/);
    byte_596E024 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19707/*"ef_guts"*/,
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

  if ( (byte_596E023 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19729/*"ef_special_invincible01"*/);
    byte_596E023 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19729/*"ef_special_invincible01"*/,
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

  if ( (byte_596E021 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_2213A60(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_2213A60(&WarBoardGaugePerformance_TypeInfo);
    byte_596E021 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v18 = sub_2213CCC(WarBoardGaugePerformance_TypeInfo);
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
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v25,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0);
    v26 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    v26->__9__57_0 = _9__57_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__57_0, (int32_t)_9__57_0, v27, v28, v29, v30, v31, v32);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v50 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), v18, v41, v42, v43, v44, v45, v46);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v9,
                (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_44971780(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
              0);
            return;
          }
        }
      }
LABEL_30:
      sub_2213CDC(gameObject, v8);
    }
  }
  sub_221405C(v33, v40, v34, v35);
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

  if ( (byte_596E026 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_2213A60(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_2213A60(&WarBoardGaugePerformance_TypeInfo);
    byte_596E026 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v18 = sub_2213CCC(WarBoardGaugePerformance_TypeInfo);
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
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v25,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0);
    v26 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    v26->__9__63_0 = _9__63_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__63_0, (int32_t)_9__63_0, v27, v28, v29, v30, v31, v32);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v50 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), v18, v41, v42, v43, v44, v45, v46);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_44971780(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0);
            return;
          }
        }
      }
LABEL_28:
      sub_2213CDC(gameObject, v10);
    }
  }
  sub_221405C(v33, v40, v34, v35);
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
  const MethodInfo_45E9150 *v13; // x2
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v23; // x1
  Il2CppClass **v24; // x0
  Il2CppObject *v25; // x22
  WarBoardBreakPointComponent_o *v26; // x23
  WarBoardTaskBase_TaskCallback_c *v27; // x0
  MissionNaviTransitionBoardItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // t1
  WarBoardTaskBase_TaskCallback_o *v30; // x25
  System_Delegate_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w8
  WarBoardTaskBase_TaskCallback_c *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  WarBoardWaitTime_o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  System_Nullable_Vector3__o v61; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:kr00_12.12
  System_Nullable_Vector3__o v63; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E01A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_2213A60(&WarBoardWaitTime_TypeInfo);
    sub_2213A60(&StringLiteral_13289/*"Servant_Regenerate_Effect"*/);
    byte_596E01A = 1;
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
        sub_2213CE4(Instance);
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
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v63.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v63.fields.hasValue = &v61;
  *(_QWORD *)&v61.fields.hasValue = 0;
  *(_QWORD *)&v61.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v63, localPosition, v13);
  if ( !v12 )
    goto LABEL_10;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v12,
                                                v61,
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_13289/*"Servant_Regenerate_Effect"*/,
                                                0);
  if ( !Instance )
LABEL_10:
    sub_2213CDC(Instance, v6);
  v25 = (Il2CppObject *)Instance;
  v26 = Instance;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  activeObject = (System_Delegate_o *)v26->fields.activeObject;
  p_activeObject = (MissionNaviTransitionBoardItem_o *)&v26->fields.activeObject;
  BYTE2(p_activeObject[-1].fields._BoardType_k__BackingField) = 1;
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(v27);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0);
  v31 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v30, 0);
  v38 = (int)v31;
  if ( v31 )
  {
    v39 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (MissionNaviTransitionBoardItem_c *)v31;
      if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == v39 )
        goto LABEL_28;
    }
    sub_221405C(v31, v39, v32, v33);
  }
  p_activeObject->klass = 0;
LABEL_28:
  sub_2213A04(p_activeObject, v38, v32, v33, v34, v35, v36, v37);
  v46 = v11->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v46 )
    goto LABEL_10;
  v48 = v11->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v25,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v11->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v25, v40, v41, v42, v43, v44, v45);
  }
  v50 = (WarBoardWaitTime_o *)sub_2213CCC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v50, 0.5, 0);
  v57 = v11->fields._items;
  v58 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v57 )
    goto LABEL_10;
  v59 = v11->fields._size;
  if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v50,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v11->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v50;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v50, v51, v52, v53, v54, v55, v56);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_44964336(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
    0);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  const MethodInfo_45E9150 *v22; // x2
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v32; // x1
  Il2CppClass **v33; // x0
  Il2CppObject *v34; // x20
  MissionNaviTransitionBoardItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w8
  WarBoardTaskBase_TaskCallback_c *v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  Il2CppObject *v57; // x20
  System_Nullable_Vector3__o v58; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v59; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E022 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_2213A60(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_2213A60(&StringLiteral_11772/*"Reinforcement_Effect_1"*/);
    byte_596E022 = 1;
  }
  v5 = sub_2213CCC(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v32, v23, v24, v25, v26, v27, v28);
  }
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_11772/*"Reinforcement_Effect_1"*/,
                                           0);
  if ( !transform )
LABEL_23:
    sub_2213CDC(transform, v7);
  v34 = (Il2CppObject *)transform;
  p_fields = (MissionNaviTransitionBoardItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v37 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0);
  v38 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v37, 0);
  v45 = (int)v38;
  if ( v38 )
  {
    v46 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_fields->klass = (MissionNaviTransitionBoardItem_c *)v38;
      if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == v46 )
        goto LABEL_17;
    }
    sub_221405C(v38, v46, v39, v40);
  }
  p_fields->klass = 0;
LABEL_17:
  sub_2213A04(p_fields, v45, v39, v40, v41, v42, v43, v44);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v20->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v56 + 4), (int32_t)v34, v47, v48, v49, v50, v51, v52);
  }
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___ToArray(
                                           v20,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_2213CDC(this, active);
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

  if ( (byte_596E00F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_2213A60(&StringLiteral_23530/*"onBoard_initial_placement_class2_{0}"*/);
    byte_596E00F = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RestrictionMaster___);
  pieceData = this->fields.pieceData;
  entity = 0;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_2213CDC(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
    sub_2213CE4(ServantClassEntities);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  m_CachedPtr_high = HIDWORD(classIconRoot[1].fields.m_CachedPtr);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CachedPtr_high);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23530/*"onBoard_initial_placement_class2_{0}"*/, v11, 0);
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

  if ( (byte_596E01F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E01F = 1;
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
             (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
    sub_2213CDC(pieceData, v6);
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
    sub_2213CDC(this, userServantId);
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
    sub_2213CDC(this, userServantEquipId);
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
  if ( (byte_596E010 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&StringLiteral_24092/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_2213A60(&StringLiteral_16023/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_596E010 = 1;
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
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_116;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconLevel_k__BackingField);
      v77 = npcDispLimitCount_k__BackingField;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v77);
      v18 = System_String__Concat(v16, v17, 0);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v22 = v18;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
      if ( AtlasManager__SetEventUI_47569484(servantLevel, enemyIcon, v22, 0) )
        goto LABEL_30;
      v23 = (UISprite_o *)v2->fields.enemyIcon;
      v26 = System_Int32__ToString((int32_t)&v79, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
      if ( AtlasManager__SetEventUI_47569484(servantLevel, v23, v26, 0) )
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
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_47569484(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_24092/*"questinfo_enemyface_bg"*/,
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
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
                                                                    (System_String_o *)StringLiteral_16023/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0);
                        v66 = v2->fields.pieceData;
                        if ( !v66 )
                          goto LABEL_116;
                        v67 = this;
                        iconLevel_k__BackingField = v66->fields._iconLevel_k__BackingField;
                        v68 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconLevel_k__BackingField);
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
                              this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_2213CDC(this, method);
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
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_596E011 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_596E011 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
    sub_2213CDC(transform, v9);
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
      sub_2213CDC(this, method);
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
    sub_2213CE4(this);
  }
}


bool WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0 )
    sub_2213CDC(this, x);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void WarBoardServantPieceComponent___OnDead_b__46_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardServantPieceComponent___OnRevive_b__47_0(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_596E027 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_596E027 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0)) == 0
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))button->klass[1]._1.element_class)(
          button,
          button->klass[1]._1.castClass,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(button, method);
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

  if ( (byte_596E028 & 1) == 0 )
  {
    sub_2213A60(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_596E028 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v1;
  sub_2213A04(
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

  if ( (byte_596E029 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596E029 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_2213B20(int___TypeInfo, 3);
  if ( !x || !result )
    sub_2213CDC(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_2213CE4(result);
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

  if ( (byte_596E02A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    byte_596E02A = 1;
  }
  v3 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_2213CDC(Instance, v6);
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
  if ( (byte_596E02B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_596E02B = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
  if ( (byte_596E02C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_2213A60(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_596E02C = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !eventBossUI )
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._15_ChangeStatus.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._15_ChangeStatus.method);
}
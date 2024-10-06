void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BB7490;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BB6D30;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, method);
}


void __fastcall WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v5; // x19
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A6D9B9 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6D9B9 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  CriticalStars = WarBoardPieceData__get_CriticalStars(pieceData, 0LL);
  criticalStarsLabel = (UnityEngine_Object_o *)this->fields.criticalStarsLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsLabel, 0LL, 0LL) )
  {
    v5 = this->fields.criticalStarsLabel;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&CriticalStars, 0LL);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)pieceData, 0LL);
      return;
    }
LABEL_10:
    sub_1B9026C(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4A6D9B8 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_12650/*"ServantDying"*/, v4);
    byte_4A6D9B8 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12650/*"ServantDying"*/,
      v2);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
    {
      pieceData = this->fields.faceEffect;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive(pieceData, 0, 0LL);
        return;
      }
LABEL_13:
      sub_1B9026C(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12650/*"ServantDying"*/,
      v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__ChangeStatus(
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
          CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(pieceData, 0LL),
          !hpBar) )
    {
LABEL_9:
      sub_1B9026C(pieceData, isBreak);
    }
    UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_9;
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL);
  WarBoardServantPieceComponent__UpdateNpBars(this, CurrentNpProgress, v8);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_9;
  npBarEffect = this->fields.npBarEffect;
  v10 = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL);
  if ( !npBarEffect )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(npBarEffect, v10 >= 1.0, 0LL);
  WarBoardServantPieceComponent__ChangeDyingAnimation(this, v11);
}


void __fastcall WarBoardServantPieceComponent__ClearPartyBuff(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyBuffComponent; // x20
  __int64 v4; // x1
  WarBoardServantPiecePartyBuffComponent_o *v5; // x0

  if ( (byte_4A6D9C4 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6D9C4 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    v5 = this->fields.partyBuffComponent;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
    WarBoardServantPiecePartyBuffComponent__ClearPartyBuff(v5, 0LL);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v7; // x1
  struct ServantClassCompatibilityIconComponent_o *v8; // x0
  System_Int32_array *v9; // x2
  struct WarBoardPieceData_o *pieceData; // x8

  if ( (byte_4A6D9C2 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, selectPiece);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A6D9C2 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( selectPiece )
    {
      v8 = (struct ServantClassCompatibilityIconComponent_o *)sub_1B900B8(int___TypeInfo, 1LL);
      if ( v8 )
      {
        v9 = (System_Int32_array *)v8;
        if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
          sub_1B90274(v8, v7);
        LODWORD(v8->fields.upIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v8 = this->fields.classCompatibilityIcon;
          if ( v8 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v8,
              pieceData->fields._iconClassId_k__BackingField,
              v9,
              4,
              0LL);
            return;
          }
        }
      }
LABEL_14:
      sub_1B9026C(v8, v7);
    }
    v8 = this->fields.classCompatibilityIcon;
    if ( !v8 )
      goto LABEL_14;
    ServantClassCompatibilityIconComponent__Clear(v8, 0LL);
  }
}


WarBoardTaskBase_o *__fastcall WarBoardServantPieceComponent__CreateBossUIBreakTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  System_Delegate_o **v17; // x21
  System_Delegate_o *v18; // x22
  WarBoardTaskBase_TaskCallback_o *v19; // x23
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Delegate_o *v23; // x8
  WarBoardTaskBase_TaskCallback_c *v24; // x1

  if ( (byte_4A6D9C0 & 1) == 0 )
  {
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6);
    sub_1B90010(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v7);
    sub_1B90010(&WarBoardWaitTime_TypeInfo, v8);
    byte_4A6D9C0 = 1;
  }
  v9 = sub_1B9025C(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = eventBossUI,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)eventBossUI, v12, v13),
        *(_QWORD *)(v9 + 24) = endAction,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)endAction, v14, v15),
        v16 = sub_1B9025C(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v16, 0.0, 0LL),
        !v16) )
  {
    sub_1B9026C(v10, v11);
  }
  v17 = (System_Delegate_o **)(v16 + 40);
  v18 = *(System_Delegate_o **)(v16 + 40);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0LL);
  v23 = v20;
  if ( !v20 )
    goto LABEL_9;
  v24 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v17 = v20, (WarBoardTaskBase_TaskCallback_c *)v20->klass != v24) )
  {
    sub_1B9052C(v20);
LABEL_9:
    *v17 = v23;
  }
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v16 + 40), (int32_t)v23, v21, v22);
  *(_BYTE *)(v16 + 26) = 1;
  return (WarBoardTaskBase_o *)v16;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Func_bool__o *v15; // x20
  UnityEngine_WaitUntil_o *v16; // x21
  __int64 v17; // x20
  System_Delegate_o **v18; // x21
  System_Delegate_o *v19; // x22
  WarBoardTaskBase_TaskCallback_o *v20; // x23
  System_Delegate_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Delegate_o *v24; // x8
  WarBoardTaskBase_TaskCallback_c *v25; // x1

  if ( (byte_4A6D9BF & 1) == 0 )
  {
    sub_1B90010(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v5);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v6);
    sub_1B90010(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v7);
    sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1B90010(&WarBoardCallbackTask_TypeInfo, v9);
    byte_4A6D9BF = 1;
  }
  v10 = sub_1B9025C(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)eventBossUI, v13, v14);
  *(_BYTE *)(v10 + 16) = 0;
  v15 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0LL);
  v16 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
  v17 = sub_1B9025C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v17, (UnityEngine_CustomYieldInstruction_o *)v16, 0LL);
  if ( !v17 )
LABEL_11:
    sub_1B9026C(v11, v12);
  v18 = (System_Delegate_o **)(v17 + 32);
  v19 = *(System_Delegate_o **)(v17 + 32);
  v20 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v21 = System_Delegate__Combine(v19, (System_Delegate_o *)v20, 0LL);
  v24 = v21;
  if ( !v21 )
    goto LABEL_9;
  v25 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v21->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v18 = v21, (WarBoardTaskBase_TaskCallback_c *)v21->klass != v25) )
  {
    sub_1B9052C(v21);
LABEL_9:
    *v18 = v24;
  }
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v24, v22, v23);
  return (WarBoardCallbackTask_o *)v17;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Func_bool__o *v15; // x20
  UnityEngine_WaitUntil_o *v16; // x21
  __int64 v17; // x20
  System_Delegate_o **v18; // x21
  System_Delegate_o *v19; // x22
  WarBoardTaskBase_TaskCallback_o *v20; // x23
  System_Delegate_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Delegate_o *v24; // x8
  WarBoardTaskBase_TaskCallback_c *v25; // x1

  if ( (byte_4A6D9C1 & 1) == 0 )
  {
    sub_1B90010(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v5);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v6);
    sub_1B90010(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v7);
    sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1B90010(&WarBoardCallbackTask_TypeInfo, v9);
    byte_4A6D9C1 = 1;
  }
  v10 = sub_1B9025C(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)eventBossUI, v13, v14);
  *(_BYTE *)(v10 + 16) = 0;
  v15 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0LL);
  v16 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
  v17 = sub_1B9025C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v17, (UnityEngine_CustomYieldInstruction_o *)v16, 0LL);
  if ( !v17 )
LABEL_11:
    sub_1B9026C(v11, v12);
  v18 = (System_Delegate_o **)(v17 + 32);
  v19 = *(System_Delegate_o **)(v17 + 32);
  v20 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v21 = System_Delegate__Combine(v19, (System_Delegate_o *)v20, 0LL);
  v24 = v21;
  if ( !v21 )
    goto LABEL_9;
  v25 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v21->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v18 = v21, (WarBoardTaskBase_TaskCallback_c *)v21->klass != v25) )
  {
    sub_1B9052C(v21);
LABEL_9:
    *v18 = v24;
  }
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v24, v22, v23);
  return (WarBoardCallbackTask_o *)v17;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4A6D9B7 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4A6D9B7 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BE1EEC(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1B9026C(0LL, method);
  WarBoardManager__OpenPartyMenu(v5, this->fields.pieceData, 0LL);
}


UnityEngine_Transform_o *__fastcall WarBoardServantPieceComponent__GetEffectDisplayTransform(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.effectDisplayTransform;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardServantPieceComponent__GetIconLocalPosition(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon
    || (servantIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(servantIcon, 0LL)) == 0LL )
  {
    sub_1B9026C(servantIcon, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)servantIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardServantPieceComponent__GetIconPosition(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon
    || (servantIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(servantIcon, 0LL)) == 0LL )
  {
    sub_1B9026C(servantIcon, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)servantIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


System_Int32_array *__fastcall WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(
        WarBoardServantPieceComponent_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v16; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  unsigned int v19; // w9
  _QWORD *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  WarBoardServantPieceComponent___c_c *v27; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v29; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4A6D9BA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, warBoardData);
    sub_1B90010(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_1B90010(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_1B90010(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B90010(&int___TypeInfo, v11);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v12);
    sub_1B90010(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1B90010(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v14);
    byte_4A6D9BA = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1B900B8(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v19 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v19
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v19 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v19 <= 2) )
  {
    sub_1B90274(BattleParticipantInfo, v16);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v20 = Method_System_Array_Empty_int___;
  v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v21 )
  {
    sub_1BE1F48(Method_System_Array_Empty_int___);
    v21 = v20[7];
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BE1EEC(v22);
  if ( !*(_DWORD *)(v22 + 224) )
    j_il2cpp_runtime_class_init_0(v22);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v20[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1BE1EEC(BattleParticipantInfo);
  if ( !warBoardData
    || (v23 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_27:
    sub_1B9026C(BattleParticipantInfo, v16);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v25 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v25,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0LL);
    v26 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v25,
            (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v27 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v27 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v27->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1B9025C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v29,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0LL);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v31, v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v26,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_2EC12A0 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v33,
                                                                 (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v34 = System_Linq_Enumerable__Concat_int_(
          v18,
          v23,
          (const MethodInfo_2EA7D98 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4A6D9C9 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4A6D9C9 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_1B9026C(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *hpBar; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UISprite_o *frameSprite; // x21
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v27; // x2
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A6D9B2 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_1B90010(&int_TypeInfo, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&StringLiteral_20215/*"icon_strong_enemy"*/, v7);
    sub_1B90010(&StringLiteral_20004/*"hp_gauge_boss"*/, v8);
    sub_1B90010(&StringLiteral_23152/*"servant_base_{0}"*/, v9);
    byte_4A6D9B2 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v28 = pieceData->fields._forceId_k__BackingField + 1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12, v13, v14);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23152/*"servant_base_{0}"*/, v16, 0LL);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20004/*"hp_gauge_boss"*/, 0LL);
  }
  if ( pieceData->fields._battleServant_k__BackingField )
  {
    ((void (__fastcall *)(WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._15_ChangeStatus.method)(
      this,
      0LL,
      this->klass->vtable._16_IsModifyStatus.methodPtr);
  }
  else
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UIBasicSprite__set_fillAmount((UIBasicSprite_o *)hpBar, 1.0, 0LL);
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v18);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v17);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v17);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v20 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v20 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v20, (unsigned __int8)hpBar & 1, 0LL);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.classCompatibilityIcon;
    if ( !hpBar )
      goto LABEL_39;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)hpBar, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
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
                                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20215/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1B9026C(hpBar, v11);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&buffTrunNotice->fields.pieceData, (int32_t)pieceData, v23, v24);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v27);
  }
}


bool __fastcall WarBoardServantPieceComponent__IsModifyStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
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
  if ( mFillAmount != WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)this, 0LL) )
    return 1;
  this = (WarBoardServantPieceComponent_o *)v3->fields.pieceData;
  if ( !this )
LABEL_8:
    sub_1B9026C(this, method);
  nowNpProgress = v3->fields.nowNpProgress;
  if ( nowNpProgress == WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0LL) )
  {
    WarBoardServantPieceComponent__ChangeDyingAnimation(v3, v6);
    return 0;
  }
  return 1;
}


void __fastcall WarBoardServantPieceComponent__LongTapIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A6D9B6 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A6D9B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__OnBreak(
        WarBoardServantPieceComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  WarBoardManager_TaskList_o *v28; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_3631B98 *v30; // x2
  int32_t v31; // w2
  int32_t v32; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v36; // x1
  Il2CppClass **v37; // x0
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v39; // x28
  System_Collections_Generic_List_object__o *v40; // x26
  const MethodInfo *v41; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v43; // x27
  const MethodInfo_3631B98 *v44; // x2
  int32_t v45; // w2
  int32_t v46; // w3
  struct WarBoardTaskBase_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  UnityEngine_Transform_o *v50; // x1
  Il2CppClass **v51; // x0
  bool IsStageBoss; // w0
  int32_t v53; // w2
  int32_t v54; // w3
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v56; // x27
  WarBoardEventBossUIComponent_o **v57; // x27
  UnityEngine_Object_o *v58; // x28
  _BOOL8 v59; // x0
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  struct WarBoardTaskBase_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  UnityEngine_Transform_o *v67; // x1
  Il2CppClass **v68; // x0
  WarBoardServantPieceComponent_o *v69; // x0
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  int32_t v72; // w3
  struct WarBoardTaskBase_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  UnityEngine_Transform_o *v76; // x1
  Il2CppClass **v77; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v81; // x21
  System_Delegate_o **v82; // x22
  System_Delegate_o *v83; // x23
  WarBoardTaskBase_TaskCallback_o *v84; // x24
  System_Delegate_o *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Delegate_o *v88; // x8
  WarBoardTaskBase_TaskCallback_c *v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  struct WarBoardTaskBase_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  WarBoardManager_TaskList_o *v96; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v98; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_float__o v101; // 0:x2.8
  System_Nullable_float__o v102; // 0:x3.8
  System_Nullable_float__o v103; // 0:x3.8
  System_Nullable_Vector3__o v104; // 0:x0.16
  System_Nullable_Vector3__o v105; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4A6D9BC & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14);
    sub_1B90010(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v16);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v18);
    sub_1B90010(&WarBoardManager_TaskList_TypeInfo, v19);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v20);
    sub_1B90010(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v21);
    sub_1B90010(&WarBoardGaugePerformance_TypeInfo, v22);
    byte_4A6D9BC = 1;
  }
  priority = 0;
  v23 = sub_1B9025C(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_58;
  *(_QWORD *)(v23 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)this, v26, v27);
  v28 = (WarBoardManager_TaskList_o *)sub_1B9025C(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v28, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v104.fields.hasValue = &v98;
    *(_QWORD *)&v98.fields.hasValue = 0LL;
    *(_QWORD *)&v98.fields.value.fields.y = 0LL;
    *(_QWORD *)&v104.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v104, localPosition, v30);
    if ( !Instance )
      goto LABEL_58;
    v102 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v98,
                                             v102,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v28 )
      goto LABEL_58;
    items = v28->fields._items;
    v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v28->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v28->fields._size;
    v36 = transform;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v28,
        (Il2CppObject *)transform,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v28->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v36;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
    }
  }
  v96 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v41);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_35499656(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v39 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v39,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_35499656(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v40 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v28 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v28,
    (System_Collections_Generic_IEnumerable_T__o *)v39,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    v107 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v105.fields.hasValue = &v98;
    v98 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v105.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v105, v107, v44);
    if ( !v43 )
      goto LABEL_58;
    v103 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v43,
                                             v98,
                                             v103,
                                             1,
                                             1,
                                             0,
                                             0LL);
    v47 = v28->fields._items;
    v48 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v28->fields._version;
    if ( !v47 )
      goto LABEL_58;
    v49 = v28->fields._size;
    v50 = transform;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v28,
        (Il2CppObject *)transform,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v47->obj.klass + v49;
      v28->fields._size = v49 + 1;
      v51[4] = (Il2CppClass *)v50;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v56 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v56 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v56, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v23 + 16) = EventBossUI;
  v57 = (WarBoardEventBossUIComponent_o **)(v23 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)EventBossUI, v53, v54);
  v58 = *(UnityEngine_Object_o **)(v23 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v59 = UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( v59 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v59,
                                             *v57,
                                             v60);
    v64 = v28->fields._items;
    v65 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v28->fields._version;
    if ( !v64 )
      goto LABEL_58;
    v66 = v28->fields._size;
    v67 = transform;
    if ( (unsigned int)v66 >= v64->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v28,
        (Il2CppObject *)transform,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v64->obj.klass + v66;
      v28->fields._size = v66 + 1;
      v68[4] = (Il2CppClass *)v67;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v67, v62, v63);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v69, *v57, 0LL, v70);
    v73 = v28->fields._items;
    v74 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v28->fields._version;
    if ( !v73 )
      goto LABEL_58;
    v75 = v28->fields._size;
    v76 = transform;
    if ( (unsigned int)v75 >= v73->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v28,
        (Il2CppObject *)transform,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v73->obj.klass + v75;
      v28->fields._size = v75 + 1;
      v77[4] = (Il2CppClass *)v76;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v76, v71, v72);
    }
  }
  v101 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v101,
    v28,
    dummyPointa,
    0LL,
    1,
    v61);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_58;
  if ( pieceData->fields._isDead_k__BackingField )
    goto LABEL_54;
  transform = (UnityEngine_Transform_o *)this->fields.hpBar;
  if ( !transform )
    goto LABEL_58;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)transform, 0.0, 0LL);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v81 = sub_1B9025C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v81, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v81 )
    goto LABEL_58;
  v82 = (System_Delegate_o **)(v81 + 32);
  v83 = *(System_Delegate_o **)(v81 + 32);
  v84 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v84,
    (Il2CppObject *)v23,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v85 = System_Delegate__Combine(v83, (System_Delegate_o *)v84, 0LL);
  v88 = v85;
  if ( v85 )
  {
    v89 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v85->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v82 = v85;
      if ( (WarBoardTaskBase_TaskCallback_c *)v85->klass == v89 )
        goto LABEL_50;
    }
    sub_1B9052C(v85);
  }
  *v82 = v88;
LABEL_50:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v88, v86, v87);
  *(_BYTE *)(v81 + 26) = 1;
  v92 = v28->fields._items;
  v93 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v28->fields._version;
  if ( !v92 )
    goto LABEL_58;
  v94 = v28->fields._size;
  if ( (unsigned int)v94 >= v92->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v28,
      (Il2CppObject *)v81,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = &v92->obj.klass + v94;
    v28->fields._size = v94 + 1;
    v95[4] = (Il2CppClass *)v81;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v95 + 4), v81, v90, v91);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v28,
    (System_Collections_Generic_IEnumerable_T__o *)v40,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v96 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v96,
      (System_Collections_Generic_IEnumerable_T__o *)v28,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v96->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1B9026C(transform, v25);
  WarBoardManager__AddTask_35536796(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
    0LL);
}


void __fastcall WarBoardServantPieceComponent__OnDamage(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardManager_o *pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x21
  WarBoardPieceData_o *v12; // x8
  WarBoardManager_o *v13; // x20
  System_Collections_Generic_List_object__o *v14; // x20
  WarBoardServantPieceComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  WarBoardManager_o *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4A6D9BB & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_4A6D9BB = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v12 = this->fields.pieceData;
    if ( !v12 )
      goto LABEL_19;
    v13 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(v12, 0LL);
    if ( !v13 )
      goto LABEL_19;
    EventBossUI = WarBoardManager__GetEventBossUI(v13, (int32_t)pieceData, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v15, EventBossUI, v16);
    if ( v14 )
    {
      items = v14->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v14->fields._version;
      if ( items )
      {
        size = v14->fields._size;
        v22 = pieceData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v23 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v14,
              (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_35536796(
            pieceData,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B9026C(pieceData, taskList);
  }
}


void __fastcall WarBoardServantPieceComponent__OnDead(
        WarBoardServantPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  void *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v34; // x21
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_object__o *v36; // x21
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass *v44; // x1
  Il2CppClass **v45; // x0
  WarBoardServantPieceComponent_o *v46; // x0
  const MethodInfo *v47; // x2
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass *v53; // x1
  Il2CppClass **v54; // x0
  WarBoardManager_o *v55; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v57; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v60; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_35499656; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v63; // x0
  const MethodInfo *v64; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v66; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v67; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v69; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_3631B98 *v71; // x2
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass *v77; // x1
  Il2CppClass **v78; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v80; // x8
  System_String_o *v81; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x23
  __int64 v85; // x25
  __int64 v86; // x26
  ServantEntity_o *v87; // x25
  int v88; // w23
  bool v89; // w0
  const MethodInfo *v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *v93; // x0
  ServantStatusBattleListViewItem_o *v94; // x23
  System_Delegate_o *v95; // x25
  Il2CppObject *v96; // x22
  WarBoardTaskBase_TaskCallback_o *v97; // x26
  System_Delegate_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_Delegate_o *v101; // x8
  WarBoardTaskBase_TaskCallback_c *v102; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  WarBoardWaitTime_o *v109; // x20
  int32_t v110; // w2
  int32_t v111; // w3
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v117; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_float__o v119; // 0:x3.8
  System_Nullable_Vector3__o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6D9BD & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_1B90010(&DataManager_TypeInfo, v10);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_1B90010(&int_TypeInfo, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_1B90010(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v19);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_1B90010(&WarBoardManager_TypeInfo, v24);
    sub_1B90010(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_1B90010(&WarBoardWaitTime_TypeInfo, v26);
    sub_1B90010(&StringLiteral_6153/*"Escape_Effect"*/, v27);
    sub_1B90010(&StringLiteral_6012/*"Enemy_Dead_Effect"*/, v28);
    sub_1B90010(&StringLiteral_12672/*"Servant_Dead_Effect"*/, v29);
    sub_1B90010(&StringLiteral_12891/*"Special_Effect{0:D2}"*/, v30);
    byte_4A6D9BD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v34 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v34 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v34, (int32_t)gameObject, 0LL);
  }
  gameObject = this->fields.hpBar;
  if ( !gameObject )
    goto LABEL_101;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)gameObject, 0.0, 0LL);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
  {
    gameObject = this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v37 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v37,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v38);
    if ( !v36 )
      goto LABEL_101;
    items = v36->fields._items;
    v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !items )
      goto LABEL_101;
    v43 = v36->fields._size;
    v44 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v43 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + v43;
      v36->fields._size = v43 + 1;
      v45[4] = v44;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v46,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v47);
    v50 = v36->fields._items;
    v51 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !v50 )
      goto LABEL_101;
    v52 = v36->fields._size;
    v53 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v52 >= v50->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v50->obj.klass + v52;
      v36->fields._size = v52 + 1;
      v54[4] = v53;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v53, v48, v49);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v55 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v55 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v55, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v57 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v60 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v60,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v57 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v57, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v57, 0LL);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v57, 0LL);
    v60 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v60 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_35499656 = WarBoardManager__GetEventTasks_35499656(
                          (WarBoardManager_o *)gameObject,
                          24,
                          &priority,
                          0LL,
                          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_35499656,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v63 = WarBoardManager__GetEventTasks_35499656((WarBoardManager_o *)gameObject, 25, &priority, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)v63,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v57, v64);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v66 = WarBoardManager__GetEventTasks_35499656(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v66,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v67 = WarBoardManager__GetEventTasks_35499656(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)v67,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v69 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)v69,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v120.fields.hasValue = &v117;
    *(_QWORD *)&v117.fields.hasValue = 0LL;
    *(_QWORD *)&v117.fields.value.fields.y = 0LL;
    *(_QWORD *)&v120.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v120, localPosition, v71);
    if ( !Instance )
      goto LABEL_101;
    v119 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v117, v119, 1, 1, 0, 0LL);
    if ( !v36 )
      goto LABEL_101;
    v74 = v36->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !v74 )
      goto LABEL_101;
    v76 = v36->fields._size;
    v77 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v76 >= v74->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v74->obj.klass + v76;
      v36->fields._size = v76 + 1;
      v78[4] = v77;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v77, v72, v73);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v80 = (System_String_o **)&StringLiteral_6012/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v80 = (System_String_o **)&StringLiteral_12672/*"Servant_Dead_Effect"*/;
  v81 = *v80;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v86 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v85 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v86;
  *(_QWORD *)&v121.fields.fakeValue = v85;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v121, 0LL);
  if ( !v84 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v84,
                 (int32_t)gameObject,
                 (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v87 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v87 )
    goto LABEL_101;
  v88 = (int)gameObject;
  v89 = ServantEntity__checkIsHeroineSvt(v87, 0LL);
  if ( v88 == 1 || v89 )
  {
    v81 = (System_String_o *)StringLiteral_6153/*"Escape_Effect"*/;
  }
  else if ( v88 >= 2 )
  {
    *(_DWORD *)&v117.fields.hasValue = v88;
    v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v90, v91, v92);
    v81 = System_String__Format((System_String_o *)StringLiteral_12891/*"Special_Effect{0:D2}"*/, v93, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v81, v90);
  if ( !gameObject )
LABEL_101:
    sub_1B9026C(gameObject, v32);
  v94 = (ServantStatusBattleListViewItem_o *)((char *)gameObject + 40);
  v95 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v96 = (Il2CppObject *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v97 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v97,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v98 = System_Delegate__Combine(v95, (System_Delegate_o *)v97, 0LL);
  v101 = v98;
  if ( !v98 )
    goto LABEL_82;
  v102 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v98->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v94->klass = (ServantStatusBattleListViewItem_c *)v98, (WarBoardTaskBase_TaskCallback_c *)v98->klass != v102) )
  {
    sub_1B9052C(v98);
LABEL_82:
    v94->klass = (ServantStatusBattleListViewItem_c *)v101;
  }
  sub_1B8FFB4(v94, (int32_t)v101, v99, v100);
  if ( !v36 )
    goto LABEL_101;
  v105 = v36->fields._items;
  v106 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v105 )
    goto LABEL_101;
  v107 = v36->fields._size;
  if ( (unsigned int)v107 >= v105->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      v96,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v105->obj.klass + v107;
    v36->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v96;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v96, v103, v104);
  }
  v109 = (WarBoardWaitTime_o *)sub_1B9025C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v109, 0.5, 0LL);
  v112 = v36->fields._items;
  v113 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v112 )
    goto LABEL_101;
  v114 = v36->fields._size;
  if ( (unsigned int)v114 >= v112->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)v109,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v115 = &v112->obj.klass + v114;
    v36->fields._size = v114 + 1;
    v115[4] = (Il2CppClass *)v109;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v115 + 4), (int32_t)v109, v110, v111);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v60,
         (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v60,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v36,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_35529280(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A6D9C8 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_18861/*"ef_guts"*/, taskList);
    byte_4A6D9C8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18861/*"ef_guts"*/,
      taskList,
      v7);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A6D9C7 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_18882/*"ef_special_invincible01"*/, taskList);
    byte_4A6D9C7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18882/*"ef_special_invincible01"*/,
      taskList,
      v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__OnMapDamage(
        WarBoardServantPieceComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  int v18; // w23
  int v19; // w24
  int v20; // w25
  int32_t MaxHp; // w0
  int v22; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v25; // s10
  __int64 v26; // x21
  System_Delegate_o **v27; // x22
  System_Delegate_o *v28; // x23
  WarBoardServantPieceComponent___c_c *v29; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4A6D9C5 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_1B90010(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1B90010(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_4A6D9C5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v18 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v19 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v20 = (int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v22 = v20 - damage;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v25 = (float)v22 / (float)MaxHp;
  v26 = sub_1B9025C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v26,
    hpBar,
    (float)v18 / (float)v19,
    v25,
    gaugeAnimationFullDuration,
    0LL);
  if ( !v26 )
    goto LABEL_30;
  v27 = (System_Delegate_o **)(v26 + 32);
  v28 = *(System_Delegate_o **)(v26 + 32);
  v29 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v29 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__57_0 = v29->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v31,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v33, v34);
  }
  v35 = System_Delegate__Combine(v28, (System_Delegate_o *)_9__57_0, 0LL);
  if ( !v35 )
  {
    *v27 = 0LL;
    goto LABEL_22;
  }
  v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v27 = v35;
    if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == v38 )
    {
LABEL_22:
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v35, v36, v37);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v17 )
      {
        items = v17->fields._items;
        v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v17->fields._version;
        if ( items )
        {
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v26,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v44 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v26;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v44 + 4), v26, v39, v40);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v17,
                (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_35536796(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v17,
              0LL);
            return;
          }
        }
      }
LABEL_30:
      sub_1B9026C(gameObject, v16);
    }
  }
  sub_1B9052C(v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__OnMapGainHP(
        WarBoardServantPieceComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x20
  float v20; // s8
  int32_t MaxHp; // w0
  int v22; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v25; // s10
  __int64 v26; // x21
  System_Delegate_o **v27; // x22
  System_Delegate_o *v28; // x23
  WarBoardServantPieceComponent___c_c *v29; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4A6D9CA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_1B90010(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_1B90010(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_4A6D9CA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v20 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v22 = gainHp + oldHp;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v25 = (float)v22 / (float)MaxHp;
  v26 = sub_1B9025C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v26, hpBar, v20, v25, gaugeAnimationFullDuration, 0LL);
  if ( !v26 )
    goto LABEL_28;
  v27 = (System_Delegate_o **)(v26 + 32);
  v28 = *(System_Delegate_o **)(v26 + 32);
  v29 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v29 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__63_0 = v29->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v31,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v33, v34);
  }
  v35 = System_Delegate__Combine(v28, (System_Delegate_o *)_9__63_0, 0LL);
  if ( !v35 )
  {
    *v27 = 0LL;
    goto LABEL_20;
  }
  v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v27 = v35;
    if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == v38 )
    {
LABEL_20:
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v35, v36, v37);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v19 )
      {
        items = v19->fields._items;
        v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v26,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v44 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v26;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v44 + 4), v26, v39, v40);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v19,
                (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_35536796(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
              0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1B9026C(gameObject, v18);
    }
  }
  sub_1B9052C(v35);
}


void __fastcall WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v18; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v20; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v24; // x21
  Il2CppObject *v25; // x22
  const MethodInfo_3631B98 *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // x2
  ServantStatusBattleListViewItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v37; // x22
  WarBoardTaskBase_TaskCallback_o *v38; // x25
  System_Delegate_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Delegate_o *v42; // x8
  WarBoardTaskBase_TaskCallback_c *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  WarBoardWaitTime_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_Nullable_Vector3__o v57; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_float__o v58; // 0:x3.8
  System_Nullable_Vector3__o v59; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6D9BE & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B90010(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B90010(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_1B90010(&WarBoardWaitTime_TypeInfo, v12);
    sub_1B90010(&StringLiteral_12673/*"Servant_Regenerate_Effect"*/, v13);
    byte_4A6D9BE = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v18 = 0LL;
  while ( (int)v18 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v18 >= breakPoints->max_length )
        sub_1B90274(Instance, v15);
      Instance = breakPoints->m_Items[v18];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, v16);
        pieceData = this->fields.pieceData;
        ++v18;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v20 = this->fields.pieceData;
  if ( !v20 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v20->fields._nowSquareIndex_k__BackingField,
                     0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)Instance,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  v61.fields.x = x;
  v61.fields.y = y;
  v61.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v61, 0LL);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v59.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v59.fields.hasValue = &v57;
  *(_QWORD *)&v57.fields.hasValue = 0LL;
  *(_QWORD *)&v57.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v59, localPosition, v26);
  if ( !v25 )
    goto LABEL_10;
  v58 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v25,
                                                v57,
                                                v58,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v24 )
    goto LABEL_10;
  items = v24->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v24->fields._size;
  v32 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12673/*"Servant_Regenerate_Effect"*/,
                                                v34);
  if ( !Instance )
LABEL_10:
    sub_1B9026C(Instance, v15);
  p_activeObject = (ServantStatusBattleListViewItem_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v37 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v39 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v38, 0LL);
  v42 = v39;
  if ( v39 )
  {
    v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (ServantStatusBattleListViewItem_c *)v39;
      if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == v43 )
        goto LABEL_28;
    }
    sub_1B9052C(v39);
  }
  p_activeObject->klass = (ServantStatusBattleListViewItem_c *)v42;
LABEL_28:
  sub_1B8FFB4(p_activeObject, (int32_t)v42, v40, v41);
  v46 = v24->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v24->fields._version;
  if ( !v46 )
    goto LABEL_10;
  v48 = v24->fields._size;
  if ( (unsigned int)v48 >= v46->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v37,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v24->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v37;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v37, v44, v45);
  }
  v50 = (WarBoardWaitTime_o *)sub_1B9025C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v50, 0.5, 0LL);
  v53 = v24->fields._items;
  v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v24->fields._version;
  if ( !v53 )
    goto LABEL_10;
  v55 = v24->fields._size;
  if ( (unsigned int)v55 >= v53->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v50,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v24->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v50;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v50, v51, v52);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_35529280(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v24,
    0LL);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  char *transform; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_3631B98 *v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass *v29; // x1
  Il2CppClass **v30; // x0
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x20
  ServantStatusBattleListViewItem_o *v33; // x22
  System_Delegate_o *v34; // x23
  WarBoardTaskBase_TaskCallback_o *v35; // x24
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Delegate_o *v39; // x8
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *v47; // x20
  System_Nullable_Vector3__o v48; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v49; // 0:x3.8
  System_Nullable_Vector3__o v50; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6D9C6 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B90010(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v11);
    sub_1B90010(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v12);
    sub_1B90010(&StringLiteral_11262/*"Reinforcement_Effect_1"*/, v13);
    byte_4A6D9C6 = 1;
  }
  v14 = sub_1B9025C(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)callback, v17, v18);
  *(_QWORD *)(v14 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v50.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v50.fields.hasValue = &v48;
  *(_QWORD *)&v48.fields.hasValue = 0LL;
  *(_QWORD *)&v48.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v50, localPosition, v23);
  if ( !Instance )
    goto LABEL_23;
  v49 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v48, v49, 1, 0, 1, 0LL);
  if ( !v21 )
    goto LABEL_23;
  items = v21->fields._items;
  v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v21->fields._size;
  v29 = (Il2CppClass *)transform;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)transform,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v30[4] = v29;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v29, v24, v25);
  }
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11262/*"Reinforcement_Effect_1"*/,
                        v31);
  if ( !transform )
LABEL_23:
    sub_1B9026C(transform, v16);
  v32 = (Il2CppObject *)transform;
  v33 = (ServantStatusBattleListViewItem_o *)(transform + 40);
  v34 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  v39 = v36;
  if ( v36 )
  {
    v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v33->klass = (ServantStatusBattleListViewItem_c *)v36;
      if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass == v40 )
        goto LABEL_17;
    }
    sub_1B9052C(v36);
  }
  v33->klass = (ServantStatusBattleListViewItem_c *)v39;
LABEL_17:
  sub_1B8FFB4(v33, (int32_t)v39, v37, v38);
  v43 = v21->fields._items;
  v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v43 )
    goto LABEL_23;
  v45 = v21->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      v32,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v21->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v32;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v32, v41, v42);
  }
  v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)System_Collections_Generic_List_object___ToArray(
                        v21,
                        (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v47 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v47, (WarBoardTaskBase_array *)transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__SetActiveNpBarEffect(
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
    *(_QWORD *)&active = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0LL) >= 1.0;
  }
  else
  {
    *(_QWORD *)&active = 0LL;
  }
  if ( !npBarEffect )
LABEL_7:
    sub_1B9026C(this, active);
  UnityEngine_GameObject__SetActive(npBarEffect, active, 0LL);
}


void __fastcall WarBoardServantPieceComponent__SetClassIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *classIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v10; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v17; // x0
  int v18; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6D9B3 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_1B90010(&int_TypeInfo, v6);
    sub_1B90010(&StringLiteral_22272/*"onBoard_initial_placement_class2_{0}"*/, v7);
    byte_4A6D9B3 = 1;
  }
  classIconRoot = this->fields.classIconRoot;
  if ( !classIconRoot )
    goto LABEL_22;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !classIconRoot )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(classIconRoot, 1, 0LL);
  classIconRoot = this->fields.servantIconRoot;
  if ( !classIconRoot )
    goto LABEL_22;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !classIconRoot )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(classIconRoot, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1B9026C(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_312C5FC *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v10 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_22;
LABEL_19:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v10, 0LL);
    if ( !classIconRoot )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !classIconRoot )
    goto LABEL_22;
  ServantClassEntities = WarBoardIndividualityClassMaster__GetServantClassEntities(
                           (WarBoardIndividualityClassMaster_o *)classIconRoot,
                           (System_Int32_array *)entity[2].monitor,
                           0LL);
  if ( !ServantClassEntities )
    goto LABEL_19;
  v15 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v15 )
    goto LABEL_19;
  if ( !(_DWORD)v15 )
    sub_1B90274(ServantClassEntities, method);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  v18 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22272/*"onBoard_initial_placement_class2_{0}"*/, v17, 0LL);
  if ( !classIcon )
    goto LABEL_22;
  UISprite__set_spriteName(classIcon, (System_String_o *)classIconRoot, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__SetPartyBuffLevel(
        WarBoardServantPieceComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *partyBuffComponent; // x21
  const MethodInfo *v7; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_4A6D9C3 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A6D9C3 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_14;
    if ( WarBoardPieceData__get_BuffData(pieceData, 0LL) )
    {
      pieceData = this->fields.pieceData;
      if ( !pieceData )
        goto LABEL_14;
      pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_BuffData(pieceData, 0LL);
      if ( !pieceData )
        goto LABEL_14;
      CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
                                         (BattleBuffData_o *)pieceData,
                                         0LL);
      if ( System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
             (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v7);
        return;
      }
    }
    pieceData = (WarBoardPieceData_o *)this->fields.partyBuffComponent;
    if ( pieceData )
    {
      WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        (WarBoardServantPiecePartyBuffComponent_o *)pieceData,
        level,
        0LL);
      return;
    }
LABEL_14:
    sub_1B9026C(pieceData, v7);
  }
}


void __fastcall WarBoardServantPieceComponent__SetServant(
        WarBoardServantPieceComponent_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1B9026C(this, userServantId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantId);
}


void __fastcall WarBoardServantPieceComponent__SetServantEquip(
        WarBoardServantPieceComponent_o *this,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1B9026C(this, userServantEquipId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


void __fastcall WarBoardServantPieceComponent__SetServantIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardServantPieceComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  struct WarBoardPieceData_o *v14; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v17; // x8
  int32_t v18; // w20
  UISprite_o *servantIcon; // x23
  bool v20; // w20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t servantLevel; // w20
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v32; // x21
  UISprite_o *v33; // x21
  System_String_o *v34; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v36; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v43; // x1
  Il2CppClass **v44; // x0
  struct WarBoardPieceData_o *v45; // x8
  struct WarBoardPieceData_o *v46; // x8
  WarBoardSquareData_o *v47; // x0
  bool v48; // w20
  struct WarBoardPieceData_o *v49; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v54; // x8
  UISprite_o *v55; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v57; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v59; // x20
  UnityEngine_Object_o *v60; // x20
  UILabel_o *v61; // x20
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
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
  int32_t v76; // [xsp+Ch] [xbp-44h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t v78; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A6D9B4 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&int_TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B90010(&StringLiteral_22757/*"questinfo_enemyface_bg"*/, v10);
    this = (WarBoardServantPieceComponent_o *)sub_1B90010(&StringLiteral_15449/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v11);
    byte_4A6D9B4 = 1;
  }
  pieceData = v2->fields.pieceData;
  if ( !pieceData )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)v2->fields.classIconRoot;
  if ( !this )
    goto LABEL_114;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_114;
  if ( iconId_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
    if ( !this )
      goto LABEL_114;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v14 = v2->fields.pieceData;
    if ( !v14 )
      goto LABEL_114;
    npcImageSvtId_k__BackingField = v14->fields._npcImageSvtId_k__BackingField;
    if ( npcImageSvtId_k__BackingField <= 0 )
      npcImageSvtId_k__BackingField = v14->fields._iconId_k__BackingField;
    v78 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v14->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v14->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v17 = v2->fields.pieceData;
    if ( !v17 )
      goto LABEL_114;
    if ( !this )
      goto LABEL_114;
    this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                (ServantLimitImageMaster_o *)this,
                                                v17->fields._iconId_k__BackingField,
                                                npcDispLimitCount_k__BackingField,
                                                0LL);
    if ( !v2->fields.pieceData )
      goto LABEL_114;
    v18 = (int)this;
    if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0LL) )
      goto LABEL_24;
    servantIcon = (UISprite_o *)v2->fields.servantIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v18, 0LL) )
    {
LABEL_24:
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_114;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v21, v22, v23);
      v76 = npcDispLimitCount_k__BackingField;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v26, v27, v28);
      v30 = System_String__Concat(v25, v29, 0LL);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v32 = v30;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_37911484(servantLevel, enemyIcon, v32, 0LL) )
        goto LABEL_31;
      v33 = (UISprite_o *)v2->fields.enemyIcon;
      v34 = System_Int32__ToString((int32_t)&v78, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_37911484(servantLevel, v33, v34, 0LL) )
      {
LABEL_31:
        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
        if ( !this )
          goto LABEL_114;
        WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v2->fields.enemyIcon, 0LL);
      }
      enemyIconBg = v2->fields.enemyIconBg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_37911484(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_22757/*"questinfo_enemyface_bg"*/,
                                                  0LL);
      v36 = v2->fields.pieceData;
      if ( !v36 )
        goto LABEL_114;
      if ( v36->fields._IsShadow_k__BackingField )
      {
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( !this )
          goto LABEL_114;
        removeTweenTargetObjects = (System_Collections_Generic_List_object__o *)v2->fields.removeTweenTargetObjects;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !removeTweenTargetObjects )
          goto LABEL_114;
        items = removeTweenTargetObjects->fields._items;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_114;
        size = removeTweenTargetObjects->fields._size;
        v43 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v43;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
        }
        ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
          v2,
          v2->klass->vtable._12_ShowStatus.methodPtr);
      }
      v20 = 0;
    }
    else
    {
      v20 = 1;
    }
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIcon;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            v48 = !v20;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48, 0LL);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48, 0LL);
                v49 = v2->fields.pieceData;
                if ( v49 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v49->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v49->fields._iconFrameType_k__BackingField;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetClassIcon(
                    frameInClassIcon,
                    IconClassImageId_k__BackingField,
                    iconFrameType_k__BackingField,
                    0LL);
                  equipeIcon = (UnityEngine_Object_o *)v2->fields.equipeIcon;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v54 = v2->fields.pieceData;
                    if ( !v54 )
                      goto LABEL_114;
                    v55 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v54->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v55, iconEquipId_k__BackingField, 0LL);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
                    v57 = v2->fields.pieceData;
                    if ( v57 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v57->fields._iconEquipId_k__BackingField > 0,
                          0LL);
                        supportSprite = (UnityEngine_Object_o *)v2->fields.supportSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
                        {
                          this = (WarBoardServantPieceComponent_o *)v2->fields.supportSprite;
                          if ( !this )
                            goto LABEL_114;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
                          if ( !v2->fields.pieceData )
                            goto LABEL_114;
                          v59 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0LL);
                          if ( !v59 )
                            goto LABEL_114;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v59,
                            (unsigned __int8)this & 1,
                            0LL);
                        }
                        v60 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_106;
                        v61 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15449/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0LL);
                        v65 = v2->fields.pieceData;
                        if ( !v65 )
                          goto LABEL_114;
                        v66 = this;
                        iconLevel_k__BackingField = v65->fields._iconLevel_k__BackingField;
                        v67 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &iconLevel_k__BackingField,
                                                v62,
                                                v63,
                                                v64);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format(
                                                                    (System_String_o *)v66,
                                                                    v67,
                                                                    0LL);
                        if ( !v61 )
                          goto LABEL_114;
                        UILabel__set_text(v61, (System_String_o *)this, 0LL);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_114;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0LL);
                        v68 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v68 )
                            goto LABEL_114;
                          if ( v68->fields._roleType_k__BackingField == 1 )
                          {
                            this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
                            if ( !this )
                              goto LABEL_114;
                            this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                            if ( !this )
                              goto LABEL_114;
                            p_z = &v2->fields.positionLevelDanger.fields.z;
                            p_x = &v2->fields.positionLevelDanger.fields.x;
                            p_y = &v2->fields.positionLevelDanger.fields.y;
                            goto LABEL_105;
                          }
                        }
                        else if ( !v68 )
                        {
                          goto LABEL_114;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                    v2->fields.pieceData,
                                                                    0LL);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_114;
                        v72 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0LL);
                        if ( (v72 & 1) != 0 )
                        {
                          if ( !this )
                            goto LABEL_114;
                          p_z = &v2->fields.positionLevelNpc.fields.z;
                          p_x = &v2->fields.positionLevelNpc.fields.x;
                          p_y = &v2->fields.positionLevelNpc.fields.y;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_114;
                          p_z = &v2->fields.positionLevel.fields.z;
                          p_x = &v2->fields.positionLevel.fields.x;
                          p_y = &v2->fields.positionLevel.fields.y;
                        }
LABEL_105:
                        v79.fields.z = *p_z;
                        v79.fields.y = *p_y;
                        v79.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v79, 0LL);
LABEL_106:
                        v73 = v2->fields.pieceData;
                        if ( v73 )
                        {
                          if ( !v73->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                           0LL);
                                if ( Square )
                                  WarBoardSquareData__DeactiveEditPointArrow(Square, 0LL);
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
LABEL_114:
    sub_1B9026C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v45 = v2->fields.pieceData;
  if ( !v45 )
    goto LABEL_114;
  if ( !v45->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_114;
  v46 = v2->fields.pieceData;
  if ( !v46 )
    goto LABEL_114;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_114;
  v47 = WarBoardData__GetSquare((WarBoardData_o *)this, v46->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( v47 )
    WarBoardSquareData__ActiveEditPointArrow(v47, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardServantPieceComponent__ShowStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  int v9; // s0

  if ( (byte_4A6D9B5 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4A6D9B5 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BE1EEC(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BE1EEC(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_1B9026C(transform, v8);
  WarBoardManager__ShowServantSimplePopup(v6, pieceData, *(UnityEngine_Vector3_o *)&v9, 0LL);
  return 1;
}


void __fastcall WarBoardServantPieceComponent__UpdateNpBars(
        WarBoardServantPieceComponent_o *this,
        float progress,
        const MethodInfo *method)
{
  struct UISprite_array *npBars; // x8
  __int64 v4; // x9
  WarBoardServantPieceComponent_o *v5; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  this->fields.nowNpProgress = progress;
  if ( npBars )
  {
    v4 = *(_QWORD *)&npBars->max_length;
    v5 = this;
    if ( v4 )
    {
      if ( !(_DWORD)v4 )
        goto LABEL_27;
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0LL);
      npBars = v5->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( (int)npBars->max_length >= 2 )
    {
      this = (WarBoardServantPieceComponent_o *)npBars->m_Items[1];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v7 = v5->fields.npBars;
        if ( !v7 )
          goto LABEL_26;
        if ( v7->max_length <= 1 )
          goto LABEL_27;
        this = (WarBoardServantPieceComponent_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0LL);
      }
    }
    v8 = v5->fields.npBars;
    if ( !v8 )
      goto LABEL_26;
    if ( (int)v8->max_length < 3 )
      return;
    this = (WarBoardServantPieceComponent_o *)v8->m_Items[2];
    if ( !this )
      goto LABEL_26;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_26;
    if ( progress <= 2.0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v9 = v5->fields.npBars;
    if ( !v9 )
LABEL_26:
      sub_1B9026C(this, method);
    if ( v9->max_length > 2 )
    {
      this = (WarBoardServantPieceComponent_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1B90274(this, method);
  }
}


bool __fastcall WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0LL )
    sub_1B9026C(this, x);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardServantPieceComponent___OnDead_b__46_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4A6D9CB & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4A6D9CB = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B9026C(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 1, 0LL);
}


WarBoardServantPieceBuffTurnComponent_o *__fastcall WarBoardServantPieceComponent__get_BuffTrunNotice(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTrunNotice;
}


void __fastcall WarBoardServantPieceComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6D9CC & 1) == 0 )
  {
    sub_1B90010(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_4A6D9CC = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall WarBoardServantPieceComponent___c___ctor(
        WarBoardServantPieceComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall WarBoardServantPieceComponent___c___GetLatestBattleTargetAndAttacker_b__43_1(
        WarBoardServantPieceComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  __int64 v5; // x1
  unsigned int monitor; // w8

  if ( (byte_4A6D9CD & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, x);
    byte_4A6D9CD = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1B900B8(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_1B9026C(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1B90274(result, v5);
  }
  LODWORD(result[2].monitor) = x->fields._index_k__BackingField;
  return result;
}


void __fastcall WarBoardServantPieceComponent___c___OnMapDamage_b__57_0(
        WarBoardServantPieceComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardServantPieceComponent___c___OnMapGainHP_b__63_0(
        WarBoardServantPieceComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass45_0___OnBreak_b__0(
        WarBoardServantPieceComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  WarBoardEventBossUIComponent_o *Instance; // x0
  __int64 v7; // x1
  struct UISprite_o *hpBarUpperSprite; // x8
  const MethodInfo *v9; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4A6D9CE & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B90010(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v3);
    byte_4A6D9CE = 1;
  }
  v4 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B90028(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v4, v4[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  hpBarUpperSprite = Instance[1].fields.hpBarUpperSprite;
  if ( !hpBarUpperSprite )
    goto LABEL_11;
  OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&hpBarUpperSprite->fields.updateAnchors, 0LL);
  Instance = this->fields.eventBossUI;
  if ( Instance )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0LL, v9);
      return;
    }
LABEL_11:
    sub_1B9026C(Instance, v7);
  }
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  return this->fields.effectEnded;
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__1(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardServantPieceComponent___c__DisplayClass49_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A6D9CF & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1B90010(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v4);
    byte_4A6D9CF = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !eventBossUI )
    sub_1B9026C(this, method);
  WarBoardEventBossUIComponent__PlayHpCut(eventBossUI, 1.0, _9__2, v2);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass49_0___CreateBossUIDamageTask_b__2(
        WarBoardServantPieceComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  this->fields.effectEnded = 1;
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass50_0___CreateBossUIBreakTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.eventBossUI )
    sub_1B9026C(this, method);
  WarBoardEventBossUIComponent__PlayPointBreakAnim(this->fields.eventBossUI, this->fields.endAction, v2);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__0(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  return this->fields.effectEnded;
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__1(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardServantPieceComponent___c__DisplayClass51_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A6D9D0 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1B90010(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v4);
    byte_4A6D9D0 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !eventBossUI )
    sub_1B9026C(this, method);
  WarBoardEventBossUIComponent__PlayDaedAnim(eventBossUI, _9__2, v2);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass51_0___CreateBossUIDeadTask_b__2(
        WarBoardServantPieceComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  this->fields.effectEnded = 1;
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
        WarBoardServantPieceComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardServantPieceComponent___c__DisplayClass58_0___Reinforcements_b__0(
        WarBoardServantPieceComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardServantPieceComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
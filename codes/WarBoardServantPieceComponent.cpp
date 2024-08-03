void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BA2E10;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BA26C0;
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

  if ( (byte_49F9F9D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F9D = 1;
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
    sub_1B64324(pieceData);
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

  if ( (byte_49F9F9C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12564/*"ServantDying"*/, v4);
    byte_49F9F9C = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12564/*"ServantDying"*/,
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
      sub_1B64324(pieceData);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12564/*"ServantDying"*/,
      v2);
  }
}


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
      sub_1B64324(pieceData);
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
  WarBoardServantPiecePartyBuffComponent_o *v4; // x0

  if ( (byte_49F9FA8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9FA8 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    v4 = this->fields.partyBuffComponent;
    if ( !v4 )
      sub_1B64324(0LL);
    WarBoardServantPiecePartyBuffComponent__ClearPartyBuff(v4, 0LL);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  struct ServantClassCompatibilityIconComponent_o *v7; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x2
  struct WarBoardPieceData_o *pieceData; // x8

  if ( (byte_49F9FA6 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, selectPiece);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F9FA6 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( selectPiece )
    {
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_1B64170(int___TypeInfo, 1LL);
      if ( v7 )
      {
        v9 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          sub_1B6432C(v7, v8);
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
              v9,
              4,
              0LL);
            return;
          }
        }
      }
LABEL_14:
      sub_1B64324(v7);
    }
    v7 = this->fields.classCompatibilityIcon;
    if ( !v7 )
      goto LABEL_14;
    ServantClassCompatibilityIconComponent__Clear(v7, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Delegate_o **v20; // x21
  System_Delegate_o *v21; // x22
  WarBoardTaskBase_TaskCallback_o *v22; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Delegate_o *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_49F9FA4 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6);
    sub_1B640C8(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v7);
    sub_1B640C8(&WarBoardWaitTime_TypeInfo, v8);
    byte_49F9FA4 = 1;
  }
  v9 = sub_1B64314(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, eventBossUI, endAction);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = eventBossUI,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)eventBossUI, v11, v12),
        *(_QWORD *)(v9 + 24) = endAction,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)endAction, v13, v14),
        v17 = sub_1B64314(WarBoardWaitTime_TypeInfo, v15, v16),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v17, 0.0, 0LL),
        !v17) )
  {
    sub_1B64324(v10);
  }
  v20 = (System_Delegate_o **)(v17 + 40);
  v21 = *(System_Delegate_o **)(v17 + 40);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19);
  WarBoardTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0LL);
  v26 = v23;
  if ( !v23 )
    goto LABEL_9;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v20 = v23, (WarBoardTaskBase_TaskCallback_c *)v23->klass != v27) )
  {
    sub_1B645E4(v23);
LABEL_9:
    *v20 = v26;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)v26, v24, v25);
  *(_BYTE *)(v17 + 26) = 1;
  return (WarBoardTaskBase_o *)v17;
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_bool__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_WaitUntil_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Delegate_o **v25; // x21
  System_Delegate_o *v26; // x22
  WarBoardTaskBase_TaskCallback_o *v27; // x23
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1

  if ( (byte_49F9FA3 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v5);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v6);
    sub_1B640C8(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v9);
    byte_49F9FA3 = 1;
  }
  v10 = sub_1B64314(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, eventBossUI, method);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)eventBossUI, v12, v13);
  *(_BYTE *)(v10 + 16) = 0;
  v16 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v14, v15);
  System_Func_bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0LL);
  v19 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v17, v18);
  UnityEngine_WaitUntil___ctor(v19, v16, 0LL);
  v22 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v20, v21);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v19, 0LL);
  if ( !v22 )
LABEL_11:
    sub_1B64324(v11);
  v25 = (System_Delegate_o **)(v22 + 32);
  v26 = *(System_Delegate_o **)(v22 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v23, v24);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v31 = v28;
  if ( !v28 )
    goto LABEL_9;
  v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v25 = v28, (WarBoardTaskBase_TaskCallback_c *)v28->klass != v32) )
  {
    sub_1B645E4(v28);
LABEL_9:
    *v25 = v31;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v31, v29, v30);
  return (WarBoardCallbackTask_o *)v22;
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_bool__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_WaitUntil_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Delegate_o **v25; // x21
  System_Delegate_o *v26; // x22
  WarBoardTaskBase_TaskCallback_o *v27; // x23
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1

  if ( (byte_49F9FA5 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v5);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v6);
    sub_1B640C8(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v9);
    byte_49F9FA5 = 1;
  }
  v10 = sub_1B64314(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, eventBossUI, method);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)eventBossUI, v12, v13);
  *(_BYTE *)(v10 + 16) = 0;
  v16 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v14, v15);
  System_Func_bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0LL);
  v19 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v17, v18);
  UnityEngine_WaitUntil___ctor(v19, v16, 0LL);
  v22 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v20, v21);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v19, 0LL);
  if ( !v22 )
LABEL_11:
    sub_1B64324(v11);
  v25 = (System_Delegate_o **)(v22 + 32);
  v26 = *(System_Delegate_o **)(v22 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v23, v24);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v31 = v28;
  if ( !v28 )
    goto LABEL_9;
  v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v25 = v28, (WarBoardTaskBase_TaskCallback_c *)v28->klass != v32) )
  {
    sub_1B645E4(v28);
LABEL_9:
    *v25 = v31;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v31, v29, v30);
  return (WarBoardCallbackTask_o *)v22;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_49F9F9B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_49F9F9B = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1B64324(0LL);
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
    sub_1B64324(servantIcon);
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
    sub_1B64324(servantIcon);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  WarBoardServantPieceComponent___c_c *v31; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v33; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_49F9F9E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, warBoardData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_1B640C8(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B640C8(&int___TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v12);
    sub_1B640C8(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v14);
    byte_49F9F9E = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1B64170(int___TypeInfo, 3LL);
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
    sub_1B6432C(BattleParticipantInfo, v16);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v20 = Method_System_Array_Empty_int___;
  v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v21 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v21 = v20[7];
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB5FA4(v22);
  if ( !*(_DWORD *)(v22 + 224) )
    j_il2cpp_runtime_class_init_0(v22);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v20[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1BB5FA4(BattleParticipantInfo);
  if ( !warBoardData
    || (v23 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_27:
    sub_1B64324(BattleParticipantInfo);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v27 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v24, v25);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0LL);
    v30 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v31 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v31 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v31->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1B64314(
                                                    System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                    v28,
                                                    v29);
      System_Func_object__object____ctor(
        _9__43_1,
        v33,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0LL);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v30,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v37,
                                                                 (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v38 = System_Linq_Enumerable__Concat_int_(
          v18,
          v23,
          (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v38,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_49F9FAD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_49F9FAD = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_1B64324(button);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v23; // x2
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9F96 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_20108/*"icon_strong_enemy"*/, v7);
    sub_1B640C8(&StringLiteral_19898/*"hp_gauge_boss"*/, v8);
    sub_1B640C8(&StringLiteral_23021/*"servant_base_{0}"*/, v9);
    byte_49F9F96 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v24 = pieceData->fields._forceId_k__BackingField + 1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23021/*"servant_base_{0}"*/, v12, 0LL);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19898/*"hp_gauge_boss"*/, 0LL);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v14);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v13);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v13);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v16 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v16 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v16, (unsigned __int8)hpBar & 1, 0LL);
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
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20108/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1B64324(hpBar);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&buffTrunNotice->fields.pieceData, (int32_t)pieceData, v19, v20);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v23);
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
    sub_1B64324(this);
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

  if ( (byte_49F9F9A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  WarBoardManager_TaskList_o *v29; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_35D2010 *v31; // x2
  int32_t v32; // w2
  int32_t v33; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v37; // x1
  Il2CppClass **v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  WarBoardData_o *monitor; // x29
  System_Collections_Generic_List_object__o *v42; // x28
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x26
  const MethodInfo *v46; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v48; // x27
  const MethodInfo_35D2010 *v49; // x2
  int32_t v50; // w2
  int32_t v51; // w3
  struct WarBoardTaskBase_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  UnityEngine_Transform_o *v55; // x1
  Il2CppClass **v56; // x0
  bool IsStageBoss; // w0
  int32_t v58; // w2
  int32_t v59; // w3
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v61; // x27
  WarBoardEventBossUIComponent_o **v62; // x27
  UnityEngine_Object_o *v63; // x28
  _BOOL8 v64; // x0
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  struct WarBoardTaskBase_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  UnityEngine_Transform_o *v72; // x1
  Il2CppClass **v73; // x0
  WarBoardServantPieceComponent_o *v74; // x0
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  int32_t v77; // w3
  struct WarBoardTaskBase_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  UnityEngine_Transform_o *v81; // x1
  Il2CppClass **v82; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  System_Delegate_o **v91; // x22
  System_Delegate_o *v92; // x23
  WarBoardTaskBase_TaskCallback_o *v93; // x24
  System_Delegate_o *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_Delegate_o *v97; // x8
  WarBoardTaskBase_TaskCallback_c *v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  struct WarBoardTaskBase_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  WarBoardManager_TaskList_o *v105; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v107; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_float__o v110; // 0:x2.8
  System_Nullable_float__o v111; // 0:x3.8
  System_Nullable_float__o v112; // 0:x3.8
  System_Nullable_Vector3__o v113; // 0:x0.16
  System_Nullable_Vector3__o v114; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_49F9FA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v18);
    sub_1B640C8(&WarBoardManager_TaskList_TypeInfo, v19);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v20);
    sub_1B640C8(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v21);
    sub_1B640C8(&WarBoardGaugePerformance_TypeInfo, v22);
    byte_49F9FA0 = 1;
  }
  priority = 0;
  v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1B64314)(
          WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&oldBreakPoint,
          cameraSize);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_58;
  *(_QWORD *)(v23 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)this, v25, v26);
  v29 = (WarBoardManager_TaskList_o *)sub_1B64314(WarBoardManager_TaskList_TypeInfo, v27, v28);
  WarBoardManager_TaskList___ctor(v29, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v113.fields.hasValue = &v107;
    *(_QWORD *)&v107.fields.hasValue = 0LL;
    *(_QWORD *)&v107.fields.value.fields.y = 0LL;
    *(_QWORD *)&v113.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v113, localPosition, v31);
    if ( !Instance )
      goto LABEL_58;
    v111 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v107,
                                             v111,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v29 )
      goto LABEL_58;
    items = v29->fields._items;
    v35 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v29->fields._size;
    v37 = transform;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)transform,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v37, v32, v33);
    }
  }
  v105 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  monitor = (WarBoardData_o *)transform[18].monitor;
  v42 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v46);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_35150860(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v42 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v42,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_35150860(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v45 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v29 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v29,
    (System_Collections_Generic_IEnumerable_T__o *)v42,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    v116 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v114.fields.hasValue = &v107;
    v107 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v114.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v114, v116, v49);
    if ( !v48 )
      goto LABEL_58;
    v112 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v48,
                                             v107,
                                             v112,
                                             1,
                                             1,
                                             0,
                                             0LL);
    v52 = v29->fields._items;
    v53 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v29->fields._version;
    if ( !v52 )
      goto LABEL_58;
    v54 = v29->fields._size;
    v55 = transform;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)transform,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v52->obj.klass + v54;
      v29->fields._size = v54 + 1;
      v56[4] = (Il2CppClass *)v55;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
    }
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v61 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v61 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v61, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v23 + 16) = EventBossUI;
  v62 = (WarBoardEventBossUIComponent_o **)(v23 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)EventBossUI, v58, v59);
  v63 = *(UnityEngine_Object_o **)(v23 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v64 = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
  if ( v64 )
  {
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                             (WarBoardServantPieceComponent_o *)v64,
                                             *v62,
                                             v65);
    v69 = v29->fields._items;
    v70 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v29->fields._version;
    if ( !v69 )
      goto LABEL_58;
    v71 = v29->fields._size;
    v72 = transform;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)transform,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v69->obj.klass + v71;
      v29->fields._size = v71 + 1;
      v73[4] = (Il2CppClass *)v72;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v72, v67, v68);
    }
    transform = (UnityEngine_Transform_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(v74, *v62, 0LL, v75);
    v78 = v29->fields._items;
    v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v29->fields._version;
    if ( !v78 )
      goto LABEL_58;
    v80 = v29->fields._size;
    v81 = transform;
    if ( (unsigned int)v80 >= v78->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)transform,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v78->obj.klass + v80;
      v29->fields._size = v80 + 1;
      v82[4] = (Il2CppClass *)v81;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v81, v76, v77);
    }
  }
  v110 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v110,
    v29,
    dummyPointa,
    0LL,
    1,
    v66);
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
  v88 = sub_1B64314(WarBoardGaugePerformance_TypeInfo, v86, v87);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v88, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v88 )
    goto LABEL_58;
  v91 = (System_Delegate_o **)(v88 + 32);
  v92 = *(System_Delegate_o **)(v88 + 32);
  v93 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v89, v90);
  WarBoardTaskBase_TaskCallback___ctor(
    v93,
    (Il2CppObject *)v23,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v94 = System_Delegate__Combine(v92, (System_Delegate_o *)v93, 0LL);
  v97 = v94;
  if ( v94 )
  {
    v98 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v94->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v91 = v94;
      if ( (WarBoardTaskBase_TaskCallback_c *)v94->klass == v98 )
        goto LABEL_50;
    }
    sub_1B645E4(v94);
  }
  *v91 = v97;
LABEL_50:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)v97, v95, v96);
  *(_BYTE *)(v88 + 26) = 1;
  v101 = v29->fields._items;
  v102 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v29->fields._version;
  if ( !v101 )
    goto LABEL_58;
  v103 = v29->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v29,
      (Il2CppObject *)v88,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    v29->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v88;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 4), v88, v99, v100);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v29,
    (System_Collections_Generic_IEnumerable_T__o *)v45,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v105 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v105,
      (System_Collections_Generic_IEnumerable_T__o *)v29,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v105->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1B64324(transform);
  WarBoardManager__AddTask_35188000(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v29,
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  WarBoardServantPieceComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardManager_o *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_49F9F9F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_49F9F9F = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v14,
                                                         v15);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v17, EventBossUI, v18);
    if ( v16 )
    {
      items = v16->fields._items;
      v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        v24 = pieceData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v25 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v16,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_35188000(
            pieceData,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64324(pieceData);
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
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v33; // x21
  UnityEngine_Object_o *faceEffect; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *v37; // x21
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  WarBoardServantPieceComponent_o *v47; // x0
  const MethodInfo *v48; // x2
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass *v54; // x1
  Il2CppClass **v55; // x0
  WarBoardManager_o *v56; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v58; // x26
  Il2CppObject *Master_object; // x27
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *v65; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_35150860; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v68; // x0
  const MethodInfo *v69; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v71; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v72; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v74; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_35D2010 *v76; // x2
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass *v82; // x1
  Il2CppClass **v83; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v85; // x8
  System_String_o *v86; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x23
  __int64 v90; // x25
  __int64 v91; // x26
  ServantEntity_o *v92; // x25
  int v93; // w23
  bool v94; // w0
  const MethodInfo *v95; // x2
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  ServantStatusBattleListViewItem_o *v99; // x23
  System_Delegate_o *v100; // x25
  Il2CppObject *v101; // x22
  WarBoardTaskBase_TaskCallback_o *v102; // x26
  System_Delegate_o *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_Delegate_o *v106; // x8
  WarBoardTaskBase_TaskCallback_c *v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  WarBoardWaitTime_o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v124; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_float__o v126; // 0:x3.8
  System_Nullable_Vector3__o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9FA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_1B640C8(&WarBoardManager_TypeInfo, v24);
    sub_1B640C8(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_1B640C8(&WarBoardWaitTime_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_6125/*"Escape_Effect"*/, v27);
    sub_1B640C8(&StringLiteral_5985/*"Enemy_Dead_Effect"*/, v28);
    sub_1B640C8(&StringLiteral_12586/*"Servant_Dead_Effect"*/, v29);
    sub_1B640C8(&StringLiteral_12802/*"Special_Effect{0:D2}"*/, v30);
    byte_49F9FA1 = 1;
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
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v33 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v33 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v33, (int32_t)gameObject, 0LL);
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
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v38 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v38,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v39);
    if ( !v37 )
      goto LABEL_101;
    items = v37->fields._items;
    v43 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v37->fields._version;
    if ( !items )
      goto LABEL_101;
    v44 = v37->fields._size;
    v45 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v44 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + v44;
      v37->fields._size = v44 + 1;
      v46[4] = v45;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
    }
    gameObject = WarBoardServantPieceComponent__CreateBossUIDeadTask(
                   v47,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v48);
    v51 = v37->fields._items;
    v52 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v37->fields._version;
    if ( !v51 )
      goto LABEL_101;
    v53 = v37->fields._size;
    v54 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v53 >= v51->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v51->obj.klass + v53;
      v37->fields._size = v53 + 1;
      v55[4] = v54;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v54, v49, v50);
    }
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v56 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v56 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v56, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v58 = (WarBoardData_o *)*((_QWORD *)gameObject + 55);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1B64314(
                                                                          System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                          v60,
                                                                          v61);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v65 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                 v63,
                                                                 v64);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v65,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v58 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v58, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v58, 0LL);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v58, 0LL);
    v65 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v65 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_35150860 = WarBoardManager__GetEventTasks_35150860(
                          (WarBoardManager_o *)gameObject,
                          24,
                          &priority,
                          0LL,
                          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_35150860,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v68 = WarBoardManager__GetEventTasks_35150860((WarBoardManager_o *)gameObject, 25, &priority, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Collections_Generic_IEnumerable_T__o *)v68,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v58, v69);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v71 = WarBoardManager__GetEventTasks_35150860(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v71,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v72 = WarBoardManager__GetEventTasks_35150860(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Collections_Generic_IEnumerable_T__o *)v72,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v74 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Collections_Generic_IEnumerable_T__o *)v74,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v127.fields.hasValue = &v124;
    *(_QWORD *)&v124.fields.hasValue = 0LL;
    *(_QWORD *)&v124.fields.value.fields.y = 0LL;
    *(_QWORD *)&v127.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v127, localPosition, v76);
    if ( !Instance )
      goto LABEL_101;
    v126 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v124, v126, 1, 1, 0, 0LL);
    if ( !v37 )
      goto LABEL_101;
    v79 = v37->fields._items;
    v80 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v37->fields._version;
    if ( !v79 )
      goto LABEL_101;
    v81 = v37->fields._size;
    v82 = (Il2CppClass *)gameObject;
    if ( (unsigned int)v81 >= v79->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v79->obj.klass + v81;
      v37->fields._size = v81 + 1;
      v83[4] = v82;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v82, v77, v78);
    }
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v85 = (System_String_o **)&StringLiteral_5985/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v85 = (System_String_o **)&StringLiteral_12586/*"Servant_Dead_Effect"*/;
  v86 = *v85;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v91 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v128.fields.currentCryptoKey = v91;
  *(_QWORD *)&v128.fields.fakeValue = v90;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v128, 0LL);
  if ( !v89 )
    goto LABEL_101;
  gameObject = DataMasterBase_object__object__int___GetEntity(
                 v89,
                 (int32_t)gameObject,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v92 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v92 )
    goto LABEL_101;
  v93 = (int)gameObject;
  v94 = ServantEntity__checkIsHeroineSvt(v92, 0LL);
  if ( v93 == 1 || v94 )
  {
    v86 = (System_String_o *)StringLiteral_6125/*"Escape_Effect"*/;
  }
  else if ( v93 >= 2 )
  {
    *(_DWORD *)&v124.fields.hasValue = v93;
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
    v86 = System_String__Format((System_String_o *)StringLiteral_12802/*"Special_Effect{0:D2}"*/, v96, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v86, v95);
  if ( !gameObject )
LABEL_101:
    sub_1B64324(gameObject);
  v99 = (ServantStatusBattleListViewItem_o *)((char *)gameObject + 40);
  v100 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v101 = (Il2CppObject *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v102 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v97, v98);
  WarBoardTaskBase_TaskCallback___ctor(
    v102,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v103 = System_Delegate__Combine(v100, (System_Delegate_o *)v102, 0LL);
  v106 = v103;
  if ( !v103 )
    goto LABEL_82;
  v107 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v103->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v99->klass = (ServantStatusBattleListViewItem_c *)v103, (WarBoardTaskBase_TaskCallback_c *)v103->klass != v107) )
  {
    sub_1B645E4(v103);
LABEL_82:
    v99->klass = (ServantStatusBattleListViewItem_c *)v106;
  }
  sub_1B6406C(v99, (int32_t)v106, v104, v105);
  if ( !v37 )
    goto LABEL_101;
  v110 = v37->fields._items;
  v111 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v37->fields._version;
  if ( !v110 )
    goto LABEL_101;
  v112 = v37->fields._size;
  if ( (unsigned int)v112 >= v110->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      v101,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v113 = &v110->obj.klass + v112;
    v37->fields._size = v112 + 1;
    v113[4] = (Il2CppClass *)v101;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v113 + 4), (int32_t)v101, v108, v109);
  }
  v116 = (WarBoardWaitTime_o *)sub_1B64314(WarBoardWaitTime_TypeInfo, v114, v115);
  WarBoardWaitTime___ctor(v116, 0.5, 0LL);
  v119 = v37->fields._items;
  v120 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v37->fields._version;
  if ( !v119 )
    goto LABEL_101;
  v121 = v37->fields._size;
  if ( (unsigned int)v121 >= v119->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)v116,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = &v119->obj.klass + v121;
    v37->fields._size = v121 + 1;
    v122[4] = (Il2CppClass *)v116;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v116, v117, v118);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v65,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_35180484(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v37,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  const MethodInfo *v6; // x3

  if ( (byte_49F9FAC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18763/*"ef_guts"*/, taskList);
    byte_49F9FAC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18763/*"ef_guts"*/,
      taskList,
      v6);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49F9FAB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18784/*"ef_special_invincible01"*/, taskList);
    byte_49F9FAB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18784/*"ef_special_invincible01"*/,
      taskList,
      v6);
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
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  int v19; // w23
  int v20; // w24
  int v21; // w25
  int32_t MaxHp; // w0
  int v23; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v26; // s10
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Delegate_o **v32; // x22
  System_Delegate_o *v33; // x23
  WarBoardServantPieceComponent___c_c *v34; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v36; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  WarBoardTaskBase_TaskCallback_c *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  if ( (byte_49F9FA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_1B640C8(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1B640C8(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_49F9FA9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v19 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v20 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v21 = (int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v23 = v21 - damage;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v26 = (float)v23 / (float)MaxHp;
  v29 = sub_1B64314(WarBoardGaugePerformance_TypeInfo, v27, v28);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v29,
    hpBar,
    (float)v19 / (float)v20,
    v26,
    gaugeAnimationFullDuration,
    0LL);
  if ( !v29 )
    goto LABEL_30;
  v32 = (System_Delegate_o **)(v29 + 32);
  v33 = *(System_Delegate_o **)(v29 + 32);
  v34 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v34 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__57_0 = v34->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v36,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v38, v39);
  }
  v40 = System_Delegate__Combine(v33, (System_Delegate_o *)_9__57_0, 0LL);
  if ( !v40 )
  {
    *v32 = 0LL;
    goto LABEL_22;
  }
  v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v32 = v40;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == v43 )
    {
LABEL_22:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v40, v41, v42);
      *(_BYTE *)(v29 + 26) = 0;
      if ( v18 )
      {
        items = v18->fields._items;
        v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v18->fields._version;
        if ( items )
        {
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v29,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v49 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), v29, v44, v45);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v18,
                (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_35188000(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
              0LL);
            return;
          }
        }
      }
LABEL_30:
      sub_1B64324(gameObject);
    }
  }
  sub_1B645E4(v40);
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
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  float v21; // s8
  int32_t MaxHp; // w0
  int v23; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v26; // s10
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Delegate_o **v32; // x22
  System_Delegate_o *v33; // x23
  WarBoardServantPieceComponent___c_c *v34; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v36; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  WarBoardTaskBase_TaskCallback_c *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  if ( (byte_49F9FAE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_1B640C8(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_1B640C8(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_49F9FAE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v21 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v23 = gainHp + oldHp;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v26 = (float)v23 / (float)MaxHp;
  v29 = sub_1B64314(WarBoardGaugePerformance_TypeInfo, v27, v28);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v29, hpBar, v21, v26, gaugeAnimationFullDuration, 0LL);
  if ( !v29 )
    goto LABEL_28;
  v32 = (System_Delegate_o **)(v29 + 32);
  v33 = *(System_Delegate_o **)(v29 + 32);
  v34 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
    v34 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__63_0 = v34->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v36,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v38, v39);
  }
  v40 = System_Delegate__Combine(v33, (System_Delegate_o *)_9__63_0, 0LL);
  if ( !v40 )
  {
    *v32 = 0LL;
    goto LABEL_20;
  }
  v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v32 = v40;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == v43 )
    {
LABEL_20:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v40, v41, v42);
      *(_BYTE *)(v29 + 26) = 0;
      if ( v20 )
      {
        items = v20->fields._items;
        v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v20->fields._version;
        if ( items )
        {
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              (Il2CppObject *)v29,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v49 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), v29, v44, v45);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v20,
                (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_35188000(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
              0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1B64324(gameObject);
    }
  }
  sub_1B645E4(v40);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x21
  Il2CppObject *v27; // x22
  const MethodInfo_35D2010 *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  WarBoardBreakPointComponent_o *v34; // x1
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  ServantStatusBattleListViewItem_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v41; // x22
  WarBoardTaskBase_TaskCallback_o *v42; // x25
  System_Delegate_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Delegate_o *v46; // x8
  WarBoardTaskBase_TaskCallback_c *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  WarBoardWaitTime_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  System_Nullable_Vector3__o v63; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_float__o v64; // 0:x3.8
  System_Nullable_Vector3__o v65; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9FA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_1B640C8(&WarBoardWaitTime_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_12587/*"Servant_Regenerate_Effect"*/, v13);
    byte_49F9FA2 = 1;
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
        sub_1B6432C(Instance, v15);
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
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v67.fields.x = x;
  v67.fields.y = y;
  v67.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v67, 0LL);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v65.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v65.fields.hasValue = &v63;
  *(_QWORD *)&v63.fields.hasValue = 0LL;
  *(_QWORD *)&v63.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v65, localPosition, v28);
  if ( !v27 )
    goto LABEL_10;
  v64 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v27,
                                                v63,
                                                v64,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v26 )
    goto LABEL_10;
  items = v26->fields._items;
  v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v26->fields._size;
  v34 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)Instance,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12587/*"Servant_Regenerate_Effect"*/,
                                                v36);
  if ( !Instance )
LABEL_10:
    sub_1B64324(Instance);
  p_activeObject = (ServantStatusBattleListViewItem_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v41 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v37, v38);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v43 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v42, 0LL);
  v46 = v43;
  if ( v43 )
  {
    v47 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (ServantStatusBattleListViewItem_c *)v43;
      if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == v47 )
        goto LABEL_28;
    }
    sub_1B645E4(v43);
  }
  p_activeObject->klass = (ServantStatusBattleListViewItem_c *)v46;
LABEL_28:
  sub_1B6406C(p_activeObject, (int32_t)v46, v44, v45);
  v50 = v26->fields._items;
  v51 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !v50 )
    goto LABEL_10;
  v52 = v26->fields._size;
  if ( (unsigned int)v52 >= v50->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v41,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v26->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v41, v48, v49);
  }
  v56 = (WarBoardWaitTime_o *)sub_1B64314(WarBoardWaitTime_TypeInfo, v54, v55);
  WarBoardWaitTime___ctor(v56, 0.5, 0LL);
  v59 = v26->fields._items;
  v60 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !v59 )
    goto LABEL_10;
  v61 = v26->fields._size;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v56,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v62 = &v59->obj.klass + v61;
    v26->fields._size = v61 + 1;
    v62[4] = (Il2CppClass *)v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v26,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_35180484(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v26,
    0LL);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_35D2010 *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass *v30; // x1
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x20
  ServantStatusBattleListViewItem_o *v36; // x22
  System_Delegate_o *v37; // x23
  WarBoardTaskBase_TaskCallback_o *v38; // x24
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
  Il2CppObject *v50; // x20
  System_Nullable_Vector3__o v51; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v52; // 0:x3.8
  System_Nullable_Vector3__o v53; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9FAA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v11);
    sub_1B640C8(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_11201/*"Reinforcement_Effect_1"*/, v13);
    byte_49F9FAA = 1;
  }
  v14 = sub_1B64314(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, callback, method);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)callback, v16, v17);
  *(_QWORD *)(v14 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v18, v19);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v53.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v53.fields.hasValue = &v51;
  *(_QWORD *)&v51.fields.hasValue = 0LL;
  *(_QWORD *)&v51.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v53, localPosition, v24);
  if ( !Instance )
    goto LABEL_23;
  v52 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v51, v52, 1, 0, 1, 0LL);
  if ( !v22 )
    goto LABEL_23;
  items = v22->fields._items;
  v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v22->fields._size;
  v30 = (Il2CppClass *)transform;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)transform,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v31[4] = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
  }
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11201/*"Reinforcement_Effect_1"*/,
                        v32);
  if ( !transform )
LABEL_23:
    sub_1B64324(transform);
  v35 = (Il2CppObject *)transform;
  v36 = (ServantStatusBattleListViewItem_o *)(transform + 40);
  v37 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v33, v34);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v14,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v39 = System_Delegate__Combine(v37, (System_Delegate_o *)v38, 0LL);
  v42 = v39;
  if ( v39 )
  {
    v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v36->klass = (ServantStatusBattleListViewItem_c *)v39;
      if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == v43 )
        goto LABEL_17;
    }
    sub_1B645E4(v39);
  }
  v36->klass = (ServantStatusBattleListViewItem_c *)v42;
LABEL_17:
  sub_1B6406C(v36, (int32_t)v42, v40, v41);
  v46 = v22->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v22->fields._version;
  if ( !v46 )
    goto LABEL_23;
  v48 = v22->fields._size;
  if ( (unsigned int)v48 >= v46->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v35,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v22->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v35, v44, v45);
  }
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)System_Collections_Generic_List_object___ToArray(
                        v22,
                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v50 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v50, (WarBoardTaskBase_array *)transform, 0LL);
}


void __fastcall WarBoardServantPieceComponent__SetActiveNpBarEffect(
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
    v4 = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0LL) >= 1.0;
  }
  else
  {
    v4 = 0;
  }
  if ( !npBarEffect )
LABEL_7:
    sub_1B64324(this);
  UnityEngine_GameObject__SetActive(npBarEffect, v4, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v15; // x0
  int v16; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9F97 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_22151/*"onBoard_initial_placement_class2_{0}"*/, v7);
    byte_49F9F97 = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1B64324(classIconRoot);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
  v13 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v13 )
    goto LABEL_19;
  if ( !(_DWORD)v13 )
    sub_1B6432C(ServantClassEntities, v12);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  v16 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22151/*"onBoard_initial_placement_class2_{0}"*/, v15, 0LL);
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
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49F9FA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F9FA7 = 1;
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
             (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
        0LL);
      return;
    }
LABEL_14:
    sub_1B64324(pieceData);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t servantLevel; // w20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v26; // x21
  UISprite_o *v27; // x21
  System_String_o *v28; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v30; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v37; // x1
  Il2CppClass **v38; // x0
  struct WarBoardPieceData_o *v39; // x8
  struct WarBoardPieceData_o *v40; // x8
  WarBoardSquareData_o *v41; // x0
  bool v42; // w20
  struct WarBoardPieceData_o *v43; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v48; // x8
  UISprite_o *v49; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v51; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v53; // x20
  UnityEngine_Object_o *v54; // x20
  UILabel_o *v55; // x20
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
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49F9F98 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_22631/*"questinfo_enemyface_bg"*/, v10);
    this = (WarBoardServantPieceComponent_o *)sub_1B640C8(&StringLiteral_15356/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v11);
    byte_49F9F98 = 1;
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
    v69 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v14->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v14->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_114;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
      v67 = npcDispLimitCount_k__BackingField;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
      v24 = System_String__Concat(v22, v23, 0LL);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v26 = v24;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_37544692(servantLevel, enemyIcon, v26, 0LL) )
        goto LABEL_31;
      v27 = (UISprite_o *)v2->fields.enemyIcon;
      v28 = System_Int32__ToString((int32_t)&v69, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_37544692(servantLevel, v27, v28, 0LL) )
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
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_37544692(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_22631/*"questinfo_enemyface_bg"*/,
                                                  0LL);
      v30 = v2->fields.pieceData;
      if ( !v30 )
        goto LABEL_114;
      if ( v30->fields._IsShadow_k__BackingField )
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
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_114;
        size = removeTweenTargetObjects->fields._size;
        v37 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v37;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v37, v32, v33);
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
            v42 = !v20;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v42, 0LL);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v42, 0LL);
                v43 = v2->fields.pieceData;
                if ( v43 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v43->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v43->fields._iconFrameType_k__BackingField;
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
                    v48 = v2->fields.pieceData;
                    if ( !v48 )
                      goto LABEL_114;
                    v49 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v48->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v49, iconEquipId_k__BackingField, 0LL);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
                    v51 = v2->fields.pieceData;
                    if ( v51 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v51->fields._iconEquipId_k__BackingField > 0,
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
                          v53 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0LL);
                          if ( !v53 )
                            goto LABEL_114;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v53,
                            (unsigned __int8)this & 1,
                            0LL);
                        }
                        v54 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_106;
                        v55 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15356/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0LL);
                        v56 = v2->fields.pieceData;
                        if ( !v56 )
                          goto LABEL_114;
                        v57 = this;
                        iconLevel_k__BackingField = v56->fields._iconLevel_k__BackingField;
                        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format(
                                                                    (System_String_o *)v57,
                                                                    v58,
                                                                    0LL);
                        if ( !v55 )
                          goto LABEL_114;
                        UILabel__set_text(v55, (System_String_o *)this, 0LL);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_114;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0LL);
                        v59 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v59 )
                            goto LABEL_114;
                          if ( v59->fields._roleType_k__BackingField == 1 )
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
                        else if ( !v59 )
                        {
                          goto LABEL_114;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                    v2->fields.pieceData,
                                                                    0LL);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_114;
                        v63 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0LL);
                        if ( (v63 & 1) != 0 )
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
                        v70.fields.z = *p_z;
                        v70.fields.y = *p_y;
                        v70.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v70, 0LL);
LABEL_106:
                        v64 = v2->fields.pieceData;
                        if ( v64 )
                        {
                          if ( !v64->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64324(this);
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
  v39 = v2->fields.pieceData;
  if ( !v39 )
    goto LABEL_114;
  if ( !v39->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_114;
  v40 = v2->fields.pieceData;
  if ( !v40 )
    goto LABEL_114;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_114;
  v41 = WarBoardData__GetSquare((WarBoardData_o *)this, v40->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( v41 )
    WarBoardSquareData__ActiveEditPointArrow(v41, 0LL);
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
  int v8; // s0

  if ( (byte_49F9F99 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_49F9F99 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB5FA4(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_1B64324(transform);
  WarBoardManager__ShowServantSimplePopup(v6, pieceData, *(UnityEngine_Vector3_o *)&v8, 0LL);
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
      sub_1B64324(this);
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
    sub_1B6432C(this, method);
  }
}


bool __fastcall WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0LL )
    sub_1B64324(this);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardServantPieceComponent___OnDead_b__46_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_49F9FAF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_49F9FAF = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(button);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9FB0 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_49F9FB0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardServantPieceComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49F9FB1 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, x);
    byte_49F9FB1 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1B64170(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_1B64324(result);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1B6432C(result, v5);
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
  struct UISprite_o *hpBarUpperSprite; // x8
  const MethodInfo *v8; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_49F9FB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v3);
    byte_49F9FB2 = 1;
  }
  v4 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0LL, v8);
      return;
    }
LABEL_11:
    sub_1B64324(Instance);
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
  if ( (byte_49F9FB3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1B640C8(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v4);
    byte_49F9FB3 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !eventBossUI )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49F9FB4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1B640C8(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v4);
    byte_49F9FB4 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !eventBossUI )
    sub_1B64324(this);
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
  struct WarBoardServantPieceComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
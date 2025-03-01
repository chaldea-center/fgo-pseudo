void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_C061F0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_C05AA0;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, 0LL);
}


void __fastcall WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v5; // x19
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4BFB0FA & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB0FA = 1;
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
    sub_1C2E388(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4BFB0F9 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_12881/*"ServantDying"*/, v3);
    byte_4BFB0F9 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12881/*"ServantDying"*/,
      0LL);
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
      sub_1C2E388(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12881/*"ServantDying"*/,
      0LL);
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
      sub_1C2E388(pieceData, isBreak);
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
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  WarBoardServantPiecePartyBuffComponent_o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4BFB105 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB105 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL);
  if ( !v4 )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v6, v5);
    WarBoardServantPiecePartyBuffComponent__SetActive(v6, 0, v7);
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

  if ( (byte_4BFB103 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, selectPiece);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFB103 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( selectPiece )
    {
      v8 = (struct ServantClassCompatibilityIconComponent_o *)sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( v8 )
      {
        v9 = (System_Int32_array *)v8;
        if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
          sub_1C2E390(v8, v7);
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
      sub_1C2E388(v8, v7);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x19
  _QWORD *v25; // x21
  System_Delegate_o *v26; // x22
  WarBoardTaskBase_TaskCallback_o *v27; // x23
  System_Delegate_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  WarBoardTaskBase_TaskCallback_c *v36; // x1

  if ( (byte_4BFB101 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6);
    sub_1C2E12C(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v7);
    sub_1C2E12C(&WarBoardWaitTime_TypeInfo, v8);
    byte_4BFB101 = 1;
  }
  v9 = sub_1C2E378(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = eventBossUI,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)eventBossUI, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)(v9 + 24) = endAction,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)endAction, v18, v19, v20, v21, v22, v23),
        v24 = sub_1C2E378(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v24, 0.0, 0LL),
        !v24) )
  {
    sub_1C2E388(v10, v11);
  }
  v25 = (_QWORD *)(v24 + 40);
  v26 = *(System_Delegate_o **)(v24 + 40);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v35 = (int64_t)v28;
  if ( !v28 )
    goto LABEL_9;
  v36 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v25 = v28, (WarBoardTaskBase_TaskCallback_c *)v28->klass != v36) )
  {
    sub_1C2E648(v28);
LABEL_9:
    *v25 = v35;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 40), v35, v29, v30, v31, v32, v33, v34);
  *(_BYTE *)(v24 + 26) = 1;
  return (WarBoardTaskBase_o *)v24;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Func_bool__o *v19; // x20
  UnityEngine_WaitUntil_o *v20; // x21
  __int64 v21; // x20
  _QWORD *v22; // x21
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Delegate_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  WarBoardTaskBase_TaskCallback_c *v33; // x1

  if ( (byte_4BFB100 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v5);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v6);
    sub_1C2E12C(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v9);
    byte_4BFB100 = 1;
  }
  v10 = sub_1C2E378(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)eventBossUI, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v10 + 16) = 0;
  v19 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v19,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v20, v19, 0LL);
  v21 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v21, (UnityEngine_CustomYieldInstruction_o *)v20, 0LL);
  if ( !v21 )
LABEL_11:
    sub_1C2E388(v11, v12);
  v22 = (_QWORD *)(v21 + 32);
  v23 = *(System_Delegate_o **)(v21 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  v32 = (int64_t)v25;
  if ( !v25 )
    goto LABEL_9;
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v22 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v33) )
  {
    sub_1C2E648(v25);
LABEL_9:
    *v22 = v32;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 32), v32, v26, v27, v28, v29, v30, v31);
  return (WarBoardCallbackTask_o *)v21;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Func_bool__o *v19; // x20
  UnityEngine_WaitUntil_o *v20; // x21
  __int64 v21; // x20
  _QWORD *v22; // x21
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Delegate_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  WarBoardTaskBase_TaskCallback_c *v33; // x1

  if ( (byte_4BFB102 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, eventBossUI);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v4);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v5);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v6);
    sub_1C2E12C(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v8);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v9);
    byte_4BFB102 = 1;
  }
  v10 = sub_1C2E378(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = eventBossUI;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)eventBossUI, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v10 + 16) = 0;
  v19 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v19,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v20, v19, 0LL);
  v21 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v21, (UnityEngine_CustomYieldInstruction_o *)v20, 0LL);
  if ( !v21 )
LABEL_11:
    sub_1C2E388(v11, v12);
  v22 = (_QWORD *)(v21 + 32);
  v23 = *(System_Delegate_o **)(v21 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  v32 = (int64_t)v25;
  if ( !v25 )
    goto LABEL_9;
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v22 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v33) )
  {
    sub_1C2E648(v25);
LABEL_9:
    *v22 = v32;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 32), v32, v26, v27, v28, v29, v30, v31);
  return (WarBoardCallbackTask_o *)v21;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4BFB0F8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4BFB0F8 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C80008(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C80008(v2);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1C2E388(0LL, method);
  WarBoardManager__OpenPartyMenu(v6, this->fields.pieceData, 0LL);
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
    sub_1C2E388(servantIcon, method);
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
    sub_1C2E388(servantIcon, method);
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
  long double inited; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  unsigned int v20; // w9
  _QWORD *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v26; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  WarBoardServantPieceComponent___c_c *v28; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v30; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4BFB0FB & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_int___, warBoardData);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_1C2E12C(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_1C2E12C(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1C2E12C(&int___TypeInfo, v11);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v12);
    sub_1C2E12C(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v14);
    byte_4BFB0FB = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C2E1D4(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v20 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v20
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v20 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v20 <= 2) )
  {
    sub_1C2E390(BattleParticipantInfo, v16);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C80064(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v21[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C80008(inited);
  if ( !warBoardData
    || (v24 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_27:
    sub_1C2E388(BattleParticipantInfo, v16);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v26 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0LL);
    v27 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v28 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v28 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v28->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1C2E378(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__43_1,
        v30,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0LL);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
        (int64_t)_9__43_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v27,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v38,
                                                                 (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v39 = System_Linq_Enumerable__Concat_int_(
          v19,
          v24,
          (const MethodInfo_2FE97F8 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4BFB10A & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4BFB10A = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_1C2E388(button, method);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v31; // x2
  int v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFB0F3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_1C2E12C(&int_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_20554/*"icon_strong_enemy"*/, v7);
    sub_1C2E12C(&StringLiteral_20337/*"hp_gauge_boss"*/, v8);
    sub_1C2E12C(&StringLiteral_23561/*"servant_base_{0}"*/, v9);
    byte_4BFB0F3 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v32 = pieceData->fields._forceId_k__BackingField + 1;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v12, v13, v14);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23561/*"servant_base_{0}"*/, v16, 0LL);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20337/*"hp_gauge_boss"*/, 0LL);
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
                                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20554/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1C2E388(hpBar, v11);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&buffTrunNotice->fields.pieceData,
      (int64_t)pieceData,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v31);
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
    sub_1C2E388(this, method);
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

  if ( (byte_4BFB0F7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
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
  int64_t transform; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  WarBoardManager_TaskList_o *v32; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_378C1F0 *v34; // x2
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  int64_t v44; // x1
  Il2CppClass **v45; // x0
  WarBoardData_o *v46; // x29
  System_Collections_Generic_List_object__o *v47; // x28
  System_Collections_Generic_List_object__o *v48; // x26
  const MethodInfo *v49; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v51; // x27
  const MethodInfo_378C1F0 *v52; // x2
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct WarBoardTaskBase_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  int64_t v62; // x1
  Il2CppClass **v63; // x0
  bool IsStageBoss; // w0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v72; // x27
  WarBoardEventBossUIComponent_o **v73; // x27
  UnityEngine_Object_o *v74; // x28
  _BOOL8 v75; // x0
  const MethodInfo *v76; // x2
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct WarBoardTaskBase_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  int64_t v86; // x1
  Il2CppClass **v87; // x0
  WarBoardServantPieceComponent_o *v88; // x0
  const MethodInfo *v89; // x3
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct WarBoardTaskBase_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  int64_t v99; // x1
  Il2CppClass **v100; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  int64_t v104; // x21
  _QWORD *v105; // x22
  System_Delegate_o *v106; // x23
  WarBoardTaskBase_TaskCallback_o *v107; // x24
  System_Delegate_o *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x8
  WarBoardTaskBase_TaskCallback_c *v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  struct WarBoardTaskBase_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  WarBoardManager_TaskList_o *v127; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v129; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_float__o v132; // 0:x2.8
  System_Nullable_float__o v133; // 0:x3.8
  System_Nullable_float__o v134; // 0:x3.8
  System_Nullable_Vector3__o v135; // 0:x0.16
  System_Nullable_Vector3__o v136; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4BFB0FD & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v18);
    sub_1C2E12C(&WarBoardManager_TaskList_TypeInfo, v19);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v20);
    sub_1C2E12C(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v21);
    sub_1C2E12C(&WarBoardGaugePerformance_TypeInfo, v22);
    byte_4BFB0FD = 1;
  }
  priority = 0;
  v23 = sub_1C2E378(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_58;
  *(_QWORD *)(v23 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  v32 = (WarBoardManager_TaskList_o *)sub_1C2E378(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v32, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v135.fields.hasValue = &v129;
    *(_QWORD *)&v129.fields.hasValue = 0LL;
    *(_QWORD *)&v129.fields.value.fields.y = 0LL;
    *(_QWORD *)&v135.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v135, localPosition, v34);
    if ( !Instance )
      goto LABEL_58;
    v133 = cameraSize;
    transform = (int64_t)WarBoardManager__GetCameraPerformanceTask(
                           (WarBoardManager_o *)Instance,
                           v129,
                           v133,
                           1,
                           0,
                           1,
                           0LL);
    if ( !v32 )
      goto LABEL_58;
    items = v32->fields._items;
    v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v32->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v32->fields._size;
    v44 = transform;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v32,
        (Il2CppObject *)transform,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v32->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v44;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v45 + 4), v44, v35, v36, v37, v38, v39, v40);
    }
  }
  v127 = taskList;
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  v46 = *(WarBoardData_o **)(transform + 440);
  v47 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v46, v49);
  priority = 0;
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (int64_t)WarBoardManager__GetEventTasks_36694996(
                         (WarBoardManager_o *)transform,
                         32,
                         &priority,
                         LatestBattleTargetAndAttacker,
                         0LL);
  if ( !v47 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v47,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (int64_t)WarBoardManager__GetEventTasks_36694996(
                         (WarBoardManager_o *)transform,
                         33,
                         &priority,
                         LatestBattleTargetAndAttacker,
                         0LL);
  if ( !v48 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v48,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v32 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v32,
    (System_Collections_Generic_IEnumerable_T__o *)v47,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    v138 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v136.fields.hasValue = &v129;
    v129 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v136.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v136, v138, v52);
    if ( !v51 )
      goto LABEL_58;
    v134 = cameraSize;
    transform = (int64_t)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v51, v129, v134, 1, 1, 0, 0LL);
    v59 = v32->fields._items;
    v60 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v32->fields._version;
    if ( !v59 )
      goto LABEL_58;
    v61 = v32->fields._size;
    v62 = transform;
    if ( (unsigned int)v61 >= v59->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v32,
        (Il2CppObject *)transform,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v59->obj.klass + v61;
      v32->fields._size = v61 + 1;
      v63[4] = (Il2CppClass *)v62;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v63 + 4), v62, v53, v54, v55, v56, v57, v58);
    }
  }
  transform = (int64_t)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v72 = (WarBoardManager_o *)transform;
    transform = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v72 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v72, transform, 0LL);
  }
  *(_QWORD *)(v23 + 16) = EventBossUI;
  v73 = (WarBoardEventBossUIComponent_o **)(v23 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)EventBossUI, v65, v66, v67, v68, v69, v70);
  v74 = *(UnityEngine_Object_o **)(v23 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v75 = UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( v75 )
  {
    transform = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                           (WarBoardServantPieceComponent_o *)v75,
                           *v73,
                           v76);
    v83 = v32->fields._items;
    v84 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v32->fields._version;
    if ( !v83 )
      goto LABEL_58;
    v85 = v32->fields._size;
    v86 = transform;
    if ( (unsigned int)v85 >= v83->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v32,
        (Il2CppObject *)transform,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v87 = &v83->obj.klass + v85;
      v32->fields._size = v85 + 1;
      v87[4] = (Il2CppClass *)v86;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v87 + 4), v86, v77, v78, v79, v80, v81, v82);
    }
    transform = (int64_t)WarBoardServantPieceComponent__CreateBossUIBreakTask(v88, *v73, 0LL, v89);
    v96 = v32->fields._items;
    v97 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v32->fields._version;
    if ( !v96 )
      goto LABEL_58;
    v98 = v32->fields._size;
    v99 = transform;
    if ( (unsigned int)v98 >= v96->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v32,
        (Il2CppObject *)transform,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = &v96->obj.klass + v98;
      v32->fields._size = v98 + 1;
      v100[4] = (Il2CppClass *)v99;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v100 + 4), v99, v90, v91, v92, v93, v94, v95);
    }
  }
  v132 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v132,
    v32,
    dummyPointa,
    0LL,
    1,
    0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_58;
  if ( pieceData->fields._isDead_k__BackingField )
    goto LABEL_54;
  transform = (int64_t)this->fields.hpBar;
  if ( !transform )
    goto LABEL_58;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)transform, 0.0, 0LL);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v104 = sub_1C2E378(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v104, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v104 )
    goto LABEL_58;
  v105 = (_QWORD *)(v104 + 32);
  v106 = *(System_Delegate_o **)(v104 + 32);
  v107 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v107,
    (Il2CppObject *)v23,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v108 = System_Delegate__Combine(v106, (System_Delegate_o *)v107, 0LL);
  v115 = (int64_t)v108;
  if ( v108 )
  {
    v116 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v105 = v108;
      if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass == v116 )
        goto LABEL_50;
    }
    sub_1C2E648(v108);
  }
  *v105 = v115;
LABEL_50:
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v104 + 32), v115, v109, v110, v111, v112, v113, v114);
  *(_BYTE *)(v104 + 26) = 1;
  v123 = v32->fields._items;
  v124 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v32->fields._version;
  if ( !v123 )
    goto LABEL_58;
  v125 = v32->fields._size;
  if ( (unsigned int)v125 >= v123->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v32,
      (Il2CppObject *)v104,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = &v123->obj.klass + v125;
    v32->fields._size = v125 + 1;
    v126[4] = (Il2CppClass *)v104;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v126 + 4), v104, v117, v118, v119, v120, v121, v122);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v32,
    (System_Collections_Generic_IEnumerable_T__o *)v48,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v127 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v127,
      (System_Collections_Generic_IEnumerable_T__o *)v32,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v127->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1C2E388(transform, v25);
  WarBoardManager__AddTask_36732244(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v32,
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
  int64_t pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x21
  WarBoardServantPieceComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_4BFB0FC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_4BFB0FC = 1;
  }
  pieceData = (int64_t)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_20;
    v12 = (WarBoardManager_o *)pieceData;
    pieceData = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v12 )
      goto LABEL_20;
    EventBossUI = WarBoardManager__GetEventBossUI(v12, pieceData, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(v14, EventBossUI, v15);
    if ( v13 )
    {
      items = v13->fields._items;
      v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v13->fields._version;
      if ( items )
      {
        size = v13->fields._size;
        v25 = pieceData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
        }
        WarBoardPieceBaseComponent__OnDamage(
          (WarBoardPieceBaseComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
          0LL);
        if ( taskList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v13,
            (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        pieceData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_36732244(
            (WarBoardManager_o *)pieceData,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
            0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_1C2E388(pieceData, taskList);
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
  int64_t gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v34; // x21
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_object__o *v36; // x21
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x2
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  int64_t v48; // x1
  Il2CppClass **v49; // x0
  WarBoardServantPieceComponent_o *v50; // x0
  const MethodInfo *v51; // x2
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  WarBoardManager_o *v63; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v65; // x26
  Il2CppObject *Master_object; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v68; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_36694996; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v71; // x0
  const MethodInfo *v72; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v74; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v75; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v77; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_378C1F0 *v79; // x2
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  int64_t v89; // x1
  Il2CppClass **v90; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v92; // x8
  System_String_o *v93; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v96; // x23
  __int64 v97; // x25
  __int64 v98; // x26
  ServantEntity_o *v99; // x25
  int v100; // w23
  bool v101; // w0
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  Il2CppObject *v105; // x0
  PartyOrganizationUtility_o *v106; // x23
  System_Delegate_o *v107; // x25
  Il2CppObject *v108; // x22
  WarBoardTaskBase_TaskCallback_o *v109; // x26
  System_Delegate_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x8
  WarBoardTaskBase_TaskCallback_c *v118; // x1
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  WarBoardWaitTime_o *v129; // x20
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v141; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_float__o v143; // 0:x3.8
  System_Nullable_Vector3__o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB0FE & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_1C2E12C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_1C2E12C(&DataManager_TypeInfo, v10);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_1C2E12C(&int_TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v19);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_1C2E12C(&WarBoardManager_TypeInfo, v24);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_1C2E12C(&WarBoardWaitTime_TypeInfo, v26);
    sub_1C2E12C(&StringLiteral_6305/*"Escape_Effect"*/, v27);
    sub_1C2E12C(&StringLiteral_6163/*"Enemy_Dead_Effect"*/, v28);
    sub_1C2E12C(&StringLiteral_12903/*"Servant_Dead_Effect"*/, v29);
    sub_1C2E12C(&StringLiteral_13128/*"Special_Effect{0:D2}"*/, v30);
    byte_4BFB0FE = 1;
  }
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = (int64_t)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v34 = (WarBoardManager_o *)gameObject;
    gameObject = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v34 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v34, gameObject, 0LL);
  }
  gameObject = (int64_t)this->fields.hpBar;
  if ( !gameObject )
    goto LABEL_101;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)gameObject, 0.0, 0LL);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
  {
    gameObject = (int64_t)this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v37 )
  {
    gameObject = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                            (WarBoardServantPieceComponent_o *)v37,
                            (WarBoardEventBossUIComponent_o *)EventBossUI,
                            v38);
    if ( !v36 )
      goto LABEL_101;
    items = v36->fields._items;
    v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !items )
      goto LABEL_101;
    v47 = v36->fields._size;
    v48 = gameObject;
    if ( (unsigned int)v47 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &items->obj.klass + v47;
      v36->fields._size = v47 + 1;
      v49[4] = (Il2CppClass *)v48;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 4), v48, v39, v40, v41, v42, v43, v44);
    }
    gameObject = (int64_t)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                            v50,
                            (WarBoardEventBossUIComponent_o *)EventBossUI,
                            v51);
    v58 = v36->fields._items;
    v59 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !v58 )
      goto LABEL_101;
    v60 = v36->fields._size;
    v61 = gameObject;
    if ( (unsigned int)v60 >= v58->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &v58->obj.klass + v60;
      v36->fields._size = v60 + 1;
      v62[4] = (Il2CppClass *)v61;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v62 + 4), v61, v52, v53, v54, v55, v56, v57);
    }
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v63 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !v63 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v63, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v65 = *(WarBoardData_o **)(gameObject + 440);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v68 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v68,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v65 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v65, 0LL) )
  {
    gameObject = WarBoardData__get_id(v65, 0LL);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v65, 0LL);
    v68 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0LL);
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v68 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v68,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_36694996 = WarBoardManager__GetEventTasks_36694996(
                          (WarBoardManager_o *)gameObject,
                          24,
                          &priority,
                          0LL,
                          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_36694996,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v71 = WarBoardManager__GetEventTasks_36694996((WarBoardManager_o *)gameObject, 25, &priority, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v68,
    (System_Collections_Generic_IEnumerable_T__o *)v71,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v65, v72);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v74 = WarBoardManager__GetEventTasks_36694996(
          (WarBoardManager_o *)gameObject,
          34,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v74,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v75 = WarBoardManager__GetEventTasks_36694996(
          (WarBoardManager_o *)gameObject,
          35,
          &priority,
          LatestBattleTargetAndAttacker,
          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v68,
    (System_Collections_Generic_IEnumerable_T__o *)v75,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v68,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v77 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v68,
    (System_Collections_Generic_IEnumerable_T__o *)v77,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = System_Linq_Enumerable__Any_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                 (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v144.fields.hasValue = &v141;
    *(_QWORD *)&v141.fields.hasValue = 0LL;
    *(_QWORD *)&v141.fields.value.fields.y = 0LL;
    *(_QWORD *)&v144.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v144, localPosition, v79);
    if ( !Instance )
      goto LABEL_101;
    v143 = size;
    gameObject = (int64_t)WarBoardManager__GetCameraPerformanceTask(
                            (WarBoardManager_o *)Instance,
                            v141,
                            v143,
                            1,
                            1,
                            0,
                            0LL);
    if ( !v36 )
      goto LABEL_101;
    v86 = v36->fields._items;
    v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v36->fields._version;
    if ( !v86 )
      goto LABEL_101;
    v88 = v36->fields._size;
    v89 = gameObject;
    if ( (unsigned int)v88 >= v86->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v86->obj.klass + v88;
      v36->fields._size = v88 + 1;
      v90[4] = (Il2CppClass *)v89;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v90 + 4), v89, v80, v81, v82, v83, v84, v85);
    }
  }
  gameObject = (int64_t)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v92 = (System_String_o **)&StringLiteral_6163/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v92 = (System_String_o **)&StringLiteral_12903/*"Servant_Dead_Effect"*/;
  v93 = *v92;
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v96 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v98 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v97 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v145.fields.currentCryptoKey = v98;
  *(_QWORD *)&v145.fields.fakeValue = v97;
  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v145, 0LL);
  if ( !v96 )
    goto LABEL_101;
  gameObject = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v96,
                          gameObject,
                          (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v99 = (ServantEntity_o *)gameObject;
  gameObject = WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v99 )
    goto LABEL_101;
  v100 = gameObject;
  v101 = ServantEntity__checkIsHeroineSvt(v99, 0LL);
  if ( v100 == 1 || v101 )
  {
    v93 = (System_String_o *)StringLiteral_6305/*"Escape_Effect"*/;
  }
  else if ( v100 >= 2 )
  {
    *(_DWORD *)&v141.fields.hasValue = v100;
    v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v102, v103, v104);
    v93 = System_String__Format((System_String_o *)StringLiteral_13128/*"Special_Effect{0:D2}"*/, v105, 0LL);
  }
  gameObject = (int64_t)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                          (WarBoardPieceBaseComponent_o *)this,
                          v93,
                          0LL);
  if ( !gameObject )
LABEL_101:
    sub_1C2E388(gameObject, v32);
  v106 = (PartyOrganizationUtility_o *)(gameObject + 40);
  v107 = *(System_Delegate_o **)(gameObject + 40);
  v108 = (Il2CppObject *)gameObject;
  *(_BYTE *)(gameObject + 26) = 1;
  v109 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v109,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v110 = System_Delegate__Combine(v107, (System_Delegate_o *)v109, 0LL);
  v117 = (int64_t)v110;
  if ( !v110 )
    goto LABEL_82;
  v118 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v110->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v106->klass = (PartyOrganizationUtility_c *)v110, (WarBoardTaskBase_TaskCallback_c *)v110->klass != v118) )
  {
    sub_1C2E648(v110);
LABEL_82:
    v106->klass = (PartyOrganizationUtility_c *)v117;
  }
  sub_1C2E0D0(v106, v117, v111, v112, v113, v114, v115, v116);
  if ( !v36 )
    goto LABEL_101;
  v125 = v36->fields._items;
  v126 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v125 )
    goto LABEL_101;
  v127 = v36->fields._size;
  if ( (unsigned int)v127 >= v125->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      v108,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v128 = &v125->obj.klass + v127;
    v36->fields._size = v127 + 1;
    v128[4] = (Il2CppClass *)v108;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v128 + 4), (int64_t)v108, v119, v120, v121, v122, v123, v124);
  }
  v129 = (WarBoardWaitTime_o *)sub_1C2E378(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v129, 0.5, 0LL);
  v136 = v36->fields._items;
  v137 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v136 )
    goto LABEL_101;
  v138 = v36->fields._size;
  if ( (unsigned int)v138 >= v136->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)v129,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v139 = &v136->obj.klass + v138;
    v36->fields._size = v138 + 1;
    v139[4] = (Il2CppClass *)v129;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v139 + 4), (int64_t)v129, v130, v131, v132, v133, v134, v135);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v68,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v68,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v36,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_36724728(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
      0LL);
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4BFB109 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19170/*"ef_guts"*/, taskList);
    byte_4BFB109 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19170/*"ef_guts"*/,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4BFB108 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19191/*"ef_special_invincible01"*/, taskList);
    byte_4BFB108 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19191/*"ef_special_invincible01"*/,
      taskList,
      0LL);
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
  int64_t v26; // x21
  System_Delegate_o **v27; // x22
  System_Delegate_o *v28; // x23
  WarBoardServantPieceComponent___c_c *v29; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Delegate_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  WarBoardTaskBase_TaskCallback_c *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0

  if ( (byte_4BFB106 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_1C2E12C(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_1C2E12C(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_4BFB106 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v26 = sub_1C2E378(WarBoardGaugePerformance_TypeInfo);
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
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v31,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Delegate__Combine(v28, (System_Delegate_o *)_9__57_0, 0LL);
  if ( !v39 )
  {
    *v27 = 0LL;
    goto LABEL_22;
  }
  v46 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v27 = v39;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == v46 )
    {
LABEL_22:
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v39, v40, v41, v42, v43, v44, v45);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v17 )
      {
        items = v17->fields._items;
        v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v17->fields._version;
        if ( items )
        {
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v26,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v56 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v26;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v56 + 4), v26, v47, v48, v49, v50, v51, v52);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v17,
                (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_36732244(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v17,
              0LL);
            return;
          }
        }
      }
LABEL_30:
      sub_1C2E388(gameObject, v16);
    }
  }
  sub_1C2E648(v39);
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
  int64_t v26; // x21
  System_Delegate_o **v27; // x22
  System_Delegate_o *v28; // x23
  WarBoardServantPieceComponent___c_c *v29; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Delegate_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  WarBoardTaskBase_TaskCallback_c *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0

  if ( (byte_4BFB10B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_1C2E12C(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_1C2E12C(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_4BFB10B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
  v26 = sub_1C2E378(WarBoardGaugePerformance_TypeInfo);
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
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v31,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__63_0,
      (int64_t)_9__63_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Delegate__Combine(v28, (System_Delegate_o *)_9__63_0, 0LL);
  if ( !v39 )
  {
    *v27 = 0LL;
    goto LABEL_20;
  }
  v46 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v27 = v39;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass == v46 )
    {
LABEL_20:
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v39, v40, v41, v42, v43, v44, v45);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v19 )
      {
        items = v19->fields._items;
        v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v26,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v56 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v26;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v56 + 4), v26, v47, v48, v49, v50, v51, v52);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v19,
                (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_36732244(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
              0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1C2E388(gameObject, v18);
    }
  }
  sub_1C2E648(v39);
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
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v17; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v19; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v23; // x21
  Il2CppObject *v24; // x22
  const MethodInfo_378C1F0 *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  PartyOrganizationUtility_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v39; // x22
  WarBoardTaskBase_TaskCallback_o *v40; // x25
  System_Delegate_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x8
  WarBoardTaskBase_TaskCallback_c *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  WarBoardWaitTime_o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  System_Nullable_Vector3__o v71; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_float__o v72; // 0:x3.8
  System_Nullable_Vector3__o v73; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB0FF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_1C2E12C(&WarBoardWaitTime_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_12904/*"Servant_Regenerate_Effect"*/, v13);
    byte_4BFB0FF = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v17 = 0LL;
  while ( (int)v17 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v17 >= breakPoints->max_length )
        sub_1C2E390(Instance, v15);
      Instance = breakPoints->m_Items[v17];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v17;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = this->fields.pieceData;
  if ( !v19 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v19->fields._nowSquareIndex_k__BackingField,
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
  v75.fields.x = x;
  v75.fields.y = y;
  v75.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v75, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v73.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v73.fields.hasValue = &v71;
  *(_QWORD *)&v71.fields.hasValue = 0LL;
  *(_QWORD *)&v71.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v73, localPosition, v25);
  if ( !v24 )
    goto LABEL_10;
  v72 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v24,
                                                v71,
                                                v72,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v23 )
    goto LABEL_10;
  items = v23->fields._items;
  v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v23->fields._size;
  v35 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)Instance,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v35;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12904/*"Servant_Regenerate_Effect"*/,
                                                0LL);
  if ( !Instance )
LABEL_10:
    sub_1C2E388(Instance, v15);
  p_activeObject = (PartyOrganizationUtility_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v39 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v40 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v41 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v40, 0LL);
  v48 = (int64_t)v41;
  if ( v41 )
  {
    v49 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v41->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (PartyOrganizationUtility_c *)v41;
      if ( (WarBoardTaskBase_TaskCallback_c *)v41->klass == v49 )
        goto LABEL_28;
    }
    sub_1C2E648(v41);
  }
  p_activeObject->klass = (PartyOrganizationUtility_c *)v48;
LABEL_28:
  sub_1C2E0D0(p_activeObject, v48, v42, v43, v44, v45, v46, v47);
  v56 = v23->fields._items;
  v57 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !v56 )
    goto LABEL_10;
  v58 = v23->fields._size;
  if ( (unsigned int)v58 >= v56->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      v39,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &v56->obj.klass + v58;
    v23->fields._size = v58 + 1;
    v59[4] = (Il2CppClass *)v39;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v39, v50, v51, v52, v53, v54, v55);
  }
  v60 = (WarBoardWaitTime_o *)sub_1C2E378(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v60, 0.5, 0LL);
  v67 = v23->fields._items;
  v68 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !v67 )
    goto LABEL_10;
  v69 = v23->fields._size;
  if ( (unsigned int)v69 >= v67->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v60,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v70 = &v67->obj.klass + v69;
    v23->fields._size = v69 + 1;
    v70[4] = (Il2CppClass *)v60;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v60, v61, v62, v63, v64, v65, v66);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v23,
        (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_36724728(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
    0LL);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_378C1F0 *v31; // x2
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  int64_t v41; // x1
  Il2CppClass **v42; // x0
  Il2CppObject *v43; // x20
  PartyOrganizationUtility_o *v44; // x22
  System_Delegate_o *v45; // x23
  WarBoardTaskBase_TaskCallback_o *v46; // x24
  System_Delegate_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x8
  WarBoardTaskBase_TaskCallback_c *v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  Il2CppObject *v66; // x20
  System_Nullable_Vector3__o v67; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v68; // 0:x3.8
  System_Nullable_Vector3__o v69; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB107 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v11);
    sub_1C2E12C(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_11465/*"Reinforcement_Effect_1"*/, v13);
    byte_4BFB107 = 1;
  }
  v14 = sub_1C2E378(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)callback, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v69.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v69.fields.hasValue = &v67;
  *(_QWORD *)&v67.fields.hasValue = 0LL;
  *(_QWORD *)&v67.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v69, localPosition, v31);
  if ( !Instance )
    goto LABEL_23;
  v68 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v67, v68, 1, 0, 1, 0LL);
  if ( !v29 )
    goto LABEL_23;
  items = v29->fields._items;
  v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v29->fields._size;
  v41 = (int64_t)transform;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)transform,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v41;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 4), v41, v32, v33, v34, v35, v36, v37);
  }
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11465/*"Reinforcement_Effect_1"*/,
                        0LL);
  if ( !transform )
LABEL_23:
    sub_1C2E388(transform, v16);
  v43 = (Il2CppObject *)transform;
  v44 = (PartyOrganizationUtility_o *)(transform + 40);
  v45 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v46 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v47 = System_Delegate__Combine(v45, (System_Delegate_o *)v46, 0LL);
  v54 = (int64_t)v47;
  if ( v47 )
  {
    v55 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v47->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v44->klass = (PartyOrganizationUtility_c *)v47;
      if ( (WarBoardTaskBase_TaskCallback_c *)v47->klass == v55 )
        goto LABEL_17;
    }
    sub_1C2E648(v47);
  }
  v44->klass = (PartyOrganizationUtility_c *)v54;
LABEL_17:
  sub_1C2E0D0(v44, v54, v48, v49, v50, v51, v52, v53);
  v62 = v29->fields._items;
  v63 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v29->fields._version;
  if ( !v62 )
    goto LABEL_23;
  v64 = v29->fields._size;
  if ( (unsigned int)v64 >= v62->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      v43,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v29->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v43;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v43, v56, v57, v58, v59, v60, v61);
  }
  v66 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)System_Collections_Generic_List_object___ToArray(
                        v29,
                        (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v66 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v66, (WarBoardTaskBase_array *)transform, 0LL);
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
    sub_1C2E388(this, active);
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

  if ( (byte_4BFB0F4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&int_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_22658/*"onBoard_initial_placement_class2_{0}"*/, v7);
    byte_4BFB0F4 = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1C2E388(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_327B1CC *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
    sub_1C2E390(ServantClassEntities, method);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  v18 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22658/*"onBoard_initial_placement_class2_{0}"*/, v17, 0LL);
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
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_4BFB104 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFB104 = 1;
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
             (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
        v9);
      return;
    }
LABEL_14:
    sub_1C2E388(pieceData, v7);
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
    sub_1C2E388(this, userServantId);
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
    sub_1C2E388(this, userServantEquipId);
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
  int32_t v18; // w23
  UISprite_o *servantIcon; // x24
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v47; // x1
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *v49; // x8
  struct WarBoardPieceData_o *v50; // x8
  WarBoardSquareData_o *v51; // x0
  bool v52; // w20
  struct WarBoardPieceData_o *v53; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v58; // x8
  UISprite_o *v59; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v61; // x8
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v63; // x20
  UnityEngine_Object_o *v64; // x20
  UILabel_o *v65; // x20
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct WarBoardPieceData_o *v69; // x8
  WarBoardServantPieceComponent_o *v70; // x21
  Il2CppObject *v71; // x0
  struct WarBoardPieceData_o *v72; // x8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v76; // w20
  struct WarBoardPieceData_o *v77; // x8
  struct WarBoardPieceData_o *v78; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v80; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t v82; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BFB0F5 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&int_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&StringLiteral_23154/*"questinfo_enemyface_bg"*/, v10);
    this = (WarBoardServantPieceComponent_o *)sub_1C2E12C(&StringLiteral_15702/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v11);
    byte_4BFB0F5 = 1;
  }
  pieceData = v2->fields.pieceData;
  if ( !pieceData )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)v2->fields.classIconRoot;
  if ( !this )
    goto LABEL_113;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_113;
  if ( iconId_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
    if ( !this )
      goto LABEL_113;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v14 = v2->fields.pieceData;
    if ( !v14 )
      goto LABEL_113;
    npcImageSvtId_k__BackingField = v14->fields._npcImageSvtId_k__BackingField;
    if ( npcImageSvtId_k__BackingField <= 0 )
      npcImageSvtId_k__BackingField = v14->fields._iconId_k__BackingField;
    v82 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v14->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v14->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v17 = v2->fields.pieceData;
    if ( !v17 )
      goto LABEL_113;
    if ( !this )
      goto LABEL_113;
    this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                (ServantLimitImageMaster_o *)this,
                                                v17->fields._iconId_k__BackingField,
                                                npcDispLimitCount_k__BackingField,
                                                0LL);
    if ( !v2->fields.pieceData )
      goto LABEL_113;
    v18 = (int)this;
    if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0LL) )
      goto LABEL_23;
    servantIcon = (UISprite_o *)v2->fields.servantIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v20 = 1;
    if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v18, 1, 0LL, 0LL) )
    {
LABEL_23:
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_113;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v21, v22, v23);
      v80 = npcDispLimitCount_k__BackingField;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v26, v27, v28);
      v30 = System_String__Concat(v25, v29, 0LL);
      enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
      v32 = v30;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_39173640(servantLevel, enemyIcon, v32, 0LL) )
        goto LABEL_30;
      v33 = (UISprite_o *)v2->fields.enemyIcon;
      v34 = System_Int32__ToString((int32_t)&v82, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI_39173640(servantLevel, v33, v34, 0LL) )
      {
LABEL_30:
        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
        if ( !this )
          goto LABEL_113;
        WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v2->fields.enemyIcon, 0LL);
      }
      enemyIconBg = v2->fields.enemyIconBg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_39173640(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_23154/*"questinfo_enemyface_bg"*/,
                                                  0LL);
      v36 = v2->fields.pieceData;
      if ( !v36 )
        goto LABEL_113;
      if ( v36->fields._IsShadow_k__BackingField )
      {
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( !this )
          goto LABEL_113;
        removeTweenTargetObjects = (System_Collections_Generic_List_object__o *)v2->fields.removeTweenTargetObjects;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !removeTweenTargetObjects )
          goto LABEL_113;
        items = removeTweenTargetObjects->fields._items;
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_113;
        size = removeTweenTargetObjects->fields._size;
        v47 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v47;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v47, v38, v39, v40, v41, v42, v43);
        }
        ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
          v2,
          v2->klass->vtable._12_ShowStatus.methodPtr);
      }
      v20 = 0;
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
            v52 = !v20;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
                v53 = v2->fields.pieceData;
                if ( v53 )
                {
                  frameInClassIcon = v2->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v53->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v53->fields._iconFrameType_k__BackingField;
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
                    v58 = v2->fields.pieceData;
                    if ( !v58 )
                      goto LABEL_113;
                    v59 = (UISprite_o *)v2->fields.equipeIcon;
                    iconEquipId_k__BackingField = v58->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetEquipFace(v59, iconEquipId_k__BackingField, 0LL, 0LL);
                  }
                  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
                    v61 = v2->fields.pieceData;
                    if ( v61 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v61->fields._iconEquipId_k__BackingField > 0,
                          0LL);
                        supportSprite = (UnityEngine_Object_o *)v2->fields.supportSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
                        {
                          this = (WarBoardServantPieceComponent_o *)v2->fields.supportSprite;
                          if ( !this )
                            goto LABEL_113;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
                          if ( !v2->fields.pieceData )
                            goto LABEL_113;
                          v63 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v2->fields.pieceData,
                                                                      0LL);
                          if ( !v63 )
                            goto LABEL_113;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v63,
                            (unsigned __int8)this & 1,
                            0LL);
                        }
                        v64 = (UnityEngine_Object_o *)v2->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_105;
                        v65 = v2->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15702/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0LL);
                        v69 = v2->fields.pieceData;
                        if ( !v69 )
                          goto LABEL_113;
                        v70 = this;
                        iconLevel_k__BackingField = v69->fields._iconLevel_k__BackingField;
                        v71 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &iconLevel_k__BackingField,
                                                v66,
                                                v67,
                                                v68);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format(
                                                                    (System_String_o *)v70,
                                                                    v71,
                                                                    0LL);
                        if ( !v65 )
                          goto LABEL_113;
                        UILabel__set_text(v65, (System_String_o *)this, 0LL);
                        this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
                        if ( !this )
                          goto LABEL_113;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0LL);
                        v72 = v2->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v72 )
                            goto LABEL_113;
                          if ( v72->fields._roleType_k__BackingField == 1 )
                          {
                            this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
                            if ( !this )
                              goto LABEL_113;
                            this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                            if ( !this )
                              goto LABEL_113;
                            p_z = &v2->fields.positionLevelDanger.fields.z;
                            p_x = &v2->fields.positionLevelDanger.fields.x;
                            p_y = &v2->fields.positionLevelDanger.fields.y;
                            goto LABEL_104;
                          }
                        }
                        else if ( !v72 )
                        {
                          goto LABEL_113;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                    v2->fields.pieceData,
                                                                    0LL);
                        if ( !v2->fields.servantLevel )
                          goto LABEL_113;
                        v76 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                                    0LL);
                        if ( (v76 & 1) != 0 )
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
                        v83.fields.z = *p_z;
                        v83.fields.y = *p_y;
                        v83.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v83, 0LL);
LABEL_105:
                        v77 = v2->fields.pieceData;
                        if ( v77 )
                        {
                          if ( !v77->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                          if ( this )
                          {
                            v78 = v2->fields.pieceData;
                            if ( v78 )
                            {
                              this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                              if ( this )
                              {
                                Square = WarBoardData__GetSquare(
                                           (WarBoardData_o *)this,
                                           v78->fields._nowSquareIndex_k__BackingField,
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
LABEL_113:
    sub_1C2E388(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_113;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v49 = v2->fields.pieceData;
  if ( !v49 )
    goto LABEL_113;
  if ( !v49->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_113;
  v50 = v2->fields.pieceData;
  if ( !v50 )
    goto LABEL_113;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_113;
  v51 = WarBoardData__GetSquare((WarBoardData_o *)this, v50->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( v51 )
    WarBoardSquareData__ActiveEditPointArrow(v51, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardServantPieceComponent__ShowStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int v10; // s0

  if ( (byte_4BFB0F6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4BFB0F6 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C80008(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C80008(v2);
  pieceData = this->fields.pieceData;
  v7 = **(WarBoardManager_o ***)(v5 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(transform, 0LL), !v7) )
    sub_1C2E388(transform, v9);
  WarBoardManager__ShowServantSimplePopup(v7, pieceData, *(UnityEngine_Vector3_o *)&v10, 0LL);
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
      sub_1C2E388(this, method);
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
    sub_1C2E390(this, method);
  }
}


bool __fastcall WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0LL )
    sub_1C2E388(this, x);
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
    sub_1C2E388(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4BFB10C & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4BFB10C = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C2E388(button, method);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFB10D & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_4BFB10D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BFB10E & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, x);
    byte_4BFB10E = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1C2E1D4(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_1C2E388(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1C2E390(result, v5);
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
  struct UISprite_o *hpBarWhiteSprite; // x8
  const MethodInfo *v9; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4BFB10F & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1C2E12C(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v3);
    byte_4BFB10F = 1;
  }
  v4 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2E144(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  hpBarWhiteSprite = Instance[1].fields.hpBarWhiteSprite;
  if ( !hpBarWhiteSprite )
    goto LABEL_11;
  OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&hpBarWhiteSprite->fields.updateAnchors, 0, 0LL);
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
    sub_1C2E388(Instance, v7);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BFB110 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1C2E12C(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v4);
    byte_4BFB110 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !eventBossUI )
    sub_1C2E388(this, method);
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
    sub_1C2E388(this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BFB111 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1C2E12C(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v4);
    byte_4BFB111 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !eventBossUI )
    sub_1C2E388(this, method);
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
    sub_1C2E388(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
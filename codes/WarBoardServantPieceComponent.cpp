void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BD27E0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BD2090;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, method);
}


void __fastcall WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *pieceData; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v7; // x19
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B13C10 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C10 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  CriticalStars = WarBoardPieceData__get_CriticalStars(pieceData, 0LL);
  criticalStarsLabel = (UnityEngine_Object_o *)this->fields.criticalStarsLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(criticalStarsLabel, 0LL, 0LL) )
  {
    v7 = this->fields.criticalStarsLabel;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&CriticalStars, 0LL);
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)pieceData, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *pieceData; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4B13C0F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12783/*"ServantDying"*/, v4, v5);
    byte_4B13C0F = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12783/*"ServantDying"*/,
      v2);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
    {
      pieceData = this->fields.faceEffect;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive(pieceData, 0, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12783/*"ServantDying"*/,
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
      sub_1BCAA3C(pieceData, isBreak);
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
  __int64 v2; // x2
  UnityEngine_Object_o *partyBuffComponent; // x20
  __int64 v5; // x1
  WarBoardServantPiecePartyBuffComponent_o *v6; // x0

  if ( (byte_4B13C1B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C1B = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    WarBoardServantPiecePartyBuffComponent__ClearPartyBuff(v6, 0LL);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v8; // x1
  struct ServantClassCompatibilityIconComponent_o *v9; // x0
  System_Int32_array *v10; // x2
  struct WarBoardPieceData_o *pieceData; // x8

  if ( (byte_4B13C19 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, selectPiece, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13C19 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selectPiece);
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( selectPiece )
    {
      v9 = (struct ServantClassCompatibilityIconComponent_o *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( v9 )
      {
        v10 = (System_Int32_array *)v9;
        if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
          sub_1BCAA44(v9, v8);
        LODWORD(v9->fields.upIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v9 = this->fields.classCompatibilityIcon;
          if ( v9 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v9,
              pieceData->fields._iconClassId_k__BackingField,
              v10,
              4,
              0LL);
            return;
          }
        }
      }
LABEL_14:
      sub_1BCAA3C(v9, v8);
    }
    v9 = this->fields.classCompatibilityIcon;
    if ( !v9 )
      goto LABEL_14;
    ServantClassCompatibilityIconComponent__Clear(v9, 0LL);
  }
}


WarBoardTaskBase_o *__fastcall WarBoardServantPieceComponent__CreateBossUIBreakTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x19
  __int64 v31; // x2
  __int64 v32; // x3
  _QWORD *v33; // x21
  System_Delegate_o *v34; // x22
  WarBoardTaskBase_TaskCallback_o *v35; // x23
  System_Delegate_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1

  if ( (byte_4B13C17 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI, endAction);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6, v7);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v8, v9);
    sub_1BCA7E0(&WarBoardWaitTime_TypeInfo, v10, v11);
    byte_4B13C17 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, eventBossUI, endAction, method);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v12,
    0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = eventBossUI,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)eventBossUI, v15, v16, v17, v18, v19, v20),
        *(_QWORD *)(v12 + 24) = endAction,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)endAction, v21, v22, v23, v24, v25, v26),
        v30 = sub_1BCAA2C(WarBoardWaitTime_TypeInfo, v27, v28, v29),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v30, 0.0, 0LL),
        !v30) )
  {
    sub_1BCAA3C(v13, v14);
  }
  v33 = (_QWORD *)(v30 + 40);
  v34 = *(System_Delegate_o **)(v30 + 40);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v14, v31, v32);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v12,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  v43 = (int64_t)v36;
  if ( !v36 )
    goto LABEL_9;
  v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v33 = v36, (WarBoardTaskBase_TaskCallback_c *)v36->klass != v44) )
  {
    sub_1BCACFC(v36);
LABEL_9:
    *v33 = v43;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 40), v43, v37, v38, v39, v40, v41, v42);
  *(_BYTE *)(v30 + 26) = 1;
  return (WarBoardTaskBase_o *)v30;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Func_bool__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_WaitUntil_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  _QWORD *v40; // x21
  System_Delegate_o *v41; // x22
  WarBoardTaskBase_TaskCallback_o *v42; // x23
  System_Delegate_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x8
  WarBoardTaskBase_TaskCallback_c *v51; // x1

  if ( (byte_4B13C16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, eventBossUI, method);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v7, v8);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v9, v10);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v15, v16);
    byte_4B13C16 = 1;
  }
  v17 = sub_1BCAA2C(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, eventBossUI, method, v3);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 24) = eventBossUI;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)eventBossUI, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 16) = 0;
  v29 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v26, v27, v28);
  System_Func_bool____ctor(
    v29,
    (Il2CppObject *)v17,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    0LL);
  v33 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v30, v31, v32);
  UnityEngine_WaitUntil___ctor(v33, v29, 0LL);
  v37 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v34, v35, v36);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, (UnityEngine_CustomYieldInstruction_o *)v33, 0LL);
  if ( !v37 )
LABEL_11:
    sub_1BCAA3C(v18, v19);
  v40 = (_QWORD *)(v37 + 32);
  v41 = *(System_Delegate_o **)(v37 + 32);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v19, v38, v39);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  v50 = (int64_t)v43;
  if ( !v43 )
    goto LABEL_9;
  v51 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v40 = v43, (WarBoardTaskBase_TaskCallback_c *)v43->klass != v51) )
  {
    sub_1BCACFC(v43);
LABEL_9:
    *v40 = v50;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), v50, v44, v45, v46, v47, v48, v49);
  return (WarBoardCallbackTask_o *)v37;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Func_bool__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_WaitUntil_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  _QWORD *v40; // x21
  System_Delegate_o *v41; // x22
  WarBoardTaskBase_TaskCallback_o *v42; // x23
  System_Delegate_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x8
  WarBoardTaskBase_TaskCallback_c *v51; // x1

  if ( (byte_4B13C18 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, eventBossUI, method);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v7, v8);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v9, v10);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v15, v16);
    byte_4B13C18 = 1;
  }
  v17 = sub_1BCAA2C(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, eventBossUI, method, v3);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 24) = eventBossUI;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)eventBossUI, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v17 + 16) = 0;
  v29 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v26, v27, v28);
  System_Func_bool____ctor(
    v29,
    (Il2CppObject *)v17,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    0LL);
  v33 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v30, v31, v32);
  UnityEngine_WaitUntil___ctor(v33, v29, 0LL);
  v37 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v34, v35, v36);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, (UnityEngine_CustomYieldInstruction_o *)v33, 0LL);
  if ( !v37 )
LABEL_11:
    sub_1BCAA3C(v18, v19);
  v40 = (_QWORD *)(v37 + 32);
  v41 = *(System_Delegate_o **)(v37 + 32);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v19, v38, v39);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  v50 = (int64_t)v43;
  if ( !v43 )
    goto LABEL_9;
  v51 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v40 = v43, (WarBoardTaskBase_TaskCallback_c *)v43->klass != v51) )
  {
    sub_1BCACFC(v43);
LABEL_9:
    *v40 = v50;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), v50, v44, v45, v46, v47, v48, v49);
  return (WarBoardCallbackTask_o *)v37;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  WarBoardManager_o *v7; // x0

  if ( (byte_4B13C0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    byte_4B13C0E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1C6BC(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  v7 = **(WarBoardManager_o ***)(v6 + 184);
  if ( !v7 )
    sub_1BCAA3C(0LL, method);
  WarBoardManager__OpenPartyMenu(v7, this->fields.pieceData, 0LL);
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
    sub_1BCAA3C(servantIcon, method);
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
    sub_1BCAA3C(servantIcon, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v26; // x1
  long double inited; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  unsigned int v30; // w9
  _QWORD *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_object__bool__o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  WarBoardServantPieceComponent___c_c *v43; // x8
  System_Func_object__object__o *_9__43_1; // x21
  Il2CppObject *v45; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  if ( (byte_4B13C11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, warBoardData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v11, v12);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v19, v20);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v23, v24);
    byte_4B13C11 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1BCA888(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_27;
  v30 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v30
    || (LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField, v30 == 1)
    || (HIDWORD(BattleParticipantInfo[1].klass) = pieceData->fields._groupId_k__BackingField, v30 <= 2) )
  {
    sub_1BCAA44(BattleParticipantInfo, v26);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = pieceData->fields._index_k__BackingField;
  v31 = Method_System_Array_Empty_int___;
  v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v32 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v26);
    v32 = v31[7];
  }
  v33 = *(_QWORD *)(v32 + 16);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v33 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v33, v26);
  BattleParticipantInfo = *(WarBoardData_BattleParticipantInfo_o **)(v31[7] + 16LL);
  if ( (BYTE5(BattleParticipantInfo[9].fields._Participants_k__BackingField) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_1C1C6BC(inited);
  if ( !warBoardData
    || (v34 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&BattleParticipantInfo[5].fields._Invalid_k__BackingField,
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(BattleParticipantInfo, v26);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v38 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v26, v35, v36);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      0LL);
    v42 = System_Linq_Enumerable__Where_object_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v43 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v39);
      v43 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    _9__43_1 = (System_Func_object__object__o *)v43->static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43, v39);
        v43 = WarBoardServantPieceComponent___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__43_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41);
      System_Func_object__object____ctor(
        _9__43_1,
        v45,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        0LL);
      static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
        (int64_t)_9__43_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v42,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v53,
                                                                 (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v54 = System_Linq_Enumerable__Concat_int_(
          v29,
          v34,
          (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v54,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *button; // x0

  if ( (byte_4B13C20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    byte_4B13C20 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_1BCAA3C(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *hpBar; // x0
  __int64 v16; // x1
  UISprite_o *frameSprite; // x21
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v35; // x2
  int v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13C09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20402/*"icon_strong_enemy"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20185/*"hp_gauge_boss"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23361/*"servant_base_{0}"*/, v13, v14);
    byte_4B13C09 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_39;
  frameSprite = this->fields.frameSprite;
  v36 = pieceData->fields._forceId_k__BackingField + 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  hpBar = System_String__Format((System_String_o *)StringLiteral_23361/*"servant_base_{0}"*/, v18, 0LL);
  if ( !frameSprite )
    goto LABEL_39;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20185/*"hp_gauge_boss"*/, 0LL);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v20);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v19);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v19);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v24 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v24 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v24, (unsigned __int8)hpBar & 1, 0LL);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.classCompatibilityIcon;
    if ( !hpBar )
      goto LABEL_39;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)hpBar, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_20402/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_36;
            }
          }
        }
LABEL_39:
        sub_1BCAA3C(hpBar, v16);
      }
    }
  }
LABEL_36:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&buffTrunNotice->fields.pieceData,
      (int64_t)pieceData,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v35);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B13C0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13C0D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x25
  int64_t transform; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  WarBoardManager_TaskList_o *v46; // x20
  Il2CppObject *Instance; // x26
  const MethodInfo_36C2D28 *v48; // x2
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  WarBoardData_o *v62; // x29
  System_Collections_Generic_List_object__o *v63; // x28
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_object__o *v67; // x26
  const MethodInfo *v68; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x29
  Il2CppObject *v70; // x27
  const MethodInfo_36C2D28 *v71; // x2
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct WarBoardTaskBase_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  int64_t v81; // x1
  Il2CppClass **v82; // x0
  bool IsStageBoss; // w0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  WarBoardEventBossUIComponent_o *EventBossUI; // x1
  WarBoardManager_o *v91; // x27
  WarBoardEventBossUIComponent_o **v92; // x27
  __int64 v93; // x1
  UnityEngine_Object_o *v94; // x28
  _BOOL8 v95; // x0
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct WarBoardTaskBase_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  int64_t v107; // x1
  Il2CppClass **v108; // x0
  WarBoardServantPieceComponent_o *v109; // x0
  const MethodInfo *v110; // x3
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct WarBoardTaskBase_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  int64_t v120; // x1
  Il2CppClass **v121; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  int64_t v128; // x21
  __int64 v129; // x2
  __int64 v130; // x3
  _QWORD *v131; // x22
  System_Delegate_o *v132; // x23
  WarBoardTaskBase_TaskCallback_o *v133; // x24
  System_Delegate_o *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x8
  WarBoardTaskBase_TaskCallback_c *v142; // x1
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  struct WarBoardTaskBase_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  WarBoardManager_TaskList_o *v153; // [xsp+0h] [xbp-90h]
  System_Nullable_Vector3__o v155; // [xsp+10h] [xbp-80h] BYREF
  int32_t dummyPointa; // [xsp+28h] [xbp-68h]
  int32_t priority; // [xsp+2Ch] [xbp-64h] BYREF
  System_Nullable_float__o v158; // 0:x2.8
  System_Nullable_float__o v159; // 0:x3.8
  System_Nullable_float__o v160; // 0:x3.8
  System_Nullable_Vector3__o v161; // 0:x0.16
  System_Nullable_Vector3__o v162; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4B13C13 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      *(_QWORD *)&oldBreakPoint,
      cameraSize);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v24, v25);
    sub_1BCA7E0(&WarBoardManager_TaskList_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v28, v29);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v30, v31);
    sub_1BCA7E0(&WarBoardGaugePerformance_TypeInfo, v32, v33);
    byte_4B13C13 = 1;
  }
  priority = 0;
  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
          WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&oldBreakPoint,
          cameraSize,
          taskList);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v34,
    0LL);
  if ( !v34 )
    goto LABEL_58;
  *(_QWORD *)(v34 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)this, v37, v38, v39, v40, v41, v42);
  v46 = (WarBoardManager_TaskList_o *)sub_1BCAA2C(WarBoardManager_TaskList_TypeInfo, v43, v44, v45);
  WarBoardManager_TaskList___ctor(v46, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v161.fields.hasValue = &v155;
    *(_QWORD *)&v155.fields.hasValue = 0LL;
    *(_QWORD *)&v155.fields.value.fields.y = 0LL;
    *(_QWORD *)&v161.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v161, localPosition, v48);
    if ( !Instance )
      goto LABEL_58;
    v159 = cameraSize;
    transform = (int64_t)WarBoardManager__GetCameraPerformanceTask(
                           (WarBoardManager_o *)Instance,
                           v155,
                           v159,
                           1,
                           0,
                           1,
                           0LL);
    if ( !v46 )
      goto LABEL_58;
    items = v46->fields._items;
    v56 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v46->fields._version;
    if ( !items )
      goto LABEL_58;
    size = v46->fields._size;
    v58 = transform;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v46,
        (Il2CppObject *)transform,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &items->obj.klass + size;
      v46->fields._size = size + 1;
      v59[4] = (Il2CppClass *)v58;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
    }
  }
  v153 = taskList;
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  v62 = *(WarBoardData_o **)(transform + 440);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v36,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v67 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v64,
                                                       v65,
                                                       v66);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v62, v68);
  priority = 0;
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (int64_t)WarBoardManager__GetEventTasks_36144308(
                         (WarBoardManager_o *)transform,
                         32,
                         &priority,
                         LatestBattleTargetAndAttacker,
                         0LL);
  if ( !v63 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v63,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_58;
  transform = (int64_t)WarBoardManager__GetEventTasks_36144308(
                         (WarBoardManager_o *)transform,
                         33,
                         &priority,
                         LatestBattleTargetAndAttacker,
                         0LL);
  if ( !v67 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    v67,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v46 )
    goto LABEL_58;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)v63,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_58;
    v164 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v162.fields.hasValue = &v155;
    v155 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v162.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v162, v164, v71);
    if ( !v70 )
      goto LABEL_58;
    v160 = cameraSize;
    transform = (int64_t)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v70, v155, v160, 1, 1, 0, 0LL);
    v78 = v46->fields._items;
    v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v46->fields._version;
    if ( !v78 )
      goto LABEL_58;
    v80 = v46->fields._size;
    v81 = transform;
    if ( (unsigned int)v80 >= v78->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v46,
        (Il2CppObject *)transform,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v78->obj.klass + v80;
      v46->fields._size = v80 + 1;
      v82[4] = (Il2CppClass *)v81;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 4), v81, v72, v73, v74, v75, v76, v77);
    }
  }
  transform = (int64_t)this->fields.pieceData;
  if ( !transform )
    goto LABEL_58;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_58;
    v91 = (WarBoardManager_o *)transform;
    transform = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v91 )
      goto LABEL_58;
    EventBossUI = WarBoardManager__GetEventBossUI(v91, transform, 0LL);
  }
  *(_QWORD *)(v34 + 16) = EventBossUI;
  v92 = (WarBoardEventBossUIComponent_o **)(v34 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)EventBossUI, v84, v85, v86, v87, v88, v89);
  v94 = *(UnityEngine_Object_o **)(v34 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  v95 = UnityEngine_Object__op_Inequality(v94, 0LL, 0LL);
  if ( v95 )
  {
    transform = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                           (WarBoardServantPieceComponent_o *)v95,
                           *v92,
                           v96);
    v104 = v46->fields._items;
    v105 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v46->fields._version;
    if ( !v104 )
      goto LABEL_58;
    v106 = v46->fields._size;
    v107 = transform;
    if ( (unsigned int)v106 >= v104->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v46,
        (Il2CppObject *)transform,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      v108 = &v104->obj.klass + v106;
      v46->fields._size = v106 + 1;
      v108[4] = (Il2CppClass *)v107;
      sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 4), v107, v98, v99, v100, v101, v102, v103);
    }
    transform = (int64_t)WarBoardServantPieceComponent__CreateBossUIBreakTask(v109, *v92, 0LL, v110);
    v117 = v46->fields._items;
    v118 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v46->fields._version;
    if ( !v117 )
      goto LABEL_58;
    v119 = v46->fields._size;
    v120 = transform;
    if ( (unsigned int)v119 >= v117->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v46,
        (Il2CppObject *)transform,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &v117->obj.klass + v119;
      v46->fields._size = v119 + 1;
      v121[4] = (Il2CppClass *)v120;
      sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 4), v120, v111, v112, v113, v114, v115, v116);
    }
  }
  v158 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v158,
    v46,
    dummyPointa,
    0LL,
    1,
    v97);
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
  v128 = sub_1BCAA2C(WarBoardGaugePerformance_TypeInfo, v125, v126, v127);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v128, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v128 )
    goto LABEL_58;
  v131 = (_QWORD *)(v128 + 32);
  v132 = *(System_Delegate_o **)(v128 + 32);
  v133 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v36, v129, v130);
  WarBoardTaskBase_TaskCallback___ctor(
    v133,
    (Il2CppObject *)v34,
    (intptr_t)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v134 = System_Delegate__Combine(v132, (System_Delegate_o *)v133, 0LL);
  v141 = (int64_t)v134;
  if ( v134 )
  {
    v142 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v134->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v131 = v134;
      if ( (WarBoardTaskBase_TaskCallback_c *)v134->klass == v142 )
        goto LABEL_50;
    }
    sub_1BCACFC(v134);
  }
  *v131 = v141;
LABEL_50:
  sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 32), v141, v135, v136, v137, v138, v139, v140);
  *(_BYTE *)(v128 + 26) = 1;
  v149 = v46->fields._items;
  v150 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v46->fields._version;
  if ( !v149 )
    goto LABEL_58;
  v151 = v46->fields._size;
  if ( (unsigned int)v151 >= v149->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v46,
      (Il2CppObject *)v128,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v152 = &v149->obj.klass + v151;
    v46->fields._size = v151 + 1;
    v152[4] = (Il2CppClass *)v128;
    sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 4), v128, v143, v144, v145, v146, v147, v148);
  }
LABEL_54:
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)v67,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v153 )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v153,
      (System_Collections_Generic_IEnumerable_T__o *)v46,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v153->fields._SubPriority_k__BackingField = priority;
    return;
  }
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
LABEL_58:
    sub_1BCAA3C(transform, v36);
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)transform,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v46,
    0LL);
}


void __fastcall WarBoardServantPieceComponent__OnDamage(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t pieceData; // x0
  __int64 v16; // x1
  WarBoardEventBossUIComponent_o *EventBossUI; // x21
  WarBoardPieceData_o *v18; // x8
  WarBoardManager_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  WarBoardServantPieceComponent_o *v24; // x0
  const MethodInfo *v25; // x2
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

  if ( (byte_4B13C12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    byte_4B13C12 = 1;
  }
  pieceData = (int64_t)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v18 = this->fields.pieceData;
    if ( !v18 )
      goto LABEL_19;
    v19 = (WarBoardManager_o *)pieceData;
    pieceData = WarBoardPieceData__get_StageBossIdx(v18, 0LL);
    if ( !v19 )
      goto LABEL_19;
    EventBossUI = WarBoardManager__GetEventBossUI(v19, pieceData, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(v24, EventBossUI, v25);
    if ( v23 )
    {
      items = v23->fields._items;
      v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v23->fields._version;
      if ( items )
      {
        size = v23->fields._size;
        v35 = pieceData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)pieceData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v36 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v23,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        pieceData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( pieceData )
        {
          WarBoardManager__AddTask_36181556(
            (WarBoardManager_o *)pieceData,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(pieceData, taskList);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  int64_t gameObject; // x0
  __int64 v54; // x1
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v56; // x21
  __int64 v57; // x1
  UnityEngine_Object_o *faceEffect; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_List_object__o *v61; // x21
  __int64 v62; // x1
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x2
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  int64_t v74; // x1
  Il2CppClass **v75; // x0
  WarBoardServantPieceComponent_o *v76; // x0
  const MethodInfo *v77; // x2
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  int64_t v87; // x1
  Il2CppClass **v88; // x0
  WarBoardManager_o *v89; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v91; // x26
  Il2CppObject *Master_object; // x27
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v100; // x24
  int32_t id; // w0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks_36144308; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v103; // x0
  const MethodInfo *v104; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_List_WarBoardTaskBase__o *v106; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v107; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v109; // x0
  Il2CppObject *Instance; // x23
  const MethodInfo_36C2D28 *v111; // x2
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int64_t v121; // x1
  Il2CppClass **v122; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v124; // x8
  System_String_o *v125; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v128; // x23
  __int64 v129; // x25
  __int64 v130; // x26
  ServantEntity_o *v131; // x25
  int v132; // w23
  bool v133; // w0
  const MethodInfo *v134; // x2
  Il2CppObject *v135; // x0
  __int64 v136; // x2
  __int64 v137; // x3
  PartyOrganizationUtility_o *v138; // x23
  System_Delegate_o *v139; // x25
  Il2CppObject *v140; // x22
  WarBoardTaskBase_TaskCallback_o *v141; // x26
  System_Delegate_o *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x8
  WarBoardTaskBase_TaskCallback_c *v150; // x1
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  Il2CppClass **v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  WarBoardWaitTime_o *v164; // x20
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h]
  System_Nullable_Vector3__o v176; // [xsp+8h] [xbp-78h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_float__o v178; // 0:x3.8
  System_Nullable_Vector3__o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13C14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize, taskList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v37, v38);
    sub_1BCA7E0(&WarBoardManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v41, v42);
    sub_1BCA7E0(&WarBoardWaitTime_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_6266/*"Escape_Effect"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_6125/*"Enemy_Dead_Effect"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12805/*"Servant_Dead_Effect"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_13026/*"Special_Effect{0:D2}"*/, v51, v52);
    byte_4B13C14 = 1;
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
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_101;
    v56 = (WarBoardManager_o *)gameObject;
    gameObject = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v56 )
      goto LABEL_101;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v56, gameObject, 0LL);
  }
  gameObject = (int64_t)this->fields.hpBar;
  if ( !gameObject )
    goto LABEL_101;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)gameObject, 0.0, 0LL);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
  {
    gameObject = (int64_t)this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v54,
                                                       v59,
                                                       v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  v63 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v63 )
  {
    gameObject = (int64_t)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                            (WarBoardServantPieceComponent_o *)v63,
                            (WarBoardEventBossUIComponent_o *)EventBossUI,
                            v64);
    if ( !v61 )
      goto LABEL_101;
    items = v61->fields._items;
    v72 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v61->fields._version;
    if ( !items )
      goto LABEL_101;
    v73 = v61->fields._size;
    v74 = gameObject;
    if ( (unsigned int)v73 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &items->obj.klass + v73;
      v61->fields._size = v73 + 1;
      v75[4] = (Il2CppClass *)v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), v74, v65, v66, v67, v68, v69, v70);
    }
    gameObject = (int64_t)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                            v76,
                            (WarBoardEventBossUIComponent_o *)EventBossUI,
                            v77);
    v84 = v61->fields._items;
    v85 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v61->fields._version;
    if ( !v84 )
      goto LABEL_101;
    v86 = v61->fields._size;
    v87 = gameObject;
    if ( (unsigned int)v86 >= v84->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v84->obj.klass + v86;
      v61->fields._size = v86 + 1;
      v88[4] = (Il2CppClass *)v87;
      sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v87, v78, v79, v80, v81, v82, v83);
    }
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v89 = (WarBoardManager_o *)gameObject;
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v54);
    if ( !v89 )
      goto LABEL_101;
    Task = WarBoardManager__FindTask(v89, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  size = cameraSize;
  v91 = *(WarBoardData_o **)(gameObject + 440);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1BCAA2C(
                                                                          System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                          v93,
                                                                          v94,
                                                                          v95);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v100 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                  v97,
                                                                  v98,
                                                                  v99);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v100,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v91 )
    goto LABEL_101;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v91, 0LL) )
  {
    gameObject = WarBoardData__get_id(v91, 0LL);
    if ( !Master_object )
      goto LABEL_101;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     (WarBoardMessageMaster_o *)Master_object,
                     gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v91, 0LL);
    v100 = WarBoardMessageMaster__GetMessageTasks((WarBoardMessageMaster_o *)Master_object, id, 8, 0, 0, 0LL);
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v100 )
    goto LABEL_101;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks_36144308 = WarBoardManager__GetEventTasks_36144308(
                          (WarBoardManager_o *)gameObject,
                          24,
                          &priority,
                          0LL,
                          0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks_36144308,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v103 = WarBoardManager__GetEventTasks_36144308((WarBoardManager_o *)gameObject, 25, &priority, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)v103,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v91, v104);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v106 = WarBoardManager__GetEventTasks_36144308(
           (WarBoardManager_o *)gameObject,
           34,
           &priority,
           LatestBattleTargetAndAttacker,
           0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)v106,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v107 = WarBoardManager__GetEventTasks_36144308(
           (WarBoardManager_o *)gameObject,
           35,
           &priority,
           LatestBattleTargetAndAttacker,
           0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)v107,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 22, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  v109 = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 23, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)v109,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = System_Linq_Enumerable__Any_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                 (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_101;
    System_Collections_Generic_List_object___AddRange(
      v61,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_101;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v179.fields.hasValue = &v176;
    *(_QWORD *)&v176.fields.hasValue = 0LL;
    *(_QWORD *)&v176.fields.value.fields.y = 0LL;
    *(_QWORD *)&v179.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v179, localPosition, v111);
    if ( !Instance )
      goto LABEL_101;
    v178 = size;
    gameObject = (int64_t)WarBoardManager__GetCameraPerformanceTask(
                            (WarBoardManager_o *)Instance,
                            v176,
                            v178,
                            1,
                            1,
                            0,
                            0LL);
    if ( !v61 )
      goto LABEL_101;
    v118 = v61->fields._items;
    v119 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v61->fields._version;
    if ( !v118 )
      goto LABEL_101;
    v120 = v61->fields._size;
    v121 = gameObject;
    if ( (unsigned int)v120 >= v118->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)gameObject,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v118->obj.klass + v120;
      v61->fields._size = v120 + 1;
      v122[4] = (Il2CppClass *)v121;
      sub_1BCA784((PartyOrganizationUtility_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
    }
  }
  gameObject = (int64_t)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_101;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v124 = (System_String_o **)&StringLiteral_6125/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v124 = (System_String_o **)&StringLiteral_12805/*"Servant_Dead_Effect"*/;
  v125 = *v124;
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_101;
  gameObject = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_101;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_101;
  v128 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  v130 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v129 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54);
  *(_QWORD *)&v180.fields.currentCryptoKey = v130;
  *(_QWORD *)&v180.fields.fakeValue = v129;
  gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v180, 0LL);
  if ( !v128 )
    goto LABEL_101;
  gameObject = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v128,
                          gameObject,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_101;
  v131 = (ServantEntity_o *)gameObject;
  gameObject = WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v131 )
    goto LABEL_101;
  v132 = gameObject;
  v133 = ServantEntity__checkIsHeroineSvt(v131, 0LL);
  if ( v132 == 1 || v133 )
  {
    v125 = (System_String_o *)StringLiteral_6266/*"Escape_Effect"*/;
  }
  else if ( v132 >= 2 )
  {
    *(_DWORD *)&v176.fields.hasValue = v132;
    v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
    v125 = System_String__Format((System_String_o *)StringLiteral_13026/*"Special_Effect{0:D2}"*/, v135, 0LL);
  }
  gameObject = (int64_t)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                          (WarBoardPieceBaseComponent_o *)this,
                          v125,
                          v134);
  if ( !gameObject )
LABEL_101:
    sub_1BCAA3C(gameObject, v54);
  v138 = (PartyOrganizationUtility_o *)(gameObject + 40);
  v139 = *(System_Delegate_o **)(gameObject + 40);
  v140 = (Il2CppObject *)gameObject;
  *(_BYTE *)(gameObject + 26) = 1;
  v141 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v54, v136, v137);
  WarBoardTaskBase_TaskCallback___ctor(
    v141,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v142 = System_Delegate__Combine(v139, (System_Delegate_o *)v141, 0LL);
  v149 = (int64_t)v142;
  if ( !v142 )
    goto LABEL_82;
  v150 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v142->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v138->klass = (PartyOrganizationUtility_c *)v142, (WarBoardTaskBase_TaskCallback_c *)v142->klass != v150) )
  {
    sub_1BCACFC(v142);
LABEL_82:
    v138->klass = (PartyOrganizationUtility_c *)v149;
  }
  sub_1BCA784(v138, v149, v143, v144, v145, v146, v147, v148);
  if ( !v61 )
    goto LABEL_101;
  v157 = v61->fields._items;
  v158 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v61->fields._version;
  if ( !v157 )
    goto LABEL_101;
  v159 = v61->fields._size;
  if ( (unsigned int)v159 >= v157->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v61,
      v140,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
  }
  else
  {
    v160 = &v157->obj.klass + v159;
    v61->fields._size = v159 + 1;
    v160[4] = (Il2CppClass *)v140;
    sub_1BCA784((PartyOrganizationUtility_o *)(v160 + 4), (int64_t)v140, v151, v152, v153, v154, v155, v156);
  }
  v164 = (WarBoardWaitTime_o *)sub_1BCAA2C(WarBoardWaitTime_TypeInfo, v161, v162, v163);
  WarBoardWaitTime___ctor(v164, 0.5, 0LL);
  v171 = v61->fields._items;
  v172 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v61->fields._version;
  if ( !v171 )
    goto LABEL_101;
  v173 = v61->fields._size;
  if ( (unsigned int)v173 >= v171->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v61,
      (Il2CppObject *)v164,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
  }
  else
  {
    v174 = &v171->obj.klass + v173;
    v61->fields._size = v173 + 1;
    v174[4] = (Il2CppClass *)v164;
    sub_1BCA784((PartyOrganizationUtility_o *)(v174 + 4), (int64_t)v164, v165, v166, v167, v168, v169, v170);
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v100,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v61,
      (System_Collections_Generic_IEnumerable_T__o *)v100,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( taskList )
  {
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v61,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    taskList->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_101;
    WarBoardManager__InsertTask_36174040(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v61,
      0LL);
  }
  gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4B13C1F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19030/*"ef_guts"*/, taskList, method);
    byte_4B13C1F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19030/*"ef_guts"*/,
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

  if ( (byte_4B13C1E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19051/*"ef_special_invincible01"*/, taskList, method);
    byte_4B13C1E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_19051/*"ef_special_invincible01"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x20
  int v29; // w23
  int v30; // w24
  int v31; // w25
  int32_t MaxHp; // w0
  int v33; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v36; // s10
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  System_Delegate_o **v43; // x22
  System_Delegate_o *v44; // x23
  WarBoardServantPieceComponent___c_c *v45; // x0
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v47; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Delegate_o *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  WarBoardTaskBase_TaskCallback_c *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0

  if ( (byte_4B13C1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage, taskList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v17, v18);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&WarBoardGaugePerformance_TypeInfo, v21, v22);
    byte_4B13C1C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v29 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v30 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_30;
  v31 = (int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v33 = v31 - damage;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v36 = (float)v33 / (float)MaxHp;
  v40 = sub_1BCAA2C(WarBoardGaugePerformance_TypeInfo, v37, v38, v39);
  WarBoardGaugePerformance___ctor(
    (WarBoardGaugePerformance_o *)v40,
    hpBar,
    (float)v29 / (float)v30,
    v36,
    gaugeAnimationFullDuration,
    0LL);
  if ( !v40 )
    goto LABEL_30;
  v43 = (System_Delegate_o **)(v40 + 32);
  v44 = *(System_Delegate_o **)(v40 + 32);
  v45 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v24);
    v45 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__57_0 = v45->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v24);
      v45 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v24, v41, v42);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__57_0,
      v47,
      Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = _9__57_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = System_Delegate__Combine(v44, (System_Delegate_o *)_9__57_0, 0LL);
  if ( !v55 )
  {
    *v43 = 0LL;
    goto LABEL_22;
  }
  v62 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v55->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v43 = v55;
    if ( (WarBoardTaskBase_TaskCallback_c *)v55->klass == v62 )
    {
LABEL_22:
      sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v55, v56, v57, v58, v59, v60, v61);
      *(_BYTE *)(v40 + 26) = 0;
      if ( v28 )
      {
        items = v28->fields._items;
        v70 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v28->fields._version;
        if ( items )
        {
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)v40,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_26;
          }
          else
          {
            v72 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v72[4] = (Il2CppClass *)v40;
            sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v40, v63, v64, v65, v66, v67, v68);
            if ( taskList )
            {
LABEL_26:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v28,
                (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_36181556(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
              0LL);
            return;
          }
        }
      }
LABEL_30:
      sub_1BCAA3C(gameObject, v24);
    }
  }
  sub_1BCACFC(v55);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  float v31; // s8
  int32_t MaxHp; // w0
  int v33; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v36; // s10
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  System_Delegate_o **v43; // x22
  System_Delegate_o *v44; // x23
  WarBoardServantPieceComponent___c_c *v45; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v47; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Delegate_o *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  WarBoardTaskBase_TaskCallback_c *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0

  if ( (byte_4B13C21 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      *(_QWORD *)&oldHp,
      *(_QWORD *)&gainHp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v19, v20);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c_TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardGaugePerformance_TypeInfo, v23, v24);
    byte_4B13C21 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  gameObject = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (UnityEngine_GameObject_o *)WarBoardPieceData__get_MaxHp((WarBoardPieceData_o *)gameObject, 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_28;
  v31 = (float)oldHp / (float)(int)gameObject;
  MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
  v33 = gainHp + oldHp;
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v36 = (float)v33 / (float)MaxHp;
  v40 = sub_1BCAA2C(WarBoardGaugePerformance_TypeInfo, v37, v38, v39);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v40, hpBar, v31, v36, gaugeAnimationFullDuration, 0LL);
  if ( !v40 )
    goto LABEL_28;
  v43 = (System_Delegate_o **)(v40 + 32);
  v44 = *(System_Delegate_o **)(v40 + 32);
  v45 = WarBoardServantPieceComponent___c_TypeInfo;
  if ( !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo, v26);
    v45 = WarBoardServantPieceComponent___c_TypeInfo;
  }
  _9__63_0 = v45->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v26);
      v45 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v41, v42);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__63_0,
      v47,
      Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
      0LL);
    static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = _9__63_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__63_0,
      (int64_t)_9__63_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = System_Delegate__Combine(v44, (System_Delegate_o *)_9__63_0, 0LL);
  if ( !v55 )
  {
    *v43 = 0LL;
    goto LABEL_20;
  }
  v62 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v55->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v43 = v55;
    if ( (WarBoardTaskBase_TaskCallback_c *)v55->klass == v62 )
    {
LABEL_20:
      sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v55, v56, v57, v58, v59, v60, v61);
      *(_BYTE *)(v40 + 26) = 0;
      if ( v30 )
      {
        items = v30->fields._items;
        v70 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v30->fields._version;
        if ( items )
        {
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v40,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_24;
          }
          else
          {
            v72 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v72[4] = (Il2CppClass *)v40;
            sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v40, v63, v64, v65, v66, v67, v68);
            if ( taskList )
            {
LABEL_24:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v30,
                (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( gameObject )
          {
            WarBoardManager__AddTask_36181556(
              (WarBoardManager_o *)gameObject,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v30,
              0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1BCAA3C(gameObject, v26);
    }
  }
  sub_1BCACFC(v55);
}


void __fastcall WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v27; // x29
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v29; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x21
  Il2CppObject *v37; // x22
  const MethodInfo_36C2D28 *v38; // x2
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int64_t v48; // x1
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x2
  __int64 v51; // x2
  __int64 v52; // x3
  PartyOrganizationUtility_o *p_activeObject; // x23
  System_Delegate_o *activeObject; // x24
  Il2CppObject *v55; // x22
  WarBoardTaskBase_TaskCallback_o *v56; // x25
  System_Delegate_o *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x8
  WarBoardTaskBase_TaskCallback_c *v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  WarBoardWaitTime_o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Nullable_Vector3__o v90; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_float__o v91; // 0:x3.8
  System_Nullable_Vector3__o v92; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13C15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v17, v18);
    sub_1BCA7E0(&WarBoardWaitTime_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_12806/*"Servant_Regenerate_Effect"*/, v21, v22);
    byte_4B13C15 = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v27 = 0LL;
  while ( (int)v27 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v27 >= breakPoints->max_length )
        sub_1BCAA44(Instance, v24);
      Instance = breakPoints->m_Items[v27];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, v25);
        pieceData = this->fields.pieceData;
        ++v27;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v29 = this->fields.pieceData;
  if ( !v29 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v29->fields._nowSquareIndex_k__BackingField,
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
  v94.fields.x = x;
  v94.fields.y = y;
  v94.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v94, 0LL);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v92.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v92.fields.hasValue = &v90;
  *(_QWORD *)&v90.fields.hasValue = 0LL;
  *(_QWORD *)&v90.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v92, localPosition, v38);
  if ( !v37 )
    goto LABEL_10;
  v91 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v37,
                                                v90,
                                                v91,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v36 )
    goto LABEL_10;
  items = v36->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v36->fields._size;
  v48 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v36->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v48;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v48, v39, v40, v41, v42, v43, v44);
  }
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12806/*"Servant_Regenerate_Effect"*/,
                                                v50);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v24);
  p_activeObject = (PartyOrganizationUtility_o *)&Instance->fields.activeObject;
  activeObject = (System_Delegate_o *)Instance->fields.activeObject;
  v55 = (Il2CppObject *)Instance;
  BYTE2(Instance->fields.m_CancellationTokenSource) = 1;
  v56 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v24, v51, v52);
  WarBoardTaskBase_TaskCallback___ctor(
    v56,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v57 = System_Delegate__Combine(activeObject, (System_Delegate_o *)v56, 0LL);
  v64 = (int64_t)v57;
  if ( v57 )
  {
    v65 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v57->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      p_activeObject->klass = (PartyOrganizationUtility_c *)v57;
      if ( (WarBoardTaskBase_TaskCallback_c *)v57->klass == v65 )
        goto LABEL_28;
    }
    sub_1BCACFC(v57);
  }
  p_activeObject->klass = (PartyOrganizationUtility_c *)v64;
LABEL_28:
  sub_1BCA784(p_activeObject, v64, v58, v59, v60, v61, v62, v63);
  v72 = v36->fields._items;
  v73 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v72 )
    goto LABEL_10;
  v74 = v36->fields._size;
  if ( (unsigned int)v74 >= v72->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      v55,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = &v72->obj.klass + v74;
    v36->fields._size = v74 + 1;
    v75[4] = (Il2CppClass *)v55;
    sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v55, v66, v67, v68, v69, v70, v71);
  }
  v79 = (WarBoardWaitTime_o *)sub_1BCAA2C(WarBoardWaitTime_TypeInfo, v76, v77, v78);
  WarBoardWaitTime___ctor(v79, 0.5, 0LL);
  v86 = v36->fields._items;
  v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v36->fields._version;
  if ( !v86 )
    goto LABEL_10;
  v88 = v36->fields._size;
  if ( (unsigned int)v88 >= v86->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)v79,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_35;
  }
  else
  {
    v89 = &v86->obj.klass + v88;
    v36->fields._size = v88 + 1;
    v89[4] = (Il2CppClass *)v79;
    sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v79, v80, v81, v82, v83, v84, v85);
    if ( taskList )
    {
LABEL_35:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v36,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_39;
    }
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__InsertTask_36174040(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
    0LL);
LABEL_39:
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  char *transform; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x19
  Il2CppObject *Instance; // x22
  const MethodInfo_36C2D28 *v44; // x2
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  int64_t v54; // x1
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x2
  __int64 v58; // x3
  Il2CppObject *v59; // x20
  PartyOrganizationUtility_o *v60; // x22
  System_Delegate_o *v61; // x23
  WarBoardTaskBase_TaskCallback_o *v62; // x24
  System_Delegate_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x8
  WarBoardTaskBase_TaskCallback_c *v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  Il2CppObject *v82; // x20
  System_Nullable_Vector3__o v83; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v84; // 0:x3.8
  System_Nullable_Vector3__o v85; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13C1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v18, v19);
    sub_1BCA7E0(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_11392/*"Reinforcement_Effect_1"*/, v22, v23);
    byte_4B13C1D = 1;
  }
  v24 = sub_1BCAA2C(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, callback, method, v3);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_23;
  *(_QWORD *)(v24 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)callback, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)this, v33, v34, v35, v36, v37, v38);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v85.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v85.fields.hasValue = &v83;
  *(_QWORD *)&v83.fields.hasValue = 0LL;
  *(_QWORD *)&v83.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v85, localPosition, v44);
  if ( !Instance )
    goto LABEL_23;
  v84 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v83, v84, 1, 0, 1, 0LL);
  if ( !v42 )
    goto LABEL_23;
  items = v42->fields._items;
  v52 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v42->fields._version;
  if ( !items )
    goto LABEL_23;
  size = v42->fields._size;
  v54 = (int64_t)transform;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)transform,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + size;
    v42->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v54, v45, v46, v47, v48, v49, v50);
  }
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11392/*"Reinforcement_Effect_1"*/,
                        v56);
  if ( !transform )
LABEL_23:
    sub_1BCAA3C(transform, v26);
  v59 = (Il2CppObject *)transform;
  v60 = (PartyOrganizationUtility_o *)(transform + 40);
  v61 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v62 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v57, v58);
  WarBoardTaskBase_TaskCallback___ctor(
    v62,
    (Il2CppObject *)v24,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v63 = System_Delegate__Combine(v61, (System_Delegate_o *)v62, 0LL);
  v70 = (int64_t)v63;
  if ( v63 )
  {
    v71 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v63->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v60->klass = (PartyOrganizationUtility_c *)v63;
      if ( (WarBoardTaskBase_TaskCallback_c *)v63->klass == v71 )
        goto LABEL_17;
    }
    sub_1BCACFC(v63);
  }
  v60->klass = (PartyOrganizationUtility_c *)v70;
LABEL_17:
  sub_1BCA784(v60, v70, v64, v65, v66, v67, v68, v69);
  v78 = v42->fields._items;
  v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v42->fields._version;
  if ( !v78 )
    goto LABEL_23;
  v80 = v42->fields._size;
  if ( (unsigned int)v80 >= v78->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      v59,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v78->obj.klass + v80;
    v42->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)v59;
    sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v59, v72, v73, v74, v75, v76, v77);
  }
  v82 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)System_Collections_Generic_List_object___ToArray(
                        v42,
                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  if ( !v82 )
    goto LABEL_23;
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)v82, (WarBoardTaskBase_array *)transform, 0LL);
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
    sub_1BCAA3C(this, active);
  UnityEngine_GameObject__SetActive(npBarEffect, active, 0LL);
}


void __fastcall WarBoardServantPieceComponent__SetClassIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *classIconRoot; // x0
  __int64 v15; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v17; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v19; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v21; // x0
  int v22; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13C0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_22479/*"onBoard_initial_placement_class2_{0}"*/, v12, v13);
    byte_4B13C0A = 1;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_22:
    sub_1BCAA3C(classIconRoot, method);
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v17 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_22;
LABEL_19:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v17, 0LL);
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
  v19 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v19 )
    goto LABEL_19;
  if ( !(_DWORD)v19 )
    sub_1BCAA44(ServantClassEntities, method);
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_22;
LABEL_20:
  classIcon = this->fields.classIcon;
  v22 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_22479/*"onBoard_initial_placement_class2_{0}"*/, v21, 0LL);
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
  __int64 v6; // x2
  UnityEngine_Object_o *partyBuffComponent; // x21
  const MethodInfo *v8; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_4B13C1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13C1A = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
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
             (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v8);
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
    sub_1BCAA3C(pieceData, v8);
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
    sub_1BCAA3C(this, userServantId);
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
    sub_1BCAA3C(this, userServantEquipId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


void __fastcall WarBoardServantPieceComponent__SetServantIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardServantPieceComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  struct WarBoardPieceData_o *v24; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v27; // x8
  int32_t v28; // w20
  __int64 v29; // x1
  UISprite_o *servantIcon; // x23
  bool v31; // w20
  int32_t servantLevel; // w20
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x1
  UISprite_o *enemyIcon; // x22
  System_String_o *v38; // x21
  UISprite_o *v39; // x21
  __int64 v40; // x1
  System_String_o *v41; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v43; // x8
  System_Collections_Generic_List_object__o *removeTweenTargetObjects; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  WarBoardServantPieceComponent_o *v54; // x1
  Il2CppClass **v55; // x0
  struct WarBoardPieceData_o *v56; // x8
  struct WarBoardPieceData_o *v57; // x8
  WarBoardSquareData_o *v58; // x0
  bool v59; // w20
  struct WarBoardPieceData_o *v60; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w20
  __int64 v64; // x1
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v66; // x8
  UISprite_o *v67; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v69; // x8
  __int64 v70; // x1
  UnityEngine_Object_o *supportSprite; // x20
  WarBoardServantPieceComponent_o *v72; // x20
  UnityEngine_Object_o *v73; // x20
  UILabel_o *v74; // x20
  struct WarBoardPieceData_o *v75; // x8
  WarBoardServantPieceComponent_o *v76; // x21
  Il2CppObject *v77; // x0
  struct WarBoardPieceData_o *v78; // x8
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v82; // w20
  struct WarBoardPieceData_o *v83; // x8
  struct WarBoardPieceData_o *v84; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v86; // [xsp+Ch] [xbp-44h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t v88; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B13C0B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_22967/*"questinfo_enemyface_bg"*/, v18, v19);
    this = (WarBoardServantPieceComponent_o *)sub_1BCA7E0(&StringLiteral_15591/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v20, v21);
    byte_4B13C0B = 1;
  }
  pieceData = v3->fields.pieceData;
  if ( !pieceData )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)v3->fields.classIconRoot;
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
    this = (WarBoardServantPieceComponent_o *)v3->fields.servantIconRoot;
    if ( !this )
      goto LABEL_114;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v3->fields.pieceData;
    if ( !v24 )
      goto LABEL_114;
    npcImageSvtId_k__BackingField = v24->fields._npcImageSvtId_k__BackingField;
    if ( npcImageSvtId_k__BackingField <= 0 )
      npcImageSvtId_k__BackingField = v24->fields._iconId_k__BackingField;
    v88 = npcImageSvtId_k__BackingField;
    npcDispLimitCount_k__BackingField = v24->fields._npcDispLimitCount_k__BackingField;
    if ( npcDispLimitCount_k__BackingField <= 0 )
      npcDispLimitCount_k__BackingField = v24->fields._iconLimitCount_k__BackingField;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v27 = v3->fields.pieceData;
    if ( !v27 )
      goto LABEL_114;
    if ( !this )
      goto LABEL_114;
    this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                (ServantLimitImageMaster_o *)this,
                                                v27->fields._iconId_k__BackingField,
                                                npcDispLimitCount_k__BackingField,
                                                0LL);
    if ( !v3->fields.pieceData )
      goto LABEL_114;
    v28 = (int)this;
    if ( WarBoardPieceData__get_IsEnemyMonster(v3->fields.pieceData, 0LL) )
      goto LABEL_24;
    servantIcon = (UISprite_o *)v3->fields.servantIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
    if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v28, 0LL) )
    {
LABEL_24:
      this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_114;
      servantLevel = (int32_t)this->fields.servantLevel;
      iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
      v86 = npcDispLimitCount_k__BackingField;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
      v35 = System_String__Concat(v33, v34, 0LL);
      enemyIcon = (UISprite_o *)v3->fields.enemyIcon;
      v38 = v35;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
      if ( AtlasManager__SetEventUI_38574572(servantLevel, enemyIcon, v38, 0LL) )
        goto LABEL_31;
      v39 = (UISprite_o *)v3->fields.enemyIcon;
      v41 = System_Int32__ToString((int32_t)&v88, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
      if ( AtlasManager__SetEventUI_38574572(servantLevel, v39, v41, 0LL) )
      {
LABEL_31:
        this = (WarBoardServantPieceComponent_o *)v3->fields.pieceData;
        if ( !this )
          goto LABEL_114;
        WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v3->fields.enemyIcon, 0LL);
      }
      enemyIconBg = v3->fields.enemyIconBg;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
      this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_38574572(
                                                  servantLevel,
                                                  enemyIconBg,
                                                  (System_String_o *)StringLiteral_22967/*"questinfo_enemyface_bg"*/,
                                                  0LL);
      v43 = v3->fields.pieceData;
      if ( !v43 )
        goto LABEL_114;
      if ( v43->fields._IsShadow_k__BackingField )
      {
        this = (WarBoardServantPieceComponent_o *)v3->fields.enemyIcon;
        if ( !this )
          goto LABEL_114;
        removeTweenTargetObjects = (System_Collections_Generic_List_object__o *)v3->fields.removeTweenTargetObjects;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !removeTweenTargetObjects )
          goto LABEL_114;
        items = removeTweenTargetObjects->fields._items;
        v52 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++removeTweenTargetObjects->fields._version;
        if ( !items )
          goto LABEL_114;
        size = removeTweenTargetObjects->fields._size;
        v54 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            removeTweenTargetObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          removeTweenTargetObjects->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v54;
          sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v54, v45, v46, v47, v48, v49, v50);
        }
        ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))v3->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
          v3,
          v3->klass->vtable._12_ShowStatus.methodPtr);
      }
      v31 = 0;
    }
    else
    {
      v31 = 1;
    }
    this = (WarBoardServantPieceComponent_o *)v3->fields.servantIcon;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31, 0LL);
        this = (WarBoardServantPieceComponent_o *)v3->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            v59 = !v31;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v59, 0LL);
            this = (WarBoardServantPieceComponent_o *)v3->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v59, 0LL);
                v60 = v3->fields.pieceData;
                if ( v60 )
                {
                  frameInClassIcon = v3->fields.frameInClassIcon;
                  IconClassImageId_k__BackingField = v60->fields._IconClassImageId_k__BackingField;
                  iconFrameType_k__BackingField = v60->fields._iconFrameType_k__BackingField;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
                  AtlasManager__SetClassIcon(
                    frameInClassIcon,
                    IconClassImageId_k__BackingField,
                    iconFrameType_k__BackingField,
                    0LL);
                  equipeIcon = (UnityEngine_Object_o *)v3->fields.equipeIcon;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
                  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v66 = v3->fields.pieceData;
                    if ( !v66 )
                      goto LABEL_114;
                    v67 = (UISprite_o *)v3->fields.equipeIcon;
                    iconEquipId_k__BackingField = v66->fields._iconEquipId_k__BackingField;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
                    AtlasManager__SetEquipFace(v67, iconEquipId_k__BackingField, 0LL);
                  }
                  this = (WarBoardServantPieceComponent_o *)v3->fields.EquipIcon;
                  if ( this )
                  {
                    this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
                    v69 = v3->fields.pieceData;
                    if ( v69 )
                    {
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)this,
                          v69->fields._iconEquipId_k__BackingField > 0,
                          0LL);
                        supportSprite = (UnityEngine_Object_o *)v3->fields.supportSprite;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
                        if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
                        {
                          this = (WarBoardServantPieceComponent_o *)v3->fields.supportSprite;
                          if ( !this )
                            goto LABEL_114;
                          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
                          if ( !v3->fields.pieceData )
                            goto LABEL_114;
                          v72 = this;
                          this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                      v3->fields.pieceData,
                                                                      0LL);
                          if ( !v72 )
                            goto LABEL_114;
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)v72,
                            (unsigned __int8)this & 1,
                            0LL);
                        }
                        v73 = (UnityEngine_Object_o *)v3->fields.servantLevel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                          goto LABEL_106;
                        v74 = v3->fields.servantLevel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
                        this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_15591/*"WARBOARD_PIECE_ICON_SVT_LV"*/,
                                                                    0LL);
                        v75 = v3->fields.pieceData;
                        if ( !v75 )
                          goto LABEL_114;
                        v76 = this;
                        iconLevel_k__BackingField = v75->fields._iconLevel_k__BackingField;
                        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
                        this = (WarBoardServantPieceComponent_o *)System_String__Format(
                                                                    (System_String_o *)v76,
                                                                    v77,
                                                                    0LL);
                        if ( !v74 )
                          goto LABEL_114;
                        UILabel__set_text(v74, (System_String_o *)this, 0LL);
                        this = (WarBoardServantPieceComponent_o *)v3->fields.pieceData;
                        if ( !this )
                          goto LABEL_114;
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant(
                                                                    (WarBoardPieceData_o *)this,
                                                                    0LL);
                        v78 = v3->fields.pieceData;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v78 )
                            goto LABEL_114;
                          if ( v78->fields._roleType_k__BackingField == 1 )
                          {
                            this = (WarBoardServantPieceComponent_o *)v3->fields.servantLevel;
                            if ( !this )
                              goto LABEL_114;
                            this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                            if ( !this )
                              goto LABEL_114;
                            p_z = &v3->fields.positionLevelDanger.fields.z;
                            p_x = &v3->fields.positionLevelDanger.fields.x;
                            p_y = &v3->fields.positionLevelDanger.fields.y;
                            goto LABEL_105;
                          }
                        }
                        else if ( !v78 )
                        {
                          goto LABEL_114;
                        }
                        this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(
                                                                    v3->fields.pieceData,
                                                                    0LL);
                        if ( !v3->fields.servantLevel )
                          goto LABEL_114;
                        v82 = (char)this;
                        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v3->fields.servantLevel,
                                                                    0LL);
                        if ( (v82 & 1) != 0 )
                        {
                          if ( !this )
                            goto LABEL_114;
                          p_z = &v3->fields.positionLevelNpc.fields.z;
                          p_x = &v3->fields.positionLevelNpc.fields.x;
                          p_y = &v3->fields.positionLevelNpc.fields.y;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_114;
                          p_z = &v3->fields.positionLevel.fields.z;
                          p_x = &v3->fields.positionLevel.fields.x;
                          p_y = &v3->fields.positionLevel.fields.y;
                        }
LABEL_105:
                        v89.fields.z = *p_z;
                        v89.fields.y = *p_y;
                        v89.fields.x = *p_x;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v89, 0LL);
LABEL_106:
                        v83 = v3->fields.pieceData;
                        if ( v83 )
                        {
                          if ( !v83->fields._isEditing_k__BackingField )
                            return;
                          this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                          if ( this )
                          {
                            v84 = v3->fields.pieceData;
                            if ( v84 )
                            {
                              this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                              if ( this )
                              {
                                Square = WarBoardData__GetSquare(
                                           (WarBoardData_o *)this,
                                           v84->fields._nowSquareIndex_k__BackingField,
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
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (WarBoardServantPieceComponent_o *)v3->fields.servantIconRoot;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v3->fields.enemyIcon;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v3->fields.enemyIconBg;
  if ( !this )
    goto LABEL_114;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v56 = v3->fields.pieceData;
  if ( !v56 )
    goto LABEL_114;
  if ( !v56->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_114;
  v57 = v3->fields.pieceData;
  if ( !v57 )
    goto LABEL_114;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_114;
  v58 = WarBoardData__GetSquare((WarBoardData_o *)this, v57->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( v58 )
    WarBoardSquareData__ActiveEditPointArrow(v58, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardServantPieceComponent__ShowStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_4B13C0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    byte_4B13C0C = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1C6BC(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(v3);
  pieceData = this->fields.pieceData;
  v8 = **(WarBoardManager_o ***)(v6 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(transform, 0LL), !v8) )
    sub_1BCAA3C(transform, v10);
  WarBoardManager__ShowServantSimplePopup(v8, pieceData, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
      sub_1BCAA3C(this, method);
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
    sub_1BCAA44(this, method);
  }
}


bool __fastcall WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0LL )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *button; // x0

  if ( (byte_4B13C22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    byte_4B13C22 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(button, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13C23 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardServantPieceComponent___c_TypeInfo, v1, v2);
    byte_4B13C23 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardServantPieceComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardServantPieceComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B13C24 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, x, method);
    byte_4B13C24 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_1BCA888(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_1BCAA3C(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_1BCAA44(result, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x20
  WarBoardEventBossUIComponent_o *Instance; // x0
  __int64 v9; // x1
  struct UISprite_o *hpBarWhiteSprite; // x8
  const MethodInfo *v11; // x2
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4B13C25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v4, v5);
    byte_4B13C25 = 1;
  }
  v6 = Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__;
  if ( (*((_BYTE *)Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  hpBarWhiteSprite = Instance[1].fields.hpBarWhiteSprite;
  if ( !hpBarWhiteSprite )
    goto LABEL_11;
  OverwriteAssetSoundName__PlaySe(v7, *(System_String_o **)&hpBarWhiteSprite->fields.updateAnchors, 0LL);
  Instance = this->fields.eventBossUI;
  if ( Instance )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0LL, v11);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Instance, v9);
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
  __int64 v3; // x3
  WarBoardServantPieceComponent___c__DisplayClass49_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B13C26 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_1BCA7E0(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v5,
                                                                      v6);
    byte_4B13C26 = 1;
  }
  _9__2 = v4->fields.__9__2;
  eventBossUI = v4->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !eventBossUI )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  WarBoardServantPieceComponent___c__DisplayClass51_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B13C27 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_1BCA7E0(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v5,
                                                                      v6);
    byte_4B13C27 = 1;
  }
  _9__2 = v4->fields.__9__2;
  eventBossUI = v4->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !eventBossUI )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
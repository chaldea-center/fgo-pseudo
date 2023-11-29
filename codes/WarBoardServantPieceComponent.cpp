void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_3134090;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_3137720;
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
  System_String_o *v6; // x0
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBA94 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA94 = 1;
  }
  CriticalStars = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_11;
  CriticalStars = WarBoardPieceData__get_CriticalStars(pieceData, 0LL);
  criticalStarsLabel = (UnityEngine_Object_o *)this->fields.criticalStarsLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(criticalStarsLabel, 0LL, 0LL) )
  {
    v5 = this->fields.criticalStarsLabel;
    v6 = System_Int32__ToString((int32_t)&CriticalStars, 0LL);
    if ( v5 )
    {
      UILabel__set_text(v5, v6, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FBA93 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12653, v3);
    byte_40FBA93 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_14;
  if ( pieceData->fields._breakPoint_k__BackingField || WarBoardPieceData__get_CurrentHpProgress(pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12653,
      0LL);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
    {
      v6 = this->fields.faceEffect;
      if ( v6 )
      {
        UnityEngine_GameObject__SetActive(v6, 0, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12653,
      0LL);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeStatus(
        WarBoardServantPieceComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  WarBoardPieceData_o **p_pieceData; // x21
  WarBoardPieceData_o *pieceData; // x0
  UIBasicSprite_o *hpBar; // x20
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v9; // x1
  WarBoardPieceData_o *v10; // x0
  UnityEngine_GameObject_o *npBarEffect; // x20
  float v12; // s0
  const MethodInfo *v13; // x1

  if ( isBreak )
  {
    p_pieceData = &this->fields.pieceData;
  }
  else
  {
    p_pieceData = &this->fields.pieceData;
    pieceData = this->fields.pieceData;
    if ( !pieceData
      || (hpBar = (UIBasicSprite_o *)this->fields.hpBar,
          CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(pieceData, 0LL),
          !hpBar) )
    {
LABEL_10:
      sub_B170D4();
    }
    UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  }
  if ( !*p_pieceData )
    goto LABEL_10;
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(*p_pieceData, 0LL);
  WarBoardServantPieceComponent__UpdateNpBars(this, CurrentNpProgress, v9);
  v10 = this->fields.pieceData;
  if ( !v10 )
    goto LABEL_10;
  npBarEffect = this->fields.npBarEffect;
  v12 = WarBoardPieceData__get_CurrentNpProgress(v10, 0LL);
  if ( !npBarEffect )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(npBarEffect, v12 >= 1.0, 0LL);
  WarBoardServantPieceComponent__ChangeDyingAnimation(this, v13);
}


void __fastcall WarBoardServantPieceComponent__ClearPartyBuff(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyBuffComponent; // x20
  const MethodInfo *v4; // x1
  WarBoardServantPiecePartyBuffComponent_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_40FBA9F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA9F = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    v5 = this->fields.partyBuffComponent;
    if ( !v5 )
      sub_B170D4();
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v5, v4);
    WarBoardServantPiecePartyBuffComponent__SetActive(v5, 0, v6);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  ServantClassCompatibilityIconComponent_o *v12; // x0
  ServantClassCompatibilityIconComponent_o *v13; // x0

  if ( (byte_40FBA9D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, selectPiece);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBA9D = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( selectPiece )
    {
      v8 = sub_B17014(int___TypeInfo, 1LL, v7);
      if ( v8 )
      {
        v10 = (System_Int32_array *)v8;
        if ( !*(_DWORD *)(v8 + 24) )
        {
          sub_B17100(v8, v9, v8);
          sub_B170A0();
        }
        *(_DWORD *)(v8 + 32) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v12 = this->fields.classCompatibilityIcon;
          if ( v12 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v12,
              pieceData->fields._iconClassId_k__BackingField,
              v10,
              4,
              0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_B170D4();
    }
    v13 = this->fields.classCompatibilityIcon;
    if ( !v13 )
      goto LABEL_15;
    ServantClassCompatibilityIconComponent__Clear(v13, 0LL);
  }
}


WarBoardTaskBase_o *__fastcall WarBoardServantPieceComponent__CreateBossUIBreakTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Delegate_o *v32; // x22
  WarBoardTaskBase_TaskCallback_o *v33; // x23
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WarBoardTaskBase_o *result; // x0
  WarBoardServantPieceComponent_o *v42; // x0
  WarBoardManager_TaskList_o *v43; // x2
  bool v44; // w3
  const MethodInfo *v45; // x4
  System_Nullable_float__o v46; // 0:x1.8

  if ( (byte_40FBA9B & 1) == 0 )
  {
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v7);
    sub_B16FFC(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v8);
    sub_B16FFC(&WarBoardWaitTime_TypeInfo, v9);
    byte_40FBA9B = 1;
  }
  v10 = sub_B170CC(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, eventBossUI, endAction, method, v4);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v10,
    0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = eventBossUI,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)eventBossUI,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_QWORD *)(v10 + 24) = endAction,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 24),
          (System_Int32_array **)endAction,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        v27 = sub_B170CC(WarBoardWaitTime_TypeInfo, v23, v24, v25, v26),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v27, 0.0, 0LL),
        !v27) )
  {
    sub_B170D4();
  }
  v32 = *(System_Delegate_o **)(v27 + 40);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v28, v29, v30, v31);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v10,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v34 = (System_Int32_array **)System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  if ( v34 && *v34 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v42 = (WarBoardServantPieceComponent_o *)sub_B173C8(v34);
    WarBoardServantPieceComponent__OnDead(v42, v46, v43, v44, v45);
  }
  else
  {
    *(_QWORD *)(v27 + 40) = v34;
    sub_B16F98((BattleServantConfConponent_o *)(v27 + 40), v34, v35, v36, v37, v38, v39, v40);
    *(_BYTE *)(v27 + 26) = 1;
    return (WarBoardTaskBase_o *)v27;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_bool__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UnityEngine_WaitUntil_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Delegate_o *v39; // x22
  WarBoardTaskBase_TaskCallback_o *v40; // x23
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v49; // x0
  int32_t v50; // w1
  WarBoardManager_TaskList_o *v51; // x3
  int32_t v52; // w4
  WarBoardTaskBase_TaskCallback_o *v53; // x5
  bool v54; // w6
  const MethodInfo *v55; // x7
  System_Nullable_float__o v56; // 0:x2.8

  if ( (byte_40FBA9A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v8);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v9);
    sub_B16FFC(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v11);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v12);
    byte_40FBA9A = 1;
  }
  v13 = sub_B170CC(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, eventBossUI, method, v3, v4);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 24) = eventBossUI;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)eventBossUI,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_BYTE *)(v13 + 16) = 0;
  v24 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v20, v21, v22, v23);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v25, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v24, 0LL);
  v34 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v30, v31, v32, v33);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v34, (UnityEngine_CustomYieldInstruction_o *)v29, 0LL);
  if ( !v34 )
LABEL_8:
    sub_B170D4();
  v39 = *(System_Delegate_o **)(v34 + 32);
  v40 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v35, v36, v37, v38);
  WarBoardTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v41 = (System_Int32_array **)System_Delegate__Combine(v39, (System_Delegate_o *)v40, 0LL);
  if ( v41 && *v41 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v49 = (WarBoardServantPieceComponent_o *)sub_B173C8(v41);
    WarBoardServantPieceComponent__OnBreak(v49, v50, v56, v51, v52, v53, v54, v55);
  }
  else
  {
    *(_QWORD *)(v34 + 32) = v41;
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), v41, v42, v43, v44, v45, v46, v47);
    return (WarBoardCallbackTask_o *)v34;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_bool__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UnityEngine_WaitUntil_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Delegate_o *v39; // x22
  WarBoardTaskBase_TaskCallback_o *v40; // x23
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v49; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v50; // x1
  const MethodInfo *v51; // x2

  if ( (byte_40FBA9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v8);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v9);
    sub_B16FFC(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v11);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v12);
    byte_40FBA9C = 1;
  }
  v13 = sub_B170CC(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, eventBossUI, method, v3, v4);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 24) = eventBossUI;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)eventBossUI,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_BYTE *)(v13 + 16) = 0;
  v24 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v20, v21, v22, v23);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v25, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v24, 0LL);
  v34 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v30, v31, v32, v33);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v34, (UnityEngine_CustomYieldInstruction_o *)v29, 0LL);
  if ( !v34 )
LABEL_8:
    sub_B170D4();
  v39 = *(System_Delegate_o **)(v34 + 32);
  v40 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v35, v36, v37, v38);
  WarBoardTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v41 = (System_Int32_array **)System_Delegate__Combine(v39, (System_Delegate_o *)v40, 0LL);
  if ( v41 && *v41 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v49 = (WarBoardServantPieceComponent_o *)sub_B173C8(v41);
    WarBoardServantPieceComponent__OnRevive(v49, v50, v51);
  }
  else
  {
    *(_QWORD *)(v34 + 32) = v41;
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), v41, v42, v43, v44, v45, v46, v47);
    return (WarBoardCallbackTask_o *)v34;
  }
  return result;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardManager_o *v5; // x0

  if ( (byte_40FBA92 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_40FBA92 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon || (transform = UnityEngine_Component__get_transform(servantIcon, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardServantPieceComponent__GetIconPosition(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantIcon; // x0
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantIcon = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !servantIcon || (transform = UnityEngine_Component__get_transform(servantIcon, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_position(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
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
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct WarBoardPieceData_o *pieceData; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  unsigned int monitor; // w8
  struct WarBoardPieceData_o *v23; // x9
  struct WarBoardPieceData_o *v24; // x9
  _QWORD **v25; // x23
  __int64 v26; // x22
  __int16 v27; // w8
  __int64 v28; // x22
  __int64 v29; // x22
  __int64 v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x22
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  WarBoardServantPieceComponent___c_c *v44; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__43_1; // x21
  Il2CppObject *v47; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_40FBA95 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, warBoardData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v11);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B16FFC(&int___TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v14);
    sub_B16FFC(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B16FFC(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v16);
    byte_40FBA95 = 1;
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B17014(int___TypeInfo, 3LL, method);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_34;
  v21 = v17;
  if ( !v17 )
    goto LABEL_34;
  monitor = (unsigned int)v17[1].monitor;
  if ( !monitor )
    goto LABEL_35;
  LODWORD(v17[2].klass) = pieceData->fields._forceId_k__BackingField;
  v23 = this->fields.pieceData;
  if ( !v23 )
    goto LABEL_34;
  if ( monitor <= 1 )
    goto LABEL_35;
  HIDWORD(v17[2].klass) = v23->fields._groupId_k__BackingField;
  v24 = this->fields.pieceData;
  if ( !v24 )
    goto LABEL_34;
  if ( monitor <= 2 )
  {
LABEL_35:
    sub_B17100(v17, v18, v19);
    sub_B170A0();
  }
  LODWORD(v17[2].monitor) = v24->fields._index_k__BackingField;
  v25 = (_QWORD **)Method_System_Array_Empty_int___;
  v26 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v27 = *(_WORD *)(v26 + 306);
  if ( (v27 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v27 = *(_WORD *)(v26 + 306);
  }
  if ( (v27 & 0x400) != 0 )
  {
    v28 = *v25[6];
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AAFCFC(*v25[6]);
    if ( !*(_DWORD *)(v28 + 224) )
    {
      v29 = *v25[6];
      if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
        sub_AAFCFC(*v25[6]);
      j_il2cpp_runtime_class_init_0(v29);
    }
  }
  v30 = *v25[6];
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AAFCFC(*v25[6]);
  if ( !warBoardData
    || (v31 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v30 + 184),
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_34:
    sub_B170D4();
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                               v33,
                                                                               v34,
                                                                               v35,
                                                                               v36);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v38,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v44 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v44 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                                                                   v39,
                                                                                                   v40,
                                                                                                   v41,
                                                                                                   v42);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__43_1,
        v47,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v48 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v48->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v48->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 v43,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v55,
                                                                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v56 = System_Linq_Enumerable__Concat_int_(
          v21,
          v31,
          (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v56,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *npBarEffect; // x0

  if ( (byte_40FBAA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_40FBAA4 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (gameObject = UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
          Component_srcLineSprite,
          Component_srcLineSprite->klass[1]._1.declaringType,
          0.0),
        (npBarEffect = this->fields.npBarEffect) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(npBarEffect, 0, 0LL);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UISprite_o *hpBar; // x0
  const MethodInfo *v14; // x1
  UIBasicSprite_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v18; // x21
  bool isPlayerGroup; // w0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  ServantClassCompatibilityIconComponent_o *v21; // x0
  UnityEngine_Object_o *RoleTypeLabel; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  UnityEngine_GameObject_o *v30; // x0
  UISprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v32; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v34; // x2
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBA8D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_19300, v7);
    sub_B16FFC(&StringLiteral_19111, v8);
    sub_B16FFC(&StringLiteral_21890, v9);
    byte_40FBA8D = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_42;
  frameSprite = this->fields.frameSprite;
  v35 = pieceData->fields._forceId_k__BackingField + 1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v12 = System_String__Format((System_String_o *)StringLiteral_21890, v11, 0LL);
  if ( !frameSprite )
    goto LABEL_42;
  UISprite__set_spriteName(frameSprite, v12, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_42;
    UISprite__set_spriteName(hpBar, (System_String_o *)StringLiteral_19111, 0LL);
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
    v15 = (UIBasicSprite_o *)this->fields.hpBar;
    if ( !v15 )
      goto LABEL_42;
    UIBasicSprite__set_fillAmount(v15, 1.0, 0LL);
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v16);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v14);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v14);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v18 = this->fields.criticalStarsBase;
    isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v18 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v18, isPlayerGroup, 0LL);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    v21 = this->fields.classCompatibilityIcon;
    if ( !v21 )
      goto LABEL_42;
    ServantClassCompatibilityIconComponent__Clear(v21, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
  {
    battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      if ( battleServant_k__BackingField->fields.isEnemy && pieceData->fields._roleType_k__BackingField == 1 )
      {
        v30 = this->fields.RoleTypeLabel;
        if ( v30 )
        {
          Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v30,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_srcLineSprite )
          {
            UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_19300, 0LL);
            v32 = this->fields.RoleTypeLabel;
            if ( v32 )
            {
              UnityEngine_GameObject__SetActive(v32, 1, 0LL);
              goto LABEL_39;
            }
          }
        }
LABEL_42:
        sub_B170D4();
      }
    }
  }
LABEL_39:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&buffTrunNotice->fields.pieceData,
      (System_Int32_array **)pieceData,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v34);
  }
}


bool __fastcall WarBoardServantPieceComponent__IsModifyStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *hpBar; // x8
  WarBoardPieceData_o *pieceData; // x0
  float mFillAmount; // s8
  WarBoardPieceData_o *v6; // x0
  float nowNpProgress; // s8
  const MethodInfo *v8; // x1

  hpBar = this->fields.hpBar;
  if ( !hpBar )
    goto LABEL_8;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_8;
  mFillAmount = hpBar->fields.mFillAmount;
  if ( mFillAmount != WarBoardPieceData__get_CurrentHpProgress(pieceData, 0LL) )
    return 1;
  v6 = this->fields.pieceData;
  if ( !v6 )
LABEL_8:
    sub_B170D4();
  nowNpProgress = this->fields.nowNpProgress;
  if ( nowNpProgress == WarBoardPieceData__get_CurrentNpProgress(v6, 0LL) )
  {
    WarBoardServantPieceComponent__ChangeDyingAnimation(this, v8);
    return 0;
  }
  return 1;
}


void __fastcall WarBoardServantPieceComponent__LongTapIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBA91 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40FBA91 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v24; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  WarBoardManager_TaskList_o *v35; // x20
  WebViewManager_o *Instance; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v38; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WebViewManager_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  WarBoardData_o *monitor; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x28
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x26
  const MethodInfo *v52; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x22
  WebViewManager_o *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_18062796; // x0
  WebViewManager_o *v56; // x0
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  WebViewManager_o *v58; // x22
  UnityEngine_Transform_o *v59; // x0
  const MethodInfo_29CF778 *v60; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x0
  WarBoardPieceData_o *pieceData; // x0
  bool IsStageBoss; // w0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **EventBossUI; // x1
  WebViewManager_o *v71; // x0
  WarBoardManager_o *v72; // x22
  int32_t StageBossIdx; // w0
  WarBoardEventBossUIComponent_o **v74; // x22
  UnityEngine_Object_o *v75; // x27
  _BOOL8 v76; // x0
  const MethodInfo *v77; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v79; // x0
  const MethodInfo *v80; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIBreakTask; // x0
  struct WarBoardPieceData_o *v82; // x8
  UIBasicSprite_o *hpBar; // x0
  UISprite_o *v84; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Delegate_o *v95; // x23
  WarBoardTaskBase_TaskCallback_o *v96; // x24
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  WebViewManager_o *v104; // x0
  WarBoardServantPieceComponent_o *v105; // x0
  WarBoardEventBossUIComponent_o *v106; // x1
  System_Action_o *v107; // x2
  const MethodInfo *v108; // x3
  WarBoardManager_TaskList_o *v109; // [xsp+18h] [xbp-78h]
  System_Nullable_Vector3__o v110; // [xsp+20h] [xbp-70h] BYREF
  int32_t dummyPointa; // [xsp+38h] [xbp-58h]
  int32_t priority; // [xsp+3Ch] [xbp-54h] BYREF
  System_Nullable_float__o v113; // 0:x2.8
  System_Nullable_float__o v114; // 0:x3.8
  System_Nullable_float__o v115; // 0:x3.8
  System_Nullable_Vector3__o v116; // 0:x0.16
  System_Nullable_Vector3__o v117; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_40FBA97 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v19);
    sub_B16FFC(&WarBoardManager_TaskList_TypeInfo, v20);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v21);
    sub_B16FFC(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v22);
    sub_B16FFC(&WarBoardGaugePerformance_TypeInfo, v23);
    byte_40FBA97 = 1;
  }
  priority = 0;
  v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170CC)(
          WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&oldBreakPoint,
          cameraSize,
          taskList,
          *(_QWORD *)&dummyPoint);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_40;
  *(_QWORD *)(v24 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  v35 = (WarBoardManager_TaskList_o *)sub_B170CC(WarBoardManager_TaskList_TypeInfo, v31, v32, v33, v34);
  WarBoardManager_TaskList___ctor(v35, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v116.fields.value.fields.x = &v110;
    *(_QWORD *)&v110.fields.value.fields.x = 0LL;
    *(_QWORD *)&v110.fields.value.fields.z = 0LL;
    *(_QWORD *)&v116.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v116, localPosition, v38);
    if ( !Instance )
      goto LABEL_40;
    v114 = cameraSize;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)Instance,
                                                                                     v110,
                                                                                     v114,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    if ( !v35 )
      goto LABEL_40;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      CameraPerformanceTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v109 = taskList;
  v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v40 )
    goto LABEL_40;
  monitor = (WarBoardData_o *)v40[4].monitor;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v52);
  priority = 0;
  v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v54 )
    goto LABEL_40;
  EventTasks_18062796 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                                         (WarBoardManager_o *)v54,
                                                                         32,
                                                                         &priority,
                                                                         LatestBattleTargetAndAttacker,
                                                                         0LL);
  if ( !v46 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v46,
    EventTasks_18062796,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v56 )
    goto LABEL_40;
  v57 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                         (WarBoardManager_o *)v56,
                                                         33,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  if ( !v51 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v51,
    v57,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v35 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
    (System_Collections_Generic_IEnumerable_T__o *)v46,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v59 )
      goto LABEL_40;
    v119 = UnityEngine_Transform__get_localPosition(v59, 0LL);
    *(_QWORD *)&v117.fields.value.fields.x = &v110;
    v110 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v117.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v117, v119, v60);
    if ( !v58 )
      goto LABEL_40;
    v115 = cameraSize;
    v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                   (WarBoardManager_o *)v58,
                                                                   v110,
                                                                   v115,
                                                                   1,
                                                                   1,
                                                                   0,
                                                                   0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      v61,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss(pieceData, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_40;
    v72 = (WarBoardManager_o *)v71;
    StageBossIdx = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v72 )
      goto LABEL_40;
    EventBossUI = (System_Int32_array **)WarBoardManager__GetEventBossUI(v72, StageBossIdx, 0LL);
  }
  *(_QWORD *)(v24 + 16) = EventBossUI;
  v74 = (WarBoardEventBossUIComponent_o **)(v24 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), EventBossUI, v64, v65, v66, v67, v68, v69);
  v75 = *(UnityEngine_Object_o **)(v24 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v76 = UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
  if ( v76 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v76,
                                                                                *v74,
                                                                                v77);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      BossUIDamageTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIBreakTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(
                                                                               v79,
                                                                               *v74,
                                                                               0LL,
                                                                               v80);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      BossUIBreakTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v113 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v113,
    v35,
    dummyPointa,
    0LL,
    1,
    0LL);
  v82 = this->fields.pieceData;
  if ( !v82 )
LABEL_40:
    sub_B170D4();
  if ( v82->fields._isDead_k__BackingField )
  {
LABEL_36:
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
      (System_Collections_Generic_IEnumerable_T__o *)v51,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    if ( v109 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v109,
        (System_Collections_Generic_IEnumerable_T__o *)v35,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      v109->fields._SubPriority_k__BackingField = priority;
      return;
    }
    v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v104 )
    {
      WarBoardManager__AddTask_18098600(
        (WarBoardManager_o *)v104,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
        0LL);
      return;
    }
    goto LABEL_40;
  }
  hpBar = (UIBasicSprite_o *)this->fields.hpBar;
  if ( !hpBar )
    goto LABEL_40;
  UIBasicSprite__set_fillAmount(hpBar, 0.0, 0LL);
  v84 = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v90 = sub_B170CC(WarBoardGaugePerformance_TypeInfo, v86, v87, v88, v89);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v90, v84, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v90 )
    goto LABEL_40;
  v95 = *(System_Delegate_o **)(v90 + 32);
  v96 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v91, v92, v93, v94);
  WarBoardTaskBase_TaskCallback___ctor(
    v96,
    (Il2CppObject *)v24,
    Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v97 = (System_Int32_array **)System_Delegate__Combine(v95, (System_Delegate_o *)v96, 0LL);
  if ( !v97 || *v97 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v90 + 32) = v97;
    sub_B16F98((BattleServantConfConponent_o *)(v90 + 32), v97, v98, v99, v100, v101, v102, v103);
    *(_BYTE *)(v90 + 26) = 1;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_36;
  }
  v105 = (WarBoardServantPieceComponent_o *)sub_B173C8(v97);
  WarBoardServantPieceComponent__CreateBossUIBreakTask(v105, v106, v107, v108);
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
  WarBoardPieceData_o *pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WebViewManager_o *Instance; // x0
  WarBoardManager_o *v13; // x21
  int32_t StageBossIdx; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  WarBoardServantPieceComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WebViewManager_o *v23; // x0

  if ( (byte_40FBA96 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_40FBA96 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_17;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_17;
    v13 = (WarBoardManager_o *)Instance;
    StageBossIdx = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v13 )
      goto LABEL_17;
    EventBossUI = WarBoardManager__GetEventBossUI(v13, StageBossIdx, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v15,
                                                                                                    v16,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                v20,
                                                                                EventBossUI,
                                                                                v21);
    if ( v19 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        BossUIDamageTask,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      WarBoardPieceBaseComponent__OnDamage(
        (WarBoardPieceBaseComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
        0LL);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v19,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v23 )
      {
        WarBoardManager__AddTask_18098600(
          (WarBoardManager_o *)v23,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
          0LL);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *EventBossUI; // x24
  WebViewManager_o *Instance; // x0
  WarBoardManager_o *v35; // x21
  int32_t StageBossIdx; // w0
  UIBasicSprite_o *hpBar; // x0
  UnityEngine_Object_o *faceEffect; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  UnityEngine_GameObject_o *v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x21
  _BOOL8 v45; // x0
  const MethodInfo *v46; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v48; // x0
  const MethodInfo *v49; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDeadTask; // x0
  WebViewManager_o *v51; // x24
  WarBoardTaskBase_o *Task; // x0
  WebViewManager_o *v53; // x0
  WarBoardData_o *monitor; // x26
  WarBoardMessageMaster_o *Master_WarQuestSelectionMaster; // x27
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_List_WarBoardTaskBase__o *v65; // x24
  int32_t id; // w0
  int32_t v67; // w0
  WebViewManager_o *v68; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WebViewManager_o *v70; // x0
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  WebViewManager_o *v72; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_18062796; // x0
  WebViewManager_o *v74; // x0
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  const MethodInfo *v76; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  WebViewManager_o *v78; // x0
  System_Collections_Generic_IEnumerable_T__o *v79; // x0
  WebViewManager_o *v80; // x0
  System_Collections_Generic_IEnumerable_T__o *v81; // x0
  WebViewManager_o *v82; // x0
  System_Collections_Generic_IEnumerable_T__o *v83; // x0
  WebViewManager_o *v84; // x0
  System_Collections_Generic_IEnumerable_T__o *v85; // x0
  WebViewManager_o *v86; // x23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v88; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardPieceData_o *v90; // x0
  bool IsEnemyMonster; // w0
  System_String_o **v92; // x8
  System_String_o *v93; // x22
  WebViewManager_o *v94; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct WarBoardPieceData_o *v96; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v98; // x23
  __int64 v99; // x25
  __int64 v100; // x26
  int32_t v101; // w0
  WarEntity_o *Entity; // x0
  ServantEntity_o *v103; // x25
  int32_t DeadEffectType; // w0
  float v105; // w23
  bool v106; // w0
  Il2CppObject *v107; // x0
  WarBoardSimpleAnimationPerformance_o *SimpleAnimationPerformance; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  BattleServantConfConponent_o *p_EndCallback; // x23
  System_Delegate_o *EndCallback; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v115; // x22
  WarBoardTaskBase_TaskCallback_o *v116; // x26
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  WarBoardWaitTime_o *v128; // x20
  WebViewManager_o *v129; // x0
  WebViewManager_o *v130; // x0
  WarBoardServantPieceComponent_o *v131; // x0
  WarBoardEventBossUIComponent_o *v132; // x1
  const MethodInfo *v133; // x2
  System_Nullable_float__o size; // [xsp+8h] [xbp-78h]
  WarBoardManager_TaskList_o *v135; // [xsp+10h] [xbp-70h]
  System_Nullable_Vector3__o v136; // [xsp+18h] [xbp-68h] BYREF
  int32_t priority; // [xsp+2Ch] [xbp-54h] BYREF
  System_Nullable_float__o v138; // 0:x3.8
  System_Nullable_Vector3__o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBA98 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_B16FFC(&WarBoardManager_TypeInfo, v24);
    sub_B16FFC(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_B16FFC(&WarBoardWaitTime_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_6121, v27);
    sub_B16FFC(&StringLiteral_5980, v28);
    sub_B16FFC(&StringLiteral_12670, v29);
    sub_B16FFC(&StringLiteral_12905, v30);
    byte_40FBA98 = 1;
  }
  priority = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_84;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_84;
    v35 = (WarBoardManager_o *)Instance;
    StageBossIdx = WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v35 )
      goto LABEL_84;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v35, StageBossIdx, 0LL);
  }
  hpBar = (UIBasicSprite_o *)this->fields.hpBar;
  if ( !hpBar )
    goto LABEL_84;
  UIBasicSprite__set_fillAmount(hpBar, 0.0, 0LL);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
  {
    v43 = this->fields.faceEffect;
    if ( !v43 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v43, 0, 0LL);
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v45 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v45 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v45,
                                                                                (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                                v46);
    if ( !v44 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      BossUIDamageTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIDeadTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                                                                              v48,
                                                                              (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                              v49);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      BossUIDeadTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !v51 )
      goto LABEL_84;
    Task = WarBoardManager__FindTask(
             (WarBoardManager_o *)v51,
             WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION,
             0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  v135 = taskList;
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v53 )
    goto LABEL_84;
  size = cameraSize;
  monitor = (WarBoardData_o *)v53[4].monitor;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                          v56,
                                                                          v57,
                                                                          v58,
                                                                          v59);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MessageTasks,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v65 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B170CC(
                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                 v61,
                                                                 v62,
                                                                 v63,
                                                                 v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !monitor )
    goto LABEL_84;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(monitor, 0LL) )
  {
    id = WarBoardData__get_id(monitor, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, id, 7, 0, 0, 0LL);
    v67 = WarBoardData__get_id(monitor, 0LL);
    v65 = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, v67, 8, 0, 0, 0LL);
  }
  v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v68 )
    goto LABEL_84;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)v68,
                                                                10,
                                                                0LL,
                                                                0LL);
  if ( !MessageTasks )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v70 )
    goto LABEL_84;
  v71 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v70,
                                                         11,
                                                         0LL,
                                                         0LL);
  if ( !v65 )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
    v71,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v72 )
    goto LABEL_84;
  EventTasks_18062796 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                                         (WarBoardManager_o *)v72,
                                                                         24,
                                                                         &priority,
                                                                         0LL,
                                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks_18062796,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v74 )
    goto LABEL_84;
  v75 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                         (WarBoardManager_o *)v74,
                                                         25,
                                                         &priority,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
    v75,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, monitor, v76);
  v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v78 )
    goto LABEL_84;
  v79 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                         (WarBoardManager_o *)v78,
                                                         34,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    v79,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v80 )
    goto LABEL_84;
  v81 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18062796(
                                                         (WarBoardManager_o *)v80,
                                                         35,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
    v81,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v82 )
    goto LABEL_84;
  v83 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v82,
                                                         22,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
    v83,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v84 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v84 )
    goto LABEL_84;
  v85 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)v84,
                                                         23,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
    v85,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    if ( !v44 )
      goto LABEL_84;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_84;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v139.fields.value.fields.x = &v136;
    *(_QWORD *)&v136.fields.value.fields.x = 0LL;
    *(_QWORD *)&v136.fields.value.fields.z = 0LL;
    *(_QWORD *)&v139.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v139, localPosition, v88);
    if ( !v86 )
      goto LABEL_84;
    v138 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)v86,
                                                                                     v136,
                                                                                     v138,
                                                                                     1,
                                                                                     1,
                                                                                     0,
                                                                                     0LL);
    if ( !v44 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      CameraPerformanceTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v90 = this->fields.pieceData;
  if ( !v90 )
    goto LABEL_84;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster(v90, 0LL);
  v92 = (System_String_o **)&StringLiteral_5980;
  if ( !IsEnemyMonster )
    v92 = (System_String_o **)&StringLiteral_12670;
  v93 = *v92;
  v94 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v94 )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v94,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v96 = this->fields.pieceData;
  if ( !v96 )
    goto LABEL_84;
  battleServant_k__BackingField = v96->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_84;
  v98 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v100 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v99 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v140.fields.currentCryptoKey = v100;
  *(_QWORD *)&v140.fields.fakeValue = v99;
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140, 0LL);
  if ( !v98 )
    goto LABEL_84;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v98,
             v101,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_84;
  v103 = (ServantEntity_o *)Entity;
  DeadEffectType = WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v103 )
    goto LABEL_84;
  v105 = *(float *)&DeadEffectType;
  v106 = ServantEntity__checkIsHeroineSvt(v103, 0LL);
  if ( LODWORD(v105) == 1 || v106 )
  {
    v93 = (System_String_o *)StringLiteral_6121;
  }
  else if ( SLODWORD(v105) >= 2 )
  {
    v136.fields.value.fields.x = v105;
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136);
    v93 = System_String__Format((System_String_o *)StringLiteral_12905, v107, 0LL);
  }
  SimpleAnimationPerformance = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                 (WarBoardPieceBaseComponent_o *)this,
                                 v93,
                                 0LL);
  if ( !SimpleAnimationPerformance )
    goto LABEL_84;
  p_EndCallback = (BattleServantConfConponent_o *)&SimpleAnimationPerformance->fields.EndCallback;
  EndCallback = (System_Delegate_o *)SimpleAnimationPerformance->fields.EndCallback;
  v115 = (EventMissionProgressRequest_Argument_ProgressData_o *)SimpleAnimationPerformance;
  SimpleAnimationPerformance->fields.NonBlocking = 1;
  v116 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v109, v110, v111, v112);
  WarBoardTaskBase_TaskCallback___ctor(
    v116,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v117 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v116, 0LL);
  if ( v117 && *v117 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v131 = (WarBoardServantPieceComponent_o *)sub_B173C8(v117);
    WarBoardServantPieceComponent__CreateBossUIDeadTask(v131, v132, v133);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v117;
  sub_B16F98(p_EndCallback, v117, v118, v119, v120, v121, v122, v123);
  if ( !v44 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    v115,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v128 = (WarBoardWaitTime_o *)sub_B170CC(WarBoardWaitTime_TypeInfo, v124, v125, v126, v127);
  WarBoardWaitTime___ctor(v128, 0.5, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v128,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v65,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v135 )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v135,
      (System_Collections_Generic_IEnumerable_T__o *)v44,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v135->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    v129 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v129 )
      goto LABEL_84;
    WarBoardManager__InsertTask_18091616(
      (WarBoardManager_o *)v129,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v44,
      0LL);
  }
  v130 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v130 )
LABEL_84:
    sub_B170D4();
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)v130, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBAA3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18122, taskList);
    byte_40FBAA3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18122,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBAA2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18142, taskList);
    byte_40FBAA2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18142,
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  WarBoardPieceData_o *pieceData; // x0
  int32_t CurrentHp; // w0
  int v23; // w23
  int32_t MaxHp; // w0
  int v25; // w24
  int32_t v26; // w0
  int32_t v27; // w25
  int32_t v28; // w0
  int v29; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v32; // s10
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Delegate_o *v42; // x23
  WarBoardServantPieceComponent___c_c *v43; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v46; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  WebViewManager_o *Instance; // x0
  WarBoardServantPieceComponent_o *v62; // x0
  System_Action_o *v63; // x1
  const MethodInfo *v64; // x2

  if ( (byte_40FBAA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_B16FFC(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_B16FFC(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_40FBAA0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v16,
                                                                                                    v17,
                                                                                                    v18,
                                                                                                    v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_26;
    CurrentHp = WarBoardPieceData__get_CurrentHp(pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v23 = CurrentHp;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v25 = MaxHp;
    v26 = WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v27 = v26;
    v28 = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v29 = v27 - damage;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v32 = (float)v29 / (float)v28;
    v37 = sub_B170CC(WarBoardGaugePerformance_TypeInfo, v33, v34, v35, v36);
    WarBoardGaugePerformance___ctor(
      (WarBoardGaugePerformance_o *)v37,
      hpBar,
      (float)v23 / (float)v25,
      v32,
      gaugeAnimationFullDuration,
      0LL);
    if ( !v37 )
      goto LABEL_26;
    v42 = *(System_Delegate_o **)(v37 + 32);
    v43 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v43 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__57_0 = static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                      WarBoardTaskBase_TaskCallback_TypeInfo,
                                                      v38,
                                                      v39,
                                                      v40,
                                                      v41);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__57_0,
        v46,
        Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
        0LL);
      v47 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v47->__9__57_0 = _9__57_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v47->__9__57_0,
        (System_Int32_array **)_9__57_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = (System_Int32_array **)System_Delegate__Combine(v42, (System_Delegate_o *)_9__57_0, 0LL);
    if ( !v54 || *v54 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v37 + 32) = v54;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 32), v54, v55, v56, v57, v58, v59, v60);
      *(_BYTE *)(v37 + 26) = 0;
      if ( v20 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v20,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18098600(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B170D4();
    }
    v62 = (WarBoardServantPieceComponent_o *)sub_B173C8(v54);
    WarBoardServantPieceComponent__Reinforcements(v62, v63, v64);
  }
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  WarBoardPieceData_o *pieceData; // x0
  int32_t MaxHp; // w0
  float v25; // s8
  int32_t v26; // w0
  int v27; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v30; // s10
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Delegate_o *v40; // x23
  WarBoardServantPieceComponent___c_c *v41; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v44; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  WebViewManager_o *Instance; // x0
  WarBoardServantPieceComponent_o *v60; // x0
  const MethodInfo *v61; // x1

  if ( (byte_40FBAA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_B16FFC(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B16FFC(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_40FBAA5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v18,
                                                                                                    v19,
                                                                                                    v20,
                                                                                                    v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_24;
    MaxHp = WarBoardPieceData__get_MaxHp(pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_24;
    v25 = (float)oldHp / (float)MaxHp;
    v26 = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v27 = gainHp + oldHp;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v30 = (float)v27 / (float)v26;
    v35 = sub_B170CC(WarBoardGaugePerformance_TypeInfo, v31, v32, v33, v34);
    WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v35, hpBar, v25, v30, gaugeAnimationFullDuration, 0LL);
    if ( !v35 )
      goto LABEL_24;
    v40 = *(System_Delegate_o **)(v35 + 32);
    v41 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v41 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__63_0 = static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                      WarBoardTaskBase_TaskCallback_TypeInfo,
                                                      v36,
                                                      v37,
                                                      v38,
                                                      v39);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__63_0,
        v44,
        Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
        0LL);
      v45 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v45->__9__63_0 = _9__63_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v45->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = (System_Int32_array **)System_Delegate__Combine(v40, (System_Delegate_o *)_9__63_0, 0LL);
    if ( !v52 || *v52 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v35 + 32) = v52;
      sub_B16F98((BattleServantConfConponent_o *)(v35 + 32), v52, v53, v54, v55, v56, v57, v58);
      *(_BYTE *)(v35 + 26) = 0;
      if ( v22 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v22,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18098600(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v22,
            0LL);
          return;
        }
      }
LABEL_24:
      sub_B170D4();
    }
    v60 = (WarBoardServantPieceComponent_o *)sub_B173C8(v52);
    WarBoardServantPieceComponent___ctor(v60, v61);
  }
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
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v18; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  WarBoardBreakPointComponent_o *v20; // x0
  WebViewManager_o *Instance; // x0
  struct WarBoardPieceData_o *v22; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x21
  WebViewManager_o *v33; // x22
  UnityEngine_Transform_o *v34; // x0
  const MethodInfo_29CF778 *v35; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardSimpleAnimationPerformance_o *SimpleAnimationPerformance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  BattleServantConfConponent_o *p_StartCallback; // x23
  System_Delegate_o *StartCallback; // x24
  WarBoardSimpleAnimationPerformance_o *v44; // x22
  WarBoardTaskBase_TaskCallback_o *v45; // x25
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  WarBoardWaitTime_o *v57; // x20
  WebViewManager_o *v58; // x0
  WebViewManager_o *v59; // x0
  WarBoardServantPieceComponent_o *v60; // x0
  bool v61; // w1
  const MethodInfo *v62; // x2
  System_Nullable_Vector3__o v63; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v64; // 0:x3.8
  System_Nullable_Vector3__o v65; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBA99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_B16FFC(&WarBoardWaitTime_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_12671, v13);
    byte_40FBA99 = 1;
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
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v20 = breakPoints->m_Items[v18];
      if ( v20 )
      {
        WarBoardBreakPointComponent__SetActive(v20, 1, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v18;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = this->fields.pieceData;
  if ( !v22 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v22->fields._nowSquareIndex_k__BackingField,
                     0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_10;
  v67.fields.x = x;
  v67.fields.y = y;
  v67.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v67, 0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition(v34, 0LL);
  *(_QWORD *)&v65.fields.value.fields.x = &v63;
  *(_QWORD *)&v63.fields.value.fields.x = 0LL;
  *(_QWORD *)&v63.fields.value.fields.z = 0LL;
  *(_QWORD *)&v65.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v65, localPosition, v35);
  if ( !v33 )
    goto LABEL_10;
  v64 = 0LL;
  CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                   (WarBoardManager_o *)v33,
                                                                                   v63,
                                                                                   v64,
                                                                                   1,
                                                                                   0,
                                                                                   1,
                                                                                   0LL);
  if ( !v32 )
    goto LABEL_10;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v32,
    CameraPerformanceTask,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  SimpleAnimationPerformance = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                 (WarBoardPieceBaseComponent_o *)this,
                                 (System_String_o *)StringLiteral_12671,
                                 0LL);
  if ( !SimpleAnimationPerformance )
    goto LABEL_10;
  p_StartCallback = (BattleServantConfConponent_o *)&SimpleAnimationPerformance->fields.StartCallback;
  StartCallback = (System_Delegate_o *)SimpleAnimationPerformance->fields.StartCallback;
  v44 = SimpleAnimationPerformance;
  SimpleAnimationPerformance->fields.NonBlocking = 1;
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v38, v39, v40, v41);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v46 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v45, 0LL);
  if ( !v46 || *v46 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v44->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v46;
    sub_B16F98(p_StartCallback, v46, v47, v48, v49, v50, v51, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v57 = (WarBoardWaitTime_o *)sub_B170CC(WarBoardWaitTime_TypeInfo, v53, v54, v55, v56);
    WarBoardWaitTime___ctor(v57, 0.5, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v32,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    }
    else
    {
      v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v58 )
        goto LABEL_10;
      WarBoardManager__InsertTask_18091616(
        (WarBoardManager_o *)v58,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v32,
        0LL);
    }
    v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v59 )
    {
      WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)v59, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  v60 = (WarBoardServantPieceComponent_o *)sub_B173C8(v46);
  WarBoardServantPieceComponent__SetActiveNpBarEffect(v60, v61, v62);
}


void __fastcall WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  WebViewManager_o *Instance; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v36; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardSimpleAnimationPerformance_o *SimpleAnimationPerformance; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x19
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v46; // x24
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WebViewManager_o *v54; // x19
  WarBoardTaskBase_array *v55; // x0
  WarBoardServantPieceComponent_o *v56; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v57; // x1
  const MethodInfo *v58; // x2
  System_Nullable_Vector3__o v59; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v60; // 0:x3.8
  System_Nullable_Vector3__o v61; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBAA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v13);
    sub_B16FFC(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11342, v15);
    byte_40FBAA1 = 1;
  }
  v16 = sub_B170CC(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, callback, method, v3, v4);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_12;
  *(_QWORD *)(v16 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  *(_QWORD *)&v61.fields.value.fields.x = &v59;
  *(_QWORD *)&v59.fields.value.fields.x = 0LL;
  *(_QWORD *)&v59.fields.value.fields.z = 0LL;
  *(_QWORD *)&v61.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v61, localPosition, v36);
  if ( !Instance )
    goto LABEL_12;
  v60 = 0LL;
  CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                   (WarBoardManager_o *)Instance,
                                                                                   v59,
                                                                                   v60,
                                                                                   1,
                                                                                   0,
                                                                                   1,
                                                                                   0LL);
  if ( !v33 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    CameraPerformanceTask,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  SimpleAnimationPerformance = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                 (WarBoardPieceBaseComponent_o *)this,
                                 (System_String_o *)StringLiteral_11342,
                                 0LL);
  if ( !SimpleAnimationPerformance )
    goto LABEL_12;
  v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)SimpleAnimationPerformance;
  p_EndCallback = (BattleServantConfConponent_o *)&SimpleAnimationPerformance->fields.EndCallback;
  EndCallback = (System_Delegate_o *)SimpleAnimationPerformance->fields.EndCallback;
  v46 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v39, v40, v41, v42);
  WarBoardTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v16,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v47 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v46, 0LL);
  if ( !v47 || *v47 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v43[1].klass = (EventMissionProgressRequest_Argument_ProgressData_c *)v47;
    sub_B16F98(p_EndCallback, v47, v48, v49, v50, v51, v52, v53);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v33,
      v43,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v55 = (WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v54 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v54, v55, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  v56 = (WarBoardServantPieceComponent_o *)sub_B173C8(v47);
  WarBoardServantPieceComponent__OnInvincible(v56, v57, v58);
}


void __fastcall WarBoardServantPieceComponent__SetActiveNpBarEffect(
        WarBoardServantPieceComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *npBarEffect; // x19
  WarBoardPieceData_o *pieceData; // x0
  bool v5; // w1

  npBarEffect = this->fields.npBarEffect;
  if ( active )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData || (v5 = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL) >= 1.0, !npBarEffect) )
LABEL_7:
      sub_B170D4();
  }
  else
  {
    v5 = 0;
    if ( !npBarEffect )
      goto LABEL_7;
  }
  UnityEngine_GameObject__SetActive(npBarEffect, v5, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *servantIconRoot; // x0
  UnityEngine_GameObject_o *v11; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v14; // x0
  WarBoardIndividualityClassMaster_o *v15; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  ServantClassEntity_o *AllClassServantEntity; // x0
  UISprite_o *classIcon; // x19
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t iconImageId; // [xsp+4h] [xbp-1Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBA8E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21140, v7);
    byte_40FBA8E = 1;
  }
  entity = 0LL;
  classIconRoot = this->fields.classIconRoot;
  if ( !classIconRoot )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  servantIconRoot = this->fields.servantIconRoot;
  if ( !servantIconRoot )
    goto LABEL_23;
  v11 = UnityEngine_GameObject__get_gameObject(servantIconRoot, 0LL);
  if ( !v11 )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(v11, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B170D4();
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  v14 = (WarBoardIndividualityClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v15 = v14;
  if ( !entity )
  {
    if ( !v14 )
      goto LABEL_23;
LABEL_20:
    AllClassServantEntity = WarBoardIndividualityClassMaster__GetAllClassServantEntity(v15, 0LL);
    if ( !AllClassServantEntity )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( !v14 )
    goto LABEL_23;
  ServantClassEntities = WarBoardIndividualityClassMaster__GetServantClassEntities(
                           v14,
                           (System_Int32_array *)entity->fields.longName,
                           0LL);
  if ( !ServantClassEntities )
    goto LABEL_20;
  v19 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v19 )
    goto LABEL_20;
  if ( !(_DWORD)v19 )
  {
    sub_B17100(ServantClassEntities, v17, v18);
    sub_B170A0();
  }
  AllClassServantEntity = ServantClassEntities->m_Items[0];
  if ( !AllClassServantEntity )
    goto LABEL_23;
LABEL_21:
  classIcon = this->fields.classIcon;
  iconImageId = AllClassServantEntity->fields.iconImageId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
  v23 = System_String__Format((System_String_o *)StringLiteral_21140, v22, 0LL);
  if ( !classIcon )
    goto LABEL_23;
  UISprite__set_spriteName(classIcon, v23, 0LL);
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
  const MethodInfo *v8; // x2
  WarBoardPieceData_o *v9; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0
  const MethodInfo *v12; // x1
  WarBoardServantPiecePartyBuffComponent_o *v13; // x0

  if ( (byte_40FBA9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBA9E = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL) )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_15;
    if ( WarBoardPieceData__get_BuffData(pieceData, 0LL) )
    {
      v9 = this->fields.pieceData;
      if ( !v9 )
        goto LABEL_15;
      BuffData = WarBoardPieceData__get_BuffData(v9, 0LL);
      if ( !BuffData )
        goto LABEL_15;
      CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(BuffData, 0LL);
      if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
             (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v12);
        return;
      }
    }
    v13 = this->fields.partyBuffComponent;
    if ( v13 )
    {
      WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(v13, level, v8);
      return;
    }
LABEL_15:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__SetServantIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *classIconRoot; // x0
  int32_t iconId_k__BackingField; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct WarBoardPieceData_o *v18; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  struct WarBoardPieceData_o *v22; // x8
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v24; // w20
  UISprite_o *servantIcon; // x23
  bool v26; // w20
  WebViewManager_o *v27; // x0
  int32_t webView; // w20
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  UISprite_o *v32; // x22
  System_String_o *v33; // x21
  UISprite_o *v34; // x21
  System_String_o *v35; // x22
  WarBoardPieceData_o *v36; // x0
  UISprite_o *v37; // x21
  struct WarBoardPieceData_o *v38; // x8
  UnityEngine_Component_o *v39; // x0
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x20
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  bool v46; // w20
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  struct WarBoardPieceData_o *v49; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t iconFrameType_k__BackingField; // w20
  int32_t iconClassId_k__BackingField; // w21
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v54; // x8
  UISprite_o *v55; // x20
  int32_t iconEquipId_k__BackingField; // w21
  UnityEngine_GameObject_o *EquipIcon; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct WarBoardPieceData_o *v59; // x8
  UnityEngine_Object_o *supportSprite; // x20
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x20
  bool IsNpc; // w0
  UnityEngine_Object_o *servantLevel; // x20
  UILabel_o *v66; // x20
  System_String_o *v67; // x0
  struct WarBoardPieceData_o *v68; // x8
  System_String_o *v69; // x21
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  WarBoardPieceData_o *v72; // x0
  bool isEnemyServant; // w0
  struct WarBoardPieceData_o *v74; // x8
  UnityEngine_Component_o *v75; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *servantIconRoot; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Component_o *enemyIcon; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *enemyIconBg; // x0
  UnityEngine_GameObject_o *v85; // x0
  struct WarBoardPieceData_o *v86; // x8
  WebViewManager_o *Instance; // x0
  struct WarBoardPieceData_o *v88; // x8
  WarBoardData_o *monitor; // x0
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v91; // x1
  WarBoardSquareComponent_o *squareComponent; // x0
  bool v93; // w0
  bool v94; // w20
  struct WarBoardPieceData_o *v95; // x8
  WebViewManager_o *v96; // x0
  struct WarBoardPieceData_o *v97; // x8
  WarBoardData_o *v98; // x0
  WarBoardSquareData_o *v99; // x0
  const MethodInfo *v100; // x1
  WarBoardSquareComponent_o *v101; // x0
  int32_t v102; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-28h] BYREF
  int32_t v104; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FBA8F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_21552, v10);
    sub_B16FFC(&StringLiteral_15212, v11);
    byte_40FBA8F = 1;
  }
  v104 = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_123;
  classIconRoot = this->fields.classIconRoot;
  if ( !classIconRoot )
    goto LABEL_123;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  gameObject = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !gameObject )
    goto LABEL_123;
  if ( !iconId_k__BackingField )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    servantIconRoot = this->fields.servantIconRoot;
    if ( servantIconRoot )
    {
      v81 = UnityEngine_GameObject__get_gameObject(servantIconRoot, 0LL);
      if ( v81 )
      {
        UnityEngine_GameObject__SetActive(v81, 0, 0LL);
        enemyIcon = (UnityEngine_Component_o *)this->fields.enemyIcon;
        if ( enemyIcon )
        {
          v83 = UnityEngine_Component__get_gameObject(enemyIcon, 0LL);
          if ( v83 )
          {
            UnityEngine_GameObject__SetActive(v83, 0, 0LL);
            enemyIconBg = (UnityEngine_Component_o *)this->fields.enemyIconBg;
            if ( enemyIconBg )
            {
              v85 = UnityEngine_Component__get_gameObject(enemyIconBg, 0LL);
              if ( v85 )
              {
                UnityEngine_GameObject__SetActive(v85, 0, 0LL);
                v86 = this->fields.pieceData;
                if ( v86 )
                {
                  if ( !v86->fields._isEditing_k__BackingField )
                    return;
                  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                  if ( Instance )
                  {
                    v88 = this->fields.pieceData;
                    if ( v88 )
                    {
                      monitor = (WarBoardData_o *)Instance[4].monitor;
                      if ( monitor )
                      {
                        Square = WarBoardData__GetSquare(monitor, v88->fields._nowSquareIndex_k__BackingField, 0LL);
                        if ( !Square )
                          return;
                        squareComponent = Square->fields.squareComponent;
                        if ( squareComponent )
                        {
                          WarBoardSquareComponent__ActiveEditPointArrow(squareComponent, v91);
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
    goto LABEL_123;
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v16 = this->fields.servantIconRoot;
  if ( !v16 )
    goto LABEL_123;
  v17 = UnityEngine_GameObject__get_gameObject(v16, 0LL);
  if ( !v17 )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive(v17, 1, 0LL);
  v18 = this->fields.pieceData;
  if ( !v18 )
    goto LABEL_123;
  npcImageSvtId_k__BackingField = v18->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v18->fields._iconId_k__BackingField;
  v104 = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v18->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v18->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v22 = this->fields.pieceData;
  if ( !v22 )
    goto LABEL_123;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_123;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 v22->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( !this->fields.pieceData )
    goto LABEL_123;
  v24 = ServantImageLimitSealAfter;
  if ( WarBoardPieceData__get_IsEnemyMonster(this->fields.pieceData, 0LL) )
    goto LABEL_26;
  servantIcon = (UISprite_o *)this->fields.servantIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v24, 0LL) )
  {
LABEL_26:
    v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v27 )
      goto LABEL_123;
    webView = (int32_t)v27[3].fields.webView;
    iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v102 = npcDispLimitCount_k__BackingField;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    v31 = System_String__Concat(v29, v30, 0LL);
    v32 = (UISprite_o *)this->fields.enemyIcon;
    v33 = v31;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_28584872(webView, v32, v33, 0LL) )
      goto LABEL_35;
    v34 = (UISprite_o *)this->fields.enemyIcon;
    v35 = System_Int32__ToString((int32_t)&v104, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_28584872(webView, v34, v35, 0LL) )
    {
LABEL_35:
      v36 = this->fields.pieceData;
      if ( !v36 )
        goto LABEL_123;
      WarBoardPieceData__ApplyDisplayType(v36, this->fields.enemyIcon, 0LL);
    }
    v37 = this->fields.enemyIconBg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(webView, v37, (System_String_o *)StringLiteral_21552, 0LL);
    v38 = this->fields.pieceData;
    if ( !v38 )
      goto LABEL_123;
    if ( v38->fields._IsShadow_k__BackingField )
    {
      v39 = (UnityEngine_Component_o *)this->fields.enemyIcon;
      if ( !v39 )
        goto LABEL_123;
      removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
      v41 = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !removeTweenTargetObjects )
        goto LABEL_123;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)removeTweenTargetObjects,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
        this,
        this->klass->vtable._12_ShowStatus.methodPtr);
    }
    v26 = 0;
  }
  else
  {
    v26 = 1;
  }
  v42 = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !v42 )
    goto LABEL_123;
  v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
  if ( !v43 )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive(v43, v26, 0LL);
  v44 = (UnityEngine_Component_o *)this->fields.enemyIcon;
  if ( !v44 )
    goto LABEL_123;
  v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
  if ( !v45 )
    goto LABEL_123;
  v46 = !v26;
  UnityEngine_GameObject__SetActive(v45, v46, 0LL);
  v47 = (UnityEngine_Component_o *)this->fields.enemyIconBg;
  if ( !v47 )
    goto LABEL_123;
  v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
  if ( !v48 )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive(v48, v46, 0LL);
  v49 = this->fields.pieceData;
  if ( !v49 )
    goto LABEL_123;
  frameInClassIcon = this->fields.frameInClassIcon;
  iconClassId_k__BackingField = v49->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v49->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(frameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  equipeIcon = (UnityEngine_Object_o *)this->fields.equipeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipeIcon, 0LL, 0LL) )
  {
    v54 = this->fields.pieceData;
    if ( !v54 )
      goto LABEL_123;
    v55 = (UISprite_o *)this->fields.equipeIcon;
    iconEquipId_k__BackingField = v54->fields._iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v55, iconEquipId_k__BackingField, 0LL);
  }
  EquipIcon = this->fields.EquipIcon;
  if ( !EquipIcon
    || (v58 = UnityEngine_GameObject__get_gameObject(EquipIcon, 0LL), (v59 = this->fields.pieceData) == 0LL)
    || !v58 )
  {
LABEL_123:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v58, v59->fields._iconEquipId_k__BackingField > 0, 0LL);
  supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    v61 = (UnityEngine_Component_o *)this->fields.supportSprite;
    if ( !v61 )
      goto LABEL_123;
    v62 = UnityEngine_Component__get_gameObject(v61, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_123;
    v63 = v62;
    IsNpc = WarBoardPieceData__get_IsNpc(this->fields.pieceData, 0LL);
    if ( !v63 )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive(v63, IsNpc, 0LL);
  }
  servantLevel = (UnityEngine_Object_o *)this->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0LL, 0LL) )
  {
    v66 = this->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_15212, 0LL);
    v68 = this->fields.pieceData;
    if ( !v68 )
      goto LABEL_123;
    v69 = v67;
    iconLevel_k__BackingField = v68->fields._iconLevel_k__BackingField;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v71 = System_String__Format(v69, v70, 0LL);
    if ( !v66 )
      goto LABEL_123;
    UILabel__set_text(v66, v71, 0LL);
    v72 = this->fields.pieceData;
    if ( !v72 )
      goto LABEL_123;
    isEnemyServant = WarBoardPieceData__get_isEnemyServant(v72, 0LL);
    v74 = this->fields.pieceData;
    if ( isEnemyServant )
    {
      if ( !v74 )
        goto LABEL_123;
      if ( v74->fields._roleType_k__BackingField == 1 )
      {
        v75 = (UnityEngine_Component_o *)this->fields.servantLevel;
        if ( !v75 )
          goto LABEL_123;
        transform = UnityEngine_Component__get_transform(v75, 0LL);
        if ( !transform )
          goto LABEL_123;
        x = this->fields.positionLevelDanger.fields.x;
        y = this->fields.positionLevelDanger.fields.y;
        z = this->fields.positionLevelDanger.fields.z;
        goto LABEL_113;
      }
    }
    else if ( !v74 )
    {
      goto LABEL_123;
    }
    v93 = WarBoardPieceData__get_IsNpc(this->fields.pieceData, 0LL);
    if ( !this->fields.servantLevel )
      goto LABEL_123;
    v94 = v93;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.servantLevel, 0LL);
    if ( v94 )
    {
      if ( !transform )
        goto LABEL_123;
      x = this->fields.positionLevelNpc.fields.x;
      y = this->fields.positionLevelNpc.fields.y;
      z = this->fields.positionLevelNpc.fields.z;
    }
    else
    {
      if ( !transform )
        goto LABEL_123;
      x = this->fields.positionLevel.fields.x;
      y = this->fields.positionLevel.fields.y;
      z = this->fields.positionLevel.fields.z;
    }
LABEL_113:
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  v95 = this->fields.pieceData;
  if ( !v95 )
    goto LABEL_123;
  if ( !v95->fields._isEditing_k__BackingField )
    return;
  v96 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v96 )
    goto LABEL_123;
  v97 = this->fields.pieceData;
  if ( !v97 )
    goto LABEL_123;
  v98 = (WarBoardData_o *)v96[4].monitor;
  if ( !v98 )
    goto LABEL_123;
  v99 = WarBoardData__GetSquare(v98, v97->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !v99 )
    return;
  v101 = v99->fields.squareComponent;
  if ( !v101 )
    goto LABEL_123;
  WarBoardSquareComponent__DeactiveEditPointArrow(v101, v100);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardServantPieceComponent__ShowStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  int v8; // s0

  if ( (byte_40FBA90 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_40FBA90 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_B170D4();
  WarBoardManager__ShowServantSimplePopup(v6, pieceData, *(UnityEngine_Vector3_o *)&v8, 0LL);
  return 1;
}


void __fastcall WarBoardServantPieceComponent__UpdateNpBars(
        WarBoardServantPieceComponent_o *this,
        float progress,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct UISprite_array *npBars; // x8
  __int64 v5; // x9
  UIBasicSprite_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v11; // x8
  UIBasicSprite_o *v12; // x0
  struct UISprite_array *v13; // x8
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  struct UISprite_array *v16; // x8
  UIBasicSprite_o *v17; // x0

  npBars = this->fields.npBars;
  this->fields.nowNpProgress = progress;
  if ( npBars )
  {
    v5 = *(_QWORD *)&npBars->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_27;
      v8 = (UIBasicSprite_o *)npBars->m_Items[0];
      if ( !v8 )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount(v8, progress, 0LL);
      npBars = this->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( (int)npBars->max_length >= 2 )
    {
      v9 = (UnityEngine_Component_o *)npBars->m_Items[1];
      if ( !v9 )
        goto LABEL_26;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v11 = this->fields.npBars;
        if ( !v11 )
          goto LABEL_26;
        if ( v11->max_length <= 1 )
          goto LABEL_27;
        v12 = (UIBasicSprite_o *)v11->m_Items[1];
        if ( !v12 )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount(v12, progress + -1.0, 0LL);
      }
    }
    v13 = this->fields.npBars;
    if ( !v13 )
      goto LABEL_26;
    if ( (int)v13->max_length >= 3 )
    {
      v14 = (UnityEngine_Component_o *)v13->m_Items[2];
      if ( !v14 )
        goto LABEL_26;
      v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !v15 )
        goto LABEL_26;
      if ( progress > 2.0 )
      {
        UnityEngine_GameObject__SetActive(v15, 1, 0LL);
        v16 = this->fields.npBars;
        if ( !v16 )
          goto LABEL_26;
        if ( v16->max_length > 2 )
        {
          v17 = (UIBasicSprite_o *)v16->m_Items[2];
          if ( v17 )
          {
            UIBasicSprite__set_fillAmount(v17, progress + -2.0, 0LL);
            return;
          }
LABEL_26:
          sub_B170D4();
        }
LABEL_27:
        sub_B17100(this, method, v3);
        sub_B170A0();
      }
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
    }
  }
}


bool __fastcall WarBoardServantPieceComponent___GetLatestBattleTargetAndAttacker_b__43_0(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  if ( !x || (pieceData = this->fields.pieceData) == 0LL )
    sub_B170D4();
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardServantPieceComponent___OnDead_b__46_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FBAA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_40FBAA6 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (gameObject = UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
          Component_srcLineSprite,
          Component_srcLineSprite->klass[1]._1.declaringType,
          0.0),
        (v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v6, 1, 0LL);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F786E & 1) == 0 )
  {
    sub_B16FFC(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_40F786E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardServantPieceComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v6; // x2
  unsigned int monitor; // w8

  if ( (byte_40F786F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, x);
    byte_40F786F = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_B17014(int___TypeInfo, 3LL, method);
  if ( !x || !result )
    sub_B170D4();
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  void *monitor; // x8
  System_String_o *v6; // x20
  WarBoardEventBossUIComponent_o *eventBossUI; // x0
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_40F7870 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F7870 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = Instance[3].monitor;
  if ( !monitor )
    goto LABEL_12;
  v6 = (System_String_o *)*((_QWORD *)monitor + 8);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v6, 0LL);
  eventBossUI = this->fields.eventBossUI;
  if ( eventBossUI )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      WarBoardEventBossUIComponent__PlayHpRecover(eventBossUI, _4__this->fields.gaugeAnimationFullDuration, 0LL, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7871 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__, v6);
    byte_40F7871 = 1;
  }
  _9__2 = this->fields.__9__2;
  eventBossUI = this->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !eventBossUI )
    sub_B170D4();
  WarBoardEventBossUIComponent__PlayHpCut(eventBossUI, 1.0, _9__2, 0LL);
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
  WarBoardEventBossUIComponent_o *eventBossUI; // x0

  eventBossUI = this->fields.eventBossUI;
  if ( !eventBossUI )
    sub_B170D4();
  WarBoardEventBossUIComponent__PlayPointBreakAnim(eventBossUI, this->fields.endAction, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7872 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__, v6);
    byte_40F7872 = 1;
  }
  _9__2 = this->fields.__9__2;
  eventBossUI = this->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !eventBossUI )
    sub_B170D4();
  WarBoardEventBossUIComponent__PlayDaedAnim(eventBossUI, _9__2, 0LL);
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
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
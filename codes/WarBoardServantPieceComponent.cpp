void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_32029B0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_3205870;
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

  if ( (byte_421656A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421656A = 1;
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
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&CriticalStars, 0LL);
    if ( v5 )
    {
      UILabel__set_text(v5, (System_String_o *)pieceData, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(pieceData);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4216569 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12748/*"ServantDying"*/, v3);
    byte_4216569 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_14;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12748/*"ServantDying"*/,
      0LL);
    faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
    {
      pieceData = this->fields.faceEffect;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive(pieceData, 0, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(pieceData);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12748/*"ServantDying"*/,
      0LL);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeStatus(
        WarBoardServantPieceComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o **p_pieceData; // x21
  WarBoardPieceData_o *pieceData; // x0
  UIBasicSprite_o *hpBar; // x20
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *npBarEffect; // x20
  float v11; // s0
  const MethodInfo *v12; // x1

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
      sub_B0D97C(pieceData);
    }
    UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  }
  pieceData = *p_pieceData;
  if ( !*p_pieceData )
    goto LABEL_10;
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL);
  WarBoardServantPieceComponent__UpdateNpBars(this, CurrentNpProgress, v9);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  npBarEffect = this->fields.npBarEffect;
  v11 = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL);
  if ( !npBarEffect )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(npBarEffect, v11 >= 1.0, 0LL);
  WarBoardServantPieceComponent__ChangeDyingAnimation(this, v12);
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

  if ( (byte_4216575 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216575 = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL);
  if ( !v4 )
  {
    v6 = this->fields.partyBuffComponent;
    if ( !v6 )
      sub_B0D97C(v4);
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
  struct ServantClassCompatibilityIconComponent_o *v7; // x0
  System_Int32_array *v8; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v10; // x0

  if ( (byte_4216573 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, selectPiece);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216573 = 1;
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
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.upIconSprite) )
        {
          v10 = sub_B0D9A8(v7);
          sub_B0D948(v10, 0LL);
        }
        LODWORD(v7->fields.downIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
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
              0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_B0D97C(v7);
    }
    v7 = this->fields.classCompatibilityIcon;
    if ( !v7 )
      goto LABEL_15;
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
  __int64 v9; // x19
  __int64 v10; // x0
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
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Delegate_o *v28; // x22
  WarBoardTaskBase_TaskCallback_o *v29; // x23
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarBoardTaskBase_o *result; // x0
  WarBoardServantPieceComponent_o *v38; // x0
  WarBoardManager_TaskList_o *v39; // x2
  bool v40; // w3
  const MethodInfo *v41; // x4
  System_Nullable_float__o v42; // 0:x1.8

  if ( (byte_4216571 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6);
    sub_B0D8A4(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v7);
    sub_B0D8A4(&WarBoardWaitTime_TypeInfo, v8);
    byte_4216571 = 1;
  }
  v9 = sub_B0D974(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, eventBossUI, endAction);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = eventBossUI,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)eventBossUI,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_QWORD *)(v9 + 24) = endAction,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 24),
          (System_Int32_array **)endAction,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        v25 = sub_B0D974(WarBoardWaitTime_TypeInfo, v23, v24),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v25, 0.0, 0LL),
        !v25) )
  {
    sub_B0D97C(v10);
  }
  v28 = *(System_Delegate_o **)(v25 + 40);
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v27);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v30 = (System_Int32_array **)System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0LL);
  if ( v30 && *v30 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v38 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v30);
    WarBoardServantPieceComponent__OnDead(v38, v42, v39, v40, v41);
  }
  else
  {
    *(_QWORD *)(v25 + 40) = v30;
    sub_B0D840((BattleServantConfConponent_o *)(v25 + 40), v30, v31, v32, v33, v34, v35, v36);
    *(_BYTE *)(v25 + 26) = 1;
    return (WarBoardTaskBase_o *)v25;
  }
  return result;
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
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Delegate_o *v30; // x22
  WarBoardTaskBase_TaskCallback_o *v31; // x23
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v40; // x0
  int32_t v41; // w1
  WarBoardManager_TaskList_o *v42; // x3
  int32_t v43; // w4
  WarBoardTaskBase_TaskCallback_o *v44; // x5
  bool v45; // w6
  const MethodInfo *v46; // x7
  System_Nullable_float__o v47; // 0:x2.8

  if ( (byte_4216570 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v6);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v7);
    sub_B0D8A4(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v10);
    byte_4216570 = 1;
  }
  v11 = sub_B0D974(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, eventBossUI, method);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = eventBossUI;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)eventBossUI,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_BYTE *)(v11 + 16) = 0;
  v21 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v19, v20);
  System_Func_bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v24 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v22, v23);
  UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
  v27 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v25, v26);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v27, (UnityEngine_CustomYieldInstruction_o *)v24, 0LL);
  if ( !v27 )
LABEL_8:
    sub_B0D97C(v12);
  v30 = *(System_Delegate_o **)(v27 + 32);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v28, v29);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  if ( v32 && *v32 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v40 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v32);
    WarBoardServantPieceComponent__OnBreak(v40, v41, v47, v42, v43, v44, v45, v46);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v32;
    sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), v32, v33, v34, v35, v36, v37, v38);
    return (WarBoardCallbackTask_o *)v27;
  }
  return result;
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
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Delegate_o *v30; // x22
  WarBoardTaskBase_TaskCallback_o *v31; // x23
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v40; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v41; // x1
  const MethodInfo *v42; // x2

  if ( (byte_4216572 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v6);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v7);
    sub_B0D8A4(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v10);
    byte_4216572 = 1;
  }
  v11 = sub_B0D974(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, eventBossUI, method);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = eventBossUI;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)eventBossUI,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_BYTE *)(v11 + 16) = 0;
  v21 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v19, v20);
  System_Func_bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v24 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v22, v23);
  UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
  v27 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v25, v26);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v27, (UnityEngine_CustomYieldInstruction_o *)v24, 0LL);
  if ( !v27 )
LABEL_8:
    sub_B0D97C(v12);
  v30 = *(System_Delegate_o **)(v27 + 32);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v28, v29);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  if ( v32 && *v32 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v40 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v32);
    WarBoardServantPieceComponent__OnRevive(v40, v41, v42);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v32;
    sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), v32, v33, v34, v35, v36, v37, v38);
    return (WarBoardCallbackTask_o *)v27;
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

  if ( (byte_4216568 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4216568 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AA65A4(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B0D97C(0LL);
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
    sub_B0D97C(servantIcon);
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
    sub_B0D97C(servantIcon);
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
  __int64 v15; // x1
  __int64 v16; // x1
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  struct WarBoardPieceData_o *pieceData; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  unsigned int v20; // w8
  struct WarBoardPieceData_o *v21; // x9
  struct WarBoardPieceData_o *v22; // x9
  _QWORD **v23; // x23
  __int64 v24; // x22
  __int16 v25; // w8
  __int64 v26; // x22
  __int64 v27; // x22
  __int64 v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  WarBoardServantPieceComponent___c_c *v37; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__43_1; // x21
  Il2CppObject *v40; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v51; // x0

  if ( (byte_421656B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, warBoardData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v11);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B0D8A4(&int___TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v14);
    sub_B0D8A4(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v16);
    byte_421656B = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B0D8BC(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_34;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_34;
  v20 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v20 )
    goto LABEL_35;
  LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField;
  v21 = this->fields.pieceData;
  if ( !v21 )
    goto LABEL_34;
  if ( v20 <= 1 )
    goto LABEL_35;
  HIDWORD(BattleParticipantInfo[1].klass) = v21->fields._groupId_k__BackingField;
  v22 = this->fields.pieceData;
  if ( !v22 )
    goto LABEL_34;
  if ( v20 <= 2 )
  {
LABEL_35:
    v51 = sub_B0D9A8(BattleParticipantInfo);
    sub_B0D948(v51, 0LL);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = v22->fields._index_k__BackingField;
  v23 = (_QWORD **)Method_System_Array_Empty_int___;
  v24 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v25 = *(_WORD *)(v24 + 306);
  if ( (v25 & 1) == 0 )
  {
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___
                                                                                + 6));
    v25 = *(_WORD *)(v24 + 306);
  }
  if ( (v25 & 0x400) != 0 )
  {
    v26 = *v23[6];
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AA65A4(*v23[6]);
    if ( !*(_DWORD *)(v26 + 224) )
    {
      v27 = *v23[6];
      if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
        sub_AA65A4(*v23[6]);
      j_il2cpp_runtime_class_init_0(v27);
    }
  }
  v28 = *v23[6];
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AA65A4(*v23[6]);
  if ( !warBoardData
    || (v29 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v28 + 184),
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_34:
    sub_B0D97C(BattleParticipantInfo);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                               v30,
                                                                               v31);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v33,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v37 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v37 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                                                                   v34,
                                                                                                   v35);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__43_1,
        v40,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        (const MethodInfo_261A104 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v41 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v41->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v41->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 v36,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v48,
                                                                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v49 = System_Linq_Enumerable__Concat_int_(
          v19,
          v29,
          (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v49,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_421657A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_421657A = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_B0D97C(button);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v27; // x2
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4216563 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_19435/*"icon_strong_enemy"*/, v7);
    sub_B0D8A4(&StringLiteral_19246/*"hp_gauge_boss"*/, v8);
    sub_B0D8A4(&StringLiteral_22055/*"servant_base_{0}"*/, v9);
    byte_4216563 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_42;
  frameSprite = this->fields.frameSprite;
  v28 = pieceData->fields._forceId_k__BackingField + 1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  hpBar = System_String__Format((System_String_o *)StringLiteral_22055/*"servant_base_{0}"*/, v12, 0LL);
  if ( !frameSprite )
    goto LABEL_42;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_42;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19246/*"hp_gauge_boss"*/, 0LL);
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
      goto LABEL_42;
    UIBasicSprite__set_fillAmount((UIBasicSprite_o *)hpBar, 1.0, 0LL);
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v14);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v13);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v13);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v16 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v16 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v16, (unsigned __int8)hpBar & 1, 0LL);
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.classCompatibilityIcon;
    if ( !hpBar )
      goto LABEL_42;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)hpBar, 0LL);
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
        hpBar = (System_String_o *)this->fields.RoleTypeLabel;
        if ( hpBar )
        {
          hpBar = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)hpBar,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19435/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_39;
            }
          }
        }
LABEL_42:
        sub_B0D97C(hpBar);
      }
    }
  }
LABEL_39:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_B0D840(
      (BattleServantConfConponent_o *)&buffTrunNotice->fields.pieceData,
      (System_Int32_array **)pieceData,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
    sub_B0D97C(this);
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
  WebViewManager_o *Instance; // x0

  if ( (byte_4216567 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4216567 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  WarBoardManager_TaskList_o *v34; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_299B944 *v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  WarBoardData_o *klass; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x28
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x26
  const MethodInfo *v44; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x22
  WebViewManager_o *v46; // x22
  const MethodInfo_299B944 *v47; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  bool IsStageBoss; // w0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **EventBossUI; // x1
  WarBoardManager_o *v57; // x22
  WarBoardEventBossUIComponent_o **v58; // x22
  UnityEngine_Object_o *v59; // x27
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v63; // x0
  const MethodInfo *v64; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIBreakTask; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  System_Delegate_o *v74; // x23
  WarBoardTaskBase_TaskCallback_o *v75; // x24
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WarBoardServantPieceComponent_o *v83; // x0
  WarBoardEventBossUIComponent_o *v84; // x1
  System_Action_o *v85; // x2
  const MethodInfo *v86; // x3
  WarBoardManager_TaskList_o *v87; // [xsp+18h] [xbp-78h]
  System_Nullable_Vector3__o v88; // [xsp+20h] [xbp-70h] BYREF
  int32_t dummyPointa; // [xsp+38h] [xbp-58h]
  int32_t priority; // [xsp+3Ch] [xbp-54h] BYREF
  System_Nullable_float__o v91; // 0:x2.8
  System_Nullable_float__o v92; // 0:x3.8
  System_Nullable_float__o v93; // 0:x3.8
  System_Nullable_Vector3__o v94; // 0:x0.16
  System_Nullable_Vector3__o v95; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_421656D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v19);
    sub_B0D8A4(&WarBoardManager_TaskList_TypeInfo, v20);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v21);
    sub_B0D8A4(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v22);
    sub_B0D8A4(&WarBoardGaugePerformance_TypeInfo, v23);
    byte_421656D = 1;
  }
  priority = 0;
  v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_B0D974)(
          WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&oldBreakPoint,
          cameraSize);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_40;
  *(_QWORD *)(v24 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  v34 = (WarBoardManager_TaskList_o *)sub_B0D974(WarBoardManager_TaskList_TypeInfo, v32, v33);
  WarBoardManager_TaskList___ctor(v34, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v94.fields.value.fields.x = &v88;
    *(_QWORD *)&v88.fields.value.fields.x = 0LL;
    *(_QWORD *)&v88.fields.value.fields.z = 0LL;
    *(_QWORD *)&v94.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v94, localPosition, v36);
    if ( !Instance )
      goto LABEL_40;
    v92 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v88,
                                             v92,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v34 )
      goto LABEL_40;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v87 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  klass = (WarBoardData_o *)transform[18].klass;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v41,
                                                                                                  v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, klass, v44);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_17714444(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v40 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_17714444(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v43 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v43,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v34 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
    (System_Collections_Generic_IEnumerable_T__o *)v40,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    v97 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v95.fields.value.fields.x = &v88;
    v88 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v95.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v95, v97, v47);
    if ( !v46 )
      goto LABEL_40;
    v93 = cameraSize;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)v46,
                                                                                     v88,
                                                                                     v93,
                                                                                     1,
                                                                                     1,
                                                                                     0,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      CameraPerformanceTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_40;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_40;
    v57 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v57 )
      goto LABEL_40;
    EventBossUI = (System_Int32_array **)WarBoardManager__GetEventBossUI(v57, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v24 + 16) = EventBossUI;
  v58 = (WarBoardEventBossUIComponent_o **)(v24 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), EventBossUI, v50, v51, v52, v53, v54, v55);
  v59 = *(UnityEngine_Object_o **)(v24 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v60 = UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
  if ( v60 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v60,
                                                                                *v58,
                                                                                v61);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      BossUIDamageTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIBreakTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(
                                                                               v63,
                                                                               *v58,
                                                                               0LL,
                                                                               v64);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      BossUIBreakTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v91 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v91,
    v34,
    dummyPointa,
    0LL,
    1,
    0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_40:
    sub_B0D97C(transform);
  if ( pieceData->fields._isDead_k__BackingField )
  {
LABEL_36:
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      (System_Collections_Generic_IEnumerable_T__o *)v43,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    if ( v87 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v87,
        (System_Collections_Generic_IEnumerable_T__o *)v34,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      v87->fields._SubPriority_k__BackingField = priority;
      return;
    }
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( transform )
    {
      WarBoardManager__AddTask_17750248(
        (WarBoardManager_o *)transform,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v34,
        0LL);
      return;
    }
    goto LABEL_40;
  }
  transform = (UnityEngine_Transform_o *)this->fields.hpBar;
  if ( !transform )
    goto LABEL_40;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)transform, 0.0, 0LL);
  hpBar = this->fields.hpBar;
  gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
  v71 = sub_B0D974(WarBoardGaugePerformance_TypeInfo, v69, v70);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v71, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v71 )
    goto LABEL_40;
  v74 = *(System_Delegate_o **)(v71 + 32);
  v75 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v72, v73);
  WarBoardTaskBase_TaskCallback___ctor(
    v75,
    (Il2CppObject *)v24,
    Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v76 = (System_Int32_array **)System_Delegate__Combine(v74, (System_Delegate_o *)v75, 0LL);
  if ( !v76 || *v76 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v71 + 32) = v76;
    sub_B0D840((BattleServantConfConponent_o *)(v71 + 32), v76, v77, v78, v79, v80, v81, v82);
    *(_BYTE *)(v71 + 26) = 1;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_36;
  }
  v83 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v76);
  WarBoardServantPieceComponent__CreateBossUIBreakTask(v83, v84, v85, v86);
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
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  WarBoardServantPieceComponent_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_421656C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_421656C = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_17;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_17;
    v12 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v12 )
      goto LABEL_17;
    EventBossUI = WarBoardManager__GetEventBossUI(v12, (int32_t)pieceData, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v13,
                                                                                                    v14);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v16, EventBossUI, v17);
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)pieceData,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      WarBoardPieceBaseComponent__OnDamage(
        (WarBoardPieceBaseComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
        0LL);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( pieceData )
      {
        WarBoardManager__AddTask_17750248(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v15, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B0D97C(pieceData);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x21
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x2
  WarBoardServantPieceComponent_o *v40; // x0
  const MethodInfo *v41; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDeadTask; // x0
  WarBoardManager_o *v43; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v45; // x26
  WarBoardMessageMaster_o *Master_WarQuestSelectionMaster; // x27
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *v52; // x24
  int32_t id; // w0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_17714444; // x0
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  const MethodInfo *v56; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_IEnumerable_T__o *v58; // x0
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  WebViewManager_o *Instance; // x23
  const MethodInfo_299B944 *v63; // x2
  bool IsEnemyMonster; // w0
  System_String_o **v65; // x8
  System_String_o *v66; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x23
  __int64 v70; // x25
  __int64 v71; // x26
  ServantEntity_o *v72; // x25
  float v73; // w23
  bool v74; // w0
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  BattleServantConfConponent_o *v78; // x23
  System_Delegate_o *v79; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v80; // x22
  WarBoardTaskBase_TaskCallback_o *v81; // x26
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x1
  __int64 v90; // x2
  WarBoardWaitTime_o *v91; // x20
  WarBoardServantPieceComponent_o *v92; // x0
  WarBoardEventBossUIComponent_o *v93; // x1
  const MethodInfo *v94; // x2
  System_Nullable_float__o size; // [xsp+8h] [xbp-78h]
  WarBoardManager_TaskList_o *v96; // [xsp+10h] [xbp-70h]
  System_Nullable_Vector3__o v97; // [xsp+18h] [xbp-68h] BYREF
  int32_t priority; // [xsp+2Ch] [xbp-54h] BYREF
  System_Nullable_float__o v99; // 0:x3.8
  System_Nullable_Vector3__o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421656E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_B0D8A4(&WarBoardManager_TypeInfo, v24);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_B0D8A4(&WarBoardWaitTime_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_6156/*"Escape_Effect"*/, v27);
    sub_B0D8A4(&StringLiteral_6015/*"Enemy_Dead_Effect"*/, v28);
    sub_B0D8A4(&StringLiteral_12770/*"Servant_Dead_Effect"*/, v29);
    sub_B0D8A4(&StringLiteral_13005/*"Special_Effect{0:D2}"*/, v30);
    byte_421656E = 1;
  }
  priority = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_84;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_84;
    v33 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v33 )
      goto LABEL_84;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v33, (int32_t)gameObject, 0LL);
  }
  gameObject = this->fields.hpBar;
  if ( !gameObject )
    goto LABEL_84;
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)gameObject, 0.0, 0LL);
  faceEffect = (UnityEngine_Object_o *)this->fields.faceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(faceEffect, 0LL, 0LL) )
  {
    gameObject = this->fields.faceEffect;
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v38 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v38,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v39);
    if ( !v37 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v37,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIDeadTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                                                                              v40,
                                                                              (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                              v41);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v37,
      BossUIDeadTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v43 = (WarBoardManager_o *)gameObject;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !v43 )
      goto LABEL_84;
    Task = WarBoardManager__FindTask(v43, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  v96 = taskList;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  size = cameraSize;
  v45 = (WarBoardData_o *)*((_QWORD *)gameObject + 54);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                          v47,
                                                                          v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MessageTasks,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v52 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B0D974(
                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                 v50,
                                                                 v51);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v45 )
    goto LABEL_84;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v45, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v45, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     Master_WarQuestSelectionMaster,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v45, 0LL);
    v52 = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v52 )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks_17714444 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_17714444(
                                                                         (WarBoardManager_o *)gameObject,
                                                                         24,
                                                                         &priority,
                                                                         0LL,
                                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks_17714444,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v55 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_17714444(
                                                         (WarBoardManager_o *)gameObject,
                                                         25,
                                                         &priority,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
    v55,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v45, v56);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v58 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_17714444(
                                                         (WarBoardManager_o *)gameObject,
                                                         34,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    v58,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v59 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_17714444(
                                                         (WarBoardManager_o *)gameObject,
                                                         35,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
    v59,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)gameObject,
                                                                22,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
    EventTasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v61 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)gameObject,
                                                         23,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v52,
    v61,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_84;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v100.fields.value.fields.x = &v97;
    *(_QWORD *)&v97.fields.value.fields.x = 0LL;
    *(_QWORD *)&v97.fields.value.fields.z = 0LL;
    *(_QWORD *)&v100.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v100, localPosition, v63);
    if ( !Instance )
      goto LABEL_84;
    v99 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v97, v99, 1, 1, 0, 0LL);
    if ( !v37 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v37,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_84;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v65 = (System_String_o **)&StringLiteral_6015/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v65 = (System_String_o **)&StringLiteral_12770/*"Servant_Dead_Effect"*/;
  v66 = *v65;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_84;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_84;
  v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v71 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v101.fields.currentCryptoKey = v71;
  *(_QWORD *)&v101.fields.fakeValue = v70;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v101, 0LL);
  if ( !v69 )
    goto LABEL_84;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v69,
                 (int32_t)gameObject,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_84;
  v72 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v72 )
    goto LABEL_84;
  v73 = *(float *)&gameObject;
  v74 = ServantEntity__checkIsHeroineSvt(v72, 0LL);
  if ( LODWORD(v73) == 1 || v74 )
  {
    v66 = (System_String_o *)StringLiteral_6156/*"Escape_Effect"*/;
  }
  else if ( SLODWORD(v73) >= 2 )
  {
    v97.fields.value.fields.x = v73;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
    v66 = System_String__Format((System_String_o *)StringLiteral_13005/*"Special_Effect{0:D2}"*/, v75, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v66, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v78 = (BattleServantConfConponent_o *)((char *)gameObject + 40);
  v79 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v80 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v81 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v76, v77);
  WarBoardTaskBase_TaskCallback___ctor(
    v81,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v82 = (System_Int32_array **)System_Delegate__Combine(v79, (System_Delegate_o *)v81, 0LL);
  if ( v82 && *v82 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v92 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v82);
    WarBoardServantPieceComponent__CreateBossUIDeadTask(v92, v93, v94);
    return;
  }
  v78->klass = (BattleServantConfConponent_c *)v82;
  sub_B0D840(v78, v82, v83, v84, v85, v86, v87, v88);
  if ( !v37 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    v80,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v91 = (WarBoardWaitTime_o *)sub_B0D974(WarBoardWaitTime_TypeInfo, v89, v90);
  WarBoardWaitTime___ctor(v91, 0.5, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v52,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37,
      (System_Collections_Generic_IEnumerable_T__o *)v52,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v96 )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v96,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v96->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_84;
    WarBoardManager__InsertTask_17743264(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v37,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
LABEL_84:
    sub_B0D97C(gameObject);
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4216579 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18246/*"ef_guts"*/, taskList);
    byte_4216579 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18246/*"ef_guts"*/,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4216578 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18267/*"ef_special_invincible01"*/, taskList);
    byte_4216578 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18267/*"ef_special_invincible01"*/,
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
  WarBoardPieceData_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
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
  System_Delegate_o *v32; // x23
  WarBoardServantPieceComponent___c_c *v33; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v36; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WarBoardServantPieceComponent_o *v51; // x0
  System_Action_o *v52; // x1
  const MethodInfo *v53; // x2

  if ( (byte_4216576 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_B0D8A4(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_B0D8A4(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_4216576 = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v16,
                                                                                                    v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v19 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v20 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v21 = (int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v23 = v21 - damage;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v26 = (float)v23 / (float)MaxHp;
    v29 = sub_B0D974(WarBoardGaugePerformance_TypeInfo, v27, v28);
    WarBoardGaugePerformance___ctor(
      (WarBoardGaugePerformance_o *)v29,
      hpBar,
      (float)v19 / (float)v20,
      v26,
      gaugeAnimationFullDuration,
      0LL);
    if ( !v29 )
      goto LABEL_26;
    v32 = *(System_Delegate_o **)(v29 + 32);
    v33 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v33 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__57_0 = static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__57_0,
        v36,
        Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
        0LL);
      v37 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v37->__9__57_0 = _9__57_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v37->__9__57_0,
        (System_Int32_array **)_9__57_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Int32_array **)System_Delegate__Combine(v32, (System_Delegate_o *)_9__57_0, 0LL);
    if ( !v44 || *v44 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v29 + 32) = v44;
      sub_B0D840((BattleServantConfConponent_o *)(v29 + 32), v44, v45, v46, v47, v48, v49, v50);
      *(_BYTE *)(v29 + 26) = 0;
      if ( v18 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v18,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_17750248(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B0D97C(gameObject);
    }
    v51 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v44);
    WarBoardServantPieceComponent__Reinforcements(v51, v52, v53);
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
  WarBoardPieceData_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
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
  System_Delegate_o *v32; // x23
  WarBoardServantPieceComponent___c_c *v33; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v36; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WarBoardServantPieceComponent_o *v51; // x0
  const MethodInfo *v52; // x1

  if ( (byte_421657B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_B0D8A4(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B0D8A4(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_421657B = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v18,
                                                                                                    v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_24;
    v21 = (float)oldHp / (float)(int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v23 = gainHp + oldHp;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v26 = (float)v23 / (float)MaxHp;
    v29 = sub_B0D974(WarBoardGaugePerformance_TypeInfo, v27, v28);
    WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v29, hpBar, v21, v26, gaugeAnimationFullDuration, 0LL);
    if ( !v29 )
      goto LABEL_24;
    v32 = *(System_Delegate_o **)(v29 + 32);
    v33 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v33 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__63_0 = static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__63_0,
        v36,
        Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
        0LL);
      v37 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v37->__9__63_0 = _9__63_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v37->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Int32_array **)System_Delegate__Combine(v32, (System_Delegate_o *)_9__63_0, 0LL);
    if ( !v44 || *v44 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v29 + 32) = v44;
      sub_B0D840((BattleServantConfConponent_o *)(v29 + 32), v44, v45, v46, v47, v48, v49, v50);
      *(_BYTE *)(v29 + 26) = 0;
      if ( v20 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v20,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_17750248(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
            0LL);
          return;
        }
      }
LABEL_24:
      sub_B0D97C(gameObject);
    }
    v51 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v44);
    WarBoardServantPieceComponent___ctor(v51, v52);
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
  WarBoardBreakPointComponent_o *Instance; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v16; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v18; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  WebViewManager_o *v25; // x22
  const MethodInfo_299B944 *v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  BattleServantConfConponent_o *p_deactiveObject; // x23
  System_Delegate_o *deactiveObject; // x24
  WarBoardBreakPointComponent_o *v31; // x22
  WarBoardTaskBase_TaskCallback_o *v32; // x25
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  WarBoardWaitTime_o *v42; // x20
  __int64 v43; // x0
  WarBoardServantPieceComponent_o *v44; // x0
  bool v45; // w1
  const MethodInfo *v46; // x2
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v48; // 0:x3.8
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421656F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_B0D8A4(&WarBoardWaitTime_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_12771/*"Servant_Regenerate_Effect"*/, v13);
    byte_421656F = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v16 = 0LL;
  while ( (int)v16 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v16 >= breakPoints->max_length )
      {
        v43 = sub_B0D9A8(Instance);
        sub_B0D948(v43, 0LL);
      }
      Instance = breakPoints->m_Items[v16];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v16;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v18 = this->fields.pieceData;
  if ( !v18 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v18->fields._nowSquareIndex_k__BackingField,
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
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v51, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v49.fields.value.fields.x = &v47;
  *(_QWORD *)&v47.fields.value.fields.x = 0LL;
  *(_QWORD *)&v47.fields.value.fields.z = 0LL;
  *(_QWORD *)&v49.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v49, localPosition, v26);
  if ( !v25 )
    goto LABEL_10;
  v48 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v25,
                                                v47,
                                                v48,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v24 )
    goto LABEL_10;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12771/*"Servant_Regenerate_Effect"*/,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  p_deactiveObject = (BattleServantConfConponent_o *)&Instance->fields.deactiveObject;
  deactiveObject = (System_Delegate_o *)Instance->fields.deactiveObject;
  v31 = Instance;
  BYTE2(Instance->fields.activeObject) = 1;
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v27, v28);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v33 = (System_Int32_array **)System_Delegate__Combine(deactiveObject, (System_Delegate_o *)v32, 0LL);
  if ( !v33 || *v33 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v31->fields.deactiveObject = (struct UISprite_o *)v33;
    sub_B0D840(p_deactiveObject, v33, v34, v35, v36, v37, v38, v39);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v42 = (WarBoardWaitTime_o *)sub_B0D974(WarBoardWaitTime_TypeInfo, v40, v41);
    WarBoardWaitTime___ctor(v42, 0.5, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    }
    else
    {
      Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_10;
      WarBoardManager__InsertTask_17743264(
        (WarBoardManager_o *)Instance,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v24,
        0LL);
    }
    Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
  v44 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v33);
  WarBoardServantPieceComponent__SetActiveNpBarEffect(v44, v45, v46);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_299B944 *v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x19
  BattleServantConfConponent_o *v36; // x22
  System_Delegate_o *v37; // x23
  WarBoardTaskBase_TaskCallback_o *v38; // x24
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WebViewManager_o *v46; // x19
  WarBoardServantPieceComponent_o *v47; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v48; // x1
  const MethodInfo *v49; // x2
  System_Nullable_Vector3__o v50; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v51; // 0:x3.8
  System_Nullable_Vector3__o v52; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216577 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v11);
    sub_B0D8A4(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_11405/*"Reinforcement_Effect_1"*/, v13);
    byte_4216577 = 1;
  }
  v14 = sub_B0D974(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, callback, method);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v52.fields.value.fields.x = &v50;
  *(_QWORD *)&v50.fields.value.fields.x = 0LL;
  *(_QWORD *)&v50.fields.value.fields.z = 0LL;
  *(_QWORD *)&v52.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v52, localPosition, v32);
  if ( !Instance )
    goto LABEL_12;
  v51 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v50, v51, 1, 0, 1, 0LL);
  if ( !v30 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11405/*"Reinforcement_Effect_1"*/,
                        0LL);
  if ( !transform )
    goto LABEL_12;
  v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v36 = (BattleServantConfConponent_o *)(transform + 40);
  v37 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v33, v34);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v14,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v39 = (System_Int32_array **)System_Delegate__Combine(v37, (System_Delegate_o *)v38, 0LL);
  if ( !v39 || *v39 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v35[1].klass = (EventMissionProgressRequest_Argument_ProgressData_c *)v39;
    sub_B0D840(v36, v39, v40, v41, v42, v43, v44, v45);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      v35,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v46 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v46, (WarBoardTaskBase_array *)transform, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(transform);
  }
  v47 = (WarBoardServantPieceComponent_o *)sub_B0DC70(v39);
  WarBoardServantPieceComponent__OnInvincible(v47, v48, v49);
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
    if ( !this || (v4 = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0LL) >= 1.0, !npBarEffect) )
LABEL_7:
      sub_B0D97C(this);
  }
  else
  {
    v4 = 0;
    if ( !npBarEffect )
      goto LABEL_7;
  }
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
  __int64 v12; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v14; // x0
  __int64 v15; // x0
  int v16; // [xsp+4h] [xbp-1Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216564 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_21299/*"onBoard_initial_placement_class2_{0}"*/, v7);
    byte_4216564 = 1;
  }
  entity = 0LL;
  classIconRoot = this->fields.classIconRoot;
  if ( !classIconRoot )
    goto LABEL_23;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !classIconRoot )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(classIconRoot, 1, 0LL);
  classIconRoot = this->fields.servantIconRoot;
  if ( !classIconRoot )
    goto LABEL_23;
  classIconRoot = UnityEngine_GameObject__get_gameObject(classIconRoot, 0LL);
  if ( !classIconRoot )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(classIconRoot, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_23:
    sub_B0D97C(classIconRoot);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v10 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_23;
LABEL_20:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v10, 0LL);
    if ( !classIconRoot )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( !classIconRoot )
    goto LABEL_23;
  ServantClassEntities = WarBoardIndividualityClassMaster__GetServantClassEntities(
                           (WarBoardIndividualityClassMaster_o *)classIconRoot,
                           (System_Int32_array *)entity->fields.longName,
                           0LL);
  if ( !ServantClassEntities )
    goto LABEL_20;
  v12 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v12 )
    goto LABEL_20;
  if ( !(_DWORD)v12 )
  {
    v15 = sub_B0D9A8(ServantClassEntities);
    sub_B0D948(v15, 0LL);
  }
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_23;
LABEL_21:
  classIcon = this->fields.classIcon;
  v16 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21299/*"onBoard_initial_placement_class2_{0}"*/, v14, 0LL);
  if ( !classIcon )
    goto LABEL_23;
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
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4216574 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216574 = 1;
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
      pieceData = this->fields.pieceData;
      if ( !pieceData )
        goto LABEL_15;
      pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_BuffData(pieceData, 0LL);
      if ( !pieceData )
        goto LABEL_15;
      CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
                                         (BattleBuffData_o *)pieceData,
                                         0LL);
      if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
             (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
      {
        WarBoardServantPieceComponent__ClearPartyBuff(this, v10);
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
LABEL_15:
    sub_B0D97C(pieceData);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *removeTweenTargetObjects; // x20
  bool v32; // w20
  struct WarBoardPieceData_o *v33; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t iconFrameType_k__BackingField; // w20
  int32_t iconClassId_k__BackingField; // w21
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v38; // x8
  UISprite_o *v39; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v41; // x8
  UnityEngine_Object_o *supportSprite; // x20
  UnityEngine_GameObject_o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  UILabel_o *v45; // x20
  struct WarBoardPieceData_o *v46; // x8
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  struct WarBoardPieceData_o *v49; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct WarBoardPieceData_o *v53; // x8
  struct WarBoardPieceData_o *v54; // x8
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v56; // x1
  char v57; // w20
  struct WarBoardPieceData_o *v58; // x8
  struct WarBoardPieceData_o *v59; // x8
  WarBoardSquareData_o *v60; // x0
  const MethodInfo *v61; // x1
  int32_t v62; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-28h] BYREF
  int32_t v64; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4216565 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_21714/*"questinfo_enemyface_bg"*/, v10);
    this = (WarBoardServantPieceComponent_o *)sub_B0D8A4(&StringLiteral_15319/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v11);
    byte_4216565 = 1;
  }
  v64 = 0;
  pieceData = v2->fields.pieceData;
  if ( !pieceData )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)v2->fields.classIconRoot;
  if ( !this )
    goto LABEL_123;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_123;
  if ( !iconId_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                v53 = v2->fields.pieceData;
                if ( v53 )
                {
                  if ( !v53->fields._isEditing_k__BackingField )
                    return;
                  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                  if ( this )
                  {
                    v54 = v2->fields.pieceData;
                    if ( v54 )
                    {
                      this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                      if ( this )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)this,
                                   v54->fields._nowSquareIndex_k__BackingField,
                                   0LL);
                        if ( !Square )
                          return;
                        this = (WarBoardServantPieceComponent_o *)Square->fields.squareComponent;
                        if ( this )
                        {
                          WarBoardSquareComponent__ActiveEditPointArrow((WarBoardSquareComponent_o *)this, v56);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIconRoot;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v14 = v2->fields.pieceData;
  if ( !v14 )
    goto LABEL_123;
  npcImageSvtId_k__BackingField = v14->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v14->fields._iconId_k__BackingField;
  v64 = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v14->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v14->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v17 = v2->fields.pieceData;
  if ( !v17 )
    goto LABEL_123;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)this,
                                              v17->fields._iconId_k__BackingField,
                                              npcDispLimitCount_k__BackingField,
                                              0LL);
  if ( !v2->fields.pieceData )
    goto LABEL_123;
  v18 = (int)this;
  if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0LL) )
    goto LABEL_26;
  servantIcon = (UISprite_o *)v2->fields.servantIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v18, 0LL) )
  {
LABEL_26:
    this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_123;
    servantLevel = (int32_t)this->fields.servantLevel;
    iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v62 = npcDispLimitCount_k__BackingField;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
    v24 = System_String__Concat(v22, v23, 0LL);
    enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
    v26 = v24;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_27921852(servantLevel, enemyIcon, v26, 0LL) )
      goto LABEL_35;
    v27 = (UISprite_o *)v2->fields.enemyIcon;
    v28 = System_Int32__ToString((int32_t)&v64, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_27921852(servantLevel, v27, v28, 0LL) )
    {
LABEL_35:
      this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
      if ( !this )
        goto LABEL_123;
      WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v2->fields.enemyIcon, 0LL);
    }
    enemyIconBg = v2->fields.enemyIconBg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_27921852(
                                                servantLevel,
                                                enemyIconBg,
                                                (System_String_o *)StringLiteral_21714/*"questinfo_enemyface_bg"*/,
                                                0LL);
    v30 = v2->fields.pieceData;
    if ( !v30 )
      goto LABEL_123;
    if ( v30->fields._IsShadow_k__BackingField )
    {
      this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
      if ( !this )
        goto LABEL_123;
      removeTweenTargetObjects = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.removeTweenTargetObjects;
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !removeTweenTargetObjects )
        goto LABEL_123;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        removeTweenTargetObjects,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  v32 = !v20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0LL);
  v33 = v2->fields.pieceData;
  if ( !v33 )
    goto LABEL_123;
  frameInClassIcon = v2->fields.frameInClassIcon;
  iconClassId_k__BackingField = v33->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v33->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(frameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  equipeIcon = (UnityEngine_Object_o *)v2->fields.equipeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v38 = v2->fields.pieceData;
    if ( !v38 )
      goto LABEL_123;
    v39 = (UISprite_o *)v2->fields.equipeIcon;
    iconEquipId_k__BackingField = v38->fields._iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v39, iconEquipId_k__BackingField, 0LL);
  }
  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
  if ( !this
    || (this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL),
        (v41 = v2->fields.pieceData) == 0LL)
    || !this )
  {
LABEL_123:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41->fields._iconEquipId_k__BackingField > 0, 0LL);
  supportSprite = (UnityEngine_Object_o *)v2->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    this = (WarBoardServantPieceComponent_o *)v2->fields.supportSprite;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !v2->fields.pieceData )
      goto LABEL_123;
    v43 = (UnityEngine_GameObject_o *)this;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0LL);
    if ( !v43 )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive(v43, (unsigned __int8)this & 1, 0LL);
  }
  v44 = (UnityEngine_Object_o *)v2->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v45 = v2->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15319/*"WARBOARD_PIECE_ICON_SVT_LV"*/, 0LL);
    v46 = v2->fields.pieceData;
    if ( !v46 )
      goto LABEL_123;
    v47 = (System_String_o *)this;
    iconLevel_k__BackingField = v46->fields._iconLevel_k__BackingField;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    this = (WarBoardServantPieceComponent_o *)System_String__Format(v47, v48, 0LL);
    if ( !v45 )
      goto LABEL_123;
    UILabel__set_text(v45, (System_String_o *)this, 0LL);
    this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant((WarBoardPieceData_o *)this, 0LL);
    v49 = v2->fields.pieceData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_123;
      if ( v49->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardServantPieceComponent_o *)v2->fields.servantLevel;
        if ( !this )
          goto LABEL_123;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_123;
        x = v2->fields.positionLevelDanger.fields.x;
        y = v2->fields.positionLevelDanger.fields.y;
        z = v2->fields.positionLevelDanger.fields.z;
        goto LABEL_113;
      }
    }
    else if ( !v49 )
    {
      goto LABEL_123;
    }
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0LL);
    if ( !v2->fields.servantLevel )
      goto LABEL_123;
    v57 = (char)this;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                0LL);
    if ( (v57 & 1) != 0 )
    {
      if ( !this )
        goto LABEL_123;
      x = v2->fields.positionLevelNpc.fields.x;
      y = v2->fields.positionLevelNpc.fields.y;
      z = v2->fields.positionLevelNpc.fields.z;
    }
    else
    {
      if ( !this )
        goto LABEL_123;
      x = v2->fields.positionLevel.fields.x;
      y = v2->fields.positionLevel.fields.y;
      z = v2->fields.positionLevel.fields.z;
    }
LABEL_113:
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  v58 = v2->fields.pieceData;
  if ( !v58 )
    goto LABEL_123;
  if ( !v58->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_123;
  v59 = v2->fields.pieceData;
  if ( !v59 )
    goto LABEL_123;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_123;
  v60 = WarBoardData__GetSquare((WarBoardData_o *)this, v59->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !v60 )
    return;
  this = (WarBoardServantPieceComponent_o *)v60->fields.squareComponent;
  if ( !this )
    goto LABEL_123;
  WarBoardSquareComponent__DeactiveEditPointArrow((WarBoardSquareComponent_o *)this, v61);
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

  if ( (byte_4216566 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4216566 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AA65A4(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_B0D97C(transform);
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
  __int64 v10; // x0

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
    if ( (int)v8->max_length >= 3 )
    {
      this = (WarBoardServantPieceComponent_o *)v8->m_Items[2];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_26;
      if ( progress > 2.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v9 = v5->fields.npBars;
        if ( !v9 )
          goto LABEL_26;
        if ( v9->max_length > 2 )
        {
          this = (WarBoardServantPieceComponent_o *)v9->m_Items[2];
          if ( this )
          {
            UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0LL);
            return;
          }
LABEL_26:
          sub_B0D97C(this);
        }
LABEL_27:
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
    sub_B0D97C(this);
  return x->fields._forceId_k__BackingField != pieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardServantPieceComponent___OnDead_b__46_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_421657C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_421657C = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(button);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213895 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_4213895 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardServantPieceComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  unsigned int monitor; // w8
  __int64 v6; // x0

  if ( (byte_4213896 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, x);
    byte_4213896 = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_B0D97C(result);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    v6 = sub_B0D9A8(result);
    sub_B0D948(v6, 0LL);
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
  WarBoardEventBossUIComponent_o *Instance; // x0
  struct UISprite_o *hpBarWhiteSprite; // x8
  System_String_o *mGo; // x20
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_4213897 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4213897 = 1;
  }
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  hpBarWhiteSprite = Instance[1].fields.hpBarWhiteSprite;
  if ( !hpBarWhiteSprite )
    goto LABEL_12;
  mGo = (System_String_o *)hpBarWhiteSprite->fields.mGo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(mGo, 0LL);
  Instance = this->fields.eventBossUI;
  if ( Instance )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      WarBoardEventBossUIComponent__PlayHpRecover(Instance, _4__this->fields.gaugeAnimationFullDuration, 0LL, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(Instance);
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
  WarBoardServantPieceComponent___c__DisplayClass49_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v3 = this;
  if ( (byte_4213898 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_B0D8A4(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v4);
    byte_4213898 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !eventBossUI )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
  WarBoardServantPieceComponent___c__DisplayClass51_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v3 = this;
  if ( (byte_4213899 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_B0D8A4(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v4);
    byte_4213899 = 1;
  }
  _9__2 = v3->fields.__9__2;
  eventBossUI = v3->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !eventBossUI )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_31A08F0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_31A3A00;
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

  if ( (byte_4189281 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189281 = 1;
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
    sub_B2C434(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_4189280 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12709/*"ServantDying"*/, v3);
    byte_4189280 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_14;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12709/*"ServantDying"*/,
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
      sub_B2C434(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12709/*"ServantDying"*/,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(pieceData, isBreak);
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

  if ( (byte_418928C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418928C = 1;
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
      sub_B2C434(v4, v5);
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
  __int64 v11; // x0

  if ( (byte_418928A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, selectPiece);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418928A = 1;
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
      v8 = (struct ServantClassCompatibilityIconComponent_o *)sub_B2C374(int___TypeInfo, 1LL);
      if ( v8 )
      {
        v9 = (System_Int32_array *)v8;
        if ( !LODWORD(v8->fields.upIconSprite) )
        {
          v11 = sub_B2C460(v8);
          sub_B2C400(v11, 0LL);
        }
        LODWORD(v8->fields.downIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
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
LABEL_15:
      sub_B2C434(v8, v7);
    }
    v8 = this->fields.classCompatibilityIcon;
    if ( !v8 )
      goto LABEL_15;
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
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x20
  System_Delegate_o *v25; // x22
  WarBoardTaskBase_TaskCallback_o *v26; // x23
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WarBoardTaskBase_o *result; // x0
  WarBoardServantPieceComponent_o *v35; // x0
  WarBoardManager_TaskList_o *v36; // x2
  bool v37; // w3
  const MethodInfo *v38; // x4
  System_Nullable_float__o v39; // 0:x1.8

  if ( (byte_4189288 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, eventBossUI);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6);
    sub_B2C35C(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v7);
    sub_B2C35C(&WarBoardWaitTime_TypeInfo, v8);
    byte_4189288 = 1;
  }
  v9 = sub_B2C42C(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v9,
    0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = eventBossUI,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)eventBossUI,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v9 + 24) = endAction,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 24),
          (System_Int32_array **)endAction,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        v24 = sub_B2C42C(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v24, 0.0, 0LL),
        !v24) )
  {
    sub_B2C434(v10, v11);
  }
  v25 = *(System_Delegate_o **)(v24 + 40);
  v26 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v27 = (System_Int32_array **)System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0LL);
  if ( v27 && *v27 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v35 = (WarBoardServantPieceComponent_o *)sub_B2C728(v27);
    WarBoardServantPieceComponent__OnDead(v35, v39, v36, v37, v38);
  }
  else
  {
    *(_QWORD *)(v24 + 40) = v27;
    sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 40), v27, v28, v29, v30, v31, v32, v33);
    *(_BYTE *)(v24 + 26) = 1;
    return (WarBoardTaskBase_o *)v24;
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Func_bool__o *v20; // x20
  UnityEngine_WaitUntil_o *v21; // x21
  __int64 v22; // x20
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v33; // x0
  int32_t v34; // w1
  WarBoardManager_TaskList_o *v35; // x3
  int32_t v36; // w4
  WarBoardTaskBase_TaskCallback_o *v37; // x5
  bool v38; // w6
  const MethodInfo *v39; // x7
  System_Nullable_float__o v40; // 0:x2.8

  if ( (byte_4189287 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__, v6);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__, v7);
    sub_B2C35C(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v10);
    byte_4189287 = 1;
  }
  v11 = sub_B2C42C(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = eventBossUI;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)eventBossUI,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_BYTE *)(v11 + 16) = 0;
  v20 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
  v22 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v21, 0LL);
  if ( !v22 )
LABEL_8:
    sub_B2C434(v12, v13);
  v23 = *(System_Delegate_o **)(v22 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v25 = (System_Int32_array **)System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  if ( v25 && *v25 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v33 = (WarBoardServantPieceComponent_o *)sub_B2C728(v25);
    WarBoardServantPieceComponent__OnBreak(v33, v34, v40, v35, v36, v37, v38, v39);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v25;
    sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 32), v25, v26, v27, v28, v29, v30, v31);
    return (WarBoardCallbackTask_o *)v22;
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Func_bool__o *v20; // x20
  UnityEngine_WaitUntil_o *v21; // x21
  __int64 v22; // x20
  System_Delegate_o *v23; // x22
  WarBoardTaskBase_TaskCallback_o *v24; // x23
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v33; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v34; // x1
  const MethodInfo *v35; // x2

  if ( (byte_4189289 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, eventBossUI);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v6);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v7);
    sub_B2C35C(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v9);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v10);
    byte_4189289 = 1;
  }
  v11 = sub_B2C42C(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = eventBossUI;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)eventBossUI,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_BYTE *)(v11 + 16) = 0;
  v20 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
  v22 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v21, 0LL);
  if ( !v22 )
LABEL_8:
    sub_B2C434(v12, v13);
  v23 = *(System_Delegate_o **)(v22 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v25 = (System_Int32_array **)System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  if ( v25 && *v25 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v33 = (WarBoardServantPieceComponent_o *)sub_B2C728(v25);
    WarBoardServantPieceComponent__OnRevive(v33, v34, v35);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v25;
    sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 32), v25, v26, v27, v28, v29, v30, v31);
    return (WarBoardCallbackTask_o *)v22;
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

  if ( (byte_418927F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_418927F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B2C434(0LL, method);
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
    sub_B2C434(servantIcon, method);
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
    sub_B2C434(servantIcon, method);
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
  __int64 v18; // x1
  struct WarBoardPieceData_o *pieceData; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  unsigned int v21; // w8
  struct WarBoardPieceData_o *v22; // x9
  struct WarBoardPieceData_o *v23; // x9
  _QWORD **v24; // x23
  __int64 v25; // x22
  __int16 v26; // w8
  __int64 v27; // x22
  __int64 v28; // x22
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  WarBoardServantPieceComponent___c_c *v34; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__43_1; // x21
  Il2CppObject *v37; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  __int64 v48; // x0

  if ( (byte_4189282 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, warBoardData);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v9);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v11);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B2C35C(&int___TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v14);
    sub_B2C35C(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B2C35C(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v16);
    byte_4189282 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B2C374(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_34;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_34;
  v21 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v21 )
    goto LABEL_35;
  LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField;
  v22 = this->fields.pieceData;
  if ( !v22 )
    goto LABEL_34;
  if ( v21 <= 1 )
    goto LABEL_35;
  HIDWORD(BattleParticipantInfo[1].klass) = v22->fields._groupId_k__BackingField;
  v23 = this->fields.pieceData;
  if ( !v23 )
    goto LABEL_34;
  if ( v21 <= 2 )
  {
LABEL_35:
    v48 = sub_B2C460(BattleParticipantInfo);
    sub_B2C400(v48, 0LL);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = v23->fields._index_k__BackingField;
  v24 = (_QWORD **)Method_System_Array_Empty_int___;
  v25 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v26 = *(_WORD *)(v25 + 306);
  if ( (v26 & 1) == 0 )
  {
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___
                                                                                + 6));
    v26 = *(_WORD *)(v25 + 306);
  }
  if ( (v26 & 0x400) != 0 )
  {
    v27 = *v24[6];
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AC505C(*v24[6]);
    if ( !*(_DWORD *)(v27 + 224) )
    {
      v28 = *v24[6];
      if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
        sub_AC505C(*v24[6]);
      j_il2cpp_runtime_class_init_0(v28);
    }
  }
  v29 = *v24[6];
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AC505C(*v24[6]);
  if ( !warBoardData
    || (v30 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v29 + 184),
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_34:
    sub_B2C434(BattleParticipantInfo, v18);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v32,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v34 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v34 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__43_1,
        v37,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        (const MethodInfo_2713350 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v38 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v38->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v38->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 v33,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v45,
                                                                 (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v46 = System_Linq_Enumerable__Concat_int_(
          v20,
          v30,
          (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v46,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4189291 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4189291 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_B2C434(button, method);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v28; // x2
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418927A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, pieceData);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_19374/*"icon_strong_enemy"*/, v7);
    sub_B2C35C(&StringLiteral_19185/*"hp_gauge_boss"*/, v8);
    sub_B2C35C(&StringLiteral_21982/*"servant_base_{0}"*/, v9);
    byte_418927A = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_42;
  frameSprite = this->fields.frameSprite;
  v29 = pieceData->fields._forceId_k__BackingField + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  hpBar = System_String__Format((System_String_o *)StringLiteral_21982/*"servant_base_{0}"*/, v13, 0LL);
  if ( !frameSprite )
    goto LABEL_42;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_42;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19185/*"hp_gauge_boss"*/, 0LL);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v15);
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
    v17 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v17 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v17, (unsigned __int8)hpBar & 1, 0LL);
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
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19374/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_39;
            }
          }
        }
LABEL_42:
        sub_B2C434(hpBar, v11);
      }
    }
  }
LABEL_39:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&buffTrunNotice->fields.pieceData,
      (System_Int32_array **)pieceData,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v28);
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
    sub_B2C434(this, method);
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
  __int64 v4; // x1

  if ( (byte_418927E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418927E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarBoardManager_TaskList_o *v33; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_2155668 *v35; // x2
  WarBoardData_o *klass; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x26
  const MethodInfo *v39; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x22
  WebViewManager_o *v41; // x22
  const MethodInfo_2155668 *v42; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  bool IsStageBoss; // w0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **EventBossUI; // x1
  WarBoardManager_o *v52; // x22
  WarBoardEventBossUIComponent_o **v53; // x22
  UnityEngine_Object_o *v54; // x27
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v58; // x0
  const MethodInfo *v59; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIBreakTask; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v64; // x21
  System_Delegate_o *v65; // x23
  WarBoardTaskBase_TaskCallback_o *v66; // x24
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  WarBoardServantPieceComponent_o *v74; // x0
  WarBoardEventBossUIComponent_o *v75; // x1
  System_Action_o *v76; // x2
  const MethodInfo *v77; // x3
  WarBoardManager_TaskList_o *v78; // [xsp+18h] [xbp-78h]
  System_Nullable_Vector3__o v79; // [xsp+20h] [xbp-70h] BYREF
  int32_t dummyPointa; // [xsp+38h] [xbp-58h]
  int32_t priority; // [xsp+3Ch] [xbp-54h] BYREF
  System_Nullable_float__o v82; // 0:x2.8
  System_Nullable_float__o v83; // 0:x3.8
  System_Nullable_float__o v84; // 0:x3.8
  System_Nullable_Vector3__o v85; // 0:x0.16
  System_Nullable_Vector3__o v86; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_4189284 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldBreakPoint);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v19);
    sub_B2C35C(&WarBoardManager_TaskList_TypeInfo, v20);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v21);
    sub_B2C35C(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v22);
    sub_B2C35C(&WarBoardGaugePerformance_TypeInfo, v23);
    byte_4189284 = 1;
  }
  priority = 0;
  v24 = sub_B2C42C(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_40;
  *(_QWORD *)(v24 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  v33 = (WarBoardManager_TaskList_o *)sub_B2C42C(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v33, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v85.fields.value.fields.x = &v79;
    *(_QWORD *)&v79.fields.value.fields.x = 0LL;
    *(_QWORD *)&v79.fields.value.fields.z = 0LL;
    *(_QWORD *)&v85.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v85, localPosition, v35);
    if ( !Instance )
      goto LABEL_40;
    v83 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v79,
                                             v83,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v33 )
      goto LABEL_40;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v78 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  klass = (WarBoardData_o *)transform[18].klass;
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, klass, v39);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18165688(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v37 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18165688(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v38 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v33 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
    (System_Collections_Generic_IEnumerable_T__o *)v37,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    v88 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v86.fields.value.fields.x = &v79;
    v79 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v86.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v86, v88, v42);
    if ( !v41 )
      goto LABEL_40;
    v84 = cameraSize;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)v41,
                                                                                     v79,
                                                                                     v84,
                                                                                     1,
                                                                                     1,
                                                                                     0,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
      CameraPerformanceTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_40;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_40;
    v52 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v52 )
      goto LABEL_40;
    EventBossUI = (System_Int32_array **)WarBoardManager__GetEventBossUI(v52, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v24 + 16) = EventBossUI;
  v53 = (WarBoardEventBossUIComponent_o **)(v24 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), EventBossUI, v45, v46, v47, v48, v49, v50);
  v54 = *(UnityEngine_Object_o **)(v24 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v55 = UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
  if ( v55 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v55,
                                                                                *v53,
                                                                                v56);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
      BossUIDamageTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIBreakTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(
                                                                               v58,
                                                                               *v53,
                                                                               0LL,
                                                                               v59);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
      BossUIBreakTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v82 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v82,
    v33,
    dummyPointa,
    0LL,
    1,
    0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_40:
    sub_B2C434(transform, v26);
  if ( pieceData->fields._isDead_k__BackingField )
  {
LABEL_36:
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
      (System_Collections_Generic_IEnumerable_T__o *)v38,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    if ( v78 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v78,
        (System_Collections_Generic_IEnumerable_T__o *)v33,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      v78->fields._SubPriority_k__BackingField = priority;
      return;
    }
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( transform )
    {
      WarBoardManager__AddTask_18201492(
        (WarBoardManager_o *)transform,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
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
  v64 = sub_B2C42C(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v64, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v64 )
    goto LABEL_40;
  v65 = *(System_Delegate_o **)(v64 + 32);
  v66 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v66,
    (Il2CppObject *)v24,
    Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v67 = (System_Int32_array **)System_Delegate__Combine(v65, (System_Delegate_o *)v66, 0LL);
  if ( !v67 || *v67 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v64 + 32) = v67;
    sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 32), v67, v68, v69, v70, v71, v72, v73);
    *(_BYTE *)(v64 + 26) = 1;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_36;
  }
  v74 = (WarBoardServantPieceComponent_o *)sub_B2C728(v67);
  WarBoardServantPieceComponent__CreateBossUIBreakTask(v74, v75, v76, v77);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  WarBoardServantPieceComponent_o *v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4189283 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_4189283 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_17;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v14, EventBossUI, v15);
    if ( v13 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)pieceData,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      WarBoardPieceBaseComponent__OnDamage(
        (WarBoardPieceBaseComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
        0LL);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v13,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( pieceData )
      {
        WarBoardManager__AddTask_18201492(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v13, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B2C434(pieceData, taskList);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x2
  WarBoardServantPieceComponent_o *v39; // x0
  const MethodInfo *v40; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDeadTask; // x0
  WarBoardManager_o *v42; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v44; // x26
  WarBoardMessageMaster_o *Master_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v47; // x24
  int32_t id; // w0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_18165688; // x0
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  const MethodInfo *v51; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_IEnumerable_T__o *v53; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  WebViewManager_o *Instance; // x23
  const MethodInfo_2155668 *v58; // x2
  bool IsEnemyMonster; // w0
  System_String_o **v60; // x8
  System_String_o *v61; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x23
  __int64 v65; // x25
  __int64 v66; // x26
  ServantEntity_o *v67; // x25
  float v68; // w23
  bool v69; // w0
  Il2CppObject *v70; // x0
  BattleServantConfConponent_o *v71; // x23
  System_Delegate_o *v72; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v73; // x22
  WarBoardTaskBase_TaskCallback_o *v74; // x26
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  WarBoardWaitTime_o *v82; // x20
  WarBoardServantPieceComponent_o *v83; // x0
  WarBoardEventBossUIComponent_o *v84; // x1
  const MethodInfo *v85; // x2
  System_Nullable_float__o size; // [xsp+8h] [xbp-78h]
  WarBoardManager_TaskList_o *v87; // [xsp+10h] [xbp-70h]
  System_Nullable_Vector3__o v88; // [xsp+18h] [xbp-68h] BYREF
  int32_t priority; // [xsp+2Ch] [xbp-54h] BYREF
  System_Nullable_float__o v90; // 0:x3.8
  System_Nullable_Vector3__o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189285 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, cameraSize);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_B2C35C(&WarBoardManager_TypeInfo, v24);
    sub_B2C35C(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v25);
    sub_B2C35C(&WarBoardWaitTime_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_6139/*"Escape_Effect"*/, v27);
    sub_B2C35C(&StringLiteral_5998/*"Enemy_Dead_Effect"*/, v28);
    sub_B2C35C(&StringLiteral_12726/*"Servant_Dead_Effect"*/, v29);
    sub_B2C35C(&StringLiteral_12961/*"Special_Effect{0:D2}"*/, v30);
    byte_4189285 = 1;
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_84;
    v34 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v34 )
      goto LABEL_84;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v34, (int32_t)gameObject, 0LL);
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
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v37 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v37,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v38);
    if ( !v36 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIDeadTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                                                                              v39,
                                                                              (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                              v40);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      BossUIDeadTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v42 = (WarBoardManager_o *)gameObject;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !v42 )
      goto LABEL_84;
    Task = WarBoardManager__FindTask(v42, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  v87 = taskList;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  size = cameraSize;
  v44 = (WarBoardData_o *)*((_QWORD *)gameObject + 54);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MessageTasks,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v47 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v44 )
    goto LABEL_84;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v44, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v44, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     Master_WarQuestSelectionMaster,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v44, 0LL);
    v47 = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v47 )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks_18165688 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18165688(
                                                                         (WarBoardManager_o *)gameObject,
                                                                         24,
                                                                         &priority,
                                                                         0LL,
                                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks_18165688,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v50 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18165688(
                                                         (WarBoardManager_o *)gameObject,
                                                         25,
                                                         &priority,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    v50,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v44, v51);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v53 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18165688(
                                                         (WarBoardManager_o *)gameObject,
                                                         34,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    v53,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v54 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18165688(
                                                         (WarBoardManager_o *)gameObject,
                                                         35,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    v54,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)gameObject,
                                                                22,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    EventTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v56 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)gameObject,
                                                         23,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    v56,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_84;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v91.fields.value.fields.x = &v88;
    *(_QWORD *)&v88.fields.value.fields.x = 0LL;
    *(_QWORD *)&v88.fields.value.fields.z = 0LL;
    *(_QWORD *)&v91.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v91, localPosition, v58);
    if ( !Instance )
      goto LABEL_84;
    v90 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v88, v90, 1, 1, 0, 0LL);
    if ( !v36 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_84;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v60 = (System_String_o **)&StringLiteral_5998/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v60 = (System_String_o **)&StringLiteral_12726/*"Servant_Dead_Effect"*/;
  v61 = *v60;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_84;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_84;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v66 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v92.fields.currentCryptoKey = v66;
  *(_QWORD *)&v92.fields.fakeValue = v65;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v92, 0LL);
  if ( !v64 )
    goto LABEL_84;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v64,
                 (int32_t)gameObject,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_84;
  v67 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v67 )
    goto LABEL_84;
  v68 = *(float *)&gameObject;
  v69 = ServantEntity__checkIsHeroineSvt(v67, 0LL);
  if ( LODWORD(v68) == 1 || v69 )
  {
    v61 = (System_String_o *)StringLiteral_6139/*"Escape_Effect"*/;
  }
  else if ( SLODWORD(v68) >= 2 )
  {
    v88.fields.value.fields.x = v68;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88);
    v61 = System_String__Format((System_String_o *)StringLiteral_12961/*"Special_Effect{0:D2}"*/, v70, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v61, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v71 = (BattleServantConfConponent_o *)((char *)gameObject + 40);
  v72 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v73 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v74 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v74,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v75 = (System_Int32_array **)System_Delegate__Combine(v72, (System_Delegate_o *)v74, 0LL);
  if ( v75 && *v75 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v83 = (WarBoardServantPieceComponent_o *)sub_B2C728(v75);
    WarBoardServantPieceComponent__CreateBossUIDeadTask(v83, v84, v85);
    return;
  }
  v71->klass = (BattleServantConfConponent_c *)v75;
  sub_B2C2F8(v71, v75, v76, v77, v78, v79, v80, v81);
  if ( !v36 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v36,
    v73,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v82 = (WarBoardWaitTime_o *)sub_B2C42C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v82, 0.5, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v36,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v47,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)v47,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v87 )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v87,
      (System_Collections_Generic_IEnumerable_T__o *)v36,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v87->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_84;
    WarBoardManager__InsertTask_18194508(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
LABEL_84:
    sub_B2C434(gameObject, v32);
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4189290 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18190/*"ef_guts"*/, taskList);
    byte_4189290 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18190/*"ef_guts"*/,
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

  if ( (byte_418928F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18210/*"ef_special_invincible01"*/, taskList);
    byte_418928F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18210/*"ef_special_invincible01"*/,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  int v18; // w23
  int v19; // w24
  int v20; // w25
  int32_t MaxHp; // w0
  int v22; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v25; // s10
  __int64 v26; // x21
  System_Delegate_o *v27; // x23
  WarBoardServantPieceComponent___c_c *v28; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarBoardServantPieceComponent_o *v46; // x0
  System_Action_o *v47; // x1
  const MethodInfo *v48; // x2

  if ( (byte_418928D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&damage);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v12);
    sub_B2C35C(&WarBoardServantPieceComponent___c_TypeInfo, v13);
    sub_B2C35C(&WarBoardGaugePerformance_TypeInfo, v14);
    byte_418928D = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v18 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v19 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v20 = (int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v22 = v20 - damage;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v25 = (float)v22 / (float)MaxHp;
    v26 = sub_B2C42C(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor(
      (WarBoardGaugePerformance_o *)v26,
      hpBar,
      (float)v18 / (float)v19,
      v25,
      gaugeAnimationFullDuration,
      0LL);
    if ( !v26 )
      goto LABEL_26;
    v27 = *(System_Delegate_o **)(v26 + 32);
    v28 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v28 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__57_0 = static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__57_0,
        v31,
        Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
        0LL);
      v32 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v32->__9__57_0 = _9__57_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v32->__9__57_0,
        (System_Int32_array **)_9__57_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Int32_array **)System_Delegate__Combine(v27, (System_Delegate_o *)_9__57_0, 0LL);
    if ( !v39 || *v39 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v26 + 32) = v39;
      sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 32), v39, v40, v41, v42, v43, v44, v45);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v17 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v17,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18201492(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v17,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B2C434(gameObject, v16);
    }
    v46 = (WarBoardServantPieceComponent_o *)sub_B2C728(v39);
    WarBoardServantPieceComponent__Reinforcements(v46, v47, v48);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  float v20; // s8
  int32_t MaxHp; // w0
  int v22; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v25; // s10
  __int64 v26; // x21
  System_Delegate_o *v27; // x23
  WarBoardServantPieceComponent___c_c *v28; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v31; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarBoardServantPieceComponent_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_4189292 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&oldHp);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v14);
    sub_B2C35C(&WarBoardServantPieceComponent___c_TypeInfo, v15);
    sub_B2C35C(&WarBoardGaugePerformance_TypeInfo, v16);
    byte_4189292 = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_24;
    v20 = (float)oldHp / (float)(int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v22 = gainHp + oldHp;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v25 = (float)v22 / (float)MaxHp;
    v26 = sub_B2C42C(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v26, hpBar, v20, v25, gaugeAnimationFullDuration, 0LL);
    if ( !v26 )
      goto LABEL_24;
    v27 = *(System_Delegate_o **)(v26 + 32);
    v28 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v28 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__63_0 = static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__63_0,
        v31,
        Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
        0LL);
      v32 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v32->__9__63_0 = _9__63_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v32->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Int32_array **)System_Delegate__Combine(v27, (System_Delegate_o *)_9__63_0, 0LL);
    if ( !v39 || *v39 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v26 + 32) = v39;
      sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 32), v39, v40, v41, v42, v43, v44, v45);
      *(_BYTE *)(v26 + 26) = 0;
      if ( v19 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v19,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18201492(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
            0LL);
          return;
        }
      }
LABEL_24:
      sub_B2C434(gameObject, v18);
    }
    v46 = (WarBoardServantPieceComponent_o *)sub_B2C728(v39);
    WarBoardServantPieceComponent___ctor(v46, v47);
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
  __int64 v15; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v17; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v19; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  WebViewManager_o *v24; // x22
  const MethodInfo_2155668 *v25; // x2
  BattleServantConfConponent_o *p_deactiveObject; // x23
  System_Delegate_o *deactiveObject; // x24
  WarBoardBreakPointComponent_o *v28; // x22
  WarBoardTaskBase_TaskCallback_o *v29; // x25
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarBoardWaitTime_o *v37; // x20
  __int64 v38; // x0
  WarBoardServantPieceComponent_o *v39; // x0
  bool v40; // w1
  const MethodInfo *v41; // x2
  System_Nullable_Vector3__o v42; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v43; // 0:x3.8
  System_Nullable_Vector3__o v44; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189286 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v11);
    sub_B2C35C(&WarBoardWaitTime_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_12727/*"Servant_Regenerate_Effect"*/, v13);
    byte_4189286 = 1;
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
      {
        v38 = sub_B2C460(Instance);
        sub_B2C400(v38, 0LL);
      }
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
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v46.fields.x = x;
  v46.fields.y = y;
  v46.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v46, 0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v44.fields.value.fields.x = &v42;
  *(_QWORD *)&v42.fields.value.fields.x = 0LL;
  *(_QWORD *)&v42.fields.value.fields.z = 0LL;
  *(_QWORD *)&v44.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v44, localPosition, v25);
  if ( !v24 )
    goto LABEL_10;
  v43 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v24,
                                                v42,
                                                v43,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v23 )
    goto LABEL_10;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v23,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12727/*"Servant_Regenerate_Effect"*/,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  p_deactiveObject = (BattleServantConfConponent_o *)&Instance->fields.deactiveObject;
  deactiveObject = (System_Delegate_o *)Instance->fields.deactiveObject;
  v28 = Instance;
  BYTE2(Instance->fields.activeObject) = 1;
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v30 = (System_Int32_array **)System_Delegate__Combine(deactiveObject, (System_Delegate_o *)v29, 0LL);
  if ( !v30 || *v30 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v28->fields.deactiveObject = (struct UISprite_o *)v30;
    sub_B2C2F8(p_deactiveObject, v30, v31, v32, v33, v34, v35, v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v37 = (WarBoardWaitTime_o *)sub_B2C42C(WarBoardWaitTime_TypeInfo);
    WarBoardWaitTime___ctor(v37, 0.5, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v23,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    }
    else
    {
      Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_10;
      WarBoardManager__InsertTask_18194508(
        (WarBoardManager_o *)Instance,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
        0LL);
    }
    Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v15);
  }
  v39 = (WarBoardServantPieceComponent_o *)sub_B2C728(v30);
  WarBoardServantPieceComponent__SetActiveNpBarEffect(v39, v40, v41);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_2155668 *v31; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x19
  BattleServantConfConponent_o *v33; // x22
  System_Delegate_o *v34; // x23
  WarBoardTaskBase_TaskCallback_o *v35; // x24
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewManager_o *v43; // x19
  WarBoardServantPieceComponent_o *v44; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v45; // x1
  const MethodInfo *v46; // x2
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v48; // 0:x3.8
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418928E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v11);
    sub_B2C35C(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_11378/*"Reinforcement_Effect_1"*/, v13);
    byte_418928E = 1;
  }
  v14 = sub_B2C42C(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v49.fields.value.fields.x = &v47;
  *(_QWORD *)&v47.fields.value.fields.x = 0LL;
  *(_QWORD *)&v47.fields.value.fields.z = 0LL;
  *(_QWORD *)&v49.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v49, localPosition, v31);
  if ( !Instance )
    goto LABEL_12;
  v48 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v47, v48, 1, 0, 1, 0LL);
  if ( !v29 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11378/*"Reinforcement_Effect_1"*/,
                        0LL);
  if ( !transform )
    goto LABEL_12;
  v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v33 = (BattleServantConfConponent_o *)(transform + 40);
  v34 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v36 = (System_Int32_array **)System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  if ( !v36 || *v36 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v32[1].klass = (EventMissionProgressRequest_Argument_ProgressData_c *)v36;
    sub_B2C2F8(v33, v36, v37, v38, v39, v40, v41, v42);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      v32,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v43 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v43, (WarBoardTaskBase_array *)transform, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(transform, v16);
  }
  v44 = (WarBoardServantPieceComponent_o *)sub_B2C728(v36);
  WarBoardServantPieceComponent__OnInvincible(v44, v45, v46);
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
    if ( !this
      || (*(_QWORD *)&active = WarBoardPieceData__get_CurrentNpProgress((WarBoardPieceData_o *)this, 0LL) >= 1.0,
          !npBarEffect) )
    {
LABEL_7:
      sub_B2C434(this, active);
    }
  }
  else
  {
    *(_QWORD *)&active = 0LL;
    if ( !npBarEffect )
      goto LABEL_7;
  }
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
  __int64 v12; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v14; // x0
  __int64 v15; // x0
  int v16; // [xsp+4h] [xbp-1Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418927B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21230/*"onBoard_initial_placement_class2_{0}"*/, v7);
    byte_418927B = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_23:
    sub_B2C434(classIconRoot, method);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
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
    v15 = sub_B2C460(ServantClassEntities);
    sub_B2C400(v15, 0LL);
  }
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_23;
LABEL_21:
  classIcon = this->fields.classIcon;
  v16 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21230/*"onBoard_initial_placement_class2_{0}"*/, v14, 0LL);
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
  const MethodInfo *v7; // x1
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_418928B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, *(_QWORD *)&level);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418928B = 1;
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
             (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
LABEL_15:
    sub_B2C434(pieceData, v7);
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
    sub_B2C434(this, userServantId);
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
    sub_B2C434(this, userServantEquipId);
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
  char v56; // w20
  struct WarBoardPieceData_o *v57; // x8
  struct WarBoardPieceData_o *v58; // x8
  WarBoardSquareData_o *v59; // x0
  int32_t v60; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-28h] BYREF
  int32_t v62; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_418927C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_21644/*"questinfo_enemyface_bg"*/, v10);
    this = (WarBoardServantPieceComponent_o *)sub_B2C35C(&StringLiteral_15272/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v11);
    byte_418927C = 1;
  }
  v62 = 0;
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
                  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                          WarBoardSquareComponent__ActiveEditPointArrow((WarBoardSquareComponent_o *)this, method);
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
  v62 = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v14->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v14->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_123;
    servantLevel = (int32_t)this->fields.servantLevel;
    iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v60 = npcDispLimitCount_k__BackingField;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v24 = System_String__Concat(v22, v23, 0LL);
    enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
    v26 = v24;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_28451336(servantLevel, enemyIcon, v26, 0LL) )
      goto LABEL_35;
    v27 = (UISprite_o *)v2->fields.enemyIcon;
    v28 = System_Int32__ToString((int32_t)&v62, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_28451336(servantLevel, v27, v28, 0LL) )
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
    this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_28451336(
                                                servantLevel,
                                                enemyIconBg,
                                                (System_String_o *)StringLiteral_21644/*"questinfo_enemyface_bg"*/,
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
    sub_B2C434(this, method);
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
    this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15272/*"WARBOARD_PIECE_ICON_SVT_LV"*/, 0LL);
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
    v56 = (char)this;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                0LL);
    if ( (v56 & 1) != 0 )
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
  v57 = v2->fields.pieceData;
  if ( !v57 )
    goto LABEL_123;
  if ( !v57->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_123;
  v58 = v2->fields.pieceData;
  if ( !v58 )
    goto LABEL_123;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_123;
  v59 = WarBoardData__GetSquare((WarBoardData_o *)this, v58->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !v59 )
    return;
  this = (WarBoardServantPieceComponent_o *)v59->fields.squareComponent;
  if ( !this )
    goto LABEL_123;
  WarBoardSquareComponent__DeactiveEditPointArrow((WarBoardSquareComponent_o *)this, method);
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
  __int64 v8; // x1
  int v9; // s0

  if ( (byte_418927D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_418927D = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_B2C434(transform, v8);
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
          sub_B2C434(this, method);
        }
LABEL_27:
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, x);
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
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_4189293 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4189293 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(button, method);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418671A & 1) == 0 )
  {
    sub_B2C35C(&WarBoardServantPieceComponent___c_TypeInfo, v1);
    byte_418671A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v7; // x0

  if ( (byte_418671B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, x);
    byte_418671B = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_B2C374(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_B2C434(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    v7 = sub_B2C460(result);
    sub_B2C400(v7, 0LL);
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
  __int64 v5; // x1
  struct UISprite_o *hpBarWhiteSprite; // x8
  System_String_o *mGo; // x20
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_418671C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418671C = 1;
  }
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B2C434(Instance, v5);
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
  WarBoardServantPieceComponent___c__DisplayClass49_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_418671D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_B2C35C(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v3);
    byte_418671D = 1;
  }
  _9__2 = v2->fields.__9__2;
  eventBossUI = v2->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !eventBossUI )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
  WarBoardServantPieceComponent___c__DisplayClass51_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_418671E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_B2C35C(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v3);
    byte_418671E = 1;
  }
  _9__2 = v2->fields.__9__2;
  eventBossUI = v2->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !eventBossUI )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  struct WarBoardServantPieceComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
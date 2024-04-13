void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_32A1BD0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_32A51E0;
  this->fields.positionLevelNpc.fields.z = 0.0;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, 0LL);
}


void __fastcall WarBoardServantPieceComponent__ChangeCriticalStars(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceData_o *pieceData; // x0
  UnityEngine_Object_o *criticalStarsLabel; // x20
  UILabel_o *v7; // x19
  int32_t CriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAB61 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB61 = 1;
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
    v7 = this->fields.criticalStarsLabel;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&CriticalStars, 0LL);
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)pieceData, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_42EAB60 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12860/*"ServantDying"*/, v5, v6, v7);
    byte_42EAB60 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_14;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12860/*"ServantDying"*/,
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
      sub_B5D69C(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12860/*"ServantDying"*/,
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
      sub_B5D69C(pieceData, isBreak);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *partyBuffComponent; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  WarBoardServantPiecePartyBuffComponent_o *v8; // x19
  const MethodInfo *v9; // x2

  if ( (byte_42EAB6C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB6C = 1;
  }
  partyBuffComponent = (UnityEngine_Object_o *)this->fields.partyBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(partyBuffComponent, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.partyBuffComponent;
    if ( !v8 )
      sub_B5D69C(v6, v7);
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v8, v7);
    WarBoardServantPiecePartyBuffComponent__SetActive(v8, 0, v9);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v10; // x1
  struct ServantClassCompatibilityIconComponent_o *v11; // x0
  System_Int32_array *v12; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v14; // x0

  if ( (byte_42EAB6A & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)selectPiece, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EAB6A = 1;
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
      v11 = (struct ServantClassCompatibilityIconComponent_o *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( v11 )
      {
        v12 = (System_Int32_array *)v11;
        if ( !LODWORD(v11->fields.upIconSprite) )
        {
          v14 = sub_B5D6C8(v11);
          sub_B5D668(v14, 0LL);
        }
        LODWORD(v11->fields.downIconSprite) = selectPiece->fields._iconClassId_k__BackingField;
        pieceData = this->fields.pieceData;
        if ( pieceData )
        {
          v11 = this->fields.classCompatibilityIcon;
          if ( v11 )
          {
            ServantClassCompatibilityIconComponent__SetIcon(
              v11,
              pieceData->fields._iconClassId_k__BackingField,
              v12,
              4,
              0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_B5D69C(v11, v10);
    }
    v11 = this->fields.classCompatibilityIcon;
    if ( !v11 )
      goto LABEL_15;
    ServantClassCompatibilityIconComponent__Clear(v11, 0LL);
  }
}


WarBoardTaskBase_o *__fastcall WarBoardServantPieceComponent__CreateBossUIBreakTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x20
  System_Delegate_o *v31; // x22
  WarBoardTaskBase_TaskCallback_o *v32; // x23
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarBoardTaskBase_o *result; // x0
  WarBoardServantPieceComponent_o *v41; // x0
  WarBoardManager_TaskList_o *v42; // x2
  bool v43; // w3
  const MethodInfo *v44; // x4
  System_Nullable_float__o v45; // 0:x1.8

  if ( (byte_42EAB68 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, (_DWORD)eventBossUI, (_DWORD)endAction, method);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__, v6, v7, v8);
    sub_B5D5C4(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&WarBoardWaitTime_TypeInfo, v12, v13, v14);
    byte_42EAB68 = 1;
  }
  v15 = sub_B5D694(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v15,
    0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = eventBossUI,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)eventBossUI,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        *(_QWORD *)(v15 + 24) = endAction,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v15 + 24),
          (System_Int32_array **)endAction,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        v30 = sub_B5D694(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v30, 0.0, 0LL),
        !v30) )
  {
    sub_B5D69C(v16, v17);
  }
  v31 = *(System_Delegate_o **)(v30 + 40);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v33 = (System_Int32_array **)System_Delegate__Combine(v31, (System_Delegate_o *)v32, 0LL);
  if ( v33 && *v33 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v33);
    WarBoardServantPieceComponent__OnDead(v41, v45, v42, v43, v44);
  }
  else
  {
    *(_QWORD *)(v30 + 40) = v33;
    sub_B5D560((BattleServantConfConponent_o *)(v30 + 40), v33, v34, v35, v36, v37, v38, v39);
    *(_BYTE *)(v30 + 26) = 1;
    return (WarBoardTaskBase_o *)v30;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Func_bool__o *v35; // x20
  UnityEngine_WaitUntil_o *v36; // x21
  __int64 v37; // x20
  System_Delegate_o *v38; // x22
  WarBoardTaskBase_TaskCallback_o *v39; // x23
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v48; // x0
  int32_t v49; // w1
  WarBoardManager_TaskList_o *v50; // x3
  int32_t v51; // w4
  WarBoardTaskBase_TaskCallback_o *v52; // x5
  bool v53; // w6
  const MethodInfo *v54; // x7
  System_Nullable_float__o v55; // 0:x2.8

  if ( (byte_42EAB67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)eventBossUI, (_DWORD)method, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v23, v24, v25);
    byte_42EAB67 = 1;
  }
  v26 = sub_B5D694(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_8;
  *(_QWORD *)(v26 + 24) = eventBossUI;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 24),
    (System_Int32_array **)eventBossUI,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_BYTE *)(v26 + 16) = 0;
  v35 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v35,
    (Il2CppObject *)v26,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v36 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v36, v35, 0LL);
  v37 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, (UnityEngine_CustomYieldInstruction_o *)v36, 0LL);
  if ( !v37 )
LABEL_8:
    sub_B5D69C(v27, v28);
  v38 = *(System_Delegate_o **)(v37 + 32);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v26,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v40 = (System_Int32_array **)System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0LL);
  if ( v40 && *v40 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v40);
    WarBoardServantPieceComponent__OnBreak(v48, v49, v55, v50, v51, v52, v53, v54);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v40;
    sub_B5D560((BattleServantConfConponent_o *)(v37 + 32), v40, v41, v42, v43, v44, v45, v46);
    return (WarBoardCallbackTask_o *)v37;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Func_bool__o *v35; // x20
  UnityEngine_WaitUntil_o *v36; // x21
  __int64 v37; // x20
  System_Delegate_o *v38; // x22
  WarBoardTaskBase_TaskCallback_o *v39; // x23
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v48; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v49; // x1
  const MethodInfo *v50; // x2

  if ( (byte_42EAB69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)eventBossUI, (_DWORD)method, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__, v14, v15, v16);
    sub_B5D5C4(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v23, v24, v25);
    byte_42EAB69 = 1;
  }
  v26 = sub_B5D694(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_8;
  *(_QWORD *)(v26 + 24) = eventBossUI;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 24),
    (System_Int32_array **)eventBossUI,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_BYTE *)(v26 + 16) = 0;
  v35 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v35,
    (Il2CppObject *)v26,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v36 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v36, v35, 0LL);
  v37 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v37, (UnityEngine_CustomYieldInstruction_o *)v36, 0LL);
  if ( !v37 )
LABEL_8:
    sub_B5D69C(v27, v28);
  v38 = *(System_Delegate_o **)(v37 + 32);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v26,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v40 = (System_Int32_array **)System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0LL);
  if ( v40 && *v40 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v40);
    WarBoardServantPieceComponent__OnRevive(v48, v49, v50);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v40;
    sub_B5D560((BattleServantConfConponent_o *)(v37 + 32), v40, v41, v42, v43, v44, v45, v46);
    return (WarBoardCallbackTask_o *)v37;
  }
  return result;
}


void __fastcall WarBoardServantPieceComponent__EditPiece(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x20
  WarBoardManager_o *v7; // x0

  if ( (byte_42EAB5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    byte_42EAB5F = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AF52C4(v6);
  v7 = **(WarBoardManager_o ***)(v6 + 184);
  if ( !v7 )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(servantIcon, method);
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
    sub_B5D69C(servantIcon, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v43; // x1
  struct WarBoardPieceData_o *pieceData; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  unsigned int v46; // w8
  struct WarBoardPieceData_o *v47; // x9
  struct WarBoardPieceData_o *v48; // x9
  _QWORD **v49; // x23
  __int64 v50; // x22
  __int16 v51; // w8
  __int64 v52; // x22
  __int64 v53; // x22
  __int64 v54; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x20
  WarBoardServantPieceComponent___c_c *v59; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__43_1; // x21
  Il2CppObject *v62; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  __int64 v73; // x0

  if ( (byte_42EAB62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)warBoardData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&int___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__, v33, v34, v35);
    sub_B5D5C4(&WarBoardServantPieceComponent___c_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__, v39, v40, v41);
    byte_42EAB62 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B5D5DC(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_34;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_34;
  v46 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v46 )
    goto LABEL_35;
  LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField;
  v47 = this->fields.pieceData;
  if ( !v47 )
    goto LABEL_34;
  if ( v46 <= 1 )
    goto LABEL_35;
  HIDWORD(BattleParticipantInfo[1].klass) = v47->fields._groupId_k__BackingField;
  v48 = this->fields.pieceData;
  if ( !v48 )
    goto LABEL_34;
  if ( v46 <= 2 )
  {
LABEL_35:
    v73 = sub_B5D6C8(BattleParticipantInfo);
    sub_B5D668(v73, 0LL);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = v48->fields._index_k__BackingField;
  v49 = (_QWORD **)Method_System_Array_Empty_int___;
  v50 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v51 = *(_WORD *)(v50 + 306);
  if ( (v51 & 1) == 0 )
  {
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___
                                                                                + 6));
    v51 = *(_WORD *)(v50 + 306);
  }
  if ( (v51 & 0x400) != 0 )
  {
    v52 = *v49[6];
    if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
      BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AF52C4(*v49[6]);
    if ( !*(_DWORD *)(v52 + 224) )
    {
      v53 = *v49[6];
      if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
        sub_AF52C4(*v49[6]);
      j_il2cpp_runtime_class_init_0(v53);
    }
  }
  v54 = *v49[6];
  if ( (*(_BYTE *)(v54 + 306) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_AF52C4(*v49[6]);
  if ( !warBoardData
    || (v55 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v54 + 184),
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_34:
    sub_B5D69C(BattleParticipantInfo, v43);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v57,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v59 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v59 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__43_1,
        v62,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v63 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v63->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v63->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                 v58,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v70,
                                                                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v71 = System_Linq_Enumerable__Concat_int_(
          v45,
          v55,
          (const MethodInfo_1CA4918 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v71,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *button; // x0

  if ( (byte_42EAB71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    byte_42EAB71 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_B5D69C(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_o *hpBar; // x0
  __int64 v22; // x1
  UISprite_o *frameSprite; // x21
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v39; // x2
  int v40; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EAB5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)pieceData, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19618/*"icon_strong_enemy"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19428/*"hp_gauge_boss"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_22281/*"servant_base_{0}"*/, v18, v19, v20);
    byte_42EAB5A = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_42;
  frameSprite = this->fields.frameSprite;
  v40 = pieceData->fields._forceId_k__BackingField + 1;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  hpBar = System_String__Format((System_String_o *)StringLiteral_22281/*"servant_base_{0}"*/, v24, 0LL);
  if ( !frameSprite )
    goto LABEL_42;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_42;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19428/*"hp_gauge_boss"*/, 0LL);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v26);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v25);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v25);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v28 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v28 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v28, (unsigned __int8)hpBar & 1, 0LL);
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
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19618/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_39;
            }
          }
        }
LABEL_42:
        sub_B5D69C(hpBar, v22);
      }
    }
  }
LABEL_39:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&buffTrunNotice->fields.pieceData,
      (System_Int32_array **)pieceData,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v39);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EAB5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAB5E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 1, 0LL);
}


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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WarBoardManager_TaskList_o *v55; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_234ED3C *v57; // x2
  WarBoardData_o *klass; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x26
  const MethodInfo *v61; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x22
  WebViewManager_o *v63; // x22
  const MethodInfo_234ED3C *v64; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  bool IsStageBoss; // w0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **EventBossUI; // x1
  WarBoardManager_o *v74; // x22
  WarBoardEventBossUIComponent_o **v75; // x22
  UnityEngine_Object_o *v76; // x27
  _BOOL8 v77; // x0
  const MethodInfo *v78; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v80; // x0
  const MethodInfo *v81; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIBreakTask; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v86; // x21
  System_Delegate_o *v87; // x23
  WarBoardTaskBase_TaskCallback_o *v88; // x24
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  WarBoardServantPieceComponent_o *v96; // x0
  WarBoardEventBossUIComponent_o *v97; // x1
  System_Action_o *v98; // x2
  const MethodInfo *v99; // x3
  WarBoardManager_TaskList_o *v100; // [xsp+18h] [xbp-78h]
  System_Nullable_Vector3__o v101; // [xsp+20h] [xbp-70h] BYREF
  int32_t dummyPointa; // [xsp+38h] [xbp-58h]
  int32_t priority; // [xsp+3Ch] [xbp-54h] BYREF
  System_Nullable_float__o v104; // 0:x2.8
  System_Nullable_float__o v105; // 0:x3.8
  System_Nullable_float__o v106; // 0:x3.8
  System_Nullable_Vector3__o v107; // 0:x0.16
  System_Nullable_Vector3__o v108; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_42EAB64 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      oldBreakPoint,
      LODWORD(cameraSize.fields.value),
      taskList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&WarBoardManager_TaskList_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__, v37, v38, v39);
    sub_B5D5C4(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&WarBoardGaugePerformance_TypeInfo, v43, v44, v45);
    byte_42EAB64 = 1;
  }
  priority = 0;
  v46 = sub_B5D694(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v46,
    0LL);
  if ( !v46 )
    goto LABEL_40;
  *(_QWORD *)(v46 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
  v55 = (WarBoardManager_TaskList_o *)sub_B5D694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v55, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v107.fields.value.fields.x = &v101;
    *(_QWORD *)&v101.fields.value.fields.x = 0LL;
    *(_QWORD *)&v101.fields.value.fields.z = 0LL;
    *(_QWORD *)&v107.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v107, localPosition, v57);
    if ( !Instance )
      goto LABEL_40;
    v105 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v101,
                                             v105,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v55 )
      goto LABEL_40;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
      (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v100 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  klass = (WarBoardData_o *)transform[18].klass;
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, klass, v61);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18771752(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v59 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v59,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18771752(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v60 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v60,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v55 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v55,
    (System_Collections_Generic_IEnumerable_T__o *)v59,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    v110 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v108.fields.value.fields.x = &v101;
    v101 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v108.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v108, v110, v64);
    if ( !v63 )
      goto LABEL_40;
    v106 = cameraSize;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)v63,
                                                                                     v101,
                                                                                     v106,
                                                                                     1,
                                                                                     1,
                                                                                     0,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
      CameraPerformanceTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_40;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_40;
    v74 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v74 )
      goto LABEL_40;
    EventBossUI = (System_Int32_array **)WarBoardManager__GetEventBossUI(v74, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v46 + 16) = EventBossUI;
  v75 = (WarBoardEventBossUIComponent_o **)(v46 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), EventBossUI, v67, v68, v69, v70, v71, v72);
  v76 = *(UnityEngine_Object_o **)(v46 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v77 = UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
  if ( v77 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v77,
                                                                                *v75,
                                                                                v78);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
      BossUIDamageTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIBreakTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(
                                                                               v80,
                                                                               *v75,
                                                                               0LL,
                                                                               v81);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
      BossUIBreakTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v104 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v104,
    v55,
    dummyPointa,
    0LL,
    1,
    0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_40:
    sub_B5D69C(transform, v48);
  if ( pieceData->fields._isDead_k__BackingField )
  {
LABEL_36:
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v55,
      (System_Collections_Generic_IEnumerable_T__o *)v60,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    if ( v100 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v100,
        (System_Collections_Generic_IEnumerable_T__o *)v55,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      v100->fields._SubPriority_k__BackingField = priority;
      return;
    }
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( transform )
    {
      WarBoardManager__AddTask_18807556(
        (WarBoardManager_o *)transform,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v55,
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
  v86 = sub_B5D694(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v86, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v86 )
    goto LABEL_40;
  v87 = *(System_Delegate_o **)(v86 + 32);
  v88 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v88,
    (Il2CppObject *)v46,
    Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v89 = (System_Int32_array **)System_Delegate__Combine(v87, (System_Delegate_o *)v88, 0LL);
  if ( !v89 || *v89 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v86 + 32) = v89;
    sub_B5D560((BattleServantConfConponent_o *)(v86 + 32), v89, v90, v91, v92, v93, v94, v95);
    *(_BYTE *)(v86 + 26) = 1;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_36;
  }
  sub_B5D990(v89);
  WarBoardServantPieceComponent__CreateBossUIBreakTask(v96, v97, v98, v99);
}


void __fastcall WarBoardServantPieceComponent__OnDamage(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardManager_o *pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v23; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  WarBoardServantPieceComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_42EAB63 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)taskList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    byte_42EAB63 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_17;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_17;
    v23 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v23 )
      goto LABEL_17;
    EventBossUI = WarBoardManager__GetEventBossUI(v23, (int32_t)pieceData, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v25, EventBossUI, v26);
    if ( v24 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)pieceData,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      WarBoardPieceBaseComponent__OnDamage(
        (WarBoardPieceBaseComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v24,
        0LL);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v24,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( pieceData )
      {
        WarBoardManager__AddTask_18807556(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v24, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(pieceData, taskList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__OnDead(
        WarBoardServantPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  void *gameObject; // x0
  __int64 v76; // x1
  UnityEngine_Object_o *EventBossUI; // x24
  WarBoardManager_o *v78; // x21
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x21
  _BOOL8 v81; // x0
  const MethodInfo *v82; // x2
  WarBoardServantPieceComponent_o *v83; // x0
  const MethodInfo *v84; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDeadTask; // x0
  WarBoardManager_o *v86; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v88; // x26
  WarBoardMessageMaster_o *Master_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v91; // x24
  int32_t id; // w0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_18771752; // x0
  System_Collections_Generic_IEnumerable_T__o *v94; // x0
  const MethodInfo *v95; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_IEnumerable_T__o *v97; // x0
  System_Collections_Generic_IEnumerable_T__o *v98; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v100; // x0
  WebViewManager_o *Instance; // x23
  const MethodInfo_234ED3C *v102; // x2
  bool IsEnemyMonster; // w0
  System_String_o **v104; // x8
  System_String_o *v105; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v108; // x23
  __int64 v109; // x25
  __int64 v110; // x26
  ServantEntity_o *v111; // x25
  float v112; // w23
  bool v113; // w0
  Il2CppObject *v114; // x0
  BattleServantConfConponent_o *v115; // x23
  System_Delegate_o *v116; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v117; // x22
  WarBoardTaskBase_TaskCallback_o *v118; // x26
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  WarBoardWaitTime_o *v126; // x20
  WarBoardServantPieceComponent_o *v127; // x0
  WarBoardEventBossUIComponent_o *v128; // x1
  const MethodInfo *v129; // x2
  System_Nullable_float__o size; // [xsp+8h] [xbp-78h]
  WarBoardManager_TaskList_o *v131; // [xsp+10h] [xbp-70h]
  System_Nullable_Vector3__o v132; // [xsp+18h] [xbp-68h] BYREF
  int32_t priority; // [xsp+2Ch] [xbp-54h] BYREF
  System_Nullable_float__o v134; // 0:x3.8
  System_Nullable_Vector3__o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB65 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      LODWORD(cameraSize.fields.value),
      (_DWORD)taskList,
      cameraMove);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&WarBoardManager_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__, v57, v58, v59);
    sub_B5D5C4(&WarBoardWaitTime_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_6218/*"Escape_Effect"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_6077/*"Enemy_Dead_Effect"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_12882/*"Servant_Dead_Effect"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_13117/*"Special_Effect{0:D2}"*/, v72, v73, v74);
    byte_42EAB65 = 1;
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_84;
    v78 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v78 )
      goto LABEL_84;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v78, (int32_t)gameObject, 0LL);
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
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v81 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v81 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v81,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v82);
    if ( !v80 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v80,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIDeadTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                                                                              v83,
                                                                              (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                              v84);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v80,
      BossUIDeadTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v86 = (WarBoardManager_o *)gameObject;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !v86 )
      goto LABEL_84;
    Task = WarBoardManager__FindTask(v86, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  v131 = taskList;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  size = cameraSize;
  v88 = (WarBoardData_o *)*((_QWORD *)gameObject + 54);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MessageTasks,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v91 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v91,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v88 )
    goto LABEL_84;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v88, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v88, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     Master_WarQuestSelectionMaster,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v88, 0LL);
    v91 = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v91 )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks_18771752 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18771752(
                                                                         (WarBoardManager_o *)gameObject,
                                                                         24,
                                                                         &priority,
                                                                         0LL,
                                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks_18771752,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v94 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18771752(
                                                         (WarBoardManager_o *)gameObject,
                                                         25,
                                                         &priority,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    v94,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v88, v95);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v97 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18771752(
                                                         (WarBoardManager_o *)gameObject,
                                                         34,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    v97,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v98 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18771752(
                                                         (WarBoardManager_o *)gameObject,
                                                         35,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    v98,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)gameObject,
                                                                22,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    EventTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v100 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)gameObject,
                                                          23,
                                                          0LL,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    v100,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v80 )
      goto LABEL_84;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v80,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v135.fields.value.fields.x = &v132;
    *(_QWORD *)&v132.fields.value.fields.x = 0LL;
    *(_QWORD *)&v132.fields.value.fields.z = 0LL;
    *(_QWORD *)&v135.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v135, localPosition, v102);
    if ( !Instance )
      goto LABEL_84;
    v134 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v132, v134, 1, 1, 0, 0LL);
    if ( !v80 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v80,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_84;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v104 = (System_String_o **)&StringLiteral_6077/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v104 = (System_String_o **)&StringLiteral_12882/*"Servant_Dead_Effect"*/;
  v105 = *v104;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_84;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_84;
  v108 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v110 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v109 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v136.fields.currentCryptoKey = v110;
  *(_QWORD *)&v136.fields.fakeValue = v109;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v136, 0LL);
  if ( !v108 )
    goto LABEL_84;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v108,
                 (int32_t)gameObject,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_84;
  v111 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v111 )
    goto LABEL_84;
  v112 = *(float *)&gameObject;
  v113 = ServantEntity__checkIsHeroineSvt(v111, 0LL);
  if ( LODWORD(v112) == 1 || v113 )
  {
    v105 = (System_String_o *)StringLiteral_6218/*"Escape_Effect"*/;
  }
  else if ( SLODWORD(v112) >= 2 )
  {
    v132.fields.value.fields.x = v112;
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
    v105 = System_String__Format((System_String_o *)StringLiteral_13117/*"Special_Effect{0:D2}"*/, v114, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                 (WarBoardPieceBaseComponent_o *)this,
                 v105,
                 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v115 = (BattleServantConfConponent_o *)((char *)gameObject + 40);
  v116 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v117 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v118 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v118,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v119 = (System_Int32_array **)System_Delegate__Combine(v116, (System_Delegate_o *)v118, 0LL);
  if ( v119 && *v119 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v119);
    WarBoardServantPieceComponent__CreateBossUIDeadTask(v127, v128, v129);
    return;
  }
  v115->klass = (BattleServantConfConponent_c *)v119;
  sub_B5D560(v115, v119, v120, v121, v122, v123, v124, v125);
  if ( !v80 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    v117,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v126 = (WarBoardWaitTime_o *)sub_B5D694(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v126, 0.5, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v126,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v91,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v80,
      (System_Collections_Generic_IEnumerable_T__o *)v91,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v131 )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v131,
      (System_Collections_Generic_IEnumerable_T__o *)v80,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v131->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_84;
    WarBoardManager__InsertTask_18800572(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v80,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
LABEL_84:
    sub_B5D69C(gameObject, v76);
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EAB70 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18418/*"ef_guts"*/, (_DWORD)taskList, (_DWORD)method, v3);
    byte_42EAB70 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v7);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18418/*"ef_guts"*/,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnInvincible(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42EAB6F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18439/*"ef_special_invincible01"*/, (_DWORD)taskList, (_DWORD)method, v3);
    byte_42EAB6F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v7);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18439/*"ef_special_invincible01"*/,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnMapDamage(
        WarBoardServantPieceComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  WarBoardPieceData_o *gameObject; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  int v34; // w23
  int v35; // w24
  int v36; // w25
  int32_t MaxHp; // w0
  int v38; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v41; // s10
  __int64 v42; // x21
  System_Delegate_o *v43; // x23
  WarBoardServantPieceComponent___c_c *v44; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v47; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  WarBoardServantPieceComponent_o *v62; // x0
  System_Action_o *v63; // x1
  const MethodInfo *v64; // x2

  if ( (byte_42EAB6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, damage, (_DWORD)taskList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__, v22, v23, v24);
    sub_B5D5C4(&WarBoardServantPieceComponent___c_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&WarBoardGaugePerformance_TypeInfo, v28, v29, v30);
    byte_42EAB6D = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v33,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v34 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v35 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v36 = (int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v38 = v36 - damage;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v41 = (float)v38 / (float)MaxHp;
    v42 = sub_B5D694(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor(
      (WarBoardGaugePerformance_o *)v42,
      hpBar,
      (float)v34 / (float)v35,
      v41,
      gaugeAnimationFullDuration,
      0LL);
    if ( !v42 )
      goto LABEL_26;
    v43 = *(System_Delegate_o **)(v42 + 32);
    v44 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v44 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__57_0 = static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__57_0,
        v47,
        Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
        0LL);
      v48 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v48->__9__57_0 = _9__57_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__57_0,
        (System_Int32_array **)_9__57_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    v55 = (System_Int32_array **)System_Delegate__Combine(v43, (System_Delegate_o *)_9__57_0, 0LL);
    if ( !v55 || *v55 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v42 + 32) = v55;
      sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), v55, v56, v57, v58, v59, v60, v61);
      *(_BYTE *)(v42 + 26) = 0;
      if ( v33 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v33,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18807556(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B5D69C(gameObject, v32);
    }
    sub_B5D990(v55);
    WarBoardServantPieceComponent__Reinforcements(v62, v63, v64);
  }
}


void __fastcall WarBoardServantPieceComponent__OnMapGainHP(
        WarBoardServantPieceComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  WarBoardPieceData_o *gameObject; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  float v36; // s8
  int32_t MaxHp; // w0
  int v38; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v41; // s10
  __int64 v42; // x21
  System_Delegate_o *v43; // x23
  WarBoardServantPieceComponent___c_c *v44; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v47; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  WarBoardServantPieceComponent_o *v62; // x0
  const MethodInfo *v63; // x1

  if ( (byte_42EAB72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, oldHp, gainHp, taskList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__, v24, v25, v26);
    sub_B5D5C4(&WarBoardServantPieceComponent___c_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&WarBoardGaugePerformance_TypeInfo, v30, v31, v32);
    byte_42EAB72 = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v35,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_24;
    v36 = (float)oldHp / (float)(int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v38 = gainHp + oldHp;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v41 = (float)v38 / (float)MaxHp;
    v42 = sub_B5D694(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v42, hpBar, v36, v41, gaugeAnimationFullDuration, 0LL);
    if ( !v42 )
      goto LABEL_24;
    v43 = *(System_Delegate_o **)(v42 + 32);
    v44 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v44 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__63_0 = static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__63_0,
        v47,
        Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
        0LL);
      v48 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v48->__9__63_0 = _9__63_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    v55 = (System_Int32_array **)System_Delegate__Combine(v43, (System_Delegate_o *)_9__63_0, 0LL);
    if ( !v55 || *v55 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v42 + 32) = v55;
      sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), v55, v56, v57, v58, v59, v60, v61);
      *(_BYTE *)(v42 + 26) = 0;
      if ( v35 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v35,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18807556(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
            0LL);
          return;
        }
      }
LABEL_24:
      sub_B5D69C(gameObject, v34);
    }
    sub_B5D990(v55);
    WarBoardServantPieceComponent___ctor(v62, v63);
  }
}


void __fastcall WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v34; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v36; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v38; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  WebViewManager_o *v43; // x22
  const MethodInfo_234ED3C *v44; // x2
  BattleServantConfConponent_o *p_deactiveObject; // x23
  System_Delegate_o *deactiveObject; // x24
  WarBoardBreakPointComponent_o *v47; // x22
  WarBoardTaskBase_TaskCallback_o *v48; // x25
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WarBoardWaitTime_o *v56; // x20
  __int64 v57; // x0
  WarBoardServantPieceComponent_o *v58; // x0
  bool v59; // w1
  const MethodInfo *v60; // x2
  System_Nullable_Vector3__o v61; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v62; // 0:x3.8
  System_Nullable_Vector3__o v63; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB66 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)taskList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__, v24, v25, v26);
    sub_B5D5C4(&WarBoardWaitTime_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12883/*"Servant_Regenerate_Effect"*/, v30, v31, v32);
    byte_42EAB66 = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v36 = 0LL;
  while ( (int)v36 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v36 >= breakPoints->max_length )
      {
        v57 = sub_B5D6C8(Instance);
        sub_B5D668(v57, 0LL);
      }
      Instance = breakPoints->m_Items[v36];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v36;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v38 = this->fields.pieceData;
  if ( !v38 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v38->fields._nowSquareIndex_k__BackingField,
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
  v65.fields.x = x;
  v65.fields.y = y;
  v65.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v65, 0LL);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v63.fields.value.fields.x = &v61;
  *(_QWORD *)&v61.fields.value.fields.x = 0LL;
  *(_QWORD *)&v61.fields.value.fields.z = 0LL;
  *(_QWORD *)&v63.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v63, localPosition, v44);
  if ( !v43 )
    goto LABEL_10;
  v62 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v43,
                                                v61,
                                                v62,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v42 )
    goto LABEL_10;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v42,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12883/*"Servant_Regenerate_Effect"*/,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  p_deactiveObject = (BattleServantConfConponent_o *)&Instance->fields.deactiveObject;
  deactiveObject = (System_Delegate_o *)Instance->fields.deactiveObject;
  v47 = Instance;
  BYTE2(Instance->fields.activeObject) = 1;
  v48 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v49 = (System_Int32_array **)System_Delegate__Combine(deactiveObject, (System_Delegate_o *)v48, 0LL);
  if ( !v49 || *v49 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v47->fields.deactiveObject = (struct UISprite_o *)v49;
    sub_B5D560(p_deactiveObject, v49, v50, v51, v52, v53, v54, v55);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v42,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v56 = (WarBoardWaitTime_o *)sub_B5D694(WarBoardWaitTime_TypeInfo);
    WarBoardWaitTime___ctor(v56, 0.5, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v42,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v42,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    }
    else
    {
      Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_10;
      WarBoardManager__InsertTask_18800572(
        (WarBoardManager_o *)Instance,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v42,
        0LL);
    }
    Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v34);
  }
  sub_B5D990(v49);
  WarBoardServantPieceComponent__SetActiveNpBarEffect(v58, v59, v60);
}


void __fastcall WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x21
  char *transform; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_234ED3C *v50; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x19
  BattleServantConfConponent_o *v52; // x22
  System_Delegate_o *v53; // x23
  WarBoardTaskBase_TaskCallback_o *v54; // x24
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  WebViewManager_o *v62; // x19
  WarBoardServantPieceComponent_o *v63; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v64; // x1
  const MethodInfo *v65; // x2
  System_Nullable_Vector3__o v66; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v67; // 0:x3.8
  System_Nullable_Vector3__o v68; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__, v24, v25, v26);
    sub_B5D5C4(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11511/*"Reinforcement_Effect_1"*/, v30, v31, v32);
    byte_42EAB6E = 1;
  }
  v33 = sub_B5D694(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v33,
    0LL);
  if ( !v33 )
    goto LABEL_12;
  *(_QWORD *)(v33 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v68.fields.value.fields.x = &v66;
  *(_QWORD *)&v66.fields.value.fields.x = 0LL;
  *(_QWORD *)&v66.fields.value.fields.z = 0LL;
  *(_QWORD *)&v68.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v68, localPosition, v50);
  if ( !Instance )
    goto LABEL_12;
  v67 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v66, v67, 1, 0, 1, 0LL);
  if ( !v48 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v48,
    (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11511/*"Reinforcement_Effect_1"*/,
                        0LL);
  if ( !transform )
    goto LABEL_12;
  v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v52 = (BattleServantConfConponent_o *)(transform + 40);
  v53 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v54 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v54,
    (Il2CppObject *)v33,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v55 = (System_Int32_array **)System_Delegate__Combine(v53, (System_Delegate_o *)v54, 0LL);
  if ( !v55 || *v55 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v51[1].klass = (EventMissionProgressRequest_Argument_ProgressData_c *)v55;
    sub_B5D560(v52, v55, v56, v57, v58, v59, v60, v61);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v48,
      v51,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48,
                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v62 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v62, (WarBoardTaskBase_array *)transform, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(transform, v35);
  }
  sub_B5D990(v55);
  WarBoardServantPieceComponent__OnInvincible(v63, v64, v65);
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
      sub_B5D69C(this, active);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *classIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v22; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v24; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v26; // x0
  __int64 v27; // x0
  int v28; // [xsp+4h] [xbp-1Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EAB5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_RestrictionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21509/*"onBoard_initial_placement_class2_{0}"*/, v17, v18, v19);
    byte_42EAB5B = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_23:
    sub_B5D69C(classIconRoot, method);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v22 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_23;
LABEL_20:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v22, 0LL);
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
  v24 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v24 )
    goto LABEL_20;
  if ( !(_DWORD)v24 )
  {
    v27 = sub_B5D6C8(ServantClassEntities);
    sub_B5D668(v27, 0LL);
  }
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_23;
LABEL_21:
  classIcon = this->fields.classIcon;
  v28 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21509/*"onBoard_initial_placement_class2_{0}"*/, v26, 0LL);
  if ( !classIcon )
    goto LABEL_23;
  UISprite__set_spriteName(classIcon, (System_String_o *)classIconRoot, 0LL);
}


void __fastcall WarBoardServantPieceComponent__SetPartyBuffLevel(
        WarBoardServantPieceComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *partyBuffComponent; // x21
  const MethodInfo *v10; // x1
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_42EAB6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, level, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EAB6B = 1;
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
             (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
        v12);
      return;
    }
LABEL_15:
    sub_B5D69C(pieceData, v10);
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
    sub_B5D69C(this, userServantId);
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
    sub_B5D69C(this, userServantEquipId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__SetServantIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardServantPieceComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  struct WarBoardPieceData_o *v34; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v37; // x8
  int32_t v38; // w20
  UISprite_o *servantIcon; // x23
  bool v40; // w20
  int32_t servantLevel; // w20
  Il2CppObject *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v46; // x21
  UISprite_o *v47; // x21
  System_String_o *v48; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v50; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *removeTweenTargetObjects; // x20
  bool v52; // w20
  struct WarBoardPieceData_o *v53; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t iconFrameType_k__BackingField; // w20
  int32_t iconClassId_k__BackingField; // w21
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v58; // x8
  UISprite_o *v59; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v61; // x8
  UnityEngine_Object_o *supportSprite; // x20
  UnityEngine_GameObject_o *v63; // x20
  UnityEngine_Object_o *v64; // x20
  UILabel_o *v65; // x20
  struct WarBoardPieceData_o *v66; // x8
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  struct WarBoardPieceData_o *v69; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct WarBoardPieceData_o *v73; // x8
  struct WarBoardPieceData_o *v74; // x8
  WarBoardSquareData_o *Square; // x0
  char v76; // w20
  struct WarBoardPieceData_o *v77; // x8
  struct WarBoardPieceData_o *v78; // x8
  WarBoardSquareData_o *v79; // x0
  int32_t v80; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-28h] BYREF
  int32_t v82; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42EAB5C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21936/*"questinfo_enemyface_bg"*/, v26, v27, v28);
    this = (WarBoardServantPieceComponent_o *)sub_B5D5C4(&StringLiteral_15431/*"WARBOARD_PIECE_ICON_SVT_LV"*/, v29, v30, v31);
    byte_42EAB5C = 1;
  }
  v82 = 0;
  pieceData = v4->fields.pieceData;
  if ( !pieceData )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)v4->fields.classIconRoot;
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
    this = (WarBoardServantPieceComponent_o *)v4->fields.servantIconRoot;
    if ( this )
    {
      this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (WarBoardServantPieceComponent_o *)v4->fields.enemyIcon;
        if ( this )
        {
          this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (WarBoardServantPieceComponent_o *)v4->fields.enemyIconBg;
            if ( this )
            {
              this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                v73 = v4->fields.pieceData;
                if ( v73 )
                {
                  if ( !v73->fields._isEditing_k__BackingField )
                    return;
                  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                  if ( this )
                  {
                    v74 = v4->fields.pieceData;
                    if ( v74 )
                    {
                      this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                      if ( this )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)this,
                                   v74->fields._nowSquareIndex_k__BackingField,
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
  this = (WarBoardServantPieceComponent_o *)v4->fields.servantIconRoot;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)this,
                                              0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v34 = v4->fields.pieceData;
  if ( !v34 )
    goto LABEL_123;
  npcImageSvtId_k__BackingField = v34->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v34->fields._iconId_k__BackingField;
  v82 = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v34->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v34->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v37 = v4->fields.pieceData;
  if ( !v37 )
    goto LABEL_123;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)this,
                                              v37->fields._iconId_k__BackingField,
                                              npcDispLimitCount_k__BackingField,
                                              0LL);
  if ( !v4->fields.pieceData )
    goto LABEL_123;
  v38 = (int)this;
  if ( WarBoardPieceData__get_IsEnemyMonster(v4->fields.pieceData, 0LL) )
    goto LABEL_26;
  servantIcon = (UISprite_o *)v4->fields.servantIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v38, 0LL) )
  {
LABEL_26:
    this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_123;
    servantLevel = (int32_t)this->fields.servantLevel;
    iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v80 = npcDispLimitCount_k__BackingField;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    v44 = System_String__Concat(v42, v43, 0LL);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v46 = v44;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_31190412(servantLevel, enemyIcon, v46, 0LL) )
      goto LABEL_35;
    v47 = (UISprite_o *)v4->fields.enemyIcon;
    v48 = System_Int32__ToString((int32_t)&v82, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_31190412(servantLevel, v47, v48, 0LL) )
    {
LABEL_35:
      this = (WarBoardServantPieceComponent_o *)v4->fields.pieceData;
      if ( !this )
        goto LABEL_123;
      WarBoardPieceData__ApplyDisplayType((WarBoardPieceData_o *)this, v4->fields.enemyIcon, 0LL);
    }
    enemyIconBg = v4->fields.enemyIconBg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_31190412(
                                                servantLevel,
                                                enemyIconBg,
                                                (System_String_o *)StringLiteral_21936/*"questinfo_enemyface_bg"*/,
                                                0LL);
    v50 = v4->fields.pieceData;
    if ( !v50 )
      goto LABEL_123;
    if ( v50->fields._IsShadow_k__BackingField )
    {
      this = (WarBoardServantPieceComponent_o *)v4->fields.enemyIcon;
      if ( !this )
        goto LABEL_123;
      removeTweenTargetObjects = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.removeTweenTargetObjects;
      this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !removeTweenTargetObjects )
        goto LABEL_123;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        removeTweenTargetObjects,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))v4->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
        v4,
        v4->klass->vtable._12_ShowStatus.methodPtr);
    }
    v40 = 0;
  }
  else
  {
    v40 = 1;
  }
  this = (WarBoardServantPieceComponent_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0LL);
  this = (WarBoardServantPieceComponent_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  v52 = !v40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
  this = (WarBoardServantPieceComponent_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
  v53 = v4->fields.pieceData;
  if ( !v53 )
    goto LABEL_123;
  frameInClassIcon = v4->fields.frameInClassIcon;
  iconClassId_k__BackingField = v53->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v53->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(frameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  equipeIcon = (UnityEngine_Object_o *)v4->fields.equipeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(equipeIcon, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v58 = v4->fields.pieceData;
    if ( !v58 )
      goto LABEL_123;
    v59 = (UISprite_o *)v4->fields.equipeIcon;
    iconEquipId_k__BackingField = v58->fields._iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v59, iconEquipId_k__BackingField, 0LL);
  }
  this = (WarBoardServantPieceComponent_o *)v4->fields.EquipIcon;
  if ( !this
    || (this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL),
        (v61 = v4->fields.pieceData) == 0LL)
    || !this )
  {
LABEL_123:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v61->fields._iconEquipId_k__BackingField > 0, 0LL);
  supportSprite = (UnityEngine_Object_o *)v4->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    this = (WarBoardServantPieceComponent_o *)v4->fields.supportSprite;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !v4->fields.pieceData )
      goto LABEL_123;
    v63 = (UnityEngine_GameObject_o *)this;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v4->fields.pieceData, 0LL);
    if ( !v63 )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive(v63, (unsigned __int8)this & 1, 0LL);
  }
  v64 = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v65 = v4->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15431/*"WARBOARD_PIECE_ICON_SVT_LV"*/, 0LL);
    v66 = v4->fields.pieceData;
    if ( !v66 )
      goto LABEL_123;
    v67 = (System_String_o *)this;
    iconLevel_k__BackingField = v66->fields._iconLevel_k__BackingField;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    this = (WarBoardServantPieceComponent_o *)System_String__Format(v67, v68, 0LL);
    if ( !v65 )
      goto LABEL_123;
    UILabel__set_text(v65, (System_String_o *)this, 0LL);
    this = (WarBoardServantPieceComponent_o *)v4->fields.pieceData;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant((WarBoardPieceData_o *)this, 0LL);
    v69 = v4->fields.pieceData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v69 )
        goto LABEL_123;
      if ( v69->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardServantPieceComponent_o *)v4->fields.servantLevel;
        if ( !this )
          goto LABEL_123;
        this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_123;
        x = v4->fields.positionLevelDanger.fields.x;
        y = v4->fields.positionLevelDanger.fields.y;
        z = v4->fields.positionLevelDanger.fields.z;
        goto LABEL_113;
      }
    }
    else if ( !v69 )
    {
      goto LABEL_123;
    }
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v4->fields.pieceData, 0LL);
    if ( !v4->fields.servantLevel )
      goto LABEL_123;
    v76 = (char)this;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                0LL);
    if ( (v76 & 1) != 0 )
    {
      if ( !this )
        goto LABEL_123;
      x = v4->fields.positionLevelNpc.fields.x;
      y = v4->fields.positionLevelNpc.fields.y;
      z = v4->fields.positionLevelNpc.fields.z;
    }
    else
    {
      if ( !this )
        goto LABEL_123;
      x = v4->fields.positionLevel.fields.x;
      y = v4->fields.positionLevel.fields.y;
      z = v4->fields.positionLevel.fields.z;
    }
LABEL_113:
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  v77 = v4->fields.pieceData;
  if ( !v77 )
    goto LABEL_123;
  if ( !v77->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_123;
  v78 = v4->fields.pieceData;
  if ( !v78 )
    goto LABEL_123;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_123;
  v79 = WarBoardData__GetSquare((WarBoardData_o *)this, v78->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !v79 )
    return;
  this = (WarBoardServantPieceComponent_o *)v79->fields.squareComponent;
  if ( !this )
    goto LABEL_123;
  WarBoardSquareComponent__DeactiveEditPointArrow((WarBoardSquareComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardServantPieceComponent__ShowStatus(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x20
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_42EAB5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    byte_42EAB5D = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AF52C4(v6);
  pieceData = this->fields.pieceData;
  v8 = **(WarBoardManager_o ***)(v6 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(transform, 0LL), !v8) )
    sub_B5D69C(transform, v10);
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
          sub_B5D69C(this, method);
        }
LABEL_27:
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *button; // x0

  if ( (byte_42EAB73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    byte_42EAB73 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(button, method);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FC9 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardServantPieceComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5FC9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardServantPieceComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  __int64 v6; // x1
  unsigned int monitor; // w8
  __int64 v8; // x0

  if ( (byte_42E5FCA & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FCA = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_B5D69C(result, v6);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    v8 = sub_B5D6C8(result);
    sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardEventBossUIComponent_o *Instance; // x0
  __int64 v9; // x1
  struct UISprite_o *hpBarWhiteSprite; // x8
  System_String_o *mGo; // x20
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_42E5FCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5FCB = 1;
  }
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x21
  WarBoardEventBossUIComponent_o *monitor; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5FCC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_B5D5C4(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
                                                                      v5,
                                                                      v6,
                                                                      v7);
    byte_42E5FCC = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  monitor = (WarBoardEventBossUIComponent_o *)v4[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[2]);
  }
  if ( !monitor )
    sub_B5D69C(this, method);
  WarBoardEventBossUIComponent__PlayHpCut(monitor, 1.0, klass, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x22
  WarBoardEventBossUIComponent_o *monitor; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5FCD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_B5D5C4(
                                                                      &Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
                                                                      v5,
                                                                      v6,
                                                                      v7);
    byte_42E5FCD = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  monitor = (WarBoardEventBossUIComponent_o *)v4[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[2]);
  }
  if ( !monitor )
    sub_B5D69C(this, method);
  WarBoardEventBossUIComponent__PlayDaedAnim(monitor, klass, 0LL);
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
    sub_B5D69C(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
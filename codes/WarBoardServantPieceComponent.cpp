void __fastcall WarBoardServantPieceComponent___ctor(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.gaugeAnimationFullDuration = 0.5;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_331DEA0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_33200E0;
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

  if ( (byte_438D243 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D243 = 1;
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
    sub_B7769C(pieceData, method);
  }
}


void __fastcall WarBoardServantPieceComponent__ChangeDyingAnimation(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *pieceData; // x0
  UnityEngine_Object_o *faceEffect; // x20

  if ( (byte_438D242 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_12945/*"ServantDying"*/);
    byte_438D242 = 1;
  }
  pieceData = (UnityEngine_GameObject_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_14;
  if ( HIDWORD(pieceData[2].klass)
    || WarBoardPieceData__get_CurrentHpProgress((WarBoardPieceData_o *)pieceData, 0LL) > 0.5 )
  {
    WarBoardPieceBaseComponent__StopSimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12945/*"ServantDying"*/,
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
      sub_B7769C(pieceData, method);
    }
  }
  else
  {
    WarBoardPieceBaseComponent__PlaySimpleAnimation(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_12945/*"ServantDying"*/,
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
      sub_B7769C(pieceData, isBreak);
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

  if ( (byte_438D24E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D24E = 1;
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
      sub_B7769C(v4, v5);
    WarBoardServantPiecePartyBuffComponent__ClearArrowObject(v6, v5);
    WarBoardServantPiecePartyBuffComponent__SetActive(v6, 0, v7);
  }
}


void __fastcall WarBoardServantPieceComponent__CompatibilityDisplay(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *selectPiece,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  __int64 v6; // x1
  struct ServantClassCompatibilityIconComponent_o *v7; // x0
  System_Int32_array *v8; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v10; // x0

  if ( (byte_438D24C & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D24C = 1;
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
      v7 = (struct ServantClassCompatibilityIconComponent_o *)sub_B775DC(int___TypeInfo, 1LL);
      if ( v7 )
      {
        v8 = (System_Int32_array *)v7;
        if ( !LODWORD(v7->fields.upIconSprite) )
        {
          v10 = sub_B776C8(v7);
          sub_B77668(v10, 0LL);
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
      sub_B7769C(v7, v6);
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
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x20
  System_Delegate_o *v22; // x22
  WarBoardTaskBase_TaskCallback_o *v23; // x23
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardTaskBase_o *result; // x0
  WarBoardServantPieceComponent_o *v32; // x0
  WarBoardManager_TaskList_o *v33; // x2
  bool v34; // w3
  const MethodInfo *v35; // x4
  System_Nullable_float__o v36; // 0:x1.8

  if ( (byte_438D24A & 1) == 0 )
  {
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__);
    sub_B775C4(&WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
    sub_B775C4(&WarBoardWaitTime_TypeInfo);
    byte_438D24A = 1;
  }
  v6 = sub_B77694(WarBoardServantPieceComponent___c__DisplayClass50_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass50_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass50_0_o *)v6,
    0LL);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = eventBossUI,
        sub_B77560(
          (BattleServantConfConponent_o *)(v6 + 16),
          (System_Int32_array **)eventBossUI,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        *(_QWORD *)(v6 + 24) = endAction,
        sub_B77560(
          (BattleServantConfConponent_o *)(v6 + 24),
          (System_Int32_array **)endAction,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        v21 = sub_B77694(WarBoardWaitTime_TypeInfo),
        WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v21, 0.0, 0LL),
        !v21) )
  {
    sub_B7769C(v7, v8);
  }
  v22 = *(System_Delegate_o **)(v21 + 40);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v6,
    Method_WarBoardServantPieceComponent___c__DisplayClass50_0__CreateBossUIBreakTask_b__0__,
    0LL);
  v24 = (System_Int32_array **)System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0LL);
  if ( v24 && *v24 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B77990(v24);
    WarBoardServantPieceComponent__OnDead(v32, v36, v33, v34, v35);
  }
  else
  {
    *(_QWORD *)(v21 + 40) = v24;
    sub_B77560((BattleServantConfConponent_o *)(v21 + 40), v24, v25, v26, v27, v28, v29, v30);
    *(_BYTE *)(v21 + 26) = 1;
    return (WarBoardTaskBase_o *)v21;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDamageTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Func_bool__o *v13; // x20
  UnityEngine_WaitUntil_o *v14; // x21
  __int64 v15; // x20
  System_Delegate_o *v16; // x22
  WarBoardTaskBase_TaskCallback_o *v17; // x23
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v26; // x0
  int32_t v27; // w1
  WarBoardManager_TaskList_o *v28; // x3
  int32_t v29; // w4
  WarBoardTaskBase_TaskCallback_o *v30; // x5
  bool v31; // w6
  const MethodInfo *v32; // x7
  System_Nullable_float__o v33; // 0:x2.8

  if ( (byte_438D249 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__);
    sub_B775C4(&WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    sub_B775C4(&WarBoardCallbackTask_TypeInfo);
    byte_438D249 = 1;
  }
  v4 = sub_B77694(WarBoardServantPieceComponent___c__DisplayClass49_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass49_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), (System_Int32_array **)eventBossUI, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v4 + 16) = 0;
  v13 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__0__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v14 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  v15 = sub_B77694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v15, (UnityEngine_CustomYieldInstruction_o *)v14, 0LL);
  if ( !v15 )
LABEL_8:
    sub_B7769C(v5, v6);
  v16 = *(System_Delegate_o **)(v15 + 32);
  v17 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__1__,
    0LL);
  v18 = (System_Int32_array **)System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0LL);
  if ( v18 && *v18 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B77990(v18);
    WarBoardServantPieceComponent__OnBreak(v26, v27, v33, v28, v29, v30, v31, v32);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v18;
    sub_B77560((BattleServantConfConponent_o *)(v15 + 32), v18, v19, v20, v21, v22, v23, v24);
    return (WarBoardCallbackTask_o *)v15;
  }
  return result;
}


WarBoardCallbackTask_o *__fastcall WarBoardServantPieceComponent__CreateBossUIDeadTask(
        WarBoardServantPieceComponent_o *this,
        WarBoardEventBossUIComponent_o *eventBossUI,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Func_bool__o *v13; // x20
  UnityEngine_WaitUntil_o *v14; // x21
  __int64 v15; // x20
  System_Delegate_o *v16; // x22
  WarBoardTaskBase_TaskCallback_o *v17; // x23
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardCallbackTask_o *result; // x0
  WarBoardServantPieceComponent_o *v26; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_438D24B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__);
    sub_B775C4(&WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    sub_B775C4(&WarBoardCallbackTask_TypeInfo);
    byte_438D24B = 1;
  }
  v4 = sub_B77694(WarBoardServantPieceComponent___c__DisplayClass51_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass51_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 24) = eventBossUI;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), (System_Int32_array **)eventBossUI, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v4 + 16) = 0;
  v13 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__0__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v14 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  v15 = sub_B77694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v15, (UnityEngine_CustomYieldInstruction_o *)v14, 0LL);
  if ( !v15 )
LABEL_8:
    sub_B7769C(v5, v6);
  v16 = *(System_Delegate_o **)(v15 + 32);
  v17 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__1__,
    0LL);
  v18 = (System_Int32_array **)System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0LL);
  if ( v18 && *v18 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B77990(v18);
    WarBoardServantPieceComponent__OnRevive(v26, v27, v28);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v18;
    sub_B77560((BattleServantConfConponent_o *)(v15 + 32), v18, v19, v20, v21, v22, v23, v24);
    return (WarBoardCallbackTask_o *)v15;
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

  if ( (byte_438D241 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_438D241 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_B7769C(0LL, method);
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
    sub_B7769C(servantIcon, method);
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
    sub_B7769C(servantIcon, method);
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
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v6; // x1
  struct WarBoardPieceData_o *pieceData; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  unsigned int v9; // w8
  struct WarBoardPieceData_o *v10; // x9
  struct WarBoardPieceData_o *v11; // x9
  _QWORD **v12; // x23
  __int64 v13; // x22
  __int16 v14; // w8
  __int64 v15; // x22
  __int64 v16; // x22
  __int64 v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  WarBoardServantPieceComponent___c_c *v22; // x8
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__43_1; // x21
  Il2CppObject *v25; // x22
  struct WarBoardServantPieceComponent___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v36; // x0

  if ( (byte_438D244 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B775C4(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
    sub_B775C4(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_B775C4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__);
    sub_B775C4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__);
    byte_438D244 = 1;
  }
  BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B775DC(int___TypeInfo, 3LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_34;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo;
  if ( !BattleParticipantInfo )
    goto LABEL_34;
  v9 = *(_DWORD *)&BattleParticipantInfo->fields._Invalid_k__BackingField;
  if ( !v9 )
    goto LABEL_35;
  LODWORD(BattleParticipantInfo[1].klass) = pieceData->fields._forceId_k__BackingField;
  v10 = this->fields.pieceData;
  if ( !v10 )
    goto LABEL_34;
  if ( v9 <= 1 )
    goto LABEL_35;
  HIDWORD(BattleParticipantInfo[1].klass) = v10->fields._groupId_k__BackingField;
  v11 = this->fields.pieceData;
  if ( !v11 )
    goto LABEL_34;
  if ( v9 <= 2 )
  {
LABEL_35:
    v36 = sub_B776C8(BattleParticipantInfo);
    sub_B77668(v36, 0LL);
  }
  LODWORD(BattleParticipantInfo[1].monitor) = v11->fields._index_k__BackingField;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___
                                                                                + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B0F2C4(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_B0F2C4(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    BattleParticipantInfo = (WarBoardData_BattleParticipantInfo_o *)sub_B0F2C4(*v12[6]);
  if ( !warBoardData
    || (v18 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v17 + 184),
        (BattleParticipantInfo = WarBoardData__LoadBattleParticipantInfo(warBoardData, 0LL)) == 0LL) )
  {
LABEL_34:
    sub_B7769C(BattleParticipantInfo, v6);
  }
  if ( !BattleParticipantInfo->fields._Invalid_k__BackingField )
  {
    Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
    v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v20,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker_b__43_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            Participants_k__BackingField,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v22 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v22 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__43_1,
        v25,
        Method_WarBoardServantPieceComponent___c__GetLatestBattleTargetAndAttacker_b__43_1__,
        (const MethodInfo_29EAA10 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v26 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v26->__9__43_1 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__43_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v26->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                 v21,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__43_1,
                                                                 (const MethodInfo_1D3A5DC *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                 v33,
                                                                 (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v34 = System_Linq_Enumerable__Concat_int_(
          v8,
          v18,
          (const MethodInfo_1D2A0AC *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall WarBoardServantPieceComponent__Hide(WarBoardServantPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_438D253 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_438D253 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)this->fields.npBarEffect) == 0LL) )
  {
    sub_B7769C(button, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent__Initialize(
        WarBoardServantPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *hpBar; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *frameSprite; // x21
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *criticalStarsBase; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *buffTrunNotice; // x20
  const MethodInfo *v24; // x2
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438D23C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19767/*"icon_strong_enemy"*/);
    sub_B775C4(&StringLiteral_19576/*"hp_gauge_boss"*/);
    sub_B775C4(&StringLiteral_22450/*"servant_base_{0}"*/);
    byte_438D23C = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, 0LL);
  if ( !pieceData )
    goto LABEL_42;
  frameSprite = this->fields.frameSprite;
  v25 = pieceData->fields._forceId_k__BackingField + 1;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v7);
  hpBar = System_String__Format((System_String_o *)StringLiteral_22450/*"servant_base_{0}"*/, v9, 0LL);
  if ( !frameSprite )
    goto LABEL_42;
  UISprite__set_spriteName(frameSprite, hpBar, 0LL);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = (System_String_o *)this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_42;
    UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19576/*"hp_gauge_boss"*/, 0LL);
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
    WarBoardServantPieceComponent__UpdateNpBars(this, 0.0, v11);
  }
  if ( pieceData->fields._isEditing_k__BackingField && !pieceData->fields._iconId_k__BackingField )
    WarBoardServantPieceComponent__SetClassIcon(this, v10);
  else
    WarBoardServantPieceComponent__SetServantIcon(this, v10);
  criticalStarsBase = (UnityEngine_Object_o *)this->fields.criticalStarsBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(criticalStarsBase, 0LL, 0LL) )
  {
    v13 = this->fields.criticalStarsBase;
    hpBar = (System_String_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !v13 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v13, (unsigned __int8)hpBar & 1, 0LL);
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
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( hpBar )
          {
            UISprite__set_spriteName((UISprite_o *)hpBar, (System_String_o *)StringLiteral_19767/*"icon_strong_enemy"*/, 0LL);
            hpBar = (System_String_o *)this->fields.RoleTypeLabel;
            if ( hpBar )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hpBar, 1, 0LL);
              goto LABEL_39;
            }
          }
        }
LABEL_42:
        sub_B7769C(hpBar, v6);
      }
    }
  }
LABEL_39:
  buffTrunNotice = this->fields.buffTrunNotice;
  if ( buffTrunNotice )
  {
    buffTrunNotice->fields.pieceData = pieceData;
    sub_B77560(
      (BattleServantConfConponent_o *)&buffTrunNotice->fields.pieceData,
      (System_Int32_array **)pieceData,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    WarBoardServantPieceBuffTurnComponent__UpdateDisp(buffTrunNotice, 0, v24);
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
    sub_B7769C(this, method);
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

  if ( (byte_438D240 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D240 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
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
  __int64 v13; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarBoardManager_TaskList_o *v22; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_247A004 *v24; // x2
  WarBoardData_o *klass; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x26
  const MethodInfo *v28; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x22
  WebViewManager_o *v30; // x22
  const MethodInfo_247A004 *v31; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  bool IsStageBoss; // w0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **EventBossUI; // x1
  WarBoardManager_o *v41; // x22
  WarBoardEventBossUIComponent_o **v42; // x22
  UnityEngine_Object_o *v43; // x27
  _BOOL8 v44; // x0
  const MethodInfo *v45; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDamageTask; // x0
  WarBoardServantPieceComponent_o *v47; // x0
  const MethodInfo *v48; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIBreakTask; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s8
  __int64 v53; // x21
  System_Delegate_o *v54; // x23
  WarBoardTaskBase_TaskCallback_o *v55; // x24
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  WarBoardServantPieceComponent_o *v63; // x0
  WarBoardEventBossUIComponent_o *v64; // x1
  System_Action_o *v65; // x2
  const MethodInfo *v66; // x3
  WarBoardManager_TaskList_o *v67; // [xsp+18h] [xbp-78h]
  System_Nullable_Vector3__o v68; // [xsp+20h] [xbp-70h] BYREF
  int32_t dummyPointa; // [xsp+38h] [xbp-58h]
  int32_t priority; // [xsp+3Ch] [xbp-54h] BYREF
  System_Nullable_float__o v71; // 0:x2.8
  System_Nullable_float__o v72; // 0:x3.8
  System_Nullable_float__o v73; // 0:x3.8
  System_Nullable_Vector3__o v74; // 0:x0.16
  System_Nullable_Vector3__o v75; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  dummyPointa = dummyPoint;
  if ( (byte_438D246 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&WarBoardManager_TaskList_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__);
    sub_B775C4(&WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
    sub_B775C4(&WarBoardGaugePerformance_TypeInfo);
    byte_438D246 = 1;
  }
  priority = 0;
  v13 = sub_B77694(WarBoardServantPieceComponent___c__DisplayClass45_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass45_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass45_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_40;
  *(_QWORD *)(v13 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = (WarBoardManager_TaskList_o *)sub_B77694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v22, 0LL);
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v74.fields.value.fields.x = &v68;
    *(_QWORD *)&v68.fields.value.fields.x = 0LL;
    *(_QWORD *)&v68.fields.value.fields.z = 0LL;
    *(_QWORD *)&v74.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v74, localPosition, v24);
    if ( !Instance )
      goto LABEL_40;
    v72 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)Instance,
                                             v68,
                                             v72,
                                             1,
                                             0,
                                             1,
                                             0LL);
    if ( !v22 )
      goto LABEL_40;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v67 = taskList;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  klass = (WarBoardData_o *)transform[18].klass;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, klass, v28);
  priority = 0;
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18963188(
                                           (WarBoardManager_o *)transform,
                                           32,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v26 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_40;
  transform = (UnityEngine_Transform_o *)WarBoardManager__GetEventTasks_18963188(
                                           (WarBoardManager_o *)transform,
                                           33,
                                           &priority,
                                           LatestBattleTargetAndAttacker,
                                           0LL);
  if ( !v27 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
    (System_Collections_Generic_IEnumerable_T__o *)transform,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v22 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( cameraMove )
  {
    v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_40;
    v77 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    *(_QWORD *)&v75.fields.value.fields.x = &v68;
    v68 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v75.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v75, v77, v31);
    if ( !v30 )
      goto LABEL_40;
    v73 = cameraSize;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     (WarBoardManager_o *)v30,
                                                                                     v68,
                                                                                     v73,
                                                                                     1,
                                                                                     1,
                                                                                     0,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      CameraPerformanceTask,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  transform = (UnityEngine_Transform_o *)this->fields.pieceData;
  if ( !transform )
    goto LABEL_40;
  IsStageBoss = WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)transform, 0LL);
  EventBossUI = 0LL;
  if ( IsStageBoss )
  {
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_40;
    v41 = (WarBoardManager_o *)transform;
    transform = (UnityEngine_Transform_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v41 )
      goto LABEL_40;
    EventBossUI = (System_Int32_array **)WarBoardManager__GetEventBossUI(v41, (int32_t)transform, 0LL);
  }
  *(_QWORD *)(v13 + 16) = EventBossUI;
  v42 = (WarBoardEventBossUIComponent_o **)(v13 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), EventBossUI, v34, v35, v36, v37, v38, v39);
  v43 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v44 = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
  if ( v44 )
  {
    BossUIDamageTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(
                                                                                (WarBoardServantPieceComponent_o *)v44,
                                                                                *v42,
                                                                                v45);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      BossUIDamageTask,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIBreakTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIBreakTask(
                                                                               v47,
                                                                               *v42,
                                                                               0LL,
                                                                               v48);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      BossUIBreakTask,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  v71 = cameraSize;
  WarBoardPieceBaseComponent__OnBreak(
    (WarBoardPieceBaseComponent_o *)this,
    oldBreakPoint,
    v71,
    v22,
    dummyPointa,
    0LL,
    1,
    0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_40:
    sub_B7769C(transform, v15);
  if ( pieceData->fields._isDead_k__BackingField )
  {
LABEL_36:
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
      (System_Collections_Generic_IEnumerable_T__o *)v27,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    if ( v67 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v67,
        (System_Collections_Generic_IEnumerable_T__o *)v22,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      v67->fields._SubPriority_k__BackingField = priority;
      return;
    }
    transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( transform )
    {
      WarBoardManager__AddTask_18999000(
        (WarBoardManager_o *)transform,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v22,
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
  v53 = sub_B77694(WarBoardGaugePerformance_TypeInfo);
  WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v53, hpBar, 0.0, 1.0, gaugeAnimationFullDuration, 0LL);
  if ( !v53 )
    goto LABEL_40;
  v54 = *(System_Delegate_o **)(v53 + 32);
  v55 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v55,
    (Il2CppObject *)v13,
    Method_WarBoardServantPieceComponent___c__DisplayClass45_0__OnBreak_b__0__,
    0LL);
  v56 = (System_Int32_array **)System_Delegate__Combine(v54, (System_Delegate_o *)v55, 0LL);
  if ( !v56 || *v56 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v53 + 32) = v56;
    sub_B77560((BattleServantConfConponent_o *)(v53 + 32), v56, v57, v58, v59, v60, v61, v62);
    *(_BYTE *)(v53 + 26) = 1;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_36;
  }
  sub_B77990(v56);
  WarBoardServantPieceComponent__CreateBossUIBreakTask(v63, v64, v65, v66);
}


void __fastcall WarBoardServantPieceComponent__OnDamage(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardManager_o *pieceData; // x0
  WarBoardEventBossUIComponent_o *EventBossUI; // x22
  WarBoardManager_o *v7; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  WarBoardServantPieceComponent_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_438D245 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438D245 = 1;
  }
  pieceData = (WarBoardManager_o *)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_17;
  EventBossUI = 0LL;
  if ( WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)pieceData, 0LL) )
  {
    pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_17;
    v7 = pieceData;
    pieceData = (WarBoardManager_o *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v7 )
      goto LABEL_17;
    EventBossUI = WarBoardManager__GetEventBossUI(v7, (int32_t)pieceData, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EventBossUI, 0LL, 0LL) )
  {
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    pieceData = (WarBoardManager_o *)WarBoardServantPieceComponent__CreateBossUIDamageTask(v9, EventBossUI, v10);
    if ( v8 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)pieceData,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      WarBoardPieceBaseComponent__OnDamage(
        (WarBoardPieceBaseComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v8,
        0LL);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v8,
          (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      pieceData = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( pieceData )
      {
        WarBoardManager__AddTask_18999000(pieceData, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v8, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B7769C(pieceData, taskList);
  }
}


void __fastcall WarBoardServantPieceComponent__OnDead(
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
  UnityEngine_Object_o *faceEffect; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  WarBoardServantPieceComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *BossUIDeadTask; // x0
  WarBoardManager_o *v20; // x24
  WarBoardTaskBase_o *Task; // x0
  WarBoardData_o *v22; // x26
  WarBoardMessageMaster_o *Master_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v25; // x24
  int32_t id; // w0
  System_Collections_Generic_IEnumerable_T__o *EventTasks_18963188; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  const MethodInfo *v29; // x2
  System_Int32_array *LatestBattleTargetAndAttacker; // x26
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  WebViewManager_o *Instance; // x23
  const MethodInfo_247A004 *v36; // x2
  bool IsEnemyMonster; // w0
  System_String_o **v38; // x8
  System_String_o *v39; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x23
  __int64 v43; // x25
  __int64 v44; // x26
  ServantEntity_o *v45; // x25
  float v46; // w23
  bool v47; // w0
  __int64 v48; // x2
  Il2CppObject *v49; // x0
  BattleServantConfConponent_o *v50; // x23
  System_Delegate_o *v51; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x22
  WarBoardTaskBase_TaskCallback_o *v53; // x26
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  WarBoardWaitTime_o *v61; // x20
  WarBoardServantPieceComponent_o *v62; // x0
  WarBoardEventBossUIComponent_o *v63; // x1
  const MethodInfo *v64; // x2
  System_Nullable_float__o size; // [xsp+8h] [xbp-78h]
  WarBoardManager_TaskList_o *v66; // [xsp+10h] [xbp-70h]
  System_Nullable_Vector3__o v67; // [xsp+18h] [xbp-68h] BYREF
  int32_t priority; // [xsp+2Ch] [xbp-54h] BYREF
  System_Nullable_float__o v69; // 0:x3.8
  System_Nullable_Vector3__o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438D247 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&WarBoardManager_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent__OnDead_b__46_0__);
    sub_B775C4(&WarBoardWaitTime_TypeInfo);
    sub_B775C4(&StringLiteral_6287/*"Escape_Effect"*/);
    sub_B775C4(&StringLiteral_6146/*"Enemy_Dead_Effect"*/);
    sub_B775C4(&StringLiteral_12967/*"Servant_Dead_Effect"*/);
    sub_B775C4(&StringLiteral_13204/*"Special_Effect{0:D2}"*/);
    byte_438D247 = 1;
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this->fields.pieceData )
      goto LABEL_84;
    v12 = (WarBoardManager_o *)gameObject;
    gameObject = (void *)WarBoardPieceData__get_StageBossIdx(this->fields.pieceData, 0LL);
    if ( !v12 )
      goto LABEL_84;
    EventBossUI = (UnityEngine_Object_o *)WarBoardManager__GetEventBossUI(v12, (int32_t)gameObject, 0LL);
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
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(EventBossUI, 0LL, 0LL);
  if ( v15 )
  {
    gameObject = WarBoardServantPieceComponent__CreateBossUIDamageTask(
                   (WarBoardServantPieceComponent_o *)v15,
                   (WarBoardEventBossUIComponent_o *)EventBossUI,
                   v16);
    if ( !v14 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    BossUIDeadTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardServantPieceComponent__CreateBossUIDeadTask(
                                                                              v17,
                                                                              (WarBoardEventBossUIComponent_o *)EventBossUI,
                                                                              v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      BossUIDeadTask,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v20 = (WarBoardManager_o *)gameObject;
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !v20 )
      goto LABEL_84;
    Task = WarBoardManager__FindTask(v20, WarBoardManager_TypeInfo->static_fields->TASK_KEY_CAMERA_BACK_ACTION, 0LL);
    if ( Task )
      Task->fields.IsEnabled = 0;
  }
  v66 = taskList;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  size = cameraSize;
  v22 = (WarBoardData_o *)*((_QWORD *)gameObject + 54);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  MessageTasks = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MessageTasks,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v25 = (System_Collections_Generic_List_WarBoardTaskBase__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !v22 )
    goto LABEL_84;
  if ( !WarBoardData__IsPlayedEnemyHalfDeadMessage(v22, 0LL) )
  {
    gameObject = (void *)WarBoardData__get_id(v22, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_84;
    MessageTasks = WarBoardMessageMaster__GetMessageTasks(
                     Master_WarQuestSelectionMaster,
                     (int32_t)gameObject,
                     7,
                     0,
                     0,
                     0LL);
    id = WarBoardData__get_id(v22, 0LL);
    v25 = WarBoardMessageMaster__GetMessageTasks(Master_WarQuestSelectionMaster, id, 8, 0, 0, 0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 10, 0LL, 0LL);
  if ( !MessageTasks )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = WarBoardManager__GetEventTasks((WarBoardManager_o *)gameObject, 11, 0LL, 0LL);
  if ( !v25 )
    goto LABEL_84;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    (System_Collections_Generic_IEnumerable_T__o *)gameObject,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  priority = 0;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks_18963188 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18963188(
                                                                         (WarBoardManager_o *)gameObject,
                                                                         24,
                                                                         &priority,
                                                                         0LL,
                                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    EventTasks_18963188,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18963188(
                                                         (WarBoardManager_o *)gameObject,
                                                         25,
                                                         &priority,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    v28,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  LatestBattleTargetAndAttacker = WarBoardServantPieceComponent__GetLatestBattleTargetAndAttacker(this, v22, v29);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v31 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18963188(
                                                         (WarBoardManager_o *)gameObject,
                                                         34,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)MessageTasks,
    v31,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v32 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks_18963188(
                                                         (WarBoardManager_o *)gameObject,
                                                         35,
                                                         &priority,
                                                         LatestBattleTargetAndAttacker,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    v32,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)gameObject,
                                                                22,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    EventTasks,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)gameObject,
                                                         23,
                                                         0LL,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    v34,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = (void *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_84;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    *(_QWORD *)&v70.fields.value.fields.x = &v67;
    *(_QWORD *)&v67.fields.value.fields.x = 0LL;
    *(_QWORD *)&v67.fields.value.fields.z = 0LL;
    *(_QWORD *)&v70.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v70, localPosition, v36);
    if ( !Instance )
      goto LABEL_84;
    v69 = size;
    gameObject = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v67, v69, 1, 1, 0, 0LL);
    if ( !v14 )
      goto LABEL_84;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  }
  gameObject = this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_84;
  IsEnemyMonster = WarBoardPieceData__get_IsEnemyMonster((WarBoardPieceData_o *)gameObject, 0LL);
  v38 = (System_String_o **)&StringLiteral_6146/*"Enemy_Dead_Effect"*/;
  if ( !IsEnemyMonster )
    v38 = (System_String_o **)&StringLiteral_12967/*"Servant_Dead_Effect"*/;
  v39 = *v38;
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_84;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_84;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_84;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  v44 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v44;
  *(_QWORD *)&v71.fields.fakeValue = v43;
  gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v71, 0LL);
  if ( !v42 )
    goto LABEL_84;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v42,
                 (int32_t)gameObject,
                 (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.pieceData )
    goto LABEL_84;
  v45 = (ServantEntity_o *)gameObject;
  gameObject = (void *)WarBoardPieceData__GetDeadEffectType(this->fields.pieceData, 0LL);
  if ( !v45 )
    goto LABEL_84;
  v46 = *(float *)&gameObject;
  v47 = ServantEntity__checkIsHeroineSvt(v45, 0LL);
  if ( LODWORD(v46) == 1 || v47 )
  {
    v39 = (System_String_o *)StringLiteral_6287/*"Escape_Effect"*/;
  }
  else if ( SLODWORD(v46) >= 2 )
  {
    v67.fields.value.fields.x = v46;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v48);
    v39 = System_String__Format((System_String_o *)StringLiteral_13204/*"Special_Effect{0:D2}"*/, v49, 0LL);
  }
  gameObject = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance((WarBoardPieceBaseComponent_o *)this, v39, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v50 = (BattleServantConfConponent_o *)((char *)gameObject + 40);
  v51 = (System_Delegate_o *)*((_QWORD *)gameObject + 5);
  v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
  *((_BYTE *)gameObject + 26) = 1;
  v53 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v53,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnDead_b__46_0__,
    0LL);
  v54 = (System_Int32_array **)System_Delegate__Combine(v51, (System_Delegate_o *)v53, 0LL);
  if ( v54 && *v54 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B77990(v54);
    WarBoardServantPieceComponent__CreateBossUIDeadTask(v62, v63, v64);
    return;
  }
  v50->klass = (BattleServantConfConponent_c *)v54;
  sub_B77560(v50, v54, v55, v56, v57, v58, v59, v60);
  if ( !v14 )
    goto LABEL_84;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    v52,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v61 = (WarBoardWaitTime_o *)sub_B77694(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor(v61, 0.5, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v25,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
      (System_Collections_Generic_IEnumerable_T__o *)v25,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  if ( v66 )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v66,
      (System_Collections_Generic_IEnumerable_T__o *)v14,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v66->fields._SubPriority_k__BackingField = priority;
  }
  else
  {
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_84;
    WarBoardManager__InsertTask_18992016(
      (WarBoardManager_o *)gameObject,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
      0LL);
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
LABEL_84:
    sub_B7769C(gameObject, v10);
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)gameObject, 0LL);
}


void __fastcall WarBoardServantPieceComponent__OnGuts(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_438D252 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18555/*"ef_guts"*/);
    byte_438D252 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18555/*"ef_guts"*/,
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

  if ( (byte_438D251 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18576/*"ef_special_invincible01"*/);
    byte_438D251 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    WarBoardPieceBaseComponent__CreateEffect(
      (WarBoardPieceBaseComponent_o *)this,
      (System_String_o *)StringLiteral_18576/*"ef_special_invincible01"*/,
      taskList,
      0LL);
}


void __fastcall WarBoardServantPieceComponent__OnMapDamage(
        WarBoardServantPieceComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardPieceData_o *gameObject; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  int v10; // w23
  int v11; // w24
  int v12; // w25
  int32_t MaxHp; // w0
  int v14; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v17; // s10
  __int64 v18; // x21
  System_Delegate_o *v19; // x23
  WarBoardServantPieceComponent___c_c *v20; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__57_0; // x24
  Il2CppObject *v23; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WarBoardServantPieceComponent_o *v38; // x0
  System_Action_o *v39; // x1
  const MethodInfo *v40; // x2

  if ( (byte_438D24F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__);
    sub_B775C4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_B775C4(&WarBoardGaugePerformance_TypeInfo);
    byte_438D24F = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v10 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v11 = (int)gameObject;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(this->fields.pieceData, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_26;
    v12 = (int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v14 = v12 - damage;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v17 = (float)v14 / (float)MaxHp;
    v18 = sub_B77694(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor(
      (WarBoardGaugePerformance_o *)v18,
      hpBar,
      (float)v10 / (float)v11,
      v17,
      gaugeAnimationFullDuration,
      0LL);
    if ( !v18 )
      goto LABEL_26;
    v19 = *(System_Delegate_o **)(v18 + 32);
    v20 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v20 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__57_0 = static_fields->__9__57_0;
    if ( !_9__57_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__57_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__57_0,
        v23,
        Method_WarBoardServantPieceComponent___c__OnMapDamage_b__57_0__,
        0LL);
      v24 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v24->__9__57_0 = _9__57_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v24->__9__57_0,
        (System_Int32_array **)_9__57_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Int32_array **)System_Delegate__Combine(v19, (System_Delegate_o *)_9__57_0, 0LL);
    if ( !v31 || *v31 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v18 + 32) = v31;
      sub_B77560((BattleServantConfConponent_o *)(v18 + 32), v31, v32, v33, v34, v35, v36, v37);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v9 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v9,
            (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18999000(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B7769C(gameObject, v8);
    }
    sub_B77990(v31);
    WarBoardServantPieceComponent__Reinforcements(v38, v39, v40);
  }
}


void __fastcall WarBoardServantPieceComponent__OnMapGainHP(
        WarBoardServantPieceComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardPieceData_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  float v12; // s8
  int32_t MaxHp; // w0
  int v14; // w9
  UISprite_o *hpBar; // x22
  float gaugeAnimationFullDuration; // s9
  float v17; // s10
  __int64 v18; // x21
  System_Delegate_o *v19; // x23
  WarBoardServantPieceComponent___c_c *v20; // x0
  struct WarBoardServantPieceComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_0; // x24
  Il2CppObject *v23; // x25
  struct WarBoardServantPieceComponent___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WarBoardServantPieceComponent_o *v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_438D254 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__);
    sub_B775C4(&WarBoardServantPieceComponent___c_TypeInfo);
    sub_B775C4(&WarBoardGaugePerformance_TypeInfo);
    byte_438D254 = 1;
  }
  gameObject = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    gameObject = this->fields.pieceData;
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (WarBoardPieceData_o *)WarBoardPieceData__get_MaxHp(gameObject, 0LL);
    if ( !this->fields.pieceData )
      goto LABEL_24;
    v12 = (float)oldHp / (float)(int)gameObject;
    MaxHp = WarBoardPieceData__get_MaxHp(this->fields.pieceData, 0LL);
    v14 = gainHp + oldHp;
    hpBar = this->fields.hpBar;
    gaugeAnimationFullDuration = this->fields.gaugeAnimationFullDuration;
    v17 = (float)v14 / (float)MaxHp;
    v18 = sub_B77694(WarBoardGaugePerformance_TypeInfo);
    WarBoardGaugePerformance___ctor((WarBoardGaugePerformance_o *)v18, hpBar, v12, v17, gaugeAnimationFullDuration, 0LL);
    if ( !v18 )
      goto LABEL_24;
    v19 = *(System_Delegate_o **)(v18 + 32);
    v20 = WarBoardServantPieceComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardServantPieceComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardServantPieceComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardServantPieceComponent___c_TypeInfo);
      v20 = WarBoardServantPieceComponent___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__63_0 = static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        _9__63_0,
        v23,
        Method_WarBoardServantPieceComponent___c__OnMapGainHP_b__63_0__,
        0LL);
      v24 = WarBoardServantPieceComponent___c_TypeInfo->static_fields;
      v24->__9__63_0 = _9__63_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v24->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Int32_array **)System_Delegate__Combine(v19, (System_Delegate_o *)_9__63_0, 0LL);
    if ( !v31 || *v31 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v18 + 32) = v31;
      sub_B77560((BattleServantConfConponent_o *)(v18 + 32), v31, v32, v33, v34, v35, v36, v37);
      *(_BYTE *)(v18 + 26) = 0;
      if ( v11 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v11,
            (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        gameObject = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( gameObject )
        {
          WarBoardManager__AddTask_18999000(
            (WarBoardManager_o *)gameObject,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
            0LL);
          return;
        }
      }
LABEL_24:
      sub_B7769C(gameObject, v10);
    }
    sub_B77990(v31);
    WarBoardServantPieceComponent___ctor(v38, v39);
  }
}


void __fastcall WarBoardServantPieceComponent__OnRevive(
        WarBoardServantPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v8; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  struct WarBoardPieceData_o *v10; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  WebViewManager_o *v15; // x22
  const MethodInfo_247A004 *v16; // x2
  BattleServantConfConponent_o *p_deactiveObject; // x23
  System_Delegate_o *deactiveObject; // x24
  WarBoardBreakPointComponent_o *v19; // x22
  WarBoardTaskBase_TaskCallback_o *v20; // x25
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WarBoardWaitTime_o *v28; // x20
  __int64 v29; // x0
  WarBoardServantPieceComponent_o *v30; // x0
  bool v31; // w1
  const MethodInfo *v32; // x2
  System_Nullable_Vector3__o v33; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v34; // 0:x3.8
  System_Nullable_Vector3__o v35; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438D248 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent__OnRevive_b__47_0__);
    sub_B775C4(&WarBoardWaitTime_TypeInfo);
    sub_B775C4(&StringLiteral_12968/*"Servant_Regenerate_Effect"*/);
    byte_438D248 = 1;
  }
  WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)taskList);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_10;
  v8 = 0LL;
  while ( (int)v8 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v8 >= breakPoints->max_length )
      {
        v29 = sub_B776C8(Instance);
        sub_B77668(v29, 0LL);
      }
      Instance = breakPoints->m_Items[v8];
      if ( Instance )
      {
        WarBoardBreakPointComponent__SetActive(Instance, 1, 0, 0LL);
        pieceData = this->fields.pieceData;
        ++v8;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_10;
  }
  Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = this->fields.pieceData;
  if ( !v10 )
    goto LABEL_10;
  if ( !Instance )
    goto LABEL_10;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v10->fields._nowSquareIndex_k__BackingField,
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
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v37, 0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v35.fields.value.fields.x = &v33;
  *(_QWORD *)&v33.fields.value.fields.x = 0LL;
  *(_QWORD *)&v33.fields.value.fields.z = 0LL;
  *(_QWORD *)&v35.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v35, localPosition, v16);
  if ( !v15 )
    goto LABEL_10;
  v34 = 0LL;
  Instance = (WarBoardBreakPointComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                (WarBoardManager_o *)v15,
                                                v33,
                                                v34,
                                                1,
                                                0,
                                                1,
                                                0LL);
  if ( !v14 )
    goto LABEL_10;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  Instance = (WarBoardBreakPointComponent_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                                (WarBoardPieceBaseComponent_o *)this,
                                                (System_String_o *)StringLiteral_12968/*"Servant_Regenerate_Effect"*/,
                                                0LL);
  if ( !Instance )
    goto LABEL_10;
  p_deactiveObject = (BattleServantConfConponent_o *)&Instance->fields.deactiveObject;
  deactiveObject = (System_Delegate_o *)Instance->fields.deactiveObject;
  v19 = Instance;
  BYTE2(Instance->fields.activeObject) = 1;
  v20 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardServantPieceComponent__OnRevive_b__47_0__,
    0LL);
  v21 = (System_Int32_array **)System_Delegate__Combine(deactiveObject, (System_Delegate_o *)v20, 0LL);
  if ( !v21 || *v21 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v19->fields.deactiveObject = (struct UISprite_o *)v21;
    sub_B77560(p_deactiveObject, v21, v22, v23, v24, v25, v26, v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v28 = (WarBoardWaitTime_o *)sub_B77694(WarBoardWaitTime_TypeInfo);
    WarBoardWaitTime___ctor(v28, 0.5, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v14,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    }
    else
    {
      Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_10;
      WarBoardManager__InsertTask_18992016(
        (WarBoardManager_o *)Instance,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
        0LL);
    }
    Instance = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  sub_B77990(v21);
  WarBoardServantPieceComponent__SetActiveNpBarEffect(v30, v31, v32);
}


void __fastcall WarBoardServantPieceComponent__Reinforcements(
        WarBoardServantPieceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  char *transform; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  WebViewManager_o *Instance; // x22
  const MethodInfo_247A004 *v22; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x19
  BattleServantConfConponent_o *v24; // x22
  System_Delegate_o *v25; // x23
  WarBoardTaskBase_TaskCallback_o *v26; // x24
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *v34; // x19
  WarBoardServantPieceComponent_o *v35; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v36; // x1
  const MethodInfo *v37; // x2
  System_Nullable_Vector3__o v38; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438D250 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__);
    sub_B775C4(&WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
    sub_B775C4(&StringLiteral_11593/*"Reinforcement_Effect_1"*/);
    byte_438D250 = 1;
  }
  v5 = sub_B77694(WarBoardServantPieceComponent___c__DisplayClass58_0_TypeInfo);
  WarBoardServantPieceComponent___c__DisplayClass58_0___ctor(
    (WarBoardServantPieceComponent___c__DisplayClass58_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(_QWORD *)&v40.fields.value.fields.x = &v38;
  *(_QWORD *)&v38.fields.value.fields.x = 0LL;
  *(_QWORD *)&v38.fields.value.fields.z = 0LL;
  *(_QWORD *)&v40.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v40, localPosition, v22);
  if ( !Instance )
    goto LABEL_12;
  v39 = 0LL;
  transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)Instance, v38, v39, 1, 0, 1, 0LL);
  if ( !v20 )
    goto LABEL_12;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_11593/*"Reinforcement_Effect_1"*/,
                        0LL);
  if ( !transform )
    goto LABEL_12;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v24 = (BattleServantConfConponent_o *)(transform + 40);
  v25 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v26 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_WarBoardServantPieceComponent___c__DisplayClass58_0__Reinforcements_b__0__,
    0LL);
  v27 = (System_Int32_array **)System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0LL);
  if ( !v27 || *v27 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v23[1].klass = (EventMissionProgressRequest_Argument_ProgressData_c *)v27;
    sub_B77560(v24, v27, v28, v29, v30, v31, v32, v33);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      v23,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v34 )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)v34, (WarBoardTaskBase_array *)transform, 0LL);
      return;
    }
LABEL_12:
    sub_B7769C(transform, v7);
  }
  sub_B77990(v27);
  WarBoardServantPieceComponent__OnInvincible(v35, v36, v37);
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
      sub_B7769C(this, active);
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
  UnityEngine_GameObject_o *classIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardIndividualityClassMaster_o *v5; // x20
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v7; // x2
  __int64 v8; // x8
  UISprite_o *classIcon; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x0
  int v12; // [xsp+4h] [xbp-1Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D23D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_RestrictionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_21669/*"onBoard_initial_placement_class2_{0}"*/);
    byte_438D23D = 1;
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
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_RestrictionMaster___);
  entity = 0LL;
  pieceData = this->fields.pieceData;
  if ( !pieceData || !classIconRoot )
LABEL_23:
    sub_B7769C(classIconRoot, method);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)classIconRoot,
    &entity,
    pieceData->fields._restrictionId_k__BackingField,
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
  classIconRoot = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardIndividualityClassMaster___);
  v5 = (WarBoardIndividualityClassMaster_o *)classIconRoot;
  if ( !entity )
  {
    if ( !classIconRoot )
      goto LABEL_23;
LABEL_20:
    classIconRoot = (UnityEngine_GameObject_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(v5, 0LL);
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
  v8 = *(_QWORD *)&ServantClassEntities->max_length;
  if ( !v8 )
    goto LABEL_20;
  if ( !(_DWORD)v8 )
  {
    v11 = sub_B776C8(ServantClassEntities);
    sub_B77668(v11, 0LL);
  }
  classIconRoot = (UnityEngine_GameObject_o *)ServantClassEntities->m_Items[0];
  if ( !classIconRoot )
    goto LABEL_23;
LABEL_21:
  classIcon = this->fields.classIcon;
  v12 = *((_DWORD *)&classIconRoot[1].fields + 1);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7);
  classIconRoot = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_21669/*"onBoard_initial_placement_class2_{0}"*/, v10, 0LL);
  if ( !classIcon )
    goto LABEL_23;
  UISprite__set_spriteName(classIcon, (System_String_o *)classIconRoot, 0LL);
}


void __fastcall WarBoardServantPieceComponent__SetPartyBuffLevel(
        WarBoardServantPieceComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyBuffComponent; // x21
  const MethodInfo *v6; // x1
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x0

  if ( (byte_438D24D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D24D = 1;
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
             (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
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
LABEL_15:
    sub_B7769C(pieceData, v6);
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
    sub_B7769C(this, userServantId);
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
    sub_B7769C(this, userServantEquipId);
  if ( pieceData->fields._isEditing_k__BackingField )
    WarBoardServantPieceComponent__SetServantIcon(this, (const MethodInfo *)userServantEquipId);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceComponent__SetServantIcon(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardServantPieceComponent_o *v2; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  struct WarBoardPieceData_o *v5; // x8
  int32_t npcImageSvtId_k__BackingField; // w21
  int32_t npcDispLimitCount_k__BackingField; // w22
  struct WarBoardPieceData_o *v8; // x8
  int32_t v9; // w20
  UISprite_o *servantIcon; // x23
  bool v11; // w20
  __int64 v12; // x2
  int32_t servantLevel; // w20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UISprite_o *enemyIcon; // x22
  System_String_o *v19; // x21
  UISprite_o *v20; // x21
  System_String_o *v21; // x22
  UISprite_o *enemyIconBg; // x21
  struct WarBoardPieceData_o *v23; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *removeTweenTargetObjects; // x20
  bool v25; // w20
  struct WarBoardPieceData_o *v26; // x8
  UISprite_o *frameInClassIcon; // x22
  int32_t iconFrameType_k__BackingField; // w20
  int32_t iconClassId_k__BackingField; // w21
  UnityEngine_Object_o *equipeIcon; // x20
  struct WarBoardPieceData_o *v31; // x8
  UISprite_o *v32; // x20
  int32_t iconEquipId_k__BackingField; // w21
  struct WarBoardPieceData_o *v34; // x8
  UnityEngine_Object_o *supportSprite; // x20
  UnityEngine_GameObject_o *v36; // x20
  UnityEngine_Object_o *v37; // x20
  UILabel_o *v38; // x20
  __int64 v39; // x2
  struct WarBoardPieceData_o *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  struct WarBoardPieceData_o *v43; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct WarBoardPieceData_o *v47; // x8
  struct WarBoardPieceData_o *v48; // x8
  WarBoardSquareData_o *Square; // x0
  char v50; // w20
  struct WarBoardPieceData_o *v51; // x8
  struct WarBoardPieceData_o *v52; // x8
  WarBoardSquareData_o *v53; // x0
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+18h] [xbp-28h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_438D23E & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_22102/*"questinfo_enemyface_bg"*/);
    this = (WarBoardServantPieceComponent_o *)sub_B775C4(&StringLiteral_15532/*"WARBOARD_PIECE_ICON_SVT_LV"*/);
    byte_438D23E = 1;
  }
  v56 = 0;
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
                v47 = v2->fields.pieceData;
                if ( v47 )
                {
                  if ( !v47->fields._isEditing_k__BackingField )
                    return;
                  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                  if ( this )
                  {
                    v48 = v2->fields.pieceData;
                    if ( v48 )
                    {
                      this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
                      if ( this )
                      {
                        Square = WarBoardData__GetSquare(
                                   (WarBoardData_o *)this,
                                   v48->fields._nowSquareIndex_k__BackingField,
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
  v5 = v2->fields.pieceData;
  if ( !v5 )
    goto LABEL_123;
  npcImageSvtId_k__BackingField = v5->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v5->fields._iconId_k__BackingField;
  v56 = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v5->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v5->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v8 = v2->fields.pieceData;
  if ( !v8 )
    goto LABEL_123;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)this,
                                              v8->fields._iconId_k__BackingField,
                                              npcDispLimitCount_k__BackingField,
                                              0LL);
  if ( !v2->fields.pieceData )
    goto LABEL_123;
  v9 = (int)this;
  if ( WarBoardPieceData__get_IsEnemyMonster(v2->fields.pieceData, 0LL) )
    goto LABEL_26;
  servantIcon = (UISprite_o *)v2->fields.servantIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, npcImageSvtId_k__BackingField, v9, 0LL) )
  {
LABEL_26:
    this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_123;
    servantLevel = (int32_t)this->fields.servantLevel;
    iconLevel_k__BackingField = npcImageSvtId_k__BackingField;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v12);
    v54 = npcDispLimitCount_k__BackingField;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v15);
    v17 = System_String__Concat(v14, v16, 0LL);
    enemyIcon = (UISprite_o *)v2->fields.enemyIcon;
    v19 = v17;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_24479740(servantLevel, enemyIcon, v19, 0LL) )
      goto LABEL_35;
    v20 = (UISprite_o *)v2->fields.enemyIcon;
    v21 = System_Int32__ToString((int32_t)&v56, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI_24479740(servantLevel, v20, v21, 0LL) )
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
    this = (WarBoardServantPieceComponent_o *)AtlasManager__SetEventUI_24479740(
                                                servantLevel,
                                                enemyIconBg,
                                                (System_String_o *)StringLiteral_22102/*"questinfo_enemyface_bg"*/,
                                                0LL);
    v23 = v2->fields.pieceData;
    if ( !v23 )
      goto LABEL_123;
    if ( v23->fields._IsShadow_k__BackingField )
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
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
      ((void (__fastcall *)(WarBoardServantPieceComponent_o *, Il2CppMethodPointer))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
        v2,
        v2->klass->vtable._12_ShowStatus.methodPtr);
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  this = (WarBoardServantPieceComponent_o *)v2->fields.servantIcon;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIcon;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  v25 = !v11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25, 0LL);
  this = (WarBoardServantPieceComponent_o *)v2->fields.enemyIconBg;
  if ( !this )
    goto LABEL_123;
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25, 0LL);
  v26 = v2->fields.pieceData;
  if ( !v26 )
    goto LABEL_123;
  frameInClassIcon = v2->fields.frameInClassIcon;
  iconClassId_k__BackingField = v26->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v26->fields._iconFrameType_k__BackingField;
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
    v31 = v2->fields.pieceData;
    if ( !v31 )
      goto LABEL_123;
    v32 = (UISprite_o *)v2->fields.equipeIcon;
    iconEquipId_k__BackingField = v31->fields._iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v32, iconEquipId_k__BackingField, 0LL);
  }
  this = (WarBoardServantPieceComponent_o *)v2->fields.EquipIcon;
  if ( !this
    || (this = (WarBoardServantPieceComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL),
        (v34 = v2->fields.pieceData) == 0LL)
    || !this )
  {
LABEL_123:
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34->fields._iconEquipId_k__BackingField > 0, 0LL);
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
    v36 = (UnityEngine_GameObject_o *)this;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0LL);
    if ( !v36 )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive(v36, (unsigned __int8)this & 1, 0LL);
  }
  v37 = (UnityEngine_Object_o *)v2->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardServantPieceComponent_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v38 = v2->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (WarBoardServantPieceComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15532/*"WARBOARD_PIECE_ICON_SVT_LV"*/, 0LL);
    v40 = v2->fields.pieceData;
    if ( !v40 )
      goto LABEL_123;
    v41 = (System_String_o *)this;
    iconLevel_k__BackingField = v40->fields._iconLevel_k__BackingField;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v39);
    this = (WarBoardServantPieceComponent_o *)System_String__Format(v41, v42, 0LL);
    if ( !v38 )
      goto LABEL_123;
    UILabel__set_text(v38, (System_String_o *)this, 0LL);
    this = (WarBoardServantPieceComponent_o *)v2->fields.pieceData;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_isEnemyServant((WarBoardPieceData_o *)this, 0LL);
    v43 = v2->fields.pieceData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_123;
      if ( v43->fields._roleType_k__BackingField == 1 )
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
    else if ( !v43 )
    {
      goto LABEL_123;
    }
    this = (WarBoardServantPieceComponent_o *)WarBoardPieceData__get_IsNpc(v2->fields.pieceData, 0LL);
    if ( !v2->fields.servantLevel )
      goto LABEL_123;
    v50 = (char)this;
    this = (WarBoardServantPieceComponent_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)v2->fields.servantLevel,
                                                0LL);
    if ( (v50 & 1) != 0 )
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
  v51 = v2->fields.pieceData;
  if ( !v51 )
    goto LABEL_123;
  if ( !v51->fields._isEditing_k__BackingField )
    return;
  this = (WarBoardServantPieceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_123;
  v52 = v2->fields.pieceData;
  if ( !v52 )
    goto LABEL_123;
  this = *(WarBoardServantPieceComponent_o **)&this->fields.positionLevelDanger.fields.y;
  if ( !this )
    goto LABEL_123;
  v53 = WarBoardData__GetSquare((WarBoardData_o *)this, v52->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !v53 )
    return;
  this = (WarBoardServantPieceComponent_o *)v53->fields.squareComponent;
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

  if ( (byte_438D23F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_438D23F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  pieceData = this->fields.pieceData;
  v6 = **(WarBoardManager_o ***)(v4 + 184);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
    sub_B7769C(transform, v8);
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
          sub_B7769C(this, method);
        }
LABEL_27:
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
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
    sub_B7769C(this, x);
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
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardServantPieceComponent___OnRevive_b__47_0(
        WarBoardServantPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0

  if ( (byte_438D255 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_438D255 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button
    || (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(button, 0LL)) == 0LL
    || (button = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)button,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))button->klass[1]._1.castClass)(
          button,
          button->klass[1]._1.declaringType,
          0.0),
        (button = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(button, method);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438927D & 1) == 0 )
  {
    sub_B775C4(&WarBoardServantPieceComponent___c_TypeInfo);
    byte_438927D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardServantPieceComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardServantPieceComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438927E & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438927E = 1;
  }
  result = (System_Collections_Generic_IEnumerable_int__o *)sub_B775DC(int___TypeInfo, 3LL);
  if ( !x || !result )
    sub_B7769C(result, v5);
  monitor = (unsigned int)result[1].monitor;
  if ( !monitor
    || (LODWORD(result[2].klass) = x->fields._forceId_k__BackingField, monitor == 1)
    || (HIDWORD(result[2].klass) = x->fields._groupId_k__BackingField, monitor <= 2) )
  {
    v7 = sub_B776C8(result);
    sub_B77668(v7, 0LL);
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
  WarBoardEventBossUIComponent_o *Instance; // x0
  __int64 v4; // x1
  struct UISprite_o *hpBarWhiteSprite; // x8
  System_String_o *mGo; // x20
  struct WarBoardServantPieceComponent_o *_4__this; // x8

  if ( (byte_438927F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438927F = 1;
  }
  Instance = (WarBoardEventBossUIComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B7769C(Instance, v4);
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
  System_Action_o *_9__2; // x21
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v2 = this;
  if ( (byte_4389280 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass49_0_o *)sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__);
    byte_4389280 = 1;
  }
  _9__2 = v2->fields.__9__2;
  eventBossUI = v2->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_WarBoardServantPieceComponent___c__DisplayClass49_0__CreateBossUIDamageTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  if ( !eventBossUI )
    sub_B7769C(this, method);
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
    sub_B7769C(0LL, method);
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
  System_Action_o *_9__2; // x22
  WarBoardEventBossUIComponent_o *eventBossUI; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v2 = this;
  if ( (byte_4389281 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (WarBoardServantPieceComponent___c__DisplayClass51_0_o *)sub_B775C4(&Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__);
    byte_4389281 = 1;
  }
  _9__2 = v2->fields.__9__2;
  eventBossUI = v2->fields.eventBossUI;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_WarBoardServantPieceComponent___c__DisplayClass51_0__CreateBossUIDeadTask_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  if ( !eventBossUI )
    sub_B7769C(this, method);
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
    sub_B7769C(0LL, v3);
  ((void (__fastcall *)(struct WarBoardServantPieceComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_ChangeStatus.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._16_IsModifyStatus.methodPtr);
}
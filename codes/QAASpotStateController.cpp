void __fastcall QAASpotStateController___ctor(QAASpotStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController__Init(
        QAASpotStateController_o *this,
        QAASpotStateController_IMapSpot_o *targetObject,
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
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  QAASpotStateController_Fields *p_fields; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  QAASpotStateController_StateNone_o *v25; // x22
  __int64 v26; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  QAASpotStateController_StateMapMain_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  QAASpotStateController_StateQaaHide_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  QAASpotStateController_StateQaaGray_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  QAASpotStateController_StateQaaDisp_o *v42; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  QAASpotStateController_StateQaaHide_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  QAASpotStateController_StateQaaGray_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  QAASpotStateController_StateQaaDisp_o *v54; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  QAASpotStateController_StateQaaChange_o *v58; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  QAASpotStateController_StateQaaAnimation_o *v62; // x21
  const MethodInfo *v63; // x2

  if ( (byte_4214543 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject);
    sub_B0D8A4(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v5);
    sub_B0D8A4(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v6);
    sub_B0D8A4(&QAASpotStateController_StateMapMain_TypeInfo, v7);
    sub_B0D8A4(&QAASpotStateController_StateNone_TypeInfo, v8);
    sub_B0D8A4(&QAASpotStateController_StateQaaAnimation_TypeInfo, v9);
    sub_B0D8A4(&QAASpotStateController_StateQaaChange_TypeInfo, v10);
    sub_B0D8A4(&QAASpotStateController_StateQaaDisp_TypeInfo, v11);
    sub_B0D8A4(&QAASpotStateController_StateQaaGray_TypeInfo, v12);
    sub_B0D8A4(&QAASpotStateController_StateQaaHide_TypeInfo, v13);
    byte_4214543 = 1;
  }
  v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                              CStateManager_QAASpotStateController_IMapSpot__TypeInfo,
                                                              targetObject,
                                                              method);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v14,
    targetObject,
    10,
    (const MethodInfo_2AAF784 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v14;
  p_fields = &this->fields;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  stateManager = this->fields.stateManager;
  v25 = (QAASpotStateController_StateNone_o *)sub_B0D974(QAASpotStateController_StateNone_TypeInfo, v23, v24);
  QAASpotStateController_StateNone___ctor(v25, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v25,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v27 = p_fields->stateManager;
  v30 = (QAASpotStateController_StateMapMain_o *)sub_B0D974(QAASpotStateController_StateMapMain_TypeInfo, v28, v29);
  QAASpotStateController_StateMapMain___ctor(v30, 0LL);
  if ( !v27 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v27,
    1,
    (IState_T__o *)v30,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v31 = p_fields->stateManager;
  v34 = (QAASpotStateController_StateQaaHide_o *)sub_B0D974(QAASpotStateController_StateQaaHide_TypeInfo, v32, v33);
  QAASpotStateController_StateQaaHide___ctor(v34, 0, 0LL);
  if ( !v31 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v31,
    2,
    (IState_T__o *)v34,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v35 = p_fields->stateManager;
  v38 = (QAASpotStateController_StateQaaGray_o *)sub_B0D974(QAASpotStateController_StateQaaGray_TypeInfo, v36, v37);
  QAASpotStateController_StateQaaGray___ctor(v38, 0, 0LL);
  if ( !v35 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v35,
    3,
    (IState_T__o *)v38,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v39 = p_fields->stateManager;
  v42 = (QAASpotStateController_StateQaaDisp_o *)sub_B0D974(QAASpotStateController_StateQaaDisp_TypeInfo, v40, v41);
  QAASpotStateController_StateQaaDisp___ctor(v42, 0, 0LL);
  if ( !v39 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v39,
    4,
    (IState_T__o *)v42,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v43 = p_fields->stateManager;
  v46 = (QAASpotStateController_StateQaaHide_o *)sub_B0D974(QAASpotStateController_StateQaaHide_TypeInfo, v44, v45);
  QAASpotStateController_StateQaaHide___ctor(v46, 1, 0LL);
  if ( !v43 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v43,
    5,
    (IState_T__o *)v46,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v47 = p_fields->stateManager;
  v50 = (QAASpotStateController_StateQaaGray_o *)sub_B0D974(QAASpotStateController_StateQaaGray_TypeInfo, v48, v49);
  QAASpotStateController_StateQaaGray___ctor(v50, 1, 0LL);
  if ( !v47 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v47,
    6,
    (IState_T__o *)v50,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v51 = p_fields->stateManager;
  v54 = (QAASpotStateController_StateQaaDisp_o *)sub_B0D974(QAASpotStateController_StateQaaDisp_TypeInfo, v52, v53);
  QAASpotStateController_StateQaaDisp___ctor(v54, 1, 0LL);
  if ( !v51 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v51,
    7,
    (IState_T__o *)v54,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v55 = p_fields->stateManager;
  v58 = (QAASpotStateController_StateQaaChange_o *)sub_B0D974(QAASpotStateController_StateQaaChange_TypeInfo, v56, v57);
  QAASpotStateController_StateQaaChange___ctor(v58, 0, 0LL);
  if ( !v55
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v55,
          8,
          (IState_T__o *)v58,
          (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v59 = p_fields->stateManager,
        v62 = (QAASpotStateController_StateQaaAnimation_o *)sub_B0D974(
                                                              QAASpotStateController_StateQaaAnimation_TypeInfo,
                                                              v60,
                                                              v61),
        QAASpotStateController_StateQaaAnimation___ctor(v62, 0, 0LL),
        !v59) )
  {
LABEL_14:
    sub_B0D97C(v26);
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v59,
    9,
    (IState_T__o *)v62,
    (const MethodInfo_2AAF850 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v63);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x0
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
  __int64 *v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  QAASpotStateController_IMapSpot_c **v31; // x11
  __int64 v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x21
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  QAASpotStateController_IMapSpot_c **v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  float v48; // s0
  EasingObject_o *v49; // x19
  System_Action_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x22

  if ( (byte_4214547 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isActive);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_B0D8A4(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v11);
    sub_B0D8A4(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v12);
    sub_B0D8A4(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v13);
    byte_4214547 = 1;
  }
  v14 = sub_B0D974(QAASpotStateController___c__DisplayClass9_0_TypeInfo, isActive, finishCallback);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)(v14 + 16) = targetObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)targetObject,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v14 + 32) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v14 + 32),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = *(__int64 **)(v14 + 16);
  if ( !v28 )
    goto LABEL_24;
  v29 = *v28;
  if ( *(_WORD *)(*v28 + 298) )
  {
    v30 = 0LL;
    v31 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= *(unsigned __int16 *)(*v28 + 298) )
        goto LABEL_9;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 5) + 312;
  }
  else
  {
LABEL_9:
    v32 = sub_AA67A0(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v33 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v33,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 48) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 48), Component_UIWidget, v35, v36, v37, v38, v39, v40);
  v41 = *(__int64 **)(v14 + 16);
  if ( !v41 )
    goto LABEL_24;
  v42 = *v41;
  if ( *(_WORD *)(*v41 + 298) )
  {
    v43 = 0LL;
    v44 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *(v44 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v43;
      v44 += 2;
      if ( v43 >= *(unsigned __int16 *)(*v41 + 298) )
        goto LABEL_16;
    }
    v45 = v42 + 16LL * (*(_DWORD *)v44 + 7) + 312;
  }
  else
  {
LABEL_16:
    v45 = sub_AA67A0(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v14 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
  v48 = 0.5;
  if ( isActive )
    v48 = 1.0;
  *(float *)(v14 + 24) = v48;
  if ( time > 0.0 )
  {
    v49 = *(EasingObject_o **)(v14 + 48);
    v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v53 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v49 )
    {
      EasingObject__Play(v49, time, v50, v53, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B0D97C(v15);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v14,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetQaaScaleAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  TweenWidth_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_GameObject_o *v26; // x22
  QAASpotStateController_IMapSpot_c *v27; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  QAASpotStateController_IMapSpot_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v38; // s0
  int v39; // s1
  int v40; // s2
  float v41; // s1
  float v42; // s2
  int v43; // s12
  int v44; // s13
  int v45; // s14
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v49; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214546 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_B0D8A4(&EventDelegate_TypeInfo, v9);
    sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_B0D8A4(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v11);
    sub_B0D8A4(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v12);
    sub_B0D8A4(&Method_UITweener_Begin_TweenScale___, v13);
    byte_4214546 = 1;
  }
  v14 = sub_B0D974(QAASpotStateController___c__DisplayClass8_0_TypeInfo, isDisp, finishCallback);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !targetObject )
    goto LABEL_33;
  klass = targetObject->klass;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v26 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    v27 = targetObject->klass;
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v27->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v32 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v33 = (__int64)&v27->vtable[*v32 + 4].method;
    }
    else
    {
LABEL_16:
      v33 = sub_AA67A0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v33)(targetObject, *(_QWORD *)(v33 + 8));
  }
  else
  {
    v34 = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v36 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v37 = (__int64)&v34->vtable[*v36 + 4].method;
    }
    else
    {
LABEL_21:
      v37 = sub_AA67A0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v37)(
                     targetObject,
                     *(_QWORD *)(v37 + 8)));
    y = v41;
    z = v42;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
  }
  v43 = v38;
  v44 = v39;
  v45 = v40;
  if ( time <= 0.0 )
  {
    GameObjectExtensions__SetLocalScale(v26, *(UnityEngine_Vector3_o *)&v38, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  v15 = UITweener__Begin_TweenWidth_(v26, time, (const MethodInfo_205679C *)Method_UITweener_Begin_TweenScale___);
  if ( !v15 )
LABEL_33:
    sub_B0D97C(v15);
  *(float *)&v15->fields.from = x;
  *(float *)&v15->fields.to = y;
  *(float *)&v15->fields.updateTable = z;
  *((_DWORD *)&v15->fields.updateTable + 1) = v43;
  LODWORD(v15->fields.mWidget) = v44;
  HIDWORD(v15->fields.mWidget) = v45;
  v15->fields.style = 2;
  onFinished = v15->fields.onFinished;
  v49 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v46, v47);
  EventDelegate_Callback___ctor(
    v49,
    (Il2CppObject *)v14,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_28893376(onFinished, v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4214545 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state);
    byte_4214545 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4214544 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method);
    byte_4214544 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2AAF8CC *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
}


void __fastcall QAASpotStateController_StateMapMain___ctor(
        QAASpotStateController_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateMapMain__begin(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  char v8; // w0
  QAASpotStateController_IMapSpot_c *v9; // x8
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x2
  void (__fastcall *v18)(QAASpotStateController_IMapSpot_o *, __int64, __int64); // x3
  QAASpotStateController_IMapSpot_o *v19; // x0
  __int64 v20; // x1

  if ( (byte_42121BF & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_42121BF = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)&that->klass->_2.bitflags1;
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= v10 )
          goto LABEL_15;
      }
      v13 = (__int64)&v9->vtable[*v12 + 1].method;
    }
    else
    {
LABEL_15:
      v13 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
    }
    v18 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v13;
    v17 = *(_QWORD *)(v13 + 8);
    v19 = that;
    v20 = 0LL;
  }
  else
  {
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= v10 )
          goto LABEL_20;
      }
      v16 = (__int64)&v9->vtable[*v15 + 3].method;
    }
    else
    {
LABEL_20:
      v16 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
    }
    v18 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v16;
    v17 = *(_QWORD *)(v16 + 8);
    v20 = 1LL;
    v19 = that;
  }
  v18(v19, v20, v17);
}


void __fastcall QAASpotStateController_StateMapMain__end(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateMapMain__update(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42121C0 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_42121C0 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
}


void __fastcall QAASpotStateController_StateNone___ctor(
        QAASpotStateController_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateNone__begin(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateNone__end(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateNone__update(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaAnimation___ctor(
        QAASpotStateController_StateQaaAnimation_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaAnimation__begin(
        QAASpotStateController_StateQaaAnimation_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v9; // w20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  QAASpotStateController_IMapSpot_c *v13; // x8
  System_Action_o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  QAASpotStateController_IMapSpot_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0

  if ( (byte_42121C1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v4);
    byte_42121C1 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v12 = sub_B0D974(System_Action_TypeInfo, v10, v11);
  v13 = that->klass;
  v14 = (System_Action_o *)v12;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v16 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v17 = (__int64)&v13->vtable[*v16 + 10].method;
  }
  else
  {
LABEL_14:
    v17 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v14, (Il2CppObject *)that, *(_QWORD *)(v17 + 8), 0LL);
  v18 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v21 = (__int64)&v18->vtable[*v20 + 16].method;
  }
  else
  {
LABEL_20:
    v21 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v21)(
    that,
    v9,
    v14,
    *(_QWORD *)(v21 + 8));
}


void __fastcall QAASpotStateController_StateQaaBase___ctor(
        QAASpotStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaBase__begin(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaBase__end(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaBase__update(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaChange___ctor(
        QAASpotStateController_StateQaaChange_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v8; // x20
  __int64 v9; // x0
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_Fields *p_fields; // x21
  struct QAASpotStateController_IMapSpot_o *v11; // x22
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v13; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  struct QAASpotStateController_IMapSpot_o *v19; // x19
  QAASpotStateController_IMapSpot_c *v20; // x8
  unsigned __int64 v21; // x10
  QAASpotStateController_IMapSpot_c **v22; // x11
  __int64 v23; // x0

  if ( (byte_42121C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    sub_B0D8A4(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v6);
    sub_B0D8A4(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v7);
    byte_42121C2 = 1;
  }
  v8 = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B0D974(
                                                                         QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo,
                                                                         that,
                                                                         method);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_23;
  v8->fields.that = that;
  p_fields = &v8->fields;
  sub_B0D840(&v8->fields, that);
  v8->fields.__4__this = this;
  sub_B0D840(&v8->fields.__4__this, this);
  v11 = v8->fields.that;
  if ( !v11 )
    goto LABEL_23;
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         v11,
         *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v8,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(v8->fields.that, 0, this->fields.Duration, v18, 0LL);
    }
    return;
  }
  v19 = p_fields->that;
  if ( !p_fields->that )
LABEL_23:
    sub_B0D97C(v9);
  v20 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (QAASpotStateController_IMapSpot_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 10].method;
  }
  else
  {
LABEL_19:
    v23 = sub_AA67A0(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
}


void __fastcall QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateQaaChange___c__DisplayClass1_0___begin_b__0(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v2; // x19
  __int64 v3; // x1
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v13; // x19
  Il2CppClass *v14; // x8
  System_Action_o *v15; // x20
  unsigned __int64 v16; // x10
  QAASpotStateController_IMapSpot_c **v17; // x11
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_4211F9C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B0D8A4(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v3);
    byte_4211F9C = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v8 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v8 = sub_AA67A0(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v8)(
                                                                           that,
                                                                           *(_QWORD *)(v8 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v13 = (Il2CppObject *)v2->fields.that,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B0D974(
                                                                                 System_Action_TypeInfo,
                                                                                 v9,
                                                                                 v10),
        !v13) )
  {
LABEL_19:
    sub_B0D97C(this);
  }
  v14 = v13->klass;
  v15 = (System_Action_o *)this;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = (QAASpotStateController_IMapSpot_c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&v14->vtable[*(_DWORD *)v17 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(v13, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v15, v13, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v13, 1, Duration, v15, 0LL);
}


void __fastcall QAASpotStateController_StateQaaDisp___ctor(
        QAASpotStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaDisp__begin(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaDisp_o *v4; // x20
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  QAASpotStateController_IMapSpot_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  float Duration; // s8
  __int64 v22; // x0
  QAASpotStateController_IMapSpot_c *v23; // x8
  System_Action_o *v24; // x20
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  float v28; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  QAASpotStateController_IMapSpot_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  v4 = this;
  if ( (byte_42121C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_42121C3 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v22 = sub_B0D974(System_Action_TypeInfo, v11, v12);
      v23 = that->klass;
      v24 = (System_Action_o *)v22;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        v26 = &v23->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v26 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v25;
          v26 += 4;
          if ( v25 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v27 = (__int64)&v23->vtable[*v26 + 10].method;
      }
      else
      {
LABEL_27:
        v27 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v24, (Il2CppObject *)that, *(_QWORD *)(v27 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v24, 0LL);
      break;
    case 1:
      v17 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = &v17->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v20 = (__int64)&v17->vtable[*v19 + 10].method;
      }
      else
      {
LABEL_22:
        v20 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
      break;
    case 0:
      v13 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v16 = (__int64)&v13->vtable[*v15 + 8].method;
      }
      else
      {
LABEL_17:
        v16 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 1.0);
      v28 = v4->fields.Duration;
      v31 = sub_B0D974(System_Action_TypeInfo, v29, v30);
      v32 = that->klass;
      v33 = (System_Action_o *)v31;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = &v32->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v34;
          v35 += 4;
          if ( v34 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        v36 = (__int64)&v32->vtable[*v35 + 10].method;
      }
      else
      {
LABEL_35:
        v36 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v33, 0LL);
      break;
  }
  v37 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v39 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_44;
    }
    v40 = (__int64)(&v37->_1.interfaceOffsets + 2 * *v39 + 39);
  }
  else
  {
LABEL_44:
    v40 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v40)(that, *(_QWORD *)(v40 + 8));
}


void __fastcall QAASpotStateController_StateQaaDisp__end(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  unsigned __int64 v9; // x10
  int32_t *v10; // x11
  __int64 v11; // x0

  if ( (byte_42121C4 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_42121C4 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    1LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaGray__begin(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaGray_o *v4; // x20
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  QAASpotStateController_IMapSpot_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  float Duration; // s8
  __int64 v18; // x0
  QAASpotStateController_IMapSpot_c *v19; // x8
  System_Action_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  QAASpotStateController_IMapSpot_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  float v28; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  v4 = this;
  if ( (byte_42121C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaGray_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_42121C5 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      v24 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v26 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v25;
          v26 += 4;
          if ( v25 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v27 = (__int64)&v24->vtable[*v26 + 10].method;
      }
      else
      {
LABEL_27:
        v27 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v27)(that, *(_QWORD *)(v27 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v18 = sub_B0D974(System_Action_TypeInfo, v11, v12);
      v19 = that->klass;
      v20 = (System_Action_o *)v18;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        v22 = &v19->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v21;
          v22 += 4;
          if ( v21 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v23 = (__int64)&v19->vtable[*v22 + 10].method;
      }
      else
      {
LABEL_22:
        v23 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v20, (Il2CppObject *)that, *(_QWORD *)(v23 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v20, 0LL);
      break;
    case 0:
      v13 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v16 = (__int64)&v13->vtable[*v15 + 8].method;
      }
      else
      {
LABEL_17:
        v16 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 0.5);
      v28 = v4->fields.Duration;
      v31 = sub_B0D974(System_Action_TypeInfo, v29, v30);
      v32 = that->klass;
      v33 = (System_Action_o *)v31;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = &v32->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v34;
          v35 += 4;
          if ( v34 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v36 = (__int64)&v32->vtable[*v35 + 10].method;
      }
      else
      {
LABEL_36:
        v36 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v33, 0LL);
      break;
  }
}


void __fastcall QAASpotStateController_StateQaaGray__end(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  unsigned __int64 v9; // x10
  int32_t *v10; // x11
  __int64 v11; // x0

  if ( (byte_42121C6 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_42121C6 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    2LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void __fastcall QAASpotStateController_StateQaaHide__begin(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaHide_o *v4; // x20
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  float Duration; // s8
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  v4 = this;
  if ( (byte_42121C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaHide_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_42121C7 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v14 = sub_B0D974(System_Action_TypeInfo, v11, v12);
      v15 = that->klass;
      v16 = (System_Action_o *)v14;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v19 = (__int64)&v15->vtable[*v18 + 10].method;
      }
      else
      {
LABEL_16:
        v19 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v16, 0LL);
    }
  }
  else
  {
    v20 = that->klass;
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v23 = (__int64)&v20->vtable[*v22 + 10].method;
    }
    else
    {
LABEL_21:
      v23 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v23)(that, *(_QWORD *)(v23 + 8));
  }
}


void __fastcall QAASpotStateController_StateQaaHide__end(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  unsigned __int64 v9; // x10
  int32_t *v10; // x11
  __int64 v11; // x0

  if ( (byte_42121C8 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_B0D8A4(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_42121C8 = 1;
  }
  if ( !that )
    sub_B0D97C(this);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_AA67A0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v11)(that, 0LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController___c__DisplayClass8_0___ctor(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass8_0___SetQaaScaleAnim_b__0(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___ctor(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__ApplyCurrentColor_1(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v3; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_42121BE & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B0D8A4(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_42121BE = 1;
  }
  easingObj = v3->fields.easingObj;
  if ( !easingObj || (targetObject = v3->fields.targetObject) == 0LL )
    sub_B0D97C(this);
  klass = targetObject->klass;
  *(float *)&v2 = v3->fields.from + (float)((float)(v3->fields.to - v3->fields.from) * easingObj->fields.mStartTime);
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v3; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_42121BD & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B0D8A4(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_42121BD = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_B0D97C(this);
  klass = targetObject->klass;
  *(float *)&v2 = v3->fields.to;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
}
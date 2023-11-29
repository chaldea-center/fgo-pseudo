void __fastcall QAASpotStateController___ctor(QAASpotStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController__Init(
        QAASpotStateController_o *this,
        QAASpotStateController_IMapSpot_o *targetObject,
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
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  QAASpotStateController_Fields *p_fields; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  QAASpotStateController_StateNone_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  QAASpotStateController_StateMapMain_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  QAASpotStateController_StateQaaHide_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  QAASpotStateController_StateQaaGray_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  QAASpotStateController_StateQaaDisp_o *v53; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  QAASpotStateController_StateQaaHide_o *v59; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  QAASpotStateController_StateQaaGray_o *v65; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  QAASpotStateController_StateQaaDisp_o *v71; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  QAASpotStateController_StateQaaChange_o *v77; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  QAASpotStateController_StateQaaAnimation_o *v83; // x21
  const MethodInfo *v84; // x2

  if ( (byte_40FA0A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject);
    sub_B16FFC(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v7);
    sub_B16FFC(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v8);
    sub_B16FFC(&QAASpotStateController_StateMapMain_TypeInfo, v9);
    sub_B16FFC(&QAASpotStateController_StateNone_TypeInfo, v10);
    sub_B16FFC(&QAASpotStateController_StateQaaAnimation_TypeInfo, v11);
    sub_B16FFC(&QAASpotStateController_StateQaaChange_TypeInfo, v12);
    sub_B16FFC(&QAASpotStateController_StateQaaDisp_TypeInfo, v13);
    sub_B16FFC(&QAASpotStateController_StateQaaGray_TypeInfo, v14);
    sub_B16FFC(&QAASpotStateController_StateQaaHide_TypeInfo, v15);
    byte_40FA0A5 = 1;
  }
  v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                              CStateManager_QAASpotStateController_IMapSpot__TypeInfo,
                                                              targetObject,
                                                              method,
                                                              v3,
                                                              v4);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v16,
    targetObject,
    10,
    (const MethodInfo_2907EF0 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v16;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  stateManager = this->fields.stateManager;
  v29 = (QAASpotStateController_StateNone_o *)sub_B170CC(QAASpotStateController_StateNone_TypeInfo, v25, v26, v27, v28);
  QAASpotStateController_StateNone___ctor(v29, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v29,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v30 = p_fields->stateManager;
  v35 = (QAASpotStateController_StateMapMain_o *)sub_B170CC(
                                                   QAASpotStateController_StateMapMain_TypeInfo,
                                                   v31,
                                                   v32,
                                                   v33,
                                                   v34);
  QAASpotStateController_StateMapMain___ctor(v35, 0LL);
  if ( !v30 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v30,
    1,
    (IState_T__o *)v35,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v36 = p_fields->stateManager;
  v41 = (QAASpotStateController_StateQaaHide_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaHide_TypeInfo,
                                                   v37,
                                                   v38,
                                                   v39,
                                                   v40);
  QAASpotStateController_StateQaaHide___ctor(v41, 0, 0LL);
  if ( !v36 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v36,
    2,
    (IState_T__o *)v41,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v42 = p_fields->stateManager;
  v47 = (QAASpotStateController_StateQaaGray_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaGray_TypeInfo,
                                                   v43,
                                                   v44,
                                                   v45,
                                                   v46);
  QAASpotStateController_StateQaaGray___ctor(v47, 0, 0LL);
  if ( !v42 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v42,
    3,
    (IState_T__o *)v47,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v48 = p_fields->stateManager;
  v53 = (QAASpotStateController_StateQaaDisp_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaDisp_TypeInfo,
                                                   v49,
                                                   v50,
                                                   v51,
                                                   v52);
  QAASpotStateController_StateQaaDisp___ctor(v53, 0, 0LL);
  if ( !v48 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v48,
    4,
    (IState_T__o *)v53,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v54 = p_fields->stateManager;
  v59 = (QAASpotStateController_StateQaaHide_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaHide_TypeInfo,
                                                   v55,
                                                   v56,
                                                   v57,
                                                   v58);
  QAASpotStateController_StateQaaHide___ctor(v59, 1, 0LL);
  if ( !v54 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v54,
    5,
    (IState_T__o *)v59,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v60 = p_fields->stateManager;
  v65 = (QAASpotStateController_StateQaaGray_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaGray_TypeInfo,
                                                   v61,
                                                   v62,
                                                   v63,
                                                   v64);
  QAASpotStateController_StateQaaGray___ctor(v65, 1, 0LL);
  if ( !v60 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v60,
    6,
    (IState_T__o *)v65,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v66 = p_fields->stateManager;
  v71 = (QAASpotStateController_StateQaaDisp_o *)sub_B170CC(
                                                   QAASpotStateController_StateQaaDisp_TypeInfo,
                                                   v67,
                                                   v68,
                                                   v69,
                                                   v70);
  QAASpotStateController_StateQaaDisp___ctor(v71, 1, 0LL);
  if ( !v66 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v66,
    7,
    (IState_T__o *)v71,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v72 = p_fields->stateManager;
  v77 = (QAASpotStateController_StateQaaChange_o *)sub_B170CC(
                                                     QAASpotStateController_StateQaaChange_TypeInfo,
                                                     v73,
                                                     v74,
                                                     v75,
                                                     v76);
  QAASpotStateController_StateQaaChange___ctor(v77, 0, 0LL);
  if ( !v72
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v72,
          8,
          (IState_T__o *)v77,
          (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v78 = p_fields->stateManager,
        v83 = (QAASpotStateController_StateQaaAnimation_o *)sub_B170CC(
                                                              QAASpotStateController_StateQaaAnimation_TypeInfo,
                                                              v79,
                                                              v80,
                                                              v81,
                                                              v82),
        QAASpotStateController_StateQaaAnimation___ctor(v83, 0, 0LL),
        !v78) )
  {
LABEL_14:
    sub_B170D4();
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v78,
    9,
    (IState_T__o *)v83,
    (const MethodInfo_2907FBC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v84);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
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
  __int64 v48; // x3
  __int64 v49; // x4
  float v50; // s0
  EasingObject_o *v51; // x19
  System_Action_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x22

  if ( (byte_40FA0A9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isActive);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v10);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v11);
    sub_B16FFC(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v12);
    sub_B16FFC(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v13);
    sub_B16FFC(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v14);
    byte_40FA0A9 = 1;
  }
  v15 = sub_B170CC(QAASpotStateController___c__DisplayClass9_0_TypeInfo, isActive, finishCallback, method, v5);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)targetObject,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v15 + 32) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 32),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = *(__int64 **)(v15 + 16);
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
    v32 = sub_AAFEF8(*(_QWORD *)(v15 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v33 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v33,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v15 + 48) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 48), Component_UIWidget, v35, v36, v37, v38, v39, v40);
  v41 = *(__int64 **)(v15 + 16);
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
    v45 = sub_AAFEF8(*(_QWORD *)(v15 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v15 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
  v50 = 0.5;
  if ( isActive )
    v50 = 1.0;
  *(float *)(v15 + 24) = v50;
  if ( time > 0.0 )
  {
    v51 = *(EasingObject_o **)(v15 + 48);
    v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v15,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v15,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v51 )
    {
      EasingObject__Play(v51, time, v52, v57, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B170D4();
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v15,
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
  __int64 v5; // x4
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
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
  TweenWidth_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v52; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA0A8 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_B16FFC(&EventDelegate_TypeInfo, v10);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v11);
    sub_B16FFC(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v12);
    sub_B16FFC(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v13);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v14);
    byte_40FA0A8 = 1;
  }
  v15 = sub_B170CC(QAASpotStateController___c__DisplayClass8_0_TypeInfo, isDisp, finishCallback, method, v5);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_33;
  *(_QWORD *)(v15 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 16),
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
    p_method = sub_AAFEF8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
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
      v33 = sub_AAFEF8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
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
      v37 = sub_AAFEF8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
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
    ActionExtensions__Call(*(System_Action_o **)(v15 + 16), 0LL);
    return;
  }
  v46 = UITweener__Begin_TweenWidth_(v26, time, (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
  if ( !v46 )
LABEL_33:
    sub_B170D4();
  *(float *)&v46->fields.from = x;
  *(float *)&v46->fields.to = y;
  *(float *)&v46->fields.updateTable = z;
  *((_DWORD *)&v46->fields.updateTable + 1) = v43;
  LODWORD(v46->fields.mWidget) = v44;
  HIDWORD(v46->fields.mWidget) = v45;
  v46->fields.style = 2;
  onFinished = v46->fields.onFinished;
  v52 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v47, v48, v49, v50);
  EventDelegate_Callback___ctor(
    v52,
    (Il2CppObject *)v15,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onFinished, v52, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_40FA0A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state);
    byte_40FA0A7 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_40FA0A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method);
    byte_40FA0A6 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2908038 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_40FA2D3 & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_40FA2D3 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
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
      v13 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
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
      v16 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
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

  if ( (byte_40FA2D4 & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_40FA2D4 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
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
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
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
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  if ( (byte_40FA2D5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v4);
    byte_40FA2D5 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v14 = sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
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
        goto LABEL_14;
    }
    v19 = (__int64)&v15->vtable[*v18 + 10].method;
  }
  else
  {
LABEL_14:
    v19 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
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
        goto LABEL_20;
    }
    v23 = (__int64)&v20->vtable[*v22 + 16].method;
  }
  else
  {
LABEL_20:
    v23 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v23)(
    that,
    v9,
    v16,
    *(_QWORD *)(v23 + 8));
}


void __fastcall QAASpotStateController_StateQaaBase___ctor(
        QAASpotStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
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
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
}


void __fastcall QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 *v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  QAASpotStateController_IMapSpot_c **v27; // x11
  __int64 v28; // x0
  int v29; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x21
  __int64 *v35; // x19
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  QAASpotStateController_IMapSpot_c **v38; // x11
  __int64 v39; // x0

  if ( (byte_40FA2D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v7);
    sub_B16FFC(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v8);
    sub_B16FFC(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v9);
    byte_40FA2D6 = 1;
  }
  v10 = sub_B170CC(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(
    (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_23;
  *(_QWORD *)(v10 + 16) = that;
  v17 = (__int64 **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)that, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  v24 = *(__int64 **)(v10 + 16);
  if ( !v24 )
    goto LABEL_23;
  v25 = *v24;
  if ( *(_WORD *)(*v24 + 298) )
  {
    v26 = 0LL;
    v27 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *(v27 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)(*v24 + 298) )
        goto LABEL_9;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 13) + 312;
  }
  else
  {
LABEL_9:
    v28 = sub_AAFEF8(*v17, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  if ( v29 )
  {
    if ( (unsigned int)(v29 - 1) < 2 )
    {
      v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v10,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v10 + 16),
        0,
        this->fields.Duration,
        v34,
        0LL);
    }
    return;
  }
  v35 = *v17;
  if ( !*v17 )
LABEL_23:
    sub_B170D4();
  v36 = *v35;
  if ( *(_WORD *)(*v35 + 298) )
  {
    v37 = 0LL;
    v38 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *(v38 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v37;
      v38 += 2;
      if ( v37 >= *(unsigned __int16 *)(*v35 + 298) )
        goto LABEL_19;
    }
    v39 = v36 + 16LL * (*(_DWORD *)v38 + 10) + 312;
  }
  else
  {
LABEL_19:
    v39 = sub_AAFEF8(*v17, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
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
  __int64 v3; // x1
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v15; // x19
  __int64 v16; // x0
  Il2CppClass *v17; // x8
  System_Action_o *v18; // x20
  unsigned __int64 v19; // x10
  QAASpotStateController_IMapSpot_c **v20; // x11
  __int64 p_method; // x0

  if ( (byte_40F78FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v3);
    byte_40F78FF = 1;
  }
  that = this->fields.that;
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
    v8 = sub_AAFEF8(this->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v15 = (Il2CppObject *)this->fields.that,
        v16 = sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12),
        !v15) )
  {
LABEL_19:
    sub_B170D4();
  }
  v17 = v15->klass;
  v18 = (System_Action_o *)v16;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (QAASpotStateController_IMapSpot_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&v17->vtable[*(_DWORD *)v20 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v15, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v18, v15, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v15, 1, Duration, v18, 0LL);
}


void __fastcall QAASpotStateController_StateQaaDisp___ctor(
        QAASpotStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
}


void __fastcall QAASpotStateController_StateQaaDisp__begin(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  QAASpotStateController_IMapSpot_c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  QAASpotStateController_IMapSpot_c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  float Duration; // s8
  __int64 v24; // x0
  QAASpotStateController_IMapSpot_c *v25; // x8
  System_Action_o *v26; // x20
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  float v30; // s8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  QAASpotStateController_IMapSpot_c *v36; // x8
  System_Action_o *v37; // x20
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  QAASpotStateController_IMapSpot_c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0

  if ( (byte_40FA2D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_40FA2D7 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      Duration = this->fields.Duration;
      v24 = sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      v25 = that->klass;
      v26 = (System_Action_o *)v24;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        v28 = &v25->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v27;
          v28 += 4;
          if ( v27 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v29 = (__int64)&v25->vtable[*v28 + 10].method;
      }
      else
      {
LABEL_27:
        v29 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v26, (Il2CppObject *)that, *(_QWORD *)(v29 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v26, 0LL);
      break;
    case 1:
      v19 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = &v19->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v21 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*v21 + 10].method;
      }
      else
      {
LABEL_22:
        v22 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v22)(that, *(_QWORD *)(v22 + 8));
      break;
    case 0:
      v15 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v16;
          v17 += 4;
          if ( v16 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17 + 8].method;
      }
      else
      {
LABEL_17:
        v18 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 1.0);
      v30 = this->fields.Duration;
      v35 = sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
      v36 = that->klass;
      v37 = (System_Action_o *)v35;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v36->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v39 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        v40 = (__int64)&v36->vtable[*v39 + 10].method;
      }
      else
      {
LABEL_35:
        v40 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v37, (Il2CppObject *)that, *(_QWORD *)(v40 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v30, v37, 0LL);
      break;
  }
  v41 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v43 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_44;
    }
    v44 = (__int64)(&v41->_1.interfaceOffsets + 2 * *v43 + 39);
  }
  else
  {
LABEL_44:
    v44 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v44)(that, *(_QWORD *)(v44 + 8));
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

  if ( (byte_40FA2D8 & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_40FA2D8 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
}


void __fastcall QAASpotStateController_StateQaaGray__begin(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  QAASpotStateController_IMapSpot_c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  float Duration; // s8
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  System_Action_o *v22; // x20
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  QAASpotStateController_IMapSpot_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  float v30; // s8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  QAASpotStateController_IMapSpot_c *v36; // x8
  System_Action_o *v37; // x20
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  if ( (byte_40FA2D9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_40FA2D9 = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      v26 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v27;
          v28 += 4;
          if ( v27 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v29 = (__int64)&v26->vtable[*v28 + 10].method;
      }
      else
      {
LABEL_27:
        v29 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v29)(that, *(_QWORD *)(v29 + 8));
      break;
    case 1:
      Duration = this->fields.Duration;
      v20 = sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      v21 = that->klass;
      v22 = (System_Action_o *)v20;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        v24 = &v21->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v23;
          v24 += 4;
          if ( v23 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v25 = (__int64)&v21->vtable[*v24 + 10].method;
      }
      else
      {
LABEL_22:
        v25 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v22, (Il2CppObject *)that, *(_QWORD *)(v25 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v22, 0LL);
      break;
    case 0:
      v15 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v16;
          v17 += 4;
          if ( v16 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17 + 8].method;
      }
      else
      {
LABEL_17:
        v18 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 0.5);
      v30 = this->fields.Duration;
      v35 = sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
      v36 = that->klass;
      v37 = (System_Action_o *)v35;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v36->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v39 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v40 = (__int64)&v36->vtable[*v39 + 10].method;
      }
      else
      {
LABEL_36:
        v40 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v37, (Il2CppObject *)that, *(_QWORD *)(v40 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v30, v37, 0LL);
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

  if ( (byte_40FA2DA & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_40FA2DA = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  float v5; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B170D4();
  v5 = 0.5;
  if ( isQuick )
    v5 = 0.0;
  this->fields.Duration = v5;
}


void __fastcall QAASpotStateController_StateQaaHide__begin(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  float Duration; // s8
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  System_Action_o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  QAASpotStateController_IMapSpot_c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FA2DB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_40FA2DB = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) < 2 )
    {
      Duration = this->fields.Duration;
      v16 = sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      v17 = that->klass;
      v18 = (System_Action_o *)v16;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = &v17->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v21 = (__int64)&v17->vtable[*v20 + 10].method;
      }
      else
      {
LABEL_16:
        v21 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v18, (Il2CppObject *)that, *(_QWORD *)(v21 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v18, 0LL);
    }
  }
  else
  {
    v22 = that->klass;
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*v24 + 10].method;
    }
    else
    {
LABEL_21:
      v25 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v25)(that, *(_QWORD *)(v25 + 8));
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

  if ( (byte_40FA2DC & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_40FA2DC = 1;
  }
  if ( !that )
    sub_B170D4();
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
    p_method = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_AAFEF8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA2D2 & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, method);
    byte_40FA2D2 = 1;
  }
  easingObj = this->fields.easingObj;
  if ( !easingObj || (targetObject = this->fields.targetObject) == 0LL )
    sub_B170D4();
  klass = targetObject->klass;
  *(float *)&v2 = this->fields.from
                + (float)((float)(this->fields.to - this->fields.from) * easingObj->fields.mStartTime);
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
    p_method = sub_AAFEF8(this->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
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
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA2D1 & 1) == 0 )
  {
    sub_B16FFC(&QAASpotStateController_IMapSpot_TypeInfo, method);
    byte_40FA2D1 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_B170D4();
  klass = targetObject->klass;
  *(float *)&v2 = this->fields.to;
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
    p_method = sub_AAFEF8(this->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}
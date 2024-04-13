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
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  QAASpotStateController_Fields *p_fields; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x21
  QAASpotStateController_StateNone_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x21
  QAASpotStateController_StateMapMain_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  QAASpotStateController_StateQaaHide_o *v48; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v49; // x21
  QAASpotStateController_StateQaaGray_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x21
  QAASpotStateController_StateQaaDisp_o *v52; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v53; // x21
  QAASpotStateController_StateQaaHide_o *v54; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v55; // x21
  QAASpotStateController_StateQaaGray_o *v56; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v57; // x21
  QAASpotStateController_StateQaaDisp_o *v58; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v59; // x21
  QAASpotStateController_StateQaaChange_o *v60; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v61; // x20
  QAASpotStateController_StateQaaAnimation_o *v62; // x21
  const MethodInfo *v63; // x2

  if ( (byte_42E886B & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, (_DWORD)targetObject, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v6, v7, v8);
    sub_B5D5C4(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QAASpotStateController_StateMapMain_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QAASpotStateController_StateNone_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&QAASpotStateController_StateQaaAnimation_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QAASpotStateController_StateQaaChange_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QAASpotStateController_StateQaaDisp_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&QAASpotStateController_StateQaaGray_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&QAASpotStateController_StateQaaHide_TypeInfo, v30, v31, v32);
    byte_42E886B = 1;
  }
  v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v33,
    targetObject,
    10,
    (const MethodInfo_2BB2630 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v33;
  p_fields = &this->fields;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
  stateManager = this->fields.stateManager;
  v42 = (QAASpotStateController_StateNone_o *)sub_B5D694(QAASpotStateController_StateNone_TypeInfo);
  QAASpotStateController_StateNone___ctor(v42, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v42,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v45 = p_fields->stateManager;
  v46 = (QAASpotStateController_StateMapMain_o *)sub_B5D694(QAASpotStateController_StateMapMain_TypeInfo);
  QAASpotStateController_StateMapMain___ctor(v46, 0LL);
  if ( !v45 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v45,
    1,
    (IState_T__o *)v46,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v47 = p_fields->stateManager;
  v48 = (QAASpotStateController_StateQaaHide_o *)sub_B5D694(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v48, 0, 0LL);
  if ( !v47 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v47,
    2,
    (IState_T__o *)v48,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v49 = p_fields->stateManager;
  v50 = (QAASpotStateController_StateQaaGray_o *)sub_B5D694(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v50, 0, 0LL);
  if ( !v49 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v49,
    3,
    (IState_T__o *)v50,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v51 = p_fields->stateManager;
  v52 = (QAASpotStateController_StateQaaDisp_o *)sub_B5D694(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v52, 0, 0LL);
  if ( !v51 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v51,
    4,
    (IState_T__o *)v52,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v53 = p_fields->stateManager;
  v54 = (QAASpotStateController_StateQaaHide_o *)sub_B5D694(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v54, 1, 0LL);
  if ( !v53 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v53,
    5,
    (IState_T__o *)v54,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v55 = p_fields->stateManager;
  v56 = (QAASpotStateController_StateQaaGray_o *)sub_B5D694(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v56, 1, 0LL);
  if ( !v55 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v55,
    6,
    (IState_T__o *)v56,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v57 = p_fields->stateManager;
  v58 = (QAASpotStateController_StateQaaDisp_o *)sub_B5D694(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v58, 1, 0LL);
  if ( !v57 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v57,
    7,
    (IState_T__o *)v58,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v59 = p_fields->stateManager;
  v60 = (QAASpotStateController_StateQaaChange_o *)sub_B5D694(QAASpotStateController_StateQaaChange_TypeInfo);
  QAASpotStateController_StateQaaChange___ctor(v60, 0, 0LL);
  if ( !v59
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v59,
          8,
          (IState_T__o *)v60,
          (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v61 = p_fields->stateManager,
        v62 = (QAASpotStateController_StateQaaAnimation_o *)sub_B5D694(QAASpotStateController_StateQaaAnimation_TypeInfo),
        QAASpotStateController_StateQaaAnimation___ctor(v62, 0, 0LL),
        !v61) )
  {
LABEL_14:
    sub_B5D69C(v43, v44);
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v61,
    9,
    (IState_T__o *)v62,
    (const MethodInfo_2BB26FC *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v63);
}


void __fastcall QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x3
  __int64 *v40; // x21
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  QAASpotStateController_IMapSpot_c **v43; // x11
  __int64 v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x3
  __int64 *v54; // x21
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  QAASpotStateController_IMapSpot_c **v57; // x11
  __int64 v58; // x0
  float v59; // s0
  EasingObject_o *v60; // x19
  System_Action_o *v61; // x21
  System_Action_o *v62; // x22

  if ( (byte_42E886F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isActive, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v18, v19, v20);
    sub_B5D5C4(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v21, v22, v23);
    byte_42E886F = 1;
  }
  v24 = sub_B5D694(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_24;
  *(_QWORD *)(v24 + 16) = targetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v24 + 16),
    (System_Int32_array **)targetObject,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v24 + 32) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v24 + 32),
    (System_Int32_array **)finishCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = *(__int64 **)(v24 + 16);
  if ( !v40 )
    goto LABEL_24;
  v41 = *v40;
  if ( *(_WORD *)(*v40 + 298) )
  {
    v42 = 0LL;
    v43 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *(v43 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v42;
      v43 += 2;
      if ( v42 >= *(unsigned __int16 *)(*v40 + 298) )
        goto LABEL_9;
    }
    v44 = v41 + 16LL * (*(_DWORD *)v43 + 5) + 312;
  }
  else
  {
LABEL_9:
    v44 = sub_AF54C0(*(_QWORD *)(v24 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL, v39);
  }
  v45 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v45,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v24 + 48) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 48), Component_UIWidget, v47, v48, v49, v50, v51, v52);
  v54 = *(__int64 **)(v24 + 16);
  if ( !v54 )
    goto LABEL_24;
  v55 = *v54;
  if ( *(_WORD *)(*v54 + 298) )
  {
    v56 = 0LL;
    v57 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *(v57 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v56;
      v57 += 2;
      if ( v56 >= *(unsigned __int16 *)(*v54 + 298) )
        goto LABEL_16;
    }
    v58 = v55 + 16LL * (*(_DWORD *)v57 + 7) + 312;
  }
  else
  {
LABEL_16:
    v58 = sub_AF54C0(*(_QWORD *)(v24 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL, v53);
  }
  *(float *)(v24 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
  v59 = 0.5;
  if ( isActive )
    v59 = 1.0;
  *(float *)(v24 + 24) = v59;
  if ( time > 0.0 )
  {
    v60 = *(EasingObject_o **)(v24 + 48);
    v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v61,
      (Il2CppObject *)v24,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v24,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v60 )
    {
      EasingObject__Play(v60, time, v61, v62, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B5D69C(v25, v26);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v24,
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
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x19
  TweenWidth_o *v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  UnityEngine_GameObject_o *v39; // x22
  __int64 v40; // x3
  QAASpotStateController_IMapSpot_c *v41; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  QAASpotStateController_IMapSpot_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  int v52; // s0
  int v53; // s1
  int v54; // s2
  float v55; // s1
  float v56; // s2
  int v57; // s12
  int v58; // s13
  int v59; // s14
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v61; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E886E & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, isDisp, (_DWORD)finishCallback, method);
    sub_B5D5C4(&EventDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v15, v16, v17);
    sub_B5D5C4(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v21, v22, v23);
    byte_42E886E = 1;
  }
  v24 = sub_B5D694(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_33;
  *(_QWORD *)(v24 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v24 + 16),
    (System_Int32_array **)finishCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !targetObject )
    goto LABEL_33;
  klass = targetObject->klass;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL, v33);
  }
  v39 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    v41 = targetObject->klass;
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v41->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v46 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v47 = (__int64)&v41->vtable[*v46 + 4].method;
    }
    else
    {
LABEL_16:
      v47 = sub_AF54C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v40);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v47)(targetObject, *(_QWORD *)(v47 + 8));
  }
  else
  {
    v48 = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v50 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v51 = (__int64)&v48->vtable[*v50 + 4].method;
    }
    else
    {
LABEL_21:
      v51 = sub_AF54C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v38);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v51)(
                     targetObject,
                     *(_QWORD *)(v51 + 8)));
    y = v55;
    z = v56;
    *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Vector3__get_zero(0LL);
  }
  v57 = v52;
  v58 = v53;
  v59 = v54;
  if ( time <= 0.0 )
  {
    GameObjectExtensions__SetLocalScale(v39, *(UnityEngine_Vector3_o *)&v52, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v24 + 16), 0LL);
    return;
  }
  v25 = UITweener__Begin_TweenWidth_(v39, time, (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  if ( !v25 )
LABEL_33:
    sub_B5D69C(v25, v26);
  *(float *)&v25->fields.from = x;
  *(float *)&v25->fields.to = y;
  *(float *)&v25->fields.updateTable = z;
  *((_DWORD *)&v25->fields.updateTable + 1) = v57;
  LODWORD(v25->fields.mWidget) = v58;
  HIDWORD(v25->fields.mWidget) = v59;
  v25->fields.style = 2;
  onFinished = v25->fields.onFinished;
  v61 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v61,
    (Il2CppObject *)v24,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29826436(onFinished, v61, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_42E886D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, state, (_DWORD)method, v3);
    byte_42E886D = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_42E886C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, (_DWORD)method, v2, v3);
    byte_42E886C = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B5D69C(0LL, method);
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2BB2778 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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
  __int64 v3; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  char v9; // w0
  __int64 v10; // x3
  QAASpotStateController_IMapSpot_c *v11; // x8
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x2
  void (__fastcall *v20)(QAASpotStateController_IMapSpot_o *, __int64, __int64); // x3
  QAASpotStateController_IMapSpot_o *v21; // x0
  __int64 v22; // x1

  if ( (byte_42E5ACA & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B5D5C4(
                                                      &QAASpotStateController_IMapSpot_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5ACA = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL, v3);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v11 = that->klass;
  v12 = *(unsigned __int16 *)&that->klass->_2.bitflags1;
  if ( (v9 & 1) != 0 )
  {
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v11->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= v12 )
          goto LABEL_15;
      }
      v15 = (__int64)&v11->vtable[*v14 + 1].method;
    }
    else
    {
LABEL_15:
      v15 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL, v10);
    }
    v20 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v15;
    v19 = *(_QWORD *)(v15 + 8);
    v21 = that;
    v22 = 0LL;
  }
  else
  {
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v11->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= v12 )
          goto LABEL_20;
      }
      v18 = (__int64)&v11->vtable[*v17 + 3].method;
    }
    else
    {
LABEL_20:
      v18 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL, v10);
    }
    v20 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v18;
    v19 = *(_QWORD *)(v18 + 8);
    v22 = 1LL;
    v21 = that;
  }
  v20(v21, v22, v19);
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
  __int64 v3; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E5ACB & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B5D5C4(
                                                      &QAASpotStateController_IMapSpot_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5ACB = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL, v3);
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaAnimation__begin(
        QAASpotStateController_StateQaaAnimation_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v12; // w20
  __int64 v13; // x0
  __int64 v14; // x3
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x3
  QAASpotStateController_IMapSpot_c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_42E5ACC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_B5D5C4(
                                                           &QAASpotStateController_IMapSpot_TypeInfo,
                                                           v5,
                                                           v6,
                                                           v7);
    byte_42E5ACC = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL, v3);
  }
  v12 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  v13 = sub_B5D694(System_Action_TypeInfo);
  v15 = that->klass;
  v16 = (System_Action_o *)v13;
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
    v19 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v14);
  }
  System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
  v21 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v24 = (__int64)&v21->vtable[*v23 + 16].method;
  }
  else
  {
LABEL_20:
    v24 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL, v20);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v24)(
    that,
    v12,
    v16,
    *(_QWORD *)(v24 + 8));
}


void __fastcall QAASpotStateController_StateQaaBase___ctor(
        QAASpotStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
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
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_Fields *p_fields; // x21
  __int64 v19; // x3
  struct QAASpotStateController_IMapSpot_o *v20; // x22
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v22; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Action_o *v26; // x21
  struct QAASpotStateController_IMapSpot_o *v27; // x19
  QAASpotStateController_IMapSpot_c *v28; // x8
  unsigned __int64 v29; // x10
  QAASpotStateController_IMapSpot_c **v30; // x11
  __int64 v31; // x0

  if ( (byte_42E5ACD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v9, v10, v11);
    sub_B5D5C4(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v12, v13, v14);
    byte_42E5ACD = 1;
  }
  v15 = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B5D694(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_23;
  v15->fields.that = that;
  p_fields = &v15->fields;
  sub_B5D560(&v15->fields);
  v15->fields.__4__this = this;
  sub_B5D560(&v15->fields.__4__this);
  v20 = v15->fields.that;
  if ( !v20 )
    goto LABEL_23;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v19);
  }
  v16 = (*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v16 )
  {
    if ( (unsigned int)(v16 - 1) < 2 )
    {
      v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v15,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(v15->fields.that, 0, this->fields.Duration, v26, 0LL);
    }
    return;
  }
  v27 = p_fields->that;
  if ( !p_fields->that )
LABEL_23:
    sub_B5D69C(v16, v17);
  v28 = v27->klass;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = (QAASpotStateController_IMapSpot_c **)&v28->_1.interfaceOffsets->offset;
    while ( *(v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 10].method;
  }
  else
  {
LABEL_19:
    v31 = sub_AF54C0(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v25);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
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
  int v2; // w2
  __int64 v3; // x3
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v10; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v12; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v15; // x19
  __int64 v16; // x3
  Il2CppClass *v17; // x8
  System_Action_o *v18; // x20
  unsigned __int64 v19; // x10
  QAASpotStateController_IMapSpot_c **v20; // x11
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_42E6064 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B5D5C4(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v5,
                                                                             v6,
                                                                             v7);
    byte_42E6064 = 1;
  }
  that = v4->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v12 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v12 = sub_AF54C0(v4->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL, v3);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v12)(
                                                                           that,
                                                                           *(_QWORD *)(v12 + 8));
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v15 = (Il2CppObject *)v4->fields.that,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B5D694(System_Action_TypeInfo),
        !v15) )
  {
LABEL_19:
    sub_B5D69C(this, method);
  }
  v17 = v15->klass;
  v18 = (System_Action_o *)this;
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
    p_method = sub_AF54C0(v15, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v16);
  }
  System_Action___ctor(v18, v15, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v15, 1, Duration, v18, 0LL);
}


void __fastcall QAASpotStateController_StateQaaDisp___ctor(
        QAASpotStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaDisp__begin(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_StateQaaDisp_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v13; // w0
  __int64 v14; // x3
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
  __int64 v25; // x3
  QAASpotStateController_IMapSpot_c *v26; // x8
  System_Action_o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  float v31; // s8
  __int64 v32; // x0
  __int64 v33; // x3
  QAASpotStateController_IMapSpot_c *v34; // x8
  System_Action_o *v35; // x20
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  QAASpotStateController_IMapSpot_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0

  v5 = this;
  if ( (byte_42E5ACE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v6, v7, v8);
    byte_42E5ACE = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v13 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v13 )
  {
    case 2:
      Duration = v5->fields.Duration;
      v24 = sub_B5D694(System_Action_TypeInfo);
      v26 = that->klass;
      v27 = (System_Action_o *)v24;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        v29 = &v26->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v29 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v30 = (__int64)&v26->vtable[*v29 + 10].method;
      }
      else
      {
LABEL_27:
        v30 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v25);
      }
      System_Action___ctor(v27, (Il2CppObject *)that, *(_QWORD *)(v30 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v27, 0LL);
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
        v22 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v14);
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
        v18 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v14);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 1.0);
      v31 = v5->fields.Duration;
      v32 = sub_B5D694(System_Action_TypeInfo);
      v34 = that->klass;
      v35 = (System_Action_o *)v32;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        v37 = &v34->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v37 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        v38 = (__int64)&v34->vtable[*v37 + 10].method;
      }
      else
      {
LABEL_35:
        v38 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v33);
      }
      System_Action___ctor(v35, (Il2CppObject *)that, *(_QWORD *)(v38 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v31, v35, 0LL);
      break;
  }
  v39 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v41 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_44;
    }
    v42 = (__int64)(&v39->_1.interfaceOffsets + 2 * *v41 + 39);
  }
  else
  {
LABEL_44:
    v42 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL, v14);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v42)(that, *(_QWORD *)(v42 + 8));
}


void __fastcall QAASpotStateController_StateQaaDisp__end(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x3
  QAASpotStateController_IMapSpot_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0

  if ( (byte_42E5ACF & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B5D5C4(
                                                      &QAASpotStateController_IMapSpot_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5ACF = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    1LL,
    *(_QWORD *)(p_method + 8));
  v10 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v13 = (__int64)&v10->vtable[*v12 + 15].method;
  }
  else
  {
LABEL_14:
    v13 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v13)(that, 1LL, *(_QWORD *)(v13 + 8));
}


void __fastcall QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaGray__begin(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_StateQaaGray_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v13; // w0
  __int64 v14; // x3
  QAASpotStateController_IMapSpot_c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  float Duration; // s8
  __int64 v20; // x0
  __int64 v21; // x3
  QAASpotStateController_IMapSpot_c *v22; // x8
  System_Action_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  QAASpotStateController_IMapSpot_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  float v31; // s8
  __int64 v32; // x0
  __int64 v33; // x3
  QAASpotStateController_IMapSpot_c *v34; // x8
  System_Action_o *v35; // x20
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0

  v5 = this;
  if ( (byte_42E5AD0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QAASpotStateController_StateQaaGray_o *)sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v6, v7, v8);
    byte_42E5AD0 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v13 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v13 )
  {
    case 2:
      v27 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v29 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v30 = (__int64)&v27->vtable[*v29 + 10].method;
      }
      else
      {
LABEL_27:
        v30 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v14);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v30)(that, *(_QWORD *)(v30 + 8));
      break;
    case 1:
      Duration = v5->fields.Duration;
      v20 = sub_B5D694(System_Action_TypeInfo);
      v22 = that->klass;
      v23 = (System_Action_o *)v20;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v24 = 0LL;
        v25 = &v22->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v25 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v24;
          v25 += 4;
          if ( v24 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v26 = (__int64)&v22->vtable[*v25 + 10].method;
      }
      else
      {
LABEL_22:
        v26 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v21);
      }
      System_Action___ctor(v23, (Il2CppObject *)that, *(_QWORD *)(v26 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v23, 0LL);
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
        v18 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v14);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 0.5);
      v31 = v5->fields.Duration;
      v32 = sub_B5D694(System_Action_TypeInfo);
      v34 = that->klass;
      v35 = (System_Action_o *)v32;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        v37 = &v34->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v37 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v38 = (__int64)&v34->vtable[*v37 + 10].method;
      }
      else
      {
LABEL_36:
        v38 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v33);
      }
      System_Action___ctor(v35, (Il2CppObject *)that, *(_QWORD *)(v38 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v31, v35, 0LL);
      break;
  }
}


void __fastcall QAASpotStateController_StateQaaGray__end(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x3
  QAASpotStateController_IMapSpot_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0

  if ( (byte_42E5AD1 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_B5D5C4(
                                                      &QAASpotStateController_IMapSpot_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5AD1 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    2LL,
    *(_QWORD *)(p_method + 8));
  v10 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v13 = (__int64)&v10->vtable[*v12 + 15].method;
  }
  else
  {
LABEL_14:
    v13 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v13)(that, 1LL, *(_QWORD *)(v13 + 8));
}


void __fastcall QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaHide__begin(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_StateQaaHide_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v13; // w0
  __int64 v14; // x3
  float Duration; // s8
  __int64 v16; // x0
  __int64 v17; // x3
  QAASpotStateController_IMapSpot_c *v18; // x8
  System_Action_o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  QAASpotStateController_IMapSpot_c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  v5 = this;
  if ( (byte_42E5AD2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QAASpotStateController_StateQaaHide_o *)sub_B5D5C4(&QAASpotStateController_IMapSpot_TypeInfo, v6, v7, v8);
    byte_42E5AD2 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v13 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v13 )
  {
    if ( (unsigned int)(v13 - 1) < 2 )
    {
      Duration = v5->fields.Duration;
      v16 = sub_B5D694(System_Action_TypeInfo);
      v18 = that->klass;
      v19 = (System_Action_o *)v16;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = &v18->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v21 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v22 = (__int64)&v18->vtable[*v21 + 10].method;
      }
      else
      {
LABEL_16:
        v22 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v17);
      }
      System_Action___ctor(v19, (Il2CppObject *)that, *(_QWORD *)(v22 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v19, 0LL);
    }
  }
  else
  {
    v23 = that->klass;
    if ( *(_WORD *)&that->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v25 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v26 = (__int64)&v23->vtable[*v25 + 10].method;
    }
    else
    {
LABEL_21:
      v26 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v14);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v26)(that, *(_QWORD *)(v26 + 8));
  }
}


void __fastcall QAASpotStateController_StateQaaHide__end(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x3
  QAASpotStateController_IMapSpot_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0

  if ( (byte_42E5AD3 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_B5D5C4(
                                                      &QAASpotStateController_IMapSpot_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5AD3 = 1;
  }
  if ( !that )
    sub_B5D69C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
  v10 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v13 = (__int64)&v10->vtable[*v12 + 15].method;
  }
  else
  {
LABEL_14:
    v13 = sub_AF54C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v13)(that, 0LL, *(_QWORD *)(v13 + 8));
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
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v5; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v9; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_42E5AC9 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              (_DWORD)method,
                                                              v2,
                                                              v3);
    byte_42E5AC9 = 1;
  }
  easingObj = v5->fields.easingObj;
  if ( !easingObj || (targetObject = v5->fields.targetObject) == 0LL )
    sub_B5D69C(this, method);
  klass = targetObject->klass;
  *(float *)&v4 = v5->fields.from + (float)((float)(v5->fields.to - v5->fields.from) * easingObj->fields.mStartTime);
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(v5->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v3);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v4);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v5; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v8; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_42E5AC8 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              (_DWORD)method,
                                                              v2,
                                                              v3);
    byte_42E5AC8 = 1;
  }
  targetObject = v5->fields.targetObject;
  if ( !targetObject )
    sub_B5D69C(this, method);
  klass = targetObject->klass;
  *(float *)&v4 = v5->fields.to;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v5->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v3);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v4);
  ActionExtensions__Call(v5->fields.finishCallback, 0LL);
}
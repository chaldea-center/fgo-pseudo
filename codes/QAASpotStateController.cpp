void __fastcall QAASpotStateController___ctor(QAASpotStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController__Init(
        QAASpotStateController_o *this,
        QAASpotStateController_IMapSpot_o *targetObject,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *v5; // x21
  QAASpotStateController_Fields *p_fields; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x21
  QAASpotStateController_StateNone_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  QAASpotStateController_StateMapMain_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x21
  QAASpotStateController_StateQaaHide_o *v20; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  QAASpotStateController_StateQaaGray_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  QAASpotStateController_StateQaaDisp_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  QAASpotStateController_StateQaaHide_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  QAASpotStateController_StateQaaGray_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  QAASpotStateController_StateQaaDisp_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  QAASpotStateController_StateQaaChange_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x20
  QAASpotStateController_StateQaaAnimation_o *v34; // x21
  const MethodInfo *v35; // x2

  if ( (byte_42AFC26 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
    sub_B52984(&Method_CStateManager_QAASpotStateController_IMapSpot__add__);
    sub_B52984(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
    sub_B52984(&QAASpotStateController_StateMapMain_TypeInfo);
    sub_B52984(&QAASpotStateController_StateNone_TypeInfo);
    sub_B52984(&QAASpotStateController_StateQaaAnimation_TypeInfo);
    sub_B52984(&QAASpotStateController_StateQaaChange_TypeInfo);
    sub_B52984(&QAASpotStateController_StateQaaDisp_TypeInfo);
    sub_B52984(&QAASpotStateController_StateQaaGray_TypeInfo);
    sub_B52984(&QAASpotStateController_StateQaaHide_TypeInfo);
    byte_42AFC26 = 1;
  }
  v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v5,
    targetObject,
    10,
    (const MethodInfo_2B925C4 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v5;
  p_fields = &this->fields;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  stateManager = this->fields.stateManager;
  v14 = (QAASpotStateController_StateNone_o *)sub_B52A54(QAASpotStateController_StateNone_TypeInfo);
  QAASpotStateController_StateNone___ctor(v14, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v14,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v17 = p_fields->stateManager;
  v18 = (QAASpotStateController_StateMapMain_o *)sub_B52A54(QAASpotStateController_StateMapMain_TypeInfo);
  QAASpotStateController_StateMapMain___ctor(v18, 0LL);
  if ( !v17 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v17,
    1,
    (IState_T__o *)v18,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v19 = p_fields->stateManager;
  v20 = (QAASpotStateController_StateQaaHide_o *)sub_B52A54(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v20, 0, 0LL);
  if ( !v19 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v19,
    2,
    (IState_T__o *)v20,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v21 = p_fields->stateManager;
  v22 = (QAASpotStateController_StateQaaGray_o *)sub_B52A54(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v22, 0, 0LL);
  if ( !v21 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v21,
    3,
    (IState_T__o *)v22,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v23 = p_fields->stateManager;
  v24 = (QAASpotStateController_StateQaaDisp_o *)sub_B52A54(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v24, 0, 0LL);
  if ( !v23 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v23,
    4,
    (IState_T__o *)v24,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v25 = p_fields->stateManager;
  v26 = (QAASpotStateController_StateQaaHide_o *)sub_B52A54(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v26, 1, 0LL);
  if ( !v25 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v25,
    5,
    (IState_T__o *)v26,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v27 = p_fields->stateManager;
  v28 = (QAASpotStateController_StateQaaGray_o *)sub_B52A54(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v28, 1, 0LL);
  if ( !v27 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v27,
    6,
    (IState_T__o *)v28,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v29 = p_fields->stateManager;
  v30 = (QAASpotStateController_StateQaaDisp_o *)sub_B52A54(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v30, 1, 0LL);
  if ( !v29 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v29,
    7,
    (IState_T__o *)v30,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v31 = p_fields->stateManager;
  v32 = (QAASpotStateController_StateQaaChange_o *)sub_B52A54(QAASpotStateController_StateQaaChange_TypeInfo);
  QAASpotStateController_StateQaaChange___ctor(v32, 0, 0LL);
  if ( !v31
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v31,
          8,
          (IState_T__o *)v32,
          (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v33 = p_fields->stateManager,
        v34 = (QAASpotStateController_StateQaaAnimation_o *)sub_B52A54(QAASpotStateController_StateQaaAnimation_TypeInfo),
        QAASpotStateController_StateQaaAnimation___ctor(v34, 0, 0LL),
        !v33) )
  {
LABEL_14:
    sub_B52A5C(v15, v16);
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v33,
    9,
    (IState_T__o *)v34,
    (const MethodInfo_2B92690 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v35);
}


void __fastcall QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
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
  __int64 v24; // x3
  __int64 *v25; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  QAASpotStateController_IMapSpot_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x3
  __int64 *v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  QAASpotStateController_IMapSpot_c **v42; // x11
  __int64 v43; // x0
  float v44; // s0
  EasingObject_o *v45; // x19
  System_Action_o *v46; // x21
  System_Action_o *v47; // x22

  if ( (byte_42AFC2A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B52984(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__);
    sub_B52984(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__);
    sub_B52984(&QAASpotStateController___c__DisplayClass9_0_TypeInfo);
    byte_42AFC2A = 1;
  }
  v9 = sub_B52A54(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = targetObject;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)targetObject,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 32),
    (System_Int32_array **)finishCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = *(__int64 **)(v9 + 16);
  if ( !v25 )
    goto LABEL_24;
  v26 = *v25;
  if ( *(_WORD *)(*v25 + 298) )
  {
    v27 = 0LL;
    v28 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)(*v25 + 298) )
        goto LABEL_9;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 5) + 312;
  }
  else
  {
LABEL_9:
    v29 = sub_AEB880(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL, v24);
  }
  v30 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v30,
                                                (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 48) = Component_UIWidget;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 48), Component_UIWidget, v32, v33, v34, v35, v36, v37);
  v39 = *(__int64 **)(v9 + 16);
  if ( !v39 )
    goto LABEL_24;
  v40 = *v39;
  if ( *(_WORD *)(*v39 + 298) )
  {
    v41 = 0LL;
    v42 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *(v42 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v41;
      v42 += 2;
      if ( v41 >= *(unsigned __int16 *)(*v39 + 298) )
        goto LABEL_16;
    }
    v43 = v40 + 16LL * (*(_DWORD *)v42 + 7) + 312;
  }
  else
  {
LABEL_16:
    v43 = sub_AEB880(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL, v38);
  }
  *(float *)(v9 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
  v44 = 0.5;
  if ( isActive )
    v44 = 1.0;
  *(float *)(v9 + 24) = v44;
  if ( time > 0.0 )
  {
    v45 = *(EasingObject_o **)(v9 + 48);
    v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v47 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v45 )
    {
      EasingObject__Play(v45, time, v46, v47, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B52A5C(v10, v11);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v9,
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
  __int64 v9; // x19
  TweenWidth_o *v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  UnityEngine_GameObject_o *v24; // x22
  __int64 v25; // x3
  QAASpotStateController_IMapSpot_c *v26; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  QAASpotStateController_IMapSpot_c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  int v37; // s0
  int v38; // s1
  int v39; // s2
  float v40; // s1
  float v41; // s2
  int v42; // s12
  int v43; // s13
  int v44; // s14
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v46; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFC29 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B52984(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_B52984(&QAASpotStateController___c__DisplayClass8_0_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenScale___);
    byte_42AFC29 = 1;
  }
  v9 = sub_B52A54(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_33;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)finishCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !targetObject )
    goto LABEL_33;
  klass = targetObject->klass;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL, v18);
  }
  v24 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    v26 = targetObject->klass;
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v26->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v26->vtable[*v31 + 4].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AEB880(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v25);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v32)(targetObject, *(_QWORD *)(v32 + 8));
  }
  else
  {
    v33 = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v36 = (__int64)&v33->vtable[*v35 + 4].method;
    }
    else
    {
LABEL_21:
      v36 = sub_AEB880(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v23);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v36)(
                     targetObject,
                     *(_QWORD *)(v36 + 8)));
    y = v40;
    z = v41;
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
  }
  v42 = v37;
  v43 = v38;
  v44 = v39;
  if ( time <= 0.0 )
  {
    GameObjectExtensions__SetLocalScale(v24, *(UnityEngine_Vector3_o *)&v37, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
    return;
  }
  v10 = UITweener__Begin_TweenWidth_(v24, time, (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_33:
    sub_B52A5C(v10, v11);
  *(float *)&v10->fields.from = x;
  *(float *)&v10->fields.to = y;
  *(float *)&v10->fields.updateTable = z;
  *((_DWORD *)&v10->fields.updateTable + 1) = v42;
  LODWORD(v10->fields.mWidget) = v43;
  HIDWORD(v10->fields.mWidget) = v44;
  v10->fields.style = 2;
  onFinished = v10->fields.onFinished;
  v46 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v46,
    (Il2CppObject *)v9,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29653788(onFinished, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_42AFC28 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
    byte_42AFC28 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_42AFC27 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QAASpotStateController_IMapSpot__update__);
    byte_42AFC27 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B52A5C(0LL, method);
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2B9270C *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_42AD456 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD456 = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL, v3);
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
      v15 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL, v10);
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
      v18 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL, v10);
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

  if ( (byte_42AD457 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD457 = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL, v3);
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
    sub_B52A5C(v5, v6);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v9; // w20
  __int64 v10; // x0
  __int64 v11; // x3
  QAASpotStateController_IMapSpot_c *v12; // x8
  System_Action_o *v13; // x21
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x3
  QAASpotStateController_IMapSpot_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0

  if ( (byte_42AD458 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD458 = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL, v3);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v10 = sub_B52A54(System_Action_TypeInfo);
  v12 = that->klass;
  v13 = (System_Action_o *)v10;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v16 = (__int64)&v12->vtable[*v15 + 10].method;
  }
  else
  {
LABEL_14:
    v16 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v11);
  }
  System_Action___ctor(v13, (Il2CppObject *)that, *(_QWORD *)(v16 + 8), 0LL);
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
    v21 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL, v17);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v21)(
    that,
    v9,
    v13,
    *(_QWORD *)(v21 + 8));
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
    sub_B52A5C(v5, v6);
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
    sub_B52A5C(v5, v6);
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
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_Fields *p_fields; // x21
  __int64 v9; // x3
  struct QAASpotStateController_IMapSpot_o *v10; // x22
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v12; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Action_o *v16; // x21
  struct QAASpotStateController_IMapSpot_o *v17; // x19
  QAASpotStateController_IMapSpot_c *v18; // x8
  unsigned __int64 v19; // x10
  QAASpotStateController_IMapSpot_c **v20; // x11
  __int64 v21; // x0

  if ( (byte_42AD459 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B52984(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__);
    sub_B52984(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
    byte_42AD459 = 1;
  }
  v5 = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B52A54(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  v5->fields.that = that;
  p_fields = &v5->fields;
  sub_B52920(&v5->fields);
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v10 = v5->fields.that;
  if ( !v10 )
    goto LABEL_23;
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v9);
  }
  v6 = (*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         v10,
         *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)(v6 - 1) < 2 )
    {
      v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v5,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(v5->fields.that, 0, this->fields.Duration, v16, 0LL);
    }
    return;
  }
  v17 = p_fields->that;
  if ( !p_fields->that )
LABEL_23:
    sub_B52A5C(v6, v7);
  v18 = v17->klass;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (QAASpotStateController_IMapSpot_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 10].method;
  }
  else
  {
LABEL_19:
    v21 = sub_AEB880(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v15);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
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
  __int64 v2; // x3
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v3; // x19
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v8; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v11; // x19
  __int64 v12; // x3
  Il2CppClass *v13; // x8
  System_Action_o *v14; // x20
  unsigned __int64 v15; // x10
  QAASpotStateController_IMapSpot_c **v16; // x11
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_42AD7E2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD7E2 = 1;
  }
  that = v3->fields.that;
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
    v8 = sub_AEB880(v3->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL, v2);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v8)(
                                                                           that,
                                                                           *(_QWORD *)(v8 + 8));
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v11 = (Il2CppObject *)v3->fields.that,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B52A54(System_Action_TypeInfo),
        !v11) )
  {
LABEL_19:
    sub_B52A5C(this, method);
  }
  v13 = v11->klass;
  v14 = (System_Action_o *)this;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = (QAASpotStateController_IMapSpot_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v16 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v15;
      v16 += 2;
      if ( v15 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&v13->vtable[*(_DWORD *)v16 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AEB880(v11, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v12);
  }
  System_Action___ctor(v14, v11, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v11, 1, Duration, v14, 0LL);
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
    sub_B52A5C(v5, v6);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x3
  QAASpotStateController_IMapSpot_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  QAASpotStateController_IMapSpot_c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  float Duration; // s8
  __int64 v21; // x0
  __int64 v22; // x3
  QAASpotStateController_IMapSpot_c *v23; // x8
  System_Action_o *v24; // x20
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  float v28; // s8
  __int64 v29; // x0
  __int64 v30; // x3
  QAASpotStateController_IMapSpot_c *v31; // x8
  System_Action_o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  QAASpotStateController_IMapSpot_c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  v5 = this;
  if ( (byte_42AD45A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45A = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      Duration = v5->fields.Duration;
      v21 = sub_B52A54(System_Action_TypeInfo);
      v23 = that->klass;
      v24 = (System_Action_o *)v21;
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
        v27 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v22);
      }
      System_Action___ctor(v24, (Il2CppObject *)that, *(_QWORD *)(v27 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v24, 0LL);
      break;
    case 1:
      v16 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v19 = (__int64)&v16->vtable[*v18 + 10].method;
      }
      else
      {
LABEL_22:
        v19 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v11);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v19)(that, *(_QWORD *)(v19 + 8));
      break;
    case 0:
      v12 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v13;
          v14 += 4;
          if ( v13 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v15 = (__int64)&v12->vtable[*v14 + 8].method;
      }
      else
      {
LABEL_17:
        v15 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v11);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v15)(that, *(_QWORD *)(v15 + 8), 1.0);
      v28 = v5->fields.Duration;
      v29 = sub_B52A54(System_Action_TypeInfo);
      v31 = that->klass;
      v32 = (System_Action_o *)v29;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        v34 = &v31->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v34 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        v35 = (__int64)&v31->vtable[*v34 + 10].method;
      }
      else
      {
LABEL_35:
        v35 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v30);
      }
      System_Action___ctor(v32, (Il2CppObject *)that, *(_QWORD *)(v35 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v32, 0LL);
      break;
  }
  v36 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v38 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_44;
    }
    v39 = (__int64)(&v36->_1.interfaceOffsets + 2 * *v38 + 39);
  }
  else
  {
LABEL_44:
    v39 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL, v11);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v39)(that, *(_QWORD *)(v39 + 8));
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

  if ( (byte_42AD45B & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45B = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
    sub_B52A5C(v5, v6);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x3
  QAASpotStateController_IMapSpot_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  float Duration; // s8
  __int64 v17; // x0
  __int64 v18; // x3
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
  __int64 v29; // x0
  __int64 v30; // x3
  QAASpotStateController_IMapSpot_c *v31; // x8
  System_Action_o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  v5 = this;
  if ( (byte_42AD45C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaGray_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45C = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
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
        v27 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v11);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v27)(that, *(_QWORD *)(v27 + 8));
      break;
    case 1:
      Duration = v5->fields.Duration;
      v17 = sub_B52A54(System_Action_TypeInfo);
      v19 = that->klass;
      v20 = (System_Action_o *)v17;
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
        v23 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v18);
      }
      System_Action___ctor(v20, (Il2CppObject *)that, *(_QWORD *)(v23 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v20, 0LL);
      break;
    case 0:
      v12 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v13;
          v14 += 4;
          if ( v13 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v15 = (__int64)&v12->vtable[*v14 + 8].method;
      }
      else
      {
LABEL_17:
        v15 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v11);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v15)(that, *(_QWORD *)(v15 + 8), 0.5);
      v28 = v5->fields.Duration;
      v29 = sub_B52A54(System_Action_TypeInfo);
      v31 = that->klass;
      v32 = (System_Action_o *)v29;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        v34 = &v31->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v34 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v35 = (__int64)&v31->vtable[*v34 + 10].method;
      }
      else
      {
LABEL_36:
        v35 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v30);
      }
      System_Action___ctor(v32, (Il2CppObject *)that, *(_QWORD *)(v35 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v32, 0LL);
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

  if ( (byte_42AD45D & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45D = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
    sub_B52A5C(v5, v6);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x3
  float Duration; // s8
  __int64 v13; // x0
  __int64 v14; // x3
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  v5 = this;
  if ( (byte_42AD45E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaHide_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45E = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) < 2 )
    {
      Duration = v5->fields.Duration;
      v13 = sub_B52A54(System_Action_TypeInfo);
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
            goto LABEL_16;
        }
        v19 = (__int64)&v15->vtable[*v18 + 10].method;
      }
      else
      {
LABEL_16:
        v19 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v14);
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
      v23 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v11);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v23)(that, *(_QWORD *)(v23 + 8));
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

  if ( (byte_42AD45F & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD45F = 1;
  }
  if ( !that )
    sub_B52A5C(this, that);
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
    p_method = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AEB880(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
  __int64 v2; // x3
  long double v3; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v4; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v8; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_42AD455 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD455 = 1;
  }
  easingObj = v4->fields.easingObj;
  if ( !easingObj || (targetObject = v4->fields.targetObject) == 0LL )
    sub_B52A5C(this, method);
  klass = targetObject->klass;
  *(float *)&v3 = v4->fields.from + (float)((float)(v4->fields.to - v4->fields.from) * easingObj->fields.mStartTime);
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AEB880(v4->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v2);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v3);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  long double v3; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v4; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_42AD454 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B52984(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_42AD454 = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    sub_B52A5C(this, method);
  klass = targetObject->klass;
  *(float *)&v3 = v4->fields.to;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v4->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v2);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v3);
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
}
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

  if ( (byte_4351FA5 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
    sub_B70694(&Method_CStateManager_QAASpotStateController_IMapSpot__add__);
    sub_B70694(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
    sub_B70694(&QAASpotStateController_StateMapMain_TypeInfo);
    sub_B70694(&QAASpotStateController_StateNone_TypeInfo);
    sub_B70694(&QAASpotStateController_StateQaaAnimation_TypeInfo);
    sub_B70694(&QAASpotStateController_StateQaaChange_TypeInfo);
    sub_B70694(&QAASpotStateController_StateQaaDisp_TypeInfo);
    sub_B70694(&QAASpotStateController_StateQaaGray_TypeInfo);
    sub_B70694(&QAASpotStateController_StateQaaHide_TypeInfo);
    byte_4351FA5 = 1;
  }
  v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v5,
    targetObject,
    10,
    (const MethodInfo_2C7FFDC *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v5;
  p_fields = &this->fields;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  stateManager = this->fields.stateManager;
  v14 = (QAASpotStateController_StateNone_o *)sub_B70764(QAASpotStateController_StateNone_TypeInfo);
  QAASpotStateController_StateNone___ctor(v14, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v14,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v17 = p_fields->stateManager;
  v18 = (QAASpotStateController_StateMapMain_o *)sub_B70764(QAASpotStateController_StateMapMain_TypeInfo);
  QAASpotStateController_StateMapMain___ctor(v18, 0LL);
  if ( !v17 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v17,
    1,
    (IState_T__o *)v18,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v19 = p_fields->stateManager;
  v20 = (QAASpotStateController_StateQaaHide_o *)sub_B70764(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v20, 0, 0LL);
  if ( !v19 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v19,
    2,
    (IState_T__o *)v20,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v21 = p_fields->stateManager;
  v22 = (QAASpotStateController_StateQaaGray_o *)sub_B70764(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v22, 0, 0LL);
  if ( !v21 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v21,
    3,
    (IState_T__o *)v22,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v23 = p_fields->stateManager;
  v24 = (QAASpotStateController_StateQaaDisp_o *)sub_B70764(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v24, 0, 0LL);
  if ( !v23 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v23,
    4,
    (IState_T__o *)v24,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v25 = p_fields->stateManager;
  v26 = (QAASpotStateController_StateQaaHide_o *)sub_B70764(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v26, 1, 0LL);
  if ( !v25 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v25,
    5,
    (IState_T__o *)v26,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v27 = p_fields->stateManager;
  v28 = (QAASpotStateController_StateQaaGray_o *)sub_B70764(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v28, 1, 0LL);
  if ( !v27 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v27,
    6,
    (IState_T__o *)v28,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v29 = p_fields->stateManager;
  v30 = (QAASpotStateController_StateQaaDisp_o *)sub_B70764(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v30, 1, 0LL);
  if ( !v29 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v29,
    7,
    (IState_T__o *)v30,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v31 = p_fields->stateManager;
  v32 = (QAASpotStateController_StateQaaChange_o *)sub_B70764(QAASpotStateController_StateQaaChange_TypeInfo);
  QAASpotStateController_StateQaaChange___ctor(v32, 0, 0LL);
  if ( !v31
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v31,
          8,
          (IState_T__o *)v32,
          (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v33 = p_fields->stateManager,
        v34 = (QAASpotStateController_StateQaaAnimation_o *)sub_B70764(QAASpotStateController_StateQaaAnimation_TypeInfo),
        QAASpotStateController_StateQaaAnimation___ctor(v34, 0, 0LL),
        !v33) )
  {
LABEL_14:
    sub_B7076C(v15, v16);
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v33,
    9,
    (IState_T__o *)v34,
    (const MethodInfo_2C800A8 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
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
  __int64 *v24; // x21
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  QAASpotStateController_IMapSpot_c **v27; // x11
  __int64 v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 *v37; // x21
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  QAASpotStateController_IMapSpot_c **v40; // x11
  __int64 v41; // x0
  float v42; // s0
  EasingObject_o *v43; // x19
  System_Action_o *v44; // x21
  System_Action_o *v45; // x22

  if ( (byte_4351FA9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B70694(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__);
    sub_B70694(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__);
    sub_B70694(&QAASpotStateController___c__DisplayClass9_0_TypeInfo);
    byte_4351FA9 = 1;
  }
  v9 = sub_B70764(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = targetObject;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)targetObject,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 32),
    (System_Int32_array **)finishCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = *(__int64 **)(v9 + 16);
  if ( !v24 )
    goto LABEL_24;
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
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 5) + 312;
  }
  else
  {
LABEL_9:
    v28 = sub_B08590(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v29 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v29,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 48) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 48), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  v37 = *(__int64 **)(v9 + 16);
  if ( !v37 )
    goto LABEL_24;
  v38 = *v37;
  if ( *(_WORD *)(*v37 + 298) )
  {
    v39 = 0LL;
    v40 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v40 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *(unsigned __int16 *)(*v37 + 298) )
        goto LABEL_16;
    }
    v41 = v38 + 16LL * (*(_DWORD *)v40 + 7) + 312;
  }
  else
  {
LABEL_16:
    v41 = sub_B08590(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v9 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
  v42 = 0.5;
  if ( isActive )
    v42 = 1.0;
  *(float *)(v9 + 24) = v42;
  if ( time > 0.0 )
  {
    v43 = *(EasingObject_o **)(v9 + 48);
    v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v45 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v43 )
    {
      EasingObject__Play(v43, time, v44, v45, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B7076C(v10, v11);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_GameObject_o *v22; // x22
  QAASpotStateController_IMapSpot_c *v23; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  QAASpotStateController_IMapSpot_c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v34; // s0
  int v35; // s1
  int v36; // s2
  float v37; // s1
  float v38; // s2
  int v39; // s12
  int v40; // s13
  int v41; // s14
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v43; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351FA8 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B70694(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_B70694(&QAASpotStateController___c__DisplayClass8_0_TypeInfo);
    sub_B70694(&Method_UITweener_Begin_TweenScale___);
    byte_4351FA8 = 1;
  }
  v9 = sub_B70764(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_33;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_B70630(
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
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_B08590(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v22 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    v23 = targetObject->klass;
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v23->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v23->vtable[*v28 + 4].method;
    }
    else
    {
LABEL_16:
      v29 = sub_B08590(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v29)(targetObject, *(_QWORD *)(v29 + 8));
  }
  else
  {
    v30 = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v32 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v33 = (__int64)&v30->vtable[*v32 + 4].method;
    }
    else
    {
LABEL_21:
      v33 = sub_B08590(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v33)(
                     targetObject,
                     *(_QWORD *)(v33 + 8)));
    y = v37;
    z = v38;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
  }
  v39 = v34;
  v40 = v35;
  v41 = v36;
  if ( time <= 0.0 )
  {
    GameObjectExtensions__SetLocalScale(v22, *(UnityEngine_Vector3_o *)&v34, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
    return;
  }
  v10 = UITweener__Begin_TweenWidth_(v22, time, (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_33:
    sub_B7076C(v10, v11);
  *(float *)&v10->fields.from = x;
  *(float *)&v10->fields.to = y;
  *(float *)&v10->fields.updateTable = z;
  *((_DWORD *)&v10->fields.updateTable + 1) = v39;
  LODWORD(v10->fields.mWidget) = v40;
  HIDWORD(v10->fields.mWidget) = v41;
  v10->fields.style = 2;
  onFinished = v10->fields.onFinished;
  v43 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v43,
    (Il2CppObject *)v9,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29879148(onFinished, v43, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4351FA7 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
    byte_4351FA7 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4351FA6 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QAASpotStateController_IMapSpot__update__);
    byte_4351FA6 = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B7076C(0LL, method);
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2C80124 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_4351AC5 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC5 = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
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
      v13 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
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
      v16 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
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

  if ( (byte_4351AC6 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC6 = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
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
    sub_B7076C(v5, v6);
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
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v8; // w20
  __int64 v9; // x0
  QAASpotStateController_IMapSpot_c *v10; // x8
  System_Action_o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0

  if ( (byte_4351AC7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC7 = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = sub_B70764(System_Action_TypeInfo);
  v10 = that->klass;
  v11 = (System_Action_o *)v9;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v14 = (__int64)&v10->vtable[*v13 + 10].method;
  }
  else
  {
LABEL_14:
    v14 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v11, (Il2CppObject *)that, *(_QWORD *)(v14 + 8), 0LL);
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
        goto LABEL_20;
    }
    v18 = (__int64)&v15->vtable[*v17 + 16].method;
  }
  else
  {
LABEL_20:
    v18 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v18)(
    that,
    v8,
    v11,
    *(_QWORD *)(v18 + 8));
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
    sub_B7076C(v5, v6);
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
    sub_B7076C(v5, v6);
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
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 *v21; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  QAASpotStateController_IMapSpot_c **v24; // x11
  __int64 v25; // x0
  System_Action_o *v26; // x21
  __int64 *v27; // x19
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  QAASpotStateController_IMapSpot_c **v30; // x11
  __int64 v31; // x0

  if ( (byte_4351AC8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_B70694(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__);
    sub_B70694(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
    byte_4351AC8 = 1;
  }
  v5 = sub_B70764(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(
    (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = that;
  v14 = (__int64 **)(v5 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v21 = *(__int64 **)(v5 + 16);
  if ( !v21 )
    goto LABEL_23;
  v22 = *v21;
  if ( *(_WORD *)(*v21 + 298) )
  {
    v23 = 0LL;
    v24 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)(*v21 + 298) )
        goto LABEL_9;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 13) + 312;
  }
  else
  {
LABEL_9:
    v25 = sub_B08590(*v14, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)(v6 - 1) < 2 )
    {
      v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v5,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v5 + 16),
        0,
        this->fields.Duration,
        v26,
        0LL);
    }
    return;
  }
  v27 = *v14;
  if ( !*v14 )
LABEL_23:
    sub_B7076C(v6, v7);
  v28 = *v27;
  if ( *(_WORD *)(*v27 + 298) )
  {
    v29 = 0LL;
    v30 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *(v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)(*v27 + 298) )
        goto LABEL_19;
    }
    v31 = v28 + 16LL * (*(_DWORD *)v30 + 10) + 312;
  }
  else
  {
LABEL_19:
    v31 = sub_B08590(*v14, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
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
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v5; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v7; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v10; // x19
  Il2CppClass *v11; // x8
  System_Action_o *v12; // x20
  unsigned __int64 v13; // x10
  QAASpotStateController_IMapSpot_c **v14; // x11
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_43515CA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_43515CA = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v5;
      p_offset += 2;
      if ( v5 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v7 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v7 = sub_B08590(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v7)(
                                                                           that,
                                                                           *(_QWORD *)(v7 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v10 = (Il2CppObject *)v2->fields.that,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B70764(System_Action_TypeInfo),
        !v10) )
  {
LABEL_19:
    sub_B7076C(this, method);
  }
  v11 = v10->klass;
  v12 = (System_Action_o *)this;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = (QAASpotStateController_IMapSpot_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v13;
      v14 += 2;
      if ( v13 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&v11->vtable[*(_DWORD *)v14 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_B08590(v10, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v12, v10, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v10, 1, Duration, v12, 0LL);
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
    sub_B7076C(v5, v6);
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
  QAASpotStateController_StateQaaDisp_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  QAASpotStateController_IMapSpot_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  QAASpotStateController_IMapSpot_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  float Duration; // s8
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  System_Action_o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  float v25; // s8
  __int64 v26; // x0
  QAASpotStateController_IMapSpot_c *v27; // x8
  System_Action_o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  v4 = this;
  if ( (byte_4351AC9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC9 = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  switch ( v9 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v19 = sub_B70764(System_Action_TypeInfo);
      v20 = that->klass;
      v21 = (System_Action_o *)v19;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = &v20->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v24 = (__int64)&v20->vtable[*v23 + 10].method;
      }
      else
      {
LABEL_27:
        v24 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v21, (Il2CppObject *)that, *(_QWORD *)(v24 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v21, 0LL);
      break;
    case 1:
      v14 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v16 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*v16 + 10].method;
      }
      else
      {
LABEL_22:
        v17 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v17)(that, *(_QWORD *)(v17 + 8));
      break;
    case 0:
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
            goto LABEL_17;
        }
        v13 = (__int64)&v10->vtable[*v12 + 8].method;
      }
      else
      {
LABEL_17:
        v13 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 1.0);
      v25 = v4->fields.Duration;
      v26 = sub_B70764(System_Action_TypeInfo);
      v27 = that->klass;
      v28 = (System_Action_o *)v26;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        v30 = &v27->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        v31 = (__int64)&v27->vtable[*v30 + 10].method;
      }
      else
      {
LABEL_35:
        v31 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v28, (Il2CppObject *)that, *(_QWORD *)(v31 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v25, v28, 0LL);
      break;
  }
  v32 = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v34 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_44;
    }
    v35 = (__int64)(&v32->_1.interfaceOffsets + 2 * *v34 + 39);
  }
  else
  {
LABEL_44:
    v35 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v35)(that, *(_QWORD *)(v35 + 8));
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

  if ( (byte_4351ACA & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351ACA = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
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
    sub_B7076C(v5, v6);
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
  QAASpotStateController_StateQaaGray_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  QAASpotStateController_IMapSpot_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  float Duration; // s8
  __int64 v15; // x0
  QAASpotStateController_IMapSpot_c *v16; // x8
  System_Action_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  float v25; // s8
  __int64 v26; // x0
  QAASpotStateController_IMapSpot_c *v27; // x8
  System_Action_o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  v4 = this;
  if ( (byte_4351ACB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaGray_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351ACB = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  switch ( v9 )
  {
    case 2:
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
            goto LABEL_27;
        }
        v24 = (__int64)&v21->vtable[*v23 + 10].method;
      }
      else
      {
LABEL_27:
        v24 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v24)(that, *(_QWORD *)(v24 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v15 = sub_B70764(System_Action_TypeInfo);
      v16 = that->klass;
      v17 = (System_Action_o *)v15;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = &v16->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v20 = (__int64)&v16->vtable[*v19 + 10].method;
      }
      else
      {
LABEL_22:
        v20 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v17, (Il2CppObject *)that, *(_QWORD *)(v20 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v17, 0LL);
      break;
    case 0:
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
            goto LABEL_17;
        }
        v13 = (__int64)&v10->vtable[*v12 + 8].method;
      }
      else
      {
LABEL_17:
        v13 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 0.5);
      v25 = v4->fields.Duration;
      v26 = sub_B70764(System_Action_TypeInfo);
      v27 = that->klass;
      v28 = (System_Action_o *)v26;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        v30 = &v27->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_36;
        }
        v31 = (__int64)&v27->vtable[*v30 + 10].method;
      }
      else
      {
LABEL_36:
        v31 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v28, (Il2CppObject *)that, *(_QWORD *)(v31 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v25, v28, 0LL);
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

  if ( (byte_4351ACC & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351ACC = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
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
    sub_B7076C(v5, v6);
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
  QAASpotStateController_StateQaaHide_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  float Duration; // s8
  __int64 v11; // x0
  QAASpotStateController_IMapSpot_c *v12; // x8
  System_Action_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4351ACD & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaHide_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351ACD = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v11 = sub_B70764(System_Action_TypeInfo);
      v12 = that->klass;
      v13 = (System_Action_o *)v11;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        v15 = &v12->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v14;
          v15 += 4;
          if ( v14 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v16 = (__int64)&v12->vtable[*v15 + 10].method;
      }
      else
      {
LABEL_16:
        v16 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v13, (Il2CppObject *)that, *(_QWORD *)(v16 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v13, 0LL);
    }
  }
  else
  {
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
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19 + 10].method;
    }
    else
    {
LABEL_21:
      v20 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
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

  if ( (byte_4351ACE & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351ACE = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
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
    p_method = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_B08590(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
  if ( (byte_4351AC4 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC4 = 1;
  }
  easingObj = v3->fields.easingObj;
  if ( !easingObj || (targetObject = v3->fields.targetObject) == 0LL )
    sub_B7076C(this, method);
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
    p_method = sub_B08590(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
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
  if ( (byte_4351AC3 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B70694(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4351AC3 = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_B7076C(this, method);
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
    p_method = sub_B08590(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
}
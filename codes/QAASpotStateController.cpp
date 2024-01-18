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
  QAASpotStateController_StateNone_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  QAASpotStateController_StateMapMain_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  QAASpotStateController_StateQaaHide_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  QAASpotStateController_StateQaaGray_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  QAASpotStateController_StateQaaDisp_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x21
  QAASpotStateController_StateQaaHide_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  QAASpotStateController_StateQaaGray_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x21
  QAASpotStateController_StateQaaDisp_o *v39; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v40; // x21
  QAASpotStateController_StateQaaChange_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x20
  QAASpotStateController_StateQaaAnimation_o *v43; // x21
  const MethodInfo *v44; // x2

  if ( (byte_4187AEB & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject);
    sub_B2C35C(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v5);
    sub_B2C35C(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v6);
    sub_B2C35C(&QAASpotStateController_StateMapMain_TypeInfo, v7);
    sub_B2C35C(&QAASpotStateController_StateNone_TypeInfo, v8);
    sub_B2C35C(&QAASpotStateController_StateQaaAnimation_TypeInfo, v9);
    sub_B2C35C(&QAASpotStateController_StateQaaChange_TypeInfo, v10);
    sub_B2C35C(&QAASpotStateController_StateQaaDisp_TypeInfo, v11);
    sub_B2C35C(&QAASpotStateController_StateQaaGray_TypeInfo, v12);
    sub_B2C35C(&QAASpotStateController_StateQaaHide_TypeInfo, v13);
    byte_4187AEB = 1;
  }
  v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_QAASpotStateController_IMapSpot____ctor(
    v14,
    targetObject,
    10,
    (const MethodInfo_2A08354 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = v14;
  p_fields = &this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  stateManager = this->fields.stateManager;
  v23 = (QAASpotStateController_StateNone_o *)sub_B2C42C(QAASpotStateController_StateNone_TypeInfo);
  QAASpotStateController_StateNone___ctor(v23, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    stateManager,
    0,
    (IState_T__o *)v23,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v26 = p_fields->stateManager;
  v27 = (QAASpotStateController_StateMapMain_o *)sub_B2C42C(QAASpotStateController_StateMapMain_TypeInfo);
  QAASpotStateController_StateMapMain___ctor(v27, 0LL);
  if ( !v26 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v26,
    1,
    (IState_T__o *)v27,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v28 = p_fields->stateManager;
  v29 = (QAASpotStateController_StateQaaHide_o *)sub_B2C42C(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v29, 0, 0LL);
  if ( !v28 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v28,
    2,
    (IState_T__o *)v29,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v30 = p_fields->stateManager;
  v31 = (QAASpotStateController_StateQaaGray_o *)sub_B2C42C(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v31, 0, 0LL);
  if ( !v30 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v30,
    3,
    (IState_T__o *)v31,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v32 = p_fields->stateManager;
  v33 = (QAASpotStateController_StateQaaDisp_o *)sub_B2C42C(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v33, 0, 0LL);
  if ( !v32 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v32,
    4,
    (IState_T__o *)v33,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v34 = p_fields->stateManager;
  v35 = (QAASpotStateController_StateQaaHide_o *)sub_B2C42C(QAASpotStateController_StateQaaHide_TypeInfo);
  QAASpotStateController_StateQaaHide___ctor(v35, 1, 0LL);
  if ( !v34 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v34,
    5,
    (IState_T__o *)v35,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v36 = p_fields->stateManager;
  v37 = (QAASpotStateController_StateQaaGray_o *)sub_B2C42C(QAASpotStateController_StateQaaGray_TypeInfo);
  QAASpotStateController_StateQaaGray___ctor(v37, 1, 0LL);
  if ( !v36 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v36,
    6,
    (IState_T__o *)v37,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v38 = p_fields->stateManager;
  v39 = (QAASpotStateController_StateQaaDisp_o *)sub_B2C42C(QAASpotStateController_StateQaaDisp_TypeInfo);
  QAASpotStateController_StateQaaDisp___ctor(v39, 1, 0LL);
  if ( !v38 )
    goto LABEL_14;
  CStateManager_QAASpotStateController_IMapSpot___add(
    v38,
    7,
    (IState_T__o *)v39,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v40 = p_fields->stateManager;
  v41 = (QAASpotStateController_StateQaaChange_o *)sub_B2C42C(QAASpotStateController_StateQaaChange_TypeInfo);
  QAASpotStateController_StateQaaChange___ctor(v41, 0, 0LL);
  if ( !v40
    || (CStateManager_QAASpotStateController_IMapSpot___add(
          v40,
          8,
          (IState_T__o *)v41,
          (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v42 = p_fields->stateManager,
        v43 = (QAASpotStateController_StateQaaAnimation_o *)sub_B2C42C(QAASpotStateController_StateQaaAnimation_TypeInfo),
        QAASpotStateController_StateQaaAnimation___ctor(v43, 0, 0LL),
        !v42) )
  {
LABEL_14:
    sub_B2C434(v24, v25);
  }
  CStateManager_QAASpotStateController_IMapSpot___add(
    v42,
    9,
    (IState_T__o *)v43,
    (const MethodInfo_2A08420 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v44);
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
  __int64 v29; // x3
  __int64 *v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  QAASpotStateController_IMapSpot_c **v33; // x11
  __int64 v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x3
  __int64 *v44; // x21
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  QAASpotStateController_IMapSpot_c **v47; // x11
  __int64 v48; // x0
  float v49; // s0
  EasingObject_o *v50; // x19
  System_Action_o *v51; // x21
  System_Action_o *v52; // x22

  if ( (byte_4187AEF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isActive);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_B2C35C(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v11);
    sub_B2C35C(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v12);
    sub_B2C35C(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v13);
    byte_4187AEF = 1;
  }
  v14 = sub_B2C42C(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)(v14 + 16) = targetObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)targetObject,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v14 + 32) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v14 + 32),
    (System_Int32_array **)finishCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = *(__int64 **)(v14 + 16);
  if ( !v30 )
    goto LABEL_24;
  v31 = *v30;
  if ( *(_WORD *)(*v30 + 298) )
  {
    v32 = 0LL;
    v33 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v32;
      v33 += 2;
      if ( v32 >= *(unsigned __int16 *)(*v30 + 298) )
        goto LABEL_9;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 5) + 312;
  }
  else
  {
LABEL_9:
    v34 = sub_AC5258(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 5LL, v29);
  }
  v35 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v35,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 48) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 48), Component_UIWidget, v37, v38, v39, v40, v41, v42);
  v44 = *(__int64 **)(v14 + 16);
  if ( !v44 )
    goto LABEL_24;
  v45 = *v44;
  if ( *(_WORD *)(*v44 + 298) )
  {
    v46 = 0LL;
    v47 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *(v47 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v46;
      v47 += 2;
      if ( v46 >= *(unsigned __int16 *)(*v44 + 298) )
        goto LABEL_16;
    }
    v48 = v45 + 16LL * (*(_DWORD *)v47 + 7) + 312;
  }
  else
  {
LABEL_16:
    v48 = sub_AC5258(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL, v43);
  }
  *(float *)(v14 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
  v49 = 0.5;
  if ( isActive )
    v49 = 1.0;
  *(float *)(v14 + 24) = v49;
  if ( time > 0.0 )
  {
    v50 = *(EasingObject_o **)(v14 + 48);
    v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v50 )
    {
      EasingObject__Play(v50, time, v51, v52, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_B2C434(v15, v16);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  UnityEngine_GameObject_o *v29; // x22
  __int64 v30; // x3
  QAASpotStateController_IMapSpot_c *v31; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  QAASpotStateController_IMapSpot_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int v42; // s0
  int v43; // s1
  int v44; // s2
  float v45; // s1
  float v46; // s2
  int v47; // s12
  int v48; // s13
  int v49; // s14
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v51; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187AEE & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_B2C35C(&EventDelegate_TypeInfo, v9);
    sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_B2C35C(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v11);
    sub_B2C35C(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v12);
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, v13);
    byte_4187AEE = 1;
  }
  v14 = sub_B2C42C(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !targetObject )
    goto LABEL_33;
  klass = targetObject->klass;
  if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL, v23);
  }
  v29 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    v31 = targetObject->klass;
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v31->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v36 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v37 = (__int64)&v31->vtable[*v36 + 4].method;
    }
    else
    {
LABEL_16:
      v37 = sub_AC5258(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v30);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v37)(targetObject, *(_QWORD *)(v37 + 8));
  }
  else
  {
    v38 = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v40 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v41 = (__int64)&v38->vtable[*v40 + 4].method;
    }
    else
    {
LABEL_21:
      v41 = sub_AC5258(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL, v28);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v41)(
                     targetObject,
                     *(_QWORD *)(v41 + 8)));
    y = v45;
    z = v46;
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
  }
  v47 = v42;
  v48 = v43;
  v49 = v44;
  if ( time <= 0.0 )
  {
    GameObjectExtensions__SetLocalScale(v29, *(UnityEngine_Vector3_o *)&v42, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  v15 = UITweener__Begin_TweenWidth_(v29, time, (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  if ( !v15 )
LABEL_33:
    sub_B2C434(v15, v16);
  *(float *)&v15->fields.from = x;
  *(float *)&v15->fields.to = y;
  *(float *)&v15->fields.updateTable = z;
  *((_DWORD *)&v15->fields.updateTable + 1) = v47;
  LODWORD(v15->fields.mWidget) = v48;
  HIDWORD(v15->fields.mWidget) = v49;
  v15->fields.style = 2;
  onFinished = v15->fields.onFinished;
  v51 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v51,
    (Il2CppObject *)v14,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29727552(onFinished, v51, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4187AED & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state);
    byte_4187AED = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    stateManager,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *stateManager; // x0

  if ( (byte_4187AEC & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method);
    byte_4187AEC = 1;
  }
  stateManager = this->fields.stateManager;
  if ( !stateManager )
    sub_B2C434(0LL, method);
  CStateManager_QAASpotStateController_IMapSpot___update(
    stateManager,
    (const MethodInfo_2A0849C *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_41852CC & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_41852CC = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL, v3);
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
      v15 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL, v10);
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
      v18 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL, v10);
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

  if ( (byte_41852CD & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_41852CD = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL, v3);
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
    sub_B2C434(v5, v6);
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
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v10; // w20
  __int64 v11; // x0
  __int64 v12; // x3
  QAASpotStateController_IMapSpot_c *v13; // x8
  System_Action_o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x3
  QAASpotStateController_IMapSpot_c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  if ( (byte_41852CE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_41852CE = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL, v3);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  v11 = sub_B2C42C(System_Action_TypeInfo);
  v13 = that->klass;
  v14 = (System_Action_o *)v11;
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
    v17 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v12);
  }
  System_Action___ctor(v14, (Il2CppObject *)that, *(_QWORD *)(v17 + 8), 0LL);
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
        goto LABEL_20;
    }
    v22 = (__int64)&v19->vtable[*v21 + 16].method;
  }
  else
  {
LABEL_20:
    v22 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL, v18);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v22)(
    that,
    v10,
    v14,
    *(_QWORD *)(v22 + 8));
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
    sub_B2C434(v5, v6);
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
    sub_B2C434(v5, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_Fields *p_fields; // x21
  __int64 v12; // x3
  struct QAASpotStateController_IMapSpot_o *v13; // x22
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v15; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Action_o *v19; // x21
  struct QAASpotStateController_IMapSpot_o *v20; // x19
  QAASpotStateController_IMapSpot_c *v21; // x8
  unsigned __int64 v22; // x10
  QAASpotStateController_IMapSpot_c **v23; // x11
  __int64 v24; // x0

  if ( (byte_41852CF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    sub_B2C35C(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v6);
    sub_B2C35C(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v7);
    byte_41852CF = 1;
  }
  v8 = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B2C42C(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_23;
  v8->fields.that = that;
  p_fields = &v8->fields;
  sub_B2C2F8(&v8->fields, that);
  v8->fields.__4__this = this;
  sub_B2C2F8(&v8->fields.__4__this, this);
  v13 = v8->fields.that;
  if ( !v13 )
    goto LABEL_23;
  klass = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v12);
  }
  v9 = (*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         v13,
         *(_QWORD *)(p_method + 8));
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v8,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(v8->fields.that, 0, this->fields.Duration, v19, 0LL);
    }
    return;
  }
  v20 = p_fields->that;
  if ( !p_fields->that )
LABEL_23:
    sub_B2C434(v9, v10);
  v21 = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (QAASpotStateController_IMapSpot_c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 10].method;
  }
  else
  {
LABEL_19:
    v24 = sub_AC5258(p_fields->that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v18);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
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
  __int64 v4; // x1
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v7; // x10
  QAASpotStateController_IMapSpot_c **p_offset; // x11
  __int64 v9; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  float Duration; // s8
  Il2CppObject *v12; // x19
  __int64 v13; // x3
  Il2CppClass *v14; // x8
  System_Action_o *v15; // x20
  unsigned __int64 v16; // x10
  QAASpotStateController_IMapSpot_c **v17; // x11
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_41855C5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B2C35C(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v4);
    byte_41855C5 = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    v9 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v9 = sub_AC5258(v3->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL, v2);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v9)(
                                                                           that,
                                                                           *(_QWORD *)(v9 + 8));
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (Duration = _4__this->fields.Duration,
        v12 = (Il2CppObject *)v3->fields.that,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_B2C42C(System_Action_TypeInfo),
        !v12) )
  {
LABEL_19:
    sub_B2C434(this, method);
  }
  v14 = v12->klass;
  v15 = (System_Action_o *)this;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = (QAASpotStateController_IMapSpot_c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&v14->vtable[*(_DWORD *)v17 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(v12, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v13);
  }
  System_Action___ctor(v15, v12, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim((QAASpotStateController_IMapSpot_o *)v12, 1, Duration, v15, 0LL);
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
    sub_B2C434(v5, v6);
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
  __int64 v6; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x3
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
  __int64 v23; // x3
  QAASpotStateController_IMapSpot_c *v24; // x8
  System_Action_o *v25; // x20
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  float v29; // s8
  __int64 v30; // x0
  __int64 v31; // x3
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  QAASpotStateController_IMapSpot_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  v5 = this;
  if ( (byte_41852D0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v6);
    byte_41852D0 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v11 )
  {
    case 2:
      Duration = v5->fields.Duration;
      v22 = sub_B2C42C(System_Action_TypeInfo);
      v24 = that->klass;
      v25 = (System_Action_o *)v22;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = &v24->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v27 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v28 = (__int64)&v24->vtable[*v27 + 10].method;
      }
      else
      {
LABEL_27:
        v28 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v23);
      }
      System_Action___ctor(v25, (Il2CppObject *)that, *(_QWORD *)(v28 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v25, 0LL);
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
        v20 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v12);
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
        v16 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v12);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 1.0);
      v29 = v5->fields.Duration;
      v30 = sub_B2C42C(System_Action_TypeInfo);
      v32 = that->klass;
      v33 = (System_Action_o *)v30;
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
        v36 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v31);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v29, v33, 0LL);
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
    v40 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL, v12);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v40)(that, *(_QWORD *)(v40 + 8));
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

  if ( (byte_41852D1 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_41852D1 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
    sub_B2C434(v5, v6);
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
  __int64 v6; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x3
  QAASpotStateController_IMapSpot_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  float Duration; // s8
  __int64 v18; // x0
  __int64 v19; // x3
  QAASpotStateController_IMapSpot_c *v20; // x8
  System_Action_o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  QAASpotStateController_IMapSpot_c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  float v29; // s8
  __int64 v30; // x0
  __int64 v31; // x3
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  v5 = this;
  if ( (byte_41852D2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaGray_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v6);
    byte_41852D2 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v11 )
  {
    case 2:
      v25 = that->klass;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = &v25->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v27 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        v28 = (__int64)&v25->vtable[*v27 + 10].method;
      }
      else
      {
LABEL_27:
        v28 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v12);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v28)(that, *(_QWORD *)(v28 + 8));
      break;
    case 1:
      Duration = v5->fields.Duration;
      v18 = sub_B2C42C(System_Action_TypeInfo);
      v20 = that->klass;
      v21 = (System_Action_o *)v18;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = &v20->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v24 = (__int64)&v20->vtable[*v23 + 10].method;
      }
      else
      {
LABEL_22:
        v24 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v19);
      }
      System_Action___ctor(v21, (Il2CppObject *)that, *(_QWORD *)(v24 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v21, 0LL);
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
        v16 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v12);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 0.5);
      v29 = v5->fields.Duration;
      v30 = sub_B2C42C(System_Action_TypeInfo);
      v32 = that->klass;
      v33 = (System_Action_o *)v30;
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
        v36 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v31);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v29, v33, 0LL);
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

  if ( (byte_41852D3 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_41852D3 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
    sub_B2C434(v5, v6);
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
  __int64 v6; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x3
  float Duration; // s8
  __int64 v14; // x0
  __int64 v15; // x3
  QAASpotStateController_IMapSpot_c *v16; // x8
  System_Action_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  v5 = this;
  if ( (byte_41852D4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaHide_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, v6);
    byte_41852D4 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
  klass = that->klass;
  if ( *(_WORD *)&that->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL, v3);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 1) < 2 )
    {
      Duration = v5->fields.Duration;
      v14 = sub_B2C42C(System_Action_TypeInfo);
      v16 = that->klass;
      v17 = (System_Action_o *)v14;
      if ( *(_WORD *)&that->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = &v16->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)&that->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v20 = (__int64)&v16->vtable[*v19 + 10].method;
      }
      else
      {
LABEL_16:
        v20 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v15);
      }
      System_Action___ctor(v17, (Il2CppObject *)that, *(_QWORD *)(v20 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v17, 0LL);
    }
  }
  else
  {
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
          goto LABEL_21;
      }
      v24 = (__int64)&v21->vtable[*v23 + 10].method;
    }
    else
    {
LABEL_21:
      v24 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL, v12);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v24)(that, *(_QWORD *)(v24 + 8));
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

  if ( (byte_41852D5 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_B2C35C(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_41852D5 = 1;
  }
  if ( !that )
    sub_B2C434(this, that);
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
    p_method = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL, v3);
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
    v13 = sub_AC5258(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL, v9);
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
  if ( (byte_41852CB & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B2C35C(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_41852CB = 1;
  }
  easingObj = v4->fields.easingObj;
  if ( !easingObj || (targetObject = v4->fields.targetObject) == 0LL )
    sub_B2C434(this, method);
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
    p_method = sub_AC5258(v4->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v2);
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
  if ( (byte_41852CA & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_B2C35C(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_41852CA = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    sub_B2C434(this, method);
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
    p_method = sub_AC5258(v4->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL, v2);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v3);
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
}
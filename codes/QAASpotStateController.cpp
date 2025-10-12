void QAASpotStateController___ctor(QAASpotStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController__Init(
        QAASpotStateController_o *this,
        QAASpotStateController_IMapSpot_o *targetObject,
        const MethodInfo *method)
{
  CStateManager_T__o *v5; // x21
  QAASpotStateController_Fields *p_fields; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CStateManager_T__o *stateManager; // x21
  Il2CppObject *v10; // x22
  __int64 v11; // x0
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x21
  __int64 v15; // x22
  CStateManager_T__o *v16; // x21
  __int64 v17; // x22
  CStateManager_T__o *v18; // x21
  __int64 v19; // x22
  CStateManager_T__o *v20; // x21
  __int64 v21; // x22
  CStateManager_T__o *v22; // x21
  __int64 v23; // x22
  CStateManager_T__o *v24; // x21
  __int64 v25; // x22
  CStateManager_T__o *v26; // x21
  __int64 v27; // x22
  CStateManager_T__o *v28; // x20
  __int64 v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_4C34630 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
    sub_1C32C20(&Method_CStateManager_QAASpotStateController_IMapSpot__add__);
    sub_1C32C20(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateMapMain_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateNone_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateQaaAnimation_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateQaaChange_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateQaaDisp_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateQaaGray_TypeInfo);
    sub_1C32C20(&QAASpotStateController_StateQaaHide_TypeInfo);
    byte_4C34630 = 1;
  }
  v5 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_object____ctor(
    v5,
    (Il2CppObject *)targetObject,
    10,
    (const MethodInfo_3322708 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = (struct CStateManager_QAASpotStateController_IMapSpot__o *)v5;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v7, v8);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v10 = (Il2CppObject *)sub_1C32E6C(QAASpotStateController_StateNone_TypeInfo);
  System_Object___ctor(v10, 0);
  if ( !stateManager )
    goto LABEL_22;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v10,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v12 = (CStateManager_T__o *)p_fields->stateManager;
  v13 = (Il2CppObject *)sub_1C32E6C(QAASpotStateController_StateMapMain_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v12 )
    goto LABEL_22;
  CStateManager_object___add(
    v12,
    1,
    (IState_T__o *)v13,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v14 = (CStateManager_T__o *)p_fields->stateManager;
  v15 = sub_1C32E6C(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_22;
  *(_DWORD *)(v15 + 16) = 1056964608;
  if ( !v14 )
    goto LABEL_22;
  CStateManager_object___add(
    v14,
    2,
    (IState_T__o *)v15,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v16 = (CStateManager_T__o *)p_fields->stateManager;
  v17 = sub_1C32E6C(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_22;
  *(_DWORD *)(v17 + 16) = 1056964608;
  if ( !v16 )
    goto LABEL_22;
  CStateManager_object___add(
    v16,
    3,
    (IState_T__o *)v17,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v18 = (CStateManager_T__o *)p_fields->stateManager;
  v19 = sub_1C32E6C(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_22;
  *(_DWORD *)(v19 + 16) = 1056964608;
  if ( !v18 )
    goto LABEL_22;
  CStateManager_object___add(
    v18,
    4,
    (IState_T__o *)v19,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v20 = (CStateManager_T__o *)p_fields->stateManager;
  v21 = sub_1C32E6C(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_22;
  *(_DWORD *)(v21 + 16) = 0;
  if ( !v20 )
    goto LABEL_22;
  CStateManager_object___add(
    v20,
    5,
    (IState_T__o *)v21,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v22 = (CStateManager_T__o *)p_fields->stateManager;
  v23 = sub_1C32E6C(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_22;
  *(_DWORD *)(v23 + 16) = 0;
  if ( !v22 )
    goto LABEL_22;
  CStateManager_object___add(
    v22,
    6,
    (IState_T__o *)v23,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v24 = (CStateManager_T__o *)p_fields->stateManager;
  v25 = sub_1C32E6C(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
    goto LABEL_22;
  *(_DWORD *)(v25 + 16) = 0;
  if ( !v24 )
    goto LABEL_22;
  CStateManager_object___add(
    v24,
    7,
    (IState_T__o *)v25,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v26 = (CStateManager_T__o *)p_fields->stateManager;
  v27 = sub_1C32E6C(QAASpotStateController_StateQaaChange_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0);
  if ( !v27
    || (*(_DWORD *)(v27 + 16) = 1056964608, !v26)
    || (CStateManager_object___add(
          v26,
          8,
          (IState_T__o *)v27,
          (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v28 = (CStateManager_T__o *)p_fields->stateManager,
        v29 = sub_1C32E6C(QAASpotStateController_StateQaaAnimation_TypeInfo),
        System_Object___ctor((Il2CppObject *)v29, 0),
        !v29)
    || (*(_DWORD *)(v29 + 16) = 1056964608, !v28) )
  {
LABEL_22:
    sub_1C32E7C(v11);
  }
  CStateManager_object___add(
    v28,
    9,
    (IState_T__o *)v29,
    (const MethodInfo_33227B0 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v30);
}


void QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  QAASpotStateController_IMapSpot_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  QAASpotStateController_IMapSpot_c **v27; // x10
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  float v30; // s0
  EasingObject_o *v31; // x19
  System_Action_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_4C34634 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C32C20(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__);
    sub_1C32C20(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__);
    sub_1C32C20(&QAASpotStateController___c__DisplayClass9_0_TypeInfo);
    byte_4C34634 = 1;
  }
  v9 = sub_1C32E6C(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = targetObject;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)targetObject, v11, v12);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)finishCallback, v13, v14);
  v15 = *(__int64 **)(v9 + 16);
  if ( !v15 )
    goto LABEL_24;
  v16 = *v15;
  v17 = *(unsigned __int16 *)(*v15 + 302);
  if ( *(_WORD *)(*v15 + 302) )
  {
    v18 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *(v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_9;
    }
    v19 = v16 + 16LL * (*(_DWORD *)v18 + 5) + 312;
  }
  else
  {
LABEL_9:
    v19 = sub_1C83438(v15, QAASpotStateController_IMapSpot_TypeInfo, 5);
  }
  v20 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v20,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 48) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 48), (int32_t)Component_object, v22, v23);
  v24 = *(__int64 **)(v9 + 16);
  if ( !v24 )
    goto LABEL_24;
  v25 = *v24;
  v26 = *(unsigned __int16 *)(*v24 + 302);
  if ( *(_WORD *)(*v24 + 302) )
  {
    v27 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *(v27 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_16;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 7) + 312;
  }
  else
  {
LABEL_16:
    v28 = sub_1C83438(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7);
  }
  *(float *)(v9 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  v30 = 0.5;
  if ( isActive )
    v30 = 1.0;
  *(float *)(v9 + 24) = v30;
  if ( time > 0.0 )
  {
    v31 = *(EasingObject_o **)(v9 + 48);
    v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0);
    v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0);
    if ( v31 )
    {
      EasingObject__Play(v31, time, v32, v33, 0.0, 17, 0);
      return;
    }
LABEL_24:
    sub_1C32E7C(v10);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v9,
    v29);
}


void QAASpotStateController__SetQaaScaleAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  QAASpotStateController_IMapSpot_c *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v20; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v24; // x10
  __int64 v25; // x0
  QAASpotStateController_IMapSpot_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  float v30; // s12
  float v31; // s1
  float v32; // s13
  float v33; // s2
  float v34; // s14
  float v35; // s1
  float v36; // s2
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C34633 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C32C20(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_1C32C20(&QAASpotStateController___c__DisplayClass8_0_TypeInfo);
    sub_1C32C20(&Method_UITweener_Begin_TweenScale___);
    byte_4C34633 = 1;
  }
  v9 = sub_1C32E6C(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v11, v12);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v14 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
  if ( *(_WORD *)&targetObject->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_9;
    }
    v16 = (__int64)&klass->vtable[*p_offset + 5];
  }
  else
  {
LABEL_9:
    v16 = sub_1C83438(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5);
  }
  v17 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v16)(
                                      targetObject,
                                      *(_QWORD *)(v16 + 8));
  if ( isDisp )
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    v18 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v20 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      v24 = &v18->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v20;
        v24 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v25 = (__int64)&v18->vtable[*v24 + 4];
    }
    else
    {
LABEL_18:
      v25 = sub_1C83438(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4);
    }
    LODWORD(v30) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v25)(
                       targetObject,
                       *(_QWORD *)(v25 + 8)));
    v32 = v31;
    v34 = v33;
  }
  else
  {
    v26 = targetObject->klass;
    v27 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_23;
      }
      v29 = (__int64)&v26->vtable[*v28 + 4];
    }
    else
    {
LABEL_23:
      v29 = sub_1C83438(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v29)(
                     targetObject,
                     *(_QWORD *)(v29 + 8)));
    y = v35;
    z = v36;
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    v37 = UnityEngine_Vector3_TypeInfo->static_fields;
    v30 = v37->zeroVector.fields.x;
    v32 = v37->zeroVector.fields.y;
    v34 = v37->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v40.fields.x = v30;
    v40.fields.y = v32;
    v40.fields.z = v34;
    GameObjectExtensions__SetLocalScale(v17, v40, 0);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0);
    return;
  }
  v10 = UITweener__Begin_object_(v17, time, (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_36:
    sub_1C32E7C(v10);
  *(float *)&v10[8].klass = x;
  *((float *)&v10[8].klass + 1) = y;
  *(float *)&v10[8].monitor = z;
  *((float *)&v10[8].monitor + 1) = v30;
  *(float *)&v10[9].klass = v32;
  *((float *)&v10[9].klass + 1) = v34;
  LODWORD(v10[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v10[4].monitor;
  v39 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v39,
    (Il2CppObject *)v9,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49215508(monitor, v39, 0);
}


void QAASpotStateController__SetState(QAASpotStateController_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C34632 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
    byte_4C34632 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C34631 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QAASpotStateController_IMapSpot__update__);
    byte_4C34631 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C32E7C(0);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_3322818 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
}


void QAASpotStateController_StateMapMain___ctor(QAASpotStateController_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController_StateMapMain__begin(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  char v8; // w0
  QAASpotStateController_IMapSpot_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x2
  void (__fastcall *v16)(QAASpotStateController_IMapSpot_o *, __int64, __int64); // x3
  QAASpotStateController_IMapSpot_o *v17; // x0
  __int64 v18; // x1

  if ( (byte_4C34635 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34635 = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v7)(that, *(_QWORD *)(v7 + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v11 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = (__int64)&v9->vtable[*v11 + 1];
    }
    else
    {
LABEL_15:
      v12 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 1);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v12;
    v15 = *(_QWORD *)(v12 + 8);
    v17 = that;
    v18 = 0;
  }
  else
  {
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v13 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v13 += 4;
        if ( !v10 )
          goto LABEL_20;
      }
      v14 = (__int64)&v9->vtable[*v13 + 3];
    }
    else
    {
LABEL_20:
      v14 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 3);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v18 = 1;
    v17 = that;
  }
  v16(v17, v18, v15);
}


void QAASpotStateController_StateMapMain__end(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateMapMain__update(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C34636 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34636 = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 9];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 9);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v7)(that, 0, *(_QWORD *)(v7 + 8));
}


void QAASpotStateController_StateNone___ctor(QAASpotStateController_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController_StateNone__begin(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateNone__end(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateNone__update(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateQaaAnimation___ctor(
        QAASpotStateController_StateQaaAnimation_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaAnimation__begin(
        QAASpotStateController_StateQaaAnimation_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  unsigned int v8; // w20
  __int64 v9; // x0
  QAASpotStateController_IMapSpot_c *v10; // x8
  System_Action_o *v11; // x21
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0

  if ( (byte_4C3463F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C3463F = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 6];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 6);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v7)(that, *(_QWORD *)(v7 + 8));
  v9 = sub_1C32E6C(System_Action_TypeInfo);
  v10 = that->klass;
  v11 = (System_Action_o *)v9;
  v12 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_14;
    }
    v14 = (__int64)&v10->vtable[*v13 + 10];
  }
  else
  {
LABEL_14:
    v14 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
  }
  System_Action___ctor(v11, (Il2CppObject *)that, *(_QWORD *)(v14 + 8), 0);
  v15 = that->klass;
  v16 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_20;
    }
    v18 = (__int64)&v15->vtable[*v17 + 16];
  }
  else
  {
LABEL_20:
    v18 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 16);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v18)(
    that,
    v8,
    v11,
    *(_QWORD *)(v18 + 8));
}


void QAASpotStateController_StateQaaBase___ctor(
        QAASpotStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaBase__begin(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateQaaBase__end(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateQaaBase__update(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void QAASpotStateController_StateQaaChange___ctor(
        QAASpotStateController_StateQaaChange_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9
  QAASpotStateController_IMapSpot_c **v15; // x10
  __int64 v16; // x0
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3
  __int64 *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  QAASpotStateController_IMapSpot_c **v22; // x10
  __int64 v23; // x0

  if ( (byte_4C3463D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C32C20(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__);
    sub_1C32C20(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
    byte_4C3463D = 1;
  }
  v5 = sub_1C32E6C(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = that;
  v9 = (__int64 **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)that, v7, v8);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  v12 = *(__int64 **)(v5 + 16);
  if ( !v12 )
    goto LABEL_23;
  v13 = *v12;
  v14 = *(unsigned __int16 *)(*v12 + 302);
  if ( *(_WORD *)(*v12 + 302) )
  {
    v15 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v13 + 176) + 8LL);
    while ( *(v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_9;
    }
    v16 = v13 + 16LL * (*(_DWORD *)v15 + 13) + 312;
  }
  else
  {
LABEL_9:
    v16 = sub_1C83438(*v9, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8));
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)(v6 - 1) < 2 )
    {
      v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v5,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v5 + 16),
        0,
        this->fields.Duration,
        v17,
        v18);
    }
    return;
  }
  v19 = *v9;
  if ( !*v9 )
LABEL_23:
    sub_1C32E7C(v6);
  v20 = *v19;
  v21 = *(unsigned __int16 *)(*v19 + 302);
  if ( *(_WORD *)(*v19 + 302) )
  {
    v22 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *(v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_19;
    }
    v23 = v20 + 16LL * (*(_DWORD *)v22 + 10) + 312;
  }
  else
  {
LABEL_19:
    v23 = sub_1C83438(*v9, QAASpotStateController_IMapSpot_TypeInfo, 10);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
}


void QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController_StateQaaChange___c__DisplayClass1_0___begin_b__0(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v2; // x19
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 v7; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  Il2CppObject *v9; // x19
  float Duration; // s8
  Il2CppClass *v11; // x8
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v12; // x20
  __int64 v13; // x9
  QAASpotStateController_IMapSpot_c **v14; // x10
  __int64 v15; // x0
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4C3463E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C3463E = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v7)(
                                                                           that,
                                                                           *(_QWORD *)(v7 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (v9 = (Il2CppObject *)v2->fields.that,
        Duration = _4__this->fields.Duration,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1C32E6C(System_Action_TypeInfo),
        !v9) )
  {
LABEL_19:
    sub_1C32E7C(this);
  }
  v11 = v9->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v14 = (QAASpotStateController_IMapSpot_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v13;
      v14 += 2;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*(_DWORD *)v14 + 10];
  }
  else
  {
LABEL_16:
    v15 = sub_1C83438(v9, QAASpotStateController_IMapSpot_TypeInfo, 10);
  }
  System_Action___ctor((System_Action_o *)v12, v9, *(_QWORD *)(v15 + 8), 0);
  QAASpotStateController__SetQaaScaleAnim(
    (QAASpotStateController_IMapSpot_o *)v9,
    1,
    Duration,
    (System_Action_o *)v12,
    v16);
}


void QAASpotStateController_StateQaaDisp___ctor(
        QAASpotStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaDisp__begin(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaDisp_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w0
  QAASpotStateController_IMapSpot_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  QAASpotStateController_IMapSpot_c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  float Duration; // s8
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  System_Action_o *v21; // x20
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  float v25; // s8
  __int64 v26; // x0
  QAASpotStateController_IMapSpot_c *v27; // x8
  System_Action_o *v28; // x20
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  QAASpotStateController_IMapSpot_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  v4 = this;
  if ( (byte_4C3463B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C3463B = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v6 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 13];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  switch ( v9 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v19 = sub_1C32E6C(System_Action_TypeInfo);
      v20 = that->klass;
      v21 = (System_Action_o *)v19;
      v22 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v23 = &v20->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_27;
        }
        v24 = (__int64)&v20->vtable[*v23 + 10];
      }
      else
      {
LABEL_27:
        v24 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      System_Action___ctor(v21, (Il2CppObject *)that, *(_QWORD *)(v24 + 8), 0);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v21, v32);
      break;
    case 1:
      v14 = that->klass;
      v15 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v16 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*v16 + 10];
      }
      else
      {
LABEL_22:
        v17 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v17)(that, *(_QWORD *)(v17 + 8));
      break;
    case 0:
      v10 = that->klass;
      v11 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v12 = &v10->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v11;
          v12 += 4;
          if ( !v11 )
            goto LABEL_17;
        }
        v13 = (__int64)&v10->vtable[*v12 + 8];
      }
      else
      {
LABEL_17:
        v13 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 8);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 1.0);
      v25 = v4->fields.Duration;
      v26 = sub_1C32E6C(System_Action_TypeInfo);
      v27 = that->klass;
      v28 = (System_Action_o *)v26;
      v29 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v30 = &v27->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_33;
        }
        v31 = (__int64)&v27->vtable[*v30 + 10];
      }
      else
      {
LABEL_33:
        v31 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      System_Action___ctor(v28, (Il2CppObject *)that, *(_QWORD *)(v31 + 8), 0);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v25, v28, v33);
      break;
  }
  v34 = that->klass;
  v35 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v36 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_44;
    }
    v37 = (__int64)(&v34->_1.interfaceOffsets + 2 * *v36 + 39);
  }
  else
  {
LABEL_44:
    v37 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 11);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v37)(that, *(_QWORD *)(v37 + 8));
}


void QAASpotStateController_StateQaaDisp__end(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4C3463C & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C3463C = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 14];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v7)(that, 1, *(_QWORD *)(v7 + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15];
  }
  else
  {
LABEL_14:
    v11 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1, *(_QWORD *)(v11 + 8));
}


void QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaGray__begin(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaGray_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w0
  QAASpotStateController_IMapSpot_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  float Duration; // s8
  __int64 v15; // x0
  QAASpotStateController_IMapSpot_c *v16; // x8
  System_Action_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  float v25; // s8
  __int64 v26; // x0
  QAASpotStateController_IMapSpot_c *v27; // x8
  System_Action_o *v28; // x20
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  v4 = this;
  if ( (byte_4C34639 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaGray_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34639 = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v6 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 13];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  switch ( v9 )
  {
    case 2:
      v21 = that->klass;
      v22 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v23 = &v21->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_27;
        }
        v24 = (__int64)&v21->vtable[*v23 + 10];
      }
      else
      {
LABEL_27:
        v24 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v24)(that, *(_QWORD *)(v24 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v15 = sub_1C32E6C(System_Action_TypeInfo);
      v16 = that->klass;
      v17 = (System_Action_o *)v15;
      v18 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v19 = &v16->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_22;
        }
        v20 = (__int64)&v16->vtable[*v19 + 10];
      }
      else
      {
LABEL_22:
        v20 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      System_Action___ctor(v17, (Il2CppObject *)that, *(_QWORD *)(v20 + 8), 0);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v17, v32);
      break;
    case 0:
      v10 = that->klass;
      v11 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v12 = &v10->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v12 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v11;
          v12 += 4;
          if ( !v11 )
            goto LABEL_17;
        }
        v13 = (__int64)&v10->vtable[*v12 + 8];
      }
      else
      {
LABEL_17:
        v13 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 8);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 0.5);
      v25 = v4->fields.Duration;
      v26 = sub_1C32E6C(System_Action_TypeInfo);
      v27 = that->klass;
      v28 = (System_Action_o *)v26;
      v29 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v30 = &v27->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_34;
        }
        v31 = (__int64)&v27->vtable[*v30 + 10];
      }
      else
      {
LABEL_34:
        v31 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      System_Action___ctor(v28, (Il2CppObject *)that, *(_QWORD *)(v31 + 8), 0);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v25, v28, v33);
      break;
  }
}


void QAASpotStateController_StateQaaGray__end(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4C3463A & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C3463A = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 14];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v7)(that, 2, *(_QWORD *)(v7 + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15];
  }
  else
  {
LABEL_14:
    v11 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1, *(_QWORD *)(v11 + 8));
}


void QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C32E7C(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAASpotStateController_StateQaaHide__begin(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaHide_o *v4; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w0
  float Duration; // s8
  __int64 v11; // x0
  QAASpotStateController_IMapSpot_c *v12; // x8
  System_Action_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4C34637 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaHide_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34637 = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v6 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 13];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v11 = sub_1C32E6C(System_Action_TypeInfo);
      v12 = that->klass;
      v13 = (System_Action_o *)v11;
      v14 = *(unsigned __int16 *)&that->klass->_2.rank;
      if ( *(_WORD *)&that->klass->_2.rank )
      {
        v15 = &v12->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_16;
        }
        v16 = (__int64)&v12->vtable[*v15 + 10];
      }
      else
      {
LABEL_16:
        v16 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      System_Action___ctor(v13, (Il2CppObject *)that, *(_QWORD *)(v16 + 8), 0);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v13, v21);
    }
  }
  else
  {
    v17 = that->klass;
    v18 = *(unsigned __int16 *)&that->klass->_2.rank;
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19 + 10];
    }
    else
    {
LABEL_21:
      v20 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
  }
}


void QAASpotStateController_StateQaaHide__end(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4C34638 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34638 = 1;
  }
  if ( !that )
    sub_1C32E7C(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 14];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v7)(that, 0, *(_QWORD *)(v7 + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15];
  }
  else
  {
LABEL_14:
    v11 = sub_1C83438(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v11)(that, 0, *(_QWORD *)(v11 + 8));
}


void QAASpotStateController___c__DisplayClass8_0___ctor(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController___c__DisplayClass8_0___SetQaaScaleAnim_b__0(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QAASpotStateController___c__DisplayClass9_0___ctor(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__ApplyCurrentColor_1(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  QAASpotStateController___c__DisplayClass9_0_o *v2; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  float from; // s8
  float to; // s9
  float mNow; // s10
  __int64 v9; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4C34641 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34641 = 1;
  }
  easingObj = v2->fields.easingObj;
  if ( !easingObj || (targetObject = v2->fields.targetObject) == 0 )
    sub_1C32E7C(this);
  klass = targetObject->klass;
  from = v2->fields.from;
  to = v2->fields.to;
  mNow = easingObj->fields.mNow;
  v9 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
  if ( *(_WORD *)&targetObject->klass->_2.rank )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8];
  }
  else
  {
LABEL_9:
    v11 = sub_1C83438(v2->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, float))v11)(
    targetObject,
    *(_QWORD *)(v11 + 8),
    from + (float)((float)(to - from) * mNow));
}


void QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v3; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 v8; // x0

  v3 = this;
  if ( (byte_4C34640 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1C32C20(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4C34640 = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_1C32E7C(this);
  klass = targetObject->klass;
  *(float *)&v2 = v3->fields.to;
  v6 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
  if ( *(_WORD *)&targetObject->klass->_2.rank )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))v8)(
    targetObject,
    *(_QWORD *)(v8 + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0);
}
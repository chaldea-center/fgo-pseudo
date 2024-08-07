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
  CStateManager_T__o *v14; // x21
  QAASpotStateController_Fields *p_fields; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  CStateManager_T__o *stateManager; // x21
  Il2CppObject *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x21
  __int64 v25; // x22
  CStateManager_T__o *v26; // x21
  __int64 v27; // x22
  CStateManager_T__o *v28; // x21
  __int64 v29; // x22
  CStateManager_T__o *v30; // x21
  __int64 v31; // x22
  CStateManager_T__o *v32; // x21
  __int64 v33; // x22
  CStateManager_T__o *v34; // x21
  __int64 v35; // x22
  CStateManager_T__o *v36; // x21
  __int64 v37; // x22
  CStateManager_T__o *v38; // x20
  __int64 v39; // x21
  const MethodInfo *v40; // x2

  if ( (byte_49FBAC8 & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject);
    sub_1B64A00(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v5);
    sub_1B64A00(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v6);
    sub_1B64A00(&QAASpotStateController_StateMapMain_TypeInfo, v7);
    sub_1B64A00(&QAASpotStateController_StateNone_TypeInfo, v8);
    sub_1B64A00(&QAASpotStateController_StateQaaAnimation_TypeInfo, v9);
    sub_1B64A00(&QAASpotStateController_StateQaaChange_TypeInfo, v10);
    sub_1B64A00(&QAASpotStateController_StateQaaDisp_TypeInfo, v11);
    sub_1B64A00(&QAASpotStateController_StateQaaGray_TypeInfo, v12);
    sub_1B64A00(&QAASpotStateController_StateQaaHide_TypeInfo, v13);
    byte_49FBAC8 = 1;
  }
  v14 = (CStateManager_T__o *)sub_1B64C4C(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_object____ctor(
    v14,
    (Il2CppObject *)targetObject,
    10,
    (const MethodInfo_3063BB0 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = (struct CStateManager_QAASpotStateController_IMapSpot__o *)v14;
  p_fields = &this->fields;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v14, v16, v17);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v19 = (Il2CppObject *)sub_1B64C4C(QAASpotStateController_StateNone_TypeInfo);
  System_Object___ctor(v19, 0LL);
  if ( !stateManager )
    goto LABEL_22;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v19,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v22 = (CStateManager_T__o *)p_fields->stateManager;
  v23 = (Il2CppObject *)sub_1B64C4C(QAASpotStateController_StateMapMain_TypeInfo);
  System_Object___ctor(v23, 0LL);
  if ( !v22 )
    goto LABEL_22;
  CStateManager_object___add(
    v22,
    1,
    (IState_T__o *)v23,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v24 = (CStateManager_T__o *)p_fields->stateManager;
  v25 = sub_1B64C4C(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_22;
  *(_DWORD *)(v25 + 16) = 1056964608;
  if ( !v24 )
    goto LABEL_22;
  CStateManager_object___add(
    v24,
    2,
    (IState_T__o *)v25,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v26 = (CStateManager_T__o *)p_fields->stateManager;
  v27 = sub_1B64C4C(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_22;
  *(_DWORD *)(v27 + 16) = 1056964608;
  if ( !v26 )
    goto LABEL_22;
  CStateManager_object___add(
    v26,
    3,
    (IState_T__o *)v27,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v28 = (CStateManager_T__o *)p_fields->stateManager;
  v29 = sub_1B64C4C(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_22;
  *(_DWORD *)(v29 + 16) = 1056964608;
  if ( !v28 )
    goto LABEL_22;
  CStateManager_object___add(
    v28,
    4,
    (IState_T__o *)v29,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v30 = (CStateManager_T__o *)p_fields->stateManager;
  v31 = sub_1B64C4C(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_22;
  *(_DWORD *)(v31 + 16) = 0;
  if ( !v30 )
    goto LABEL_22;
  CStateManager_object___add(
    v30,
    5,
    (IState_T__o *)v31,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v32 = (CStateManager_T__o *)p_fields->stateManager;
  v33 = sub_1B64C4C(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_22;
  *(_DWORD *)(v33 + 16) = 0;
  if ( !v32 )
    goto LABEL_22;
  CStateManager_object___add(
    v32,
    6,
    (IState_T__o *)v33,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v34 = (CStateManager_T__o *)p_fields->stateManager;
  v35 = sub_1B64C4C(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_22;
  *(_DWORD *)(v35 + 16) = 0;
  if ( !v34 )
    goto LABEL_22;
  CStateManager_object___add(
    v34,
    7,
    (IState_T__o *)v35,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v36 = (CStateManager_T__o *)p_fields->stateManager;
  v37 = sub_1B64C4C(QAASpotStateController_StateQaaChange_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37
    || (*(_DWORD *)(v37 + 16) = 1056964608, !v36)
    || (CStateManager_object___add(
          v36,
          8,
          (IState_T__o *)v37,
          (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v38 = (CStateManager_T__o *)p_fields->stateManager,
        v39 = sub_1B64C4C(QAASpotStateController_StateQaaAnimation_TypeInfo),
        System_Object___ctor((Il2CppObject *)v39, 0LL),
        !v39)
    || (*(_DWORD *)(v39 + 16) = 1056964608, !v38) )
  {
LABEL_22:
    sub_1B64C5C(v20, v21);
  }
  CStateManager_object___add(
    v38,
    9,
    (IState_T__o *)v39,
    (const MethodInfo_3063C58 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v40);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  QAASpotStateController_IMapSpot_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  QAASpotStateController_IMapSpot_c **v33; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  float v36; // s0
  EasingObject_o *v37; // x19
  System_Action_o *v38; // x21
  System_Action_o *v39; // x22

  if ( (byte_49FBACC & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isActive);
    sub_1B64A00(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_1B64A00(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v11);
    sub_1B64A00(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v12);
    sub_1B64A00(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v13);
    byte_49FBACC = 1;
  }
  v14 = sub_1B64C4C(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)(v14 + 16) = targetObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)targetObject, v17, v18);
  *(_QWORD *)(v14 + 32) = finishCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)finishCallback, v19, v20);
  v21 = *(__int64 **)(v14 + 16);
  if ( !v21 )
    goto LABEL_24;
  v22 = *v21;
  v23 = *(unsigned __int16 *)(*v21 + 302);
  if ( *(_WORD *)(*v21 + 302) )
  {
    v24 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_9;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 5) + 312;
  }
  else
  {
LABEL_9:
    v25 = sub_1BB69E0(v21, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v26 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v26,
                       (const MethodInfo_2E8C2B4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 48) = Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)Component_object, v28, v29);
  v30 = *(__int64 **)(v14 + 16);
  if ( !v30 )
    goto LABEL_24;
  v31 = *v30;
  v32 = *(unsigned __int16 *)(*v30 + 302);
  if ( *(_WORD *)(*v30 + 302) )
  {
    v33 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_16;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 7) + 312;
  }
  else
  {
LABEL_16:
    v34 = sub_1BB69E0(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v14 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  v36 = 0.5;
  if ( isActive )
    v36 = 1.0;
  *(float *)(v14 + 24) = v36;
  if ( time > 0.0 )
  {
    v37 = *(EasingObject_o **)(v14 + 48);
    v38 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v39 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v37 )
    {
      EasingObject__Play(v37, time, v38, v39, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_1B64C5C(v15, v16);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v14,
    v35);
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
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  QAASpotStateController_IMapSpot_c *v25; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v27; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v31; // x10
  __int64 v32; // x0
  QAASpotStateController_IMapSpot_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  float v37; // s12
  float v38; // s1
  float v39; // s13
  float v40; // s2
  float v41; // s14
  __int64 v42; // x1
  float v43; // s1
  float v44; // s2
  struct UnityEngine_Vector3_StaticFields *v45; // x8
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v47; // x21
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FBACB & 1) == 0 )
  {
    sub_1B64A00(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_1B64A00(&EventDelegate_TypeInfo, v9);
    sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_1B64A00(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v11);
    sub_1B64A00(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v12);
    sub_1B64A00(&Method_UITweener_Begin_TweenScale___, v13);
    byte_49FBACB = 1;
  }
  v14 = sub_1B64C4C(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_36;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)finishCallback, v17, v18);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v20 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB69E0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v24 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v23);
      byte_49F9821 = 1;
    }
    v25 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v27 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v31 = &v25->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v27;
        v31 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v32 = (__int64)&v25->vtable[*v31 + 4].method;
    }
    else
    {
LABEL_18:
      v32 = sub_1BB69E0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(v37) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v32)(
                       targetObject,
                       *(_QWORD *)(v32 + 8)));
    v39 = v38;
    v41 = v40;
  }
  else
  {
    v33 = targetObject->klass;
    v34 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_23;
      }
      v36 = (__int64)&v33->vtable[*v35 + 4].method;
    }
    else
    {
LABEL_23:
      v36 = sub_1BB69E0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v36)(
                     targetObject,
                     *(_QWORD *)(v36 + 8)));
    y = v43;
    z = v44;
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v42);
      byte_49F9821 = 1;
    }
    v45 = UnityEngine_Vector3_TypeInfo->static_fields;
    v37 = v45->zeroVector.fields.x;
    v39 = v45->zeroVector.fields.y;
    v41 = v45->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v48.fields.x = v37;
    v48.fields.y = v39;
    v48.fields.z = v41;
    GameObjectExtensions__SetLocalScale(v24, v48, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  v15 = UITweener__Begin_object_(v24, time, (const MethodInfo_2EED6C0 *)Method_UITweener_Begin_TweenScale___);
  if ( !v15 )
LABEL_36:
    sub_1B64C5C(v15, v16);
  *(float *)&v15[8].klass = x;
  *((float *)&v15[8].klass + 1) = y;
  *(float *)&v15[8].monitor = z;
  *((float *)&v15[8].monitor + 1) = v37;
  *(float *)&v15[9].klass = v39;
  *((float *)&v15[9].klass + 1) = v41;
  LODWORD(v15[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v15[4].monitor;
  v47 = (EventDelegate_Callback_o *)sub_1B64C4C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v47,
    (Il2CppObject *)v14,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46503700(monitor, v47, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_49FBACA & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state);
    byte_49FBACA = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1B64C5C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_3063CE4 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_49FBAC9 & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method);
    byte_49FBAC9 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1B64C5C(0LL, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_3063CC0 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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

  if ( (byte_49FBACD & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49FBACD = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v11 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = (__int64)&v9->vtable[*v11 + 1].method;
    }
    else
    {
LABEL_15:
      v12 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v12;
    v15 = *(_QWORD *)(v12 + 8);
    v17 = that;
    v18 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v13 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v13 += 4;
        if ( !v10 )
          goto LABEL_20;
      }
      v14 = (__int64)&v9->vtable[*v13 + 3].method;
    }
    else
    {
LABEL_20:
      v14 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v18 = 1LL;
    v17 = that;
  }
  v16(v17, v18, v15);
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
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FBACE & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49FBACE = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
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
    sub_1B64C5C(v5, v6);
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
  __int64 v4; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v9; // w20
  __int64 v10; // x0
  QAASpotStateController_IMapSpot_c *v11; // x8
  System_Action_o *v12; // x21
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  QAASpotStateController_IMapSpot_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  if ( (byte_49FBAD7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v4);
    byte_49FBAD7 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v6 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v10 = sub_1B64C4C(System_Action_TypeInfo);
  v11 = that->klass;
  v12 = (System_Action_o *)v10;
  v13 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v14 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = (__int64)&v11->vtable[*v14 + 10].method;
  }
  else
  {
LABEL_14:
    v15 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v12, (Il2CppObject *)that, *(_QWORD *)(v15 + 8), 0LL);
  v16 = that->klass;
  v17 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_20;
    }
    v19 = (__int64)&v16->vtable[*v18 + 16].method;
  }
  else
  {
LABEL_20:
    v19 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v19)(
    that,
    v9,
    v12,
    *(_QWORD *)(v19 + 8));
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
    sub_1B64C5C(v5, v6);
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
    sub_1B64C5C(v5, v6);
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
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  QAASpotStateController_IMapSpot_c **v19; // x10
  __int64 v20; // x0
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x3
  __int64 *v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  QAASpotStateController_IMapSpot_c **v26; // x10
  __int64 v27; // x0

  if ( (byte_49FBAD5 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    sub_1B64A00(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1B64A00(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v7);
    byte_49FBAD5 = 1;
  }
  v8 = sub_1B64C4C(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_23;
  *(_QWORD *)(v8 + 16) = that;
  v13 = (__int64 **)(v8 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)that, v11, v12);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v14, v15);
  v16 = *(__int64 **)(v8 + 16);
  if ( !v16 )
    goto LABEL_23;
  v17 = *v16;
  v18 = *(unsigned __int16 *)(*v16 + 302);
  if ( *(_WORD *)(*v16 + 302) )
  {
    v19 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *(v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_9;
    }
    v20 = v17 + 16LL * (*(_DWORD *)v19 + 13) + 312;
  }
  else
  {
LABEL_9:
    v20 = sub_1BB69E0(*v13, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      v21 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        v21,
        (Il2CppObject *)v8,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v8 + 16),
        0,
        this->fields.Duration,
        v21,
        v22);
    }
    return;
  }
  v23 = *v13;
  if ( !*v13 )
LABEL_23:
    sub_1B64C5C(v9, v10);
  v24 = *v23;
  v25 = *(unsigned __int16 *)(*v23 + 302);
  if ( *(_WORD *)(*v23 + 302) )
  {
    v26 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *(v26 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_19;
    }
    v27 = v24 + 16LL * (*(_DWORD *)v26 + 10) + 312;
  }
  else
  {
LABEL_19:
    v27 = sub_1BB69E0(*v13, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
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
  __int64 v6; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 v8; // x0
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  Il2CppObject *v10; // x19
  float Duration; // s8
  Il2CppClass *v12; // x8
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v13; // x20
  __int64 v14; // x9
  QAASpotStateController_IMapSpot_c **v15; // x10
  __int64 p_method; // x0
  const MethodInfo *v17; // x3

  v2 = this;
  if ( (byte_49FBAD6 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1B64A00(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v3);
    byte_49FBAD6 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  v6 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v8 = sub_1BB69E0(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v8)(
                                                                           that,
                                                                           *(_QWORD *)(v8 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (v10 = (Il2CppObject *)v2->fields.that,
        Duration = _4__this->fields.Duration,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1B64C4C(System_Action_TypeInfo),
        !v10) )
  {
LABEL_19:
    sub_1B64C5C(this, method);
  }
  v12 = v10->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    v15 = (QAASpotStateController_IMapSpot_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_16;
    }
    p_method = (__int64)&v12->vtable[*(_DWORD *)v15 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_1BB69E0(v10, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor((System_Action_o *)v13, v10, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim(
    (QAASpotStateController_IMapSpot_o *)v10,
    1,
    Duration,
    (System_Action_o *)v13,
    v17);
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
    sub_1B64C5C(v5, v6);
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
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  QAASpotStateController_IMapSpot_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  float Duration; // s8
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  System_Action_o *v22; // x20
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  float v26; // s8
  __int64 v27; // x0
  QAASpotStateController_IMapSpot_c *v28; // x8
  System_Action_o *v29; // x20
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  QAASpotStateController_IMapSpot_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  v4 = this;
  if ( (byte_49FBAD3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49FBAD3 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v7 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v20 = sub_1B64C4C(System_Action_TypeInfo);
      v21 = that->klass;
      v22 = (System_Action_o *)v20;
      v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v24 = &v21->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_27;
        }
        v25 = (__int64)&v21->vtable[*v24 + 10].method;
      }
      else
      {
LABEL_27:
        v25 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v22, (Il2CppObject *)that, *(_QWORD *)(v25 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v22, v33);
      break;
    case 1:
      v15 = that->klass;
      v16 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_22;
        }
        v18 = (__int64)&v15->vtable[*v17 + 10].method;
      }
      else
      {
LABEL_22:
        v18 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v18)(that, *(_QWORD *)(v18 + 8));
      break;
    case 0:
      v11 = that->klass;
      v12 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v13 = &v11->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v12;
          v13 += 4;
          if ( !v12 )
            goto LABEL_17;
        }
        v14 = (__int64)&v11->vtable[*v13 + 8].method;
      }
      else
      {
LABEL_17:
        v14 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v14)(that, *(_QWORD *)(v14 + 8), 1.0);
      v26 = v4->fields.Duration;
      v27 = sub_1B64C4C(System_Action_TypeInfo);
      v28 = that->klass;
      v29 = (System_Action_o *)v27;
      v30 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v31 = &v28->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_33;
        }
        v32 = (__int64)&v28->vtable[*v31 + 10].method;
      }
      else
      {
LABEL_33:
        v32 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v29, (Il2CppObject *)that, *(_QWORD *)(v32 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v26, v29, v34);
      break;
  }
  v35 = that->klass;
  v36 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v37 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_44;
    }
    v38 = (__int64)(&v35->_1.interfaceOffsets + 2 * *v37 + 39);
  }
  else
  {
LABEL_44:
    v38 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v38)(that, *(_QWORD *)(v38 + 8));
}


void __fastcall QAASpotStateController_StateQaaDisp__end(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_49FBAD4 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49FBAD4 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    1LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
    sub_1B64C5C(v5, v6);
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
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  QAASpotStateController_IMapSpot_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  float Duration; // s8
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  System_Action_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  QAASpotStateController_IMapSpot_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  float v26; // s8
  __int64 v27; // x0
  QAASpotStateController_IMapSpot_c *v28; // x8
  System_Action_o *v29; // x20
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3

  v4 = this;
  if ( (byte_49FBAD1 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaGray_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49FBAD1 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v7 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      v22 = that->klass;
      v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v24 = &v22->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_27;
        }
        v25 = (__int64)&v22->vtable[*v24 + 10].method;
      }
      else
      {
LABEL_27:
        v25 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v25)(that, *(_QWORD *)(v25 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v16 = sub_1B64C4C(System_Action_TypeInfo);
      v17 = that->klass;
      v18 = (System_Action_o *)v16;
      v19 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v20 = &v17->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v17->vtable[*v20 + 10].method;
      }
      else
      {
LABEL_22:
        v21 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v18, (Il2CppObject *)that, *(_QWORD *)(v21 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v18, v33);
      break;
    case 0:
      v11 = that->klass;
      v12 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v13 = &v11->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v12;
          v13 += 4;
          if ( !v12 )
            goto LABEL_17;
        }
        v14 = (__int64)&v11->vtable[*v13 + 8].method;
      }
      else
      {
LABEL_17:
        v14 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v14)(that, *(_QWORD *)(v14 + 8), 0.5);
      v26 = v4->fields.Duration;
      v27 = sub_1B64C4C(System_Action_TypeInfo);
      v28 = that->klass;
      v29 = (System_Action_o *)v27;
      v30 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v31 = &v28->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_34;
        }
        v32 = (__int64)&v28->vtable[*v31 + 10].method;
      }
      else
      {
LABEL_34:
        v32 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v29, (Il2CppObject *)that, *(_QWORD *)(v32 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v26, v29, v34);
      break;
  }
}


void __fastcall QAASpotStateController_StateQaaGray__end(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_49FBAD2 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49FBAD2 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    2LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
    sub_1B64C5C(v5, v6);
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
  __int64 v5; // x1
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  float Duration; // s8
  __int64 v12; // x0
  QAASpotStateController_IMapSpot_c *v13; // x8
  System_Action_o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QAASpotStateController_IMapSpot_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x3

  v4 = this;
  if ( (byte_49FBACF & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaHide_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49FBACF = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v7 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v12 = sub_1B64C4C(System_Action_TypeInfo);
      v13 = that->klass;
      v14 = (System_Action_o *)v12;
      v15 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v16 = &v13->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v16 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_16;
        }
        v17 = (__int64)&v13->vtable[*v16 + 10].method;
      }
      else
      {
LABEL_16:
        v17 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v14, (Il2CppObject *)that, *(_QWORD *)(v17 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v14, v22);
    }
  }
  else
  {
    v18 = that->klass;
    v19 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*v20 + 10].method;
    }
    else
    {
LABEL_21:
      v21 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v21)(that, *(_QWORD *)(v21 + 8));
  }
}


void __fastcall QAASpotStateController_StateQaaHide__end(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_49FBAD0 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_1B64A00(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49FBAD0 = 1;
  }
  if ( !that )
    sub_1B64C5C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1BB69E0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
  QAASpotStateController___c__DisplayClass9_0_o *v2; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  float from; // s8
  float to; // s9
  float mNow; // s10
  __int64 v9; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_49FBAD9 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1B64A00(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_49FBAD9 = 1;
  }
  easingObj = v2->fields.easingObj;
  if ( !easingObj || (targetObject = v2->fields.targetObject) == 0LL )
    sub_1B64C5C(this, method);
  klass = targetObject->klass;
  from = v2->fields.from;
  to = v2->fields.to;
  mNow = easingObj->fields.mNow;
  v9 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB69E0(v2->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, float))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    from + (float)((float)(to - from) * mNow));
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v3; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v6; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_49FBAD8 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1B64A00(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_49FBAD8 = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_1B64C5C(this, method);
  klass = targetObject->klass;
  *(float *)&v2 = v3->fields.to;
  v6 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
}
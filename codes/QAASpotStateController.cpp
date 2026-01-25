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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  CStateManager_T__o *stateManager; // x21
  Il2CppObject *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  __int64 v20; // x22
  CStateManager_T__o *v21; // x21
  __int64 v22; // x22
  CStateManager_T__o *v23; // x21
  __int64 v24; // x22
  CStateManager_T__o *v25; // x21
  __int64 v26; // x22
  CStateManager_T__o *v27; // x21
  __int64 v28; // x22
  CStateManager_T__o *v29; // x21
  __int64 v30; // x22
  CStateManager_T__o *v31; // x21
  __int64 v32; // x22
  CStateManager_T__o *v33; // x20
  __int64 v34; // x21
  const MethodInfo *v35; // x2

  if ( (byte_4CEB215 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QAASpotStateController_IMapSpot__add__);
    sub_1C7BAE8(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateMapMain_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateNone_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateQaaAnimation_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateQaaChange_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateQaaDisp_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateQaaGray_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_StateQaaHide_TypeInfo);
    byte_4CEB215 = 1;
  }
  v5 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QAASpotStateController_IMapSpot__TypeInfo);
  CStateManager_object____ctor(
    v5,
    (Il2CppObject *)targetObject,
    10,
    (const MethodInfo_33B93F0 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = (struct CStateManager_QAASpotStateController_IMapSpot__o *)v5;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v14 = (Il2CppObject *)sub_1C7BD34(QAASpotStateController_StateNone_TypeInfo);
  System_Object___ctor(v14, 0);
  if ( !stateManager )
    goto LABEL_22;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v14,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v17 = (CStateManager_T__o *)p_fields->stateManager;
  v18 = (Il2CppObject *)sub_1C7BD34(QAASpotStateController_StateMapMain_TypeInfo);
  System_Object___ctor(v18, 0);
  if ( !v17 )
    goto LABEL_22;
  CStateManager_object___add(
    v17,
    1,
    (IState_T__o *)v18,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v19 = (CStateManager_T__o *)p_fields->stateManager;
  v20 = sub_1C7BD34(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_22;
  *(_DWORD *)(v20 + 16) = 1056964608;
  if ( !v19 )
    goto LABEL_22;
  CStateManager_object___add(
    v19,
    2,
    (IState_T__o *)v20,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v21 = (CStateManager_T__o *)p_fields->stateManager;
  v22 = sub_1C7BD34(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  if ( !v22 )
    goto LABEL_22;
  *(_DWORD *)(v22 + 16) = 1056964608;
  if ( !v21 )
    goto LABEL_22;
  CStateManager_object___add(
    v21,
    3,
    (IState_T__o *)v22,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v23 = (CStateManager_T__o *)p_fields->stateManager;
  v24 = sub_1C7BD34(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  if ( !v24 )
    goto LABEL_22;
  *(_DWORD *)(v24 + 16) = 1056964608;
  if ( !v23 )
    goto LABEL_22;
  CStateManager_object___add(
    v23,
    4,
    (IState_T__o *)v24,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v25 = (CStateManager_T__o *)p_fields->stateManager;
  v26 = sub_1C7BD34(QAASpotStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  if ( !v26 )
    goto LABEL_22;
  *(_DWORD *)(v26 + 16) = 0;
  if ( !v25 )
    goto LABEL_22;
  CStateManager_object___add(
    v25,
    5,
    (IState_T__o *)v26,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v27 = (CStateManager_T__o *)p_fields->stateManager;
  v28 = sub_1C7BD34(QAASpotStateController_StateQaaGray_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0);
  if ( !v28 )
    goto LABEL_22;
  *(_DWORD *)(v28 + 16) = 0;
  if ( !v27 )
    goto LABEL_22;
  CStateManager_object___add(
    v27,
    6,
    (IState_T__o *)v28,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v29 = (CStateManager_T__o *)p_fields->stateManager;
  v30 = sub_1C7BD34(QAASpotStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  if ( !v30 )
    goto LABEL_22;
  *(_DWORD *)(v30 + 16) = 0;
  if ( !v29 )
    goto LABEL_22;
  CStateManager_object___add(
    v29,
    7,
    (IState_T__o *)v30,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v31 = (CStateManager_T__o *)p_fields->stateManager;
  v32 = sub_1C7BD34(QAASpotStateController_StateQaaChange_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32
    || (*(_DWORD *)(v32 + 16) = 1056964608, !v31)
    || (CStateManager_object___add(
          v31,
          8,
          (IState_T__o *)v32,
          (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v33 = (CStateManager_T__o *)p_fields->stateManager,
        v34 = sub_1C7BD34(QAASpotStateController_StateQaaAnimation_TypeInfo),
        System_Object___ctor((Il2CppObject *)v34, 0),
        !v34)
    || (*(_DWORD *)(v34 + 16) = 1056964608, !v33) )
  {
LABEL_22:
    sub_1C7BD40(v15, v16);
  }
  CStateManager_object___add(
    v33,
    9,
    (IState_T__o *)v34,
    (const MethodInfo_33B9498 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v35);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  QAASpotStateController_IMapSpot_c **v27; // x10
  __int64 v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 *v37; // x21
  __int64 v38; // x8
  __int64 v39; // x9
  QAASpotStateController_IMapSpot_c **v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x1
  float v43; // s0
  EasingObject_o *v44; // x19
  System_Action_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_4CEB219 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C7BAE8(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__);
    sub_1C7BAE8(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__);
    sub_1C7BAE8(&QAASpotStateController___c__DisplayClass9_0_TypeInfo);
    byte_4CEB219 = 1;
  }
  v9 = sub_1C7BD34(QAASpotStateController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 16) = targetObject;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)targetObject, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = finishCallback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)finishCallback, v18, v19, v20, v21, v22, v23);
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
        goto LABEL_9;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 5) + 312;
  }
  else
  {
LABEL_9:
    v28 = sub_1C51E70(v24, QAASpotStateController_IMapSpot_TypeInfo, 5);
  }
  v29 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v29,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 48) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(__int64 **)(v9 + 16);
  if ( !v37 )
    goto LABEL_24;
  v38 = *v37;
  v39 = *(unsigned __int16 *)(*v37 + 302);
  if ( *(_WORD *)(*v37 + 302) )
  {
    v40 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v40 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_16;
    }
    v41 = v38 + 16LL * (*(_DWORD *)v40 + 7) + 312;
  }
  else
  {
LABEL_16:
    v41 = sub_1C51E70(*(_QWORD *)(v9 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7);
  }
  *(float *)(v9 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
  v43 = 0.5;
  if ( isActive )
    v43 = 1.0;
  *(float *)(v9 + 24) = v43;
  if ( time > 0.0 )
  {
    v44 = *(EasingObject_o **)(v9 + 48);
    v45 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0);
    v46 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v9,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0);
    if ( v44 )
    {
      EasingObject__Play(v44, time, v45, v46, 0.0, 17, 0);
      return;
    }
LABEL_24:
    sub_1C7BD40(v10, v11);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v9,
    v42);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  UnityEngine_GameObject_o *v22; // x22
  QAASpotStateController_IMapSpot_c *v23; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v25; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v29; // x10
  __int64 v30; // x0
  QAASpotStateController_IMapSpot_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  float v35; // s12
  float v36; // s1
  float v37; // s13
  float v38; // s2
  float v39; // s14
  float v40; // s1
  float v41; // s2
  struct UnityEngine_Vector3_StaticFields *v42; // x8
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v44; // x21
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEB218 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C7BAE8(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_1C7BAE8(&QAASpotStateController___c__DisplayClass8_0_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenScale___);
    byte_4CEB218 = 1;
  }
  v9 = sub_1C7BD34(QAASpotStateController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)finishCallback, v12, v13, v14, v15, v16, v17);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v19 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
  if ( *(_WORD *)&targetObject->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_9;
    }
    v21 = (__int64)&klass->vtable[*p_offset + 5];
  }
  else
  {
LABEL_9:
    v21 = sub_1C51E70(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5);
  }
  v22 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v21)(
                                      targetObject,
                                      *(_QWORD *)(v21 + 8));
  if ( isDisp )
  {
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    v23 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      v29 = &v23->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v29 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v25;
        v29 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v30 = (__int64)&v23->vtable[*v29 + 4];
    }
    else
    {
LABEL_18:
      v30 = sub_1C51E70(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4);
    }
    LODWORD(v35) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v30)(
                       targetObject,
                       *(_QWORD *)(v30 + 8)));
    v37 = v36;
    v39 = v38;
  }
  else
  {
    v31 = targetObject->klass;
    v32 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v33 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_23;
      }
      v34 = (__int64)&v31->vtable[*v33 + 4];
    }
    else
    {
LABEL_23:
      v34 = sub_1C51E70(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v34)(
                     targetObject,
                     *(_QWORD *)(v34 + 8)));
    y = v40;
    z = v41;
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    v42 = UnityEngine_Vector3_TypeInfo->static_fields;
    v35 = v42->zeroVector.fields.x;
    v37 = v42->zeroVector.fields.y;
    v39 = v42->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v45.fields.x = v35;
    v45.fields.y = v37;
    v45.fields.z = v39;
    GameObjectExtensions__SetLocalScale(v22, v45, 0);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0);
    return;
  }
  v10 = UITweener__Begin_object_(v22, time, (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_36:
    sub_1C7BD40(v10, v11);
  *(float *)&v10[8].klass = x;
  *((float *)&v10[8].klass + 1) = y;
  *(float *)&v10[8].monitor = z;
  *((float *)&v10[8].monitor + 1) = v35;
  *(float *)&v10[9].klass = v37;
  *((float *)&v10[9].klass + 1) = v39;
  LODWORD(v10[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v10[4].monitor;
  v44 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49777500(monitor, v44, 0);
}


// local variable allocation has failed, the output may be wrong!
void QAASpotStateController__SetState(QAASpotStateController_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4CEB217 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
    byte_4CEB217 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C7BD40(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_33B9524 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4CEB216 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QAASpotStateController_IMapSpot__update__);
    byte_4CEB216 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C7BD40(0, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_33B9500 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_4CEB21A & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21A = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 0);
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
      v12 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 1);
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
      v14 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 3);
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

  if ( (byte_4CEB21B & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21B = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 9);
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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

  if ( (byte_4CEB224 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB224 = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 6);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v7)(that, *(_QWORD *)(v7 + 8));
  v9 = sub_1C7BD34(System_Action_TypeInfo);
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
    v14 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
    v18 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 16);
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  QAASpotStateController_IMapSpot_c **v24; // x10
  __int64 v25; // x0
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3
  __int64 *v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  QAASpotStateController_IMapSpot_c **v31; // x10
  __int64 v32; // x0

  if ( (byte_4CEB222 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    sub_1C7BAE8(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__);
    sub_1C7BAE8(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
    byte_4CEB222 = 1;
  }
  v5 = sub_1C7BD34(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = that;
  v14 = (__int64 **)(v5 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(__int64 **)(v5 + 16);
  if ( !v21 )
    goto LABEL_23;
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
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 13) + 312;
  }
  else
  {
LABEL_9:
    v25 = sub_1C51E70(*v14, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)(v6 - 1) < 2 )
    {
      v26 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v5,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v5 + 16),
        0,
        this->fields.Duration,
        v26,
        v27);
    }
    return;
  }
  v28 = *v14;
  if ( !*v14 )
LABEL_23:
    sub_1C7BD40(v6, v7);
  v29 = *v28;
  v30 = *(unsigned __int16 *)(*v28 + 302);
  if ( *(_WORD *)(*v28 + 302) )
  {
    v31 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_19;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 10) + 312;
  }
  else
  {
LABEL_19:
    v32 = sub_1C51E70(*v14, QAASpotStateController_IMapSpot_TypeInfo, 10);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
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
  if ( (byte_4CEB223 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB223 = 1;
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
    v7 = sub_1C51E70(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v7)(
                                                                           that,
                                                                           *(_QWORD *)(v7 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (v9 = (Il2CppObject *)v2->fields.that,
        Duration = _4__this->fields.Duration,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1C7BD34(System_Action_TypeInfo),
        !v9) )
  {
LABEL_19:
    sub_1C7BD40(this, method);
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
    v15 = sub_1C51E70(v9, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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
  if ( (byte_4CEB220 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB220 = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v8 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  switch ( v9 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v19 = sub_1C7BD34(System_Action_TypeInfo);
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
        v24 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
        v17 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
        v13 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 8);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 1.0);
      v25 = v4->fields.Duration;
      v26 = sub_1C7BD34(System_Action_TypeInfo);
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
        v31 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
    v37 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 11);
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

  if ( (byte_4CEB221 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB221 = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
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
    v11 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1, *(_QWORD *)(v11 + 8));
}


void QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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
  if ( (byte_4CEB21E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaGray_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21E = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v8 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
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
        v24 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v24)(that, *(_QWORD *)(v24 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v15 = sub_1C7BD34(System_Action_TypeInfo);
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
        v20 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
        v13 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 8);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v13)(that, *(_QWORD *)(v13 + 8), 0.5);
      v25 = v4->fields.Duration;
      v26 = sub_1C7BD34(System_Action_TypeInfo);
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
        v31 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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

  if ( (byte_4CEB21F & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21F = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
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
    v11 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1, *(_QWORD *)(v11 + 8));
}


void QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C7BD40(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
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
  if ( (byte_4CEB21C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (QAASpotStateController_StateQaaHide_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21C = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v8 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 13);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v8)(that, *(_QWORD *)(v8 + 8));
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v11 = sub_1C7BD34(System_Action_TypeInfo);
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
        v16 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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
      v20 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 10);
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

  if ( (byte_4CEB21D & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB21D = 1;
  }
  if ( !that )
    sub_1C7BD40(this, that);
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
    v7 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 14);
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
    v11 = sub_1C51E70(that, QAASpotStateController_IMapSpot_TypeInfo, 15);
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
  if ( (byte_4CEB226 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB226 = 1;
  }
  easingObj = v2->fields.easingObj;
  if ( !easingObj || (targetObject = v2->fields.targetObject) == 0 )
    sub_1C7BD40(this, method);
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
    v11 = sub_1C51E70(v2->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8);
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
  if ( (byte_4CEB225 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1C7BAE8(&QAASpotStateController_IMapSpot_TypeInfo);
    byte_4CEB225 = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_1C7BD40(this, method);
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
    v8 = sub_1C51E70(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))v8)(
    targetObject,
    *(_QWORD *)(v8 + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0);
}
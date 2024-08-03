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
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x22
  __int64 v22; // x0
  CStateManager_T__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  CStateManager_T__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x22
  CStateManager_T__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x22
  CStateManager_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x22
  CStateManager_T__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x22
  CStateManager_T__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x22
  CStateManager_T__o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x22
  CStateManager_T__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x21
  const MethodInfo *v59; // x2

  if ( (byte_49F93B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject);
    sub_1B640C8(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v5);
    sub_1B640C8(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v6);
    sub_1B640C8(&QAASpotStateController_StateMapMain_TypeInfo, v7);
    sub_1B640C8(&QAASpotStateController_StateNone_TypeInfo, v8);
    sub_1B640C8(&QAASpotStateController_StateQaaAnimation_TypeInfo, v9);
    sub_1B640C8(&QAASpotStateController_StateQaaChange_TypeInfo, v10);
    sub_1B640C8(&QAASpotStateController_StateQaaDisp_TypeInfo, v11);
    sub_1B640C8(&QAASpotStateController_StateQaaGray_TypeInfo, v12);
    sub_1B640C8(&QAASpotStateController_StateQaaHide_TypeInfo, v13);
    byte_49F93B9 = 1;
  }
  v14 = (CStateManager_T__o *)sub_1B64314(CStateManager_QAASpotStateController_IMapSpot__TypeInfo, targetObject, method);
  CStateManager_object____ctor(
    v14,
    (Il2CppObject *)targetObject,
    10,
    (const MethodInfo_30612BC *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = (struct CStateManager_QAASpotStateController_IMapSpot__o *)v14;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v14, v16, v17);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v21 = (Il2CppObject *)sub_1B64314(QAASpotStateController_StateNone_TypeInfo, v19, v20);
  System_Object___ctor(v21, 0LL);
  if ( !stateManager )
    goto LABEL_22;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v21,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v23 = (CStateManager_T__o *)p_fields->stateManager;
  v26 = (Il2CppObject *)sub_1B64314(QAASpotStateController_StateMapMain_TypeInfo, v24, v25);
  System_Object___ctor(v26, 0LL);
  if ( !v23 )
    goto LABEL_22;
  CStateManager_object___add(
    v23,
    1,
    (IState_T__o *)v26,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v27 = (CStateManager_T__o *)p_fields->stateManager;
  v30 = sub_1B64314(QAASpotStateController_StateQaaHide_TypeInfo, v28, v29);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_22;
  *(_DWORD *)(v30 + 16) = 1056964608;
  if ( !v27 )
    goto LABEL_22;
  CStateManager_object___add(
    v27,
    2,
    (IState_T__o *)v30,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v31 = (CStateManager_T__o *)p_fields->stateManager;
  v34 = sub_1B64314(QAASpotStateController_StateQaaGray_TypeInfo, v32, v33);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_22;
  *(_DWORD *)(v34 + 16) = 1056964608;
  if ( !v31 )
    goto LABEL_22;
  CStateManager_object___add(
    v31,
    3,
    (IState_T__o *)v34,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v35 = (CStateManager_T__o *)p_fields->stateManager;
  v38 = sub_1B64314(QAASpotStateController_StateQaaDisp_TypeInfo, v36, v37);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_22;
  *(_DWORD *)(v38 + 16) = 1056964608;
  if ( !v35 )
    goto LABEL_22;
  CStateManager_object___add(
    v35,
    4,
    (IState_T__o *)v38,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v39 = (CStateManager_T__o *)p_fields->stateManager;
  v42 = sub_1B64314(QAASpotStateController_StateQaaHide_TypeInfo, v40, v41);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_22;
  *(_DWORD *)(v42 + 16) = 0;
  if ( !v39 )
    goto LABEL_22;
  CStateManager_object___add(
    v39,
    5,
    (IState_T__o *)v42,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v43 = (CStateManager_T__o *)p_fields->stateManager;
  v46 = sub_1B64314(QAASpotStateController_StateQaaGray_TypeInfo, v44, v45);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_22;
  *(_DWORD *)(v46 + 16) = 0;
  if ( !v43 )
    goto LABEL_22;
  CStateManager_object___add(
    v43,
    6,
    (IState_T__o *)v46,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v47 = (CStateManager_T__o *)p_fields->stateManager;
  v50 = sub_1B64314(QAASpotStateController_StateQaaDisp_TypeInfo, v48, v49);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_22;
  *(_DWORD *)(v50 + 16) = 0;
  if ( !v47 )
    goto LABEL_22;
  CStateManager_object___add(
    v47,
    7,
    (IState_T__o *)v50,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v51 = (CStateManager_T__o *)p_fields->stateManager;
  v54 = sub_1B64314(QAASpotStateController_StateQaaChange_TypeInfo, v52, v53);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54
    || (*(_DWORD *)(v54 + 16) = 1056964608, !v51)
    || (CStateManager_object___add(
          v51,
          8,
          (IState_T__o *)v54,
          (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v55 = (CStateManager_T__o *)p_fields->stateManager,
        v58 = sub_1B64314(QAASpotStateController_StateQaaAnimation_TypeInfo, v56, v57),
        System_Object___ctor((Il2CppObject *)v58, 0LL),
        !v58)
    || (*(_DWORD *)(v58 + 16) = 1056964608, !v55) )
  {
LABEL_22:
    sub_1B64324(v22);
  }
  CStateManager_object___add(
    v55,
    9,
    (IState_T__o *)v58,
    (const MethodInfo_3061364 *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v59);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x9
  QAASpotStateController_IMapSpot_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  QAASpotStateController_IMapSpot_c **v32; // x10
  __int64 v33; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x2
  float v36; // s0
  EasingObject_o *v37; // x19
  System_Action_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x22

  if ( (byte_49F93BD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isActive);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_1B640C8(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v11);
    sub_1B640C8(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v12);
    sub_1B640C8(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v13);
    byte_49F93BD = 1;
  }
  v14 = sub_1B64314(QAASpotStateController___c__DisplayClass9_0_TypeInfo, isActive, finishCallback);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)(v14 + 16) = targetObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)targetObject, v16, v17);
  *(_QWORD *)(v14 + 32) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)finishCallback, v18, v19);
  v20 = *(__int64 **)(v14 + 16);
  if ( !v20 )
    goto LABEL_24;
  v21 = *v20;
  v22 = *(unsigned __int16 *)(*v20 + 302);
  if ( *(_WORD *)(*v20 + 302) )
  {
    v23 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *(v23 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_9;
    }
    v24 = v21 + 16LL * (*(_DWORD *)v23 + 5) + 312;
  }
  else
  {
LABEL_9:
    v24 = sub_1BB60A8(v20, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v25 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v25,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 48) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)Component_object, v27, v28);
  v29 = *(__int64 **)(v14 + 16);
  if ( !v29 )
    goto LABEL_24;
  v30 = *v29;
  v31 = *(unsigned __int16 *)(*v29 + 302);
  if ( *(_WORD *)(*v29 + 302) )
  {
    v32 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v32 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_16;
    }
    v33 = v30 + 16LL * (*(_DWORD *)v32 + 7) + 312;
  }
  else
  {
LABEL_16:
    v33 = sub_1BB60A8(*(_QWORD *)(v14 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v14 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
  v36 = 0.5;
  if ( isActive )
    v36 = 1.0;
  *(float *)(v14 + 24) = v36;
  if ( time > 0.0 )
  {
    v37 = *(EasingObject_o **)(v14 + 48);
    v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v41 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v14,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v37 )
    {
      EasingObject__Play(v37, time, v38, v41, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_1B64324(v15);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v14,
    v34);
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
  int32_t v16; // w2
  int32_t v17; // w3
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x22
  QAASpotStateController_IMapSpot_c *v24; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v26; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v30; // x10
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  float v36; // s12
  float v37; // s1
  float v38; // s13
  float v39; // s2
  float v40; // s14
  __int64 v41; // x1
  float v42; // s1
  float v43; // s2
  struct UnityEngine_Vector3_StaticFields *v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v48; // x21
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F93BC & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_1B640C8(&EventDelegate_TypeInfo, v9);
    sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v10);
    sub_1B640C8(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v11);
    sub_1B640C8(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v12);
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, v13);
    byte_49F93BC = 1;
  }
  v14 = sub_1B64314(QAASpotStateController___c__DisplayClass8_0_TypeInfo, isDisp, finishCallback);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_36;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)finishCallback, v16, v17);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v19 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v23 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
      byte_49F7111 = 1;
    }
    v24 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v26 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v30 = &v24->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v30 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v26;
        v30 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v31 = (__int64)&v24->vtable[*v30 + 4].method;
    }
    else
    {
LABEL_18:
      v31 = sub_1BB60A8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(v36) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v31)(
                       targetObject,
                       *(_QWORD *)(v31 + 8)));
    v38 = v37;
    v40 = v39;
  }
  else
  {
    v32 = targetObject->klass;
    v33 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v34 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_23;
      }
      v35 = (__int64)&v32->vtable[*v34 + 4].method;
    }
    else
    {
LABEL_23:
      v35 = sub_1BB60A8(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v35)(
                     targetObject,
                     *(_QWORD *)(v35 + 8)));
    y = v42;
    z = v43;
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v41);
      byte_49F7111 = 1;
    }
    v44 = UnityEngine_Vector3_TypeInfo->static_fields;
    v36 = v44->zeroVector.fields.x;
    v38 = v44->zeroVector.fields.y;
    v40 = v44->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v49.fields.x = v36;
    v49.fields.y = v38;
    v49.fields.z = v40;
    GameObjectExtensions__SetLocalScale(v23, v49, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  v15 = UITweener__Begin_object_(v23, time, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
  if ( !v15 )
LABEL_36:
    sub_1B64324(v15);
  *(float *)&v15[8].klass = x;
  *((float *)&v15[8].klass + 1) = y;
  *(float *)&v15[8].monitor = z;
  *((float *)&v15[8].monitor + 1) = v36;
  *(float *)&v15[9].klass = v38;
  *((float *)&v15[9].klass + 1) = v40;
  LODWORD(v15[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v15[4].monitor;
  v48 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v45, v46);
  EventDelegate_Callback___ctor(
    v48,
    (Il2CppObject *)v14,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_46493216(monitor, v48, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_49F93BB & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state);
    byte_49F93BB = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_49F93BA & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method);
    byte_49F93BA = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1B64324(0LL);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_30613CC *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
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

  if ( (byte_49F93BE & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49F93BE = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
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
      v12 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
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
      v14 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
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

  if ( (byte_49F93BF & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49F93BF = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
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
    sub_1B64324(v5);
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
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v9; // w20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  QAASpotStateController_IMapSpot_c *v13; // x8
  System_Action_o *v14; // x21
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QAASpotStateController_IMapSpot_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_49F93C8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v4);
    byte_49F93C8 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v12 = sub_1B64314(System_Action_TypeInfo, v10, v11);
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
        goto LABEL_14;
    }
    v17 = (__int64)&v13->vtable[*v16 + 10].method;
  }
  else
  {
LABEL_14:
    v17 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v14, (Il2CppObject *)that, *(_QWORD *)(v17 + 8), 0LL);
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
        goto LABEL_20;
    }
    v21 = (__int64)&v18->vtable[*v20 + 16].method;
  }
  else
  {
LABEL_20:
    v21 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
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
    sub_1B64324(v5);
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
    sub_1B64324(v5);
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
  __int64 v8; // x20
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 **v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 *v15; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  QAASpotStateController_IMapSpot_c **v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3
  __int64 *v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  QAASpotStateController_IMapSpot_c **v27; // x10
  __int64 v28; // x0

  if ( (byte_49F93C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    sub_1B640C8(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1B640C8(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v7);
    byte_49F93C6 = 1;
  }
  v8 = sub_1B64314(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_23;
  *(_QWORD *)(v8 + 16) = that;
  v12 = (__int64 **)(v8 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)that, v10, v11);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v13, v14);
  v15 = *(__int64 **)(v8 + 16);
  if ( !v15 )
    goto LABEL_23;
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
    v19 = v16 + 16LL * (*(_DWORD *)v18 + 13) + 312;
  }
  else
  {
LABEL_9:
    v19 = sub_1BB60A8(*v12, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v8,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v8 + 16),
        0,
        this->fields.Duration,
        v22,
        v23);
    }
    return;
  }
  v24 = *v12;
  if ( !*v12 )
LABEL_23:
    sub_1B64324(v9);
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
        goto LABEL_19;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 10) + 312;
  }
  else
  {
LABEL_19:
    v28 = sub_1BB60A8(*v12, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
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
  __int64 v9; // x1
  __int64 v10; // x2
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  Il2CppObject *v12; // x19
  float Duration; // s8
  Il2CppClass *v14; // x8
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v15; // x20
  __int64 v16; // x9
  QAASpotStateController_IMapSpot_c **v17; // x10
  __int64 p_method; // x0
  const MethodInfo *v19; // x3

  v2 = this;
  if ( (byte_49F93C7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1B640C8(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v3);
    byte_49F93C7 = 1;
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
    v8 = sub_1BB60A8(v2->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v8)(
                                                                           that,
                                                                           *(_QWORD *)(v8 + 8));
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (v12 = (Il2CppObject *)v2->fields.that,
        Duration = _4__this->fields.Duration,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1B64314(
                                                                                 System_Action_TypeInfo,
                                                                                 v9,
                                                                                 v10),
        !v12) )
  {
LABEL_19:
    sub_1B64324(this);
  }
  v14 = v12->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v17 = (QAASpotStateController_IMapSpot_c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_16;
    }
    p_method = (__int64)&v14->vtable[*(_DWORD *)v17 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_1BB60A8(v12, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor((System_Action_o *)v15, v12, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim(
    (QAASpotStateController_IMapSpot_o *)v12,
    1,
    Duration,
    (System_Action_o *)v15,
    v19);
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
    sub_1B64324(v5);
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
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  QAASpotStateController_IMapSpot_c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  float Duration; // s8
  __int64 v22; // x0
  QAASpotStateController_IMapSpot_c *v23; // x8
  System_Action_o *v24; // x20
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  float v28; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  QAASpotStateController_IMapSpot_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  v4 = this;
  if ( (byte_49F93C4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49F93C4 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v22 = sub_1B64314(System_Action_TypeInfo, v11, v12);
      v23 = that->klass;
      v24 = (System_Action_o *)v22;
      v25 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v26 = &v23->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v26 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_27;
        }
        v27 = (__int64)&v23->vtable[*v26 + 10].method;
      }
      else
      {
LABEL_27:
        v27 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v24, (Il2CppObject *)that, *(_QWORD *)(v27 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v24, v37);
      break;
    case 1:
      v17 = that->klass;
      v18 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v19 = &v17->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_22;
        }
        v20 = (__int64)&v17->vtable[*v19 + 10].method;
      }
      else
      {
LABEL_22:
        v20 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
      break;
    case 0:
      v13 = that->klass;
      v14 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_17;
        }
        v16 = (__int64)&v13->vtable[*v15 + 8].method;
      }
      else
      {
LABEL_17:
        v16 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 1.0);
      v28 = v4->fields.Duration;
      v31 = sub_1B64314(System_Action_TypeInfo, v29, v30);
      v32 = that->klass;
      v33 = (System_Action_o *)v31;
      v34 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v35 = &v32->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_33;
        }
        v36 = (__int64)&v32->vtable[*v35 + 10].method;
      }
      else
      {
LABEL_33:
        v36 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v33, v38);
      break;
  }
  v39 = that->klass;
  v40 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v41 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_44;
    }
    v42 = (__int64)(&v39->_1.interfaceOffsets + 2 * *v41 + 39);
  }
  else
  {
LABEL_44:
    v42 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v42)(that, *(_QWORD *)(v42 + 8));
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

  if ( (byte_49F93C5 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49F93C5 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
    sub_1B64324(v5);
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
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  QAASpotStateController_IMapSpot_c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  float Duration; // s8
  __int64 v18; // x0
  QAASpotStateController_IMapSpot_c *v19; // x8
  System_Action_o *v20; // x20
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  QAASpotStateController_IMapSpot_c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  float v28; // s8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x0
  QAASpotStateController_IMapSpot_c *v32; // x8
  System_Action_o *v33; // x20
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3

  v4 = this;
  if ( (byte_49F93C2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaGray_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49F93C2 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v10 )
  {
    case 2:
      v24 = that->klass;
      v25 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v26 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_27;
        }
        v27 = (__int64)&v24->vtable[*v26 + 10].method;
      }
      else
      {
LABEL_27:
        v27 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v27)(that, *(_QWORD *)(v27 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v18 = sub_1B64314(System_Action_TypeInfo, v11, v12);
      v19 = that->klass;
      v20 = (System_Action_o *)v18;
      v21 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v22 = &v19->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_22;
        }
        v23 = (__int64)&v19->vtable[*v22 + 10].method;
      }
      else
      {
LABEL_22:
        v23 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v20, (Il2CppObject *)that, *(_QWORD *)(v23 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v20, v37);
      break;
    case 0:
      v13 = that->klass;
      v14 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v15 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_17;
        }
        v16 = (__int64)&v13->vtable[*v15 + 8].method;
      }
      else
      {
LABEL_17:
        v16 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v16)(that, *(_QWORD *)(v16 + 8), 0.5);
      v28 = v4->fields.Duration;
      v31 = sub_1B64314(System_Action_TypeInfo, v29, v30);
      v32 = that->klass;
      v33 = (System_Action_o *)v31;
      v34 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v35 = &v32->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v35 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_34;
        }
        v36 = (__int64)&v32->vtable[*v35 + 10].method;
      }
      else
      {
LABEL_34:
        v36 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v33, (Il2CppObject *)that, *(_QWORD *)(v36 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v28, v33, v38);
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

  if ( (byte_49F93C3 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49F93C3 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
    sub_1B64324(v5);
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
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  float Duration; // s8
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x3

  v4 = this;
  if ( (byte_49F93C0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (QAASpotStateController_StateQaaHide_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, v5);
    byte_49F93C0 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v14 = sub_1B64314(System_Action_TypeInfo, v11, v12);
      v15 = that->klass;
      v16 = (System_Action_o *)v14;
      v17 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v18 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_16;
        }
        v19 = (__int64)&v15->vtable[*v18 + 10].method;
      }
      else
      {
LABEL_16:
        v19 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v16, v24);
    }
  }
  else
  {
    v20 = that->klass;
    v21 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_21;
      }
      v23 = (__int64)&v20->vtable[*v22 + 10].method;
    }
    else
    {
LABEL_21:
      v23 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
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
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_49F93C1 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_1B640C8(&QAASpotStateController_IMapSpot_TypeInfo, that);
    byte_49F93C1 = 1;
  }
  if ( !that )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
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
    v11 = sub_1BB60A8(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
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
  if ( (byte_49F93CA & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1B640C8(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_49F93CA = 1;
  }
  easingObj = v2->fields.easingObj;
  if ( !easingObj || (targetObject = v2->fields.targetObject) == 0LL )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(v2->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
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
  if ( (byte_49F93C9 & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1B640C8(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method);
    byte_49F93C9 = 1;
  }
  targetObject = v3->fields.targetObject;
  if ( !targetObject )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v2);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
}
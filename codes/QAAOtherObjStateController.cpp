void __fastcall QAAOtherObjStateController___ctor(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController__Init(
        QAAOtherObjStateController_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  CStateManager_T__o *v20; // x21
  QAAOtherObjStateController_Fields *p_fields; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  CStateManager_T__o *stateManager; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  CStateManager_T__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x22
  CStateManager_T__o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x22
  CStateManager_T__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x22
  CStateManager_T__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x22
  CStateManager_T__o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x22
  CStateManager_T__o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x21
  const MethodInfo *v65; // x2

  if ( (byte_4B13002 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__, targetObject, method);
    sub_1BCA7E0(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__, v6, v7);
    sub_1BCA7E0(&CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo, v8, v9);
    sub_1BCA7E0(&QAAOtherObjStateController_StateMapMain_TypeInfo, v10, v11);
    sub_1BCA7E0(&QAAOtherObjStateController_StateNone_TypeInfo, v12, v13);
    sub_1BCA7E0(&QAAOtherObjStateController_StateQaaAnimation_TypeInfo, v14, v15);
    sub_1BCA7E0(&QAAOtherObjStateController_StateQaaDisp_TypeInfo, v16, v17);
    sub_1BCA7E0(&QAAOtherObjStateController_StateQaaHide_TypeInfo, v18, v19);
    byte_4B13002 = 1;
  }
  v20 = (CStateManager_T__o *)sub_1BCAA2C(
                                CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo,
                                targetObject,
                                method,
                                v3);
  CStateManager_object____ctor(
    v20,
    (Il2CppObject *)targetObject,
    7,
    (const MethodInfo_313FBC4 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
  this->fields.stateManager = (struct CStateManager_QAAOtherObjStateController_IBlankEarthObject__o *)v20;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v32 = (Il2CppObject *)sub_1BCAA2C(QAAOtherObjStateController_StateNone_TypeInfo, v29, v30, v31);
  System_Object___ctor(v32, 0LL);
  if ( !stateManager )
    goto LABEL_16;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v32,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v35 = (CStateManager_T__o *)p_fields->stateManager;
  v39 = (Il2CppObject *)sub_1BCAA2C(QAAOtherObjStateController_StateMapMain_TypeInfo, v36, v37, v38);
  System_Object___ctor(v39, 0LL);
  if ( !v35 )
    goto LABEL_16;
  CStateManager_object___add(
    v35,
    1,
    (IState_T__o *)v39,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v40 = (CStateManager_T__o *)p_fields->stateManager;
  v44 = sub_1BCAA2C(QAAOtherObjStateController_StateQaaHide_TypeInfo, v41, v42, v43);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_16;
  *(_DWORD *)(v44 + 16) = 1056964608;
  if ( !v40 )
    goto LABEL_16;
  CStateManager_object___add(
    v40,
    2,
    (IState_T__o *)v44,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v45 = (CStateManager_T__o *)p_fields->stateManager;
  v49 = sub_1BCAA2C(QAAOtherObjStateController_StateQaaDisp_TypeInfo, v46, v47, v48);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_16;
  *(_DWORD *)(v49 + 16) = 1056964608;
  if ( !v45 )
    goto LABEL_16;
  CStateManager_object___add(
    v45,
    3,
    (IState_T__o *)v49,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v50 = (CStateManager_T__o *)p_fields->stateManager;
  v54 = sub_1BCAA2C(QAAOtherObjStateController_StateQaaHide_TypeInfo, v51, v52, v53);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
    goto LABEL_16;
  *(_DWORD *)(v54 + 16) = 0;
  if ( !v50 )
    goto LABEL_16;
  CStateManager_object___add(
    v50,
    5,
    (IState_T__o *)v54,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v55 = (CStateManager_T__o *)p_fields->stateManager;
  v59 = sub_1BCAA2C(QAAOtherObjStateController_StateQaaDisp_TypeInfo, v56, v57, v58);
  System_Object___ctor((Il2CppObject *)v59, 0LL);
  if ( !v59
    || (*(_DWORD *)(v59 + 16) = 0, !v55)
    || (CStateManager_object___add(
          v55,
          6,
          (IState_T__o *)v59,
          (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__),
        v60 = (CStateManager_T__o *)p_fields->stateManager,
        v64 = sub_1BCAA2C(QAAOtherObjStateController_StateQaaAnimation_TypeInfo, v61, v62, v63),
        System_Object___ctor((Il2CppObject *)v64, 0LL),
        !v64)
    || (*(_DWORD *)(v64 + 16) = 1056964608, !v60) )
  {
LABEL_16:
    sub_1BCAA3C(v33, v34);
  }
  CStateManager_object___add(
    v60,
    4,
    (IState_T__o *)v64,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  QAAOtherObjStateController__SetState(this, 0, v65);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAAOtherObjStateController__SetQaaScaleAnim(
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o *v34; // x22
  QAAOtherObjStateController_IBlankEarthObject_c *v35; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v37; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v41; // x10
  __int64 v42; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  float v47; // s12
  float v48; // s1
  float v49; // s13
  float v50; // s2
  float v51; // s14
  __int64 v52; // x1
  __int64 v53; // x2
  float v54; // s1
  float v55; // s2
  struct UnityEngine_Vector3_StaticFields *v56; // x8
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v60; // x21
  __int64 v61; // x1
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13005 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, isDisp, finishCallback);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v13, v14);
    sub_1BCA7E0(&QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v17, v18);
    byte_4B13005 = 1;
  }
  v19 = sub_1BCAA2C(QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo, isDisp, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_36;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v29 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 5LL);
  }
  v34 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v33);
      byte_4B109C1 = 1;
    }
    v35 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v37 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v41 = &v35->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v41 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v37;
        v41 += 4;
        if ( !v37 )
          goto LABEL_18;
      }
      v42 = (__int64)&v35->vtable[*v41 + 4].method;
    }
    else
    {
LABEL_18:
      v42 = sub_1C1C7C0(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(v47) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v42)(
                       targetObject,
                       *(_QWORD *)(v42 + 8)));
    v49 = v48;
    v51 = v50;
  }
  else
  {
    v43 = targetObject->klass;
    v44 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v45 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_23;
      }
      v46 = (__int64)&v43->vtable[*v45 + 4].method;
    }
    else
    {
LABEL_23:
      v46 = sub_1C1C7C0(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v46)(
                     targetObject,
                     *(_QWORD *)(v46 + 8)));
    y = v54;
    z = v55;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v52, v53);
      byte_4B109C1 = 1;
    }
    v56 = UnityEngine_Vector3_TypeInfo->static_fields;
    v47 = v56->zeroVector.fields.x;
    v49 = v56->zeroVector.fields.y;
    v51 = v56->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v62.fields.x = v47;
    v62.fields.y = v49;
    v62.fields.z = v51;
    GameObjectExtensions__SetLocalScale(v34, v62, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
    return;
  }
  v20 = UITweener__Begin_object_(v34, time, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  if ( !v20 )
LABEL_36:
    sub_1BCAA3C(v20, v21);
  *(float *)&v20[8].klass = x;
  *((float *)&v20[8].klass + 1) = y;
  *(float *)&v20[8].monitor = z;
  *((float *)&v20[8].monitor + 1) = v47;
  *(float *)&v20[9].klass = v49;
  *((float *)&v20[9].klass + 1) = v51;
  LODWORD(v20[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v20[4].monitor;
  v60 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v21, v57, v58);
  EventDelegate_Callback___ctor(
    v60,
    (Il2CppObject *)v19,
    Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v61);
  EventDelegate__Set_47333340(monitor, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAAOtherObjStateController__SetState(
        QAAOtherObjStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4B13004 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__,
      *(_QWORD *)&state,
      method);
    byte_4B13004 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
}


void __fastcall QAAOtherObjStateController__Update(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4B13003 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__, method, v2);
    byte_4B13003 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1BCAA3C(0LL, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_313FCD4 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
}


void __fastcall QAAOtherObjStateController_StateMapMain___ctor(
        QAAOtherObjStateController_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController_StateMapMain__begin(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v8; // w0
  QAAOtherObjStateController_IBlankEarthObject_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x2
  void (__fastcall *v16)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, __int64); // x3
  QAAOtherObjStateController_IBlankEarthObject_o *v17; // x0
  __int64 v18; // x1

  if ( (byte_4B13006 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that,
                                                          method);
    byte_4B13006 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v11 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v12 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 1LL);
    }
    v16 = *(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, __int64))v12;
    v15 = *(_QWORD *)(v12 + 8);
    v17 = that;
    v18 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v13 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v13 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v14 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 3LL);
    }
    v16 = *(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v18 = 1LL;
    v17 = that;
  }
  v16(v17, v18, v15);
}


void __fastcall QAAOtherObjStateController_StateMapMain__end(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateMapMain__update(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13007 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that,
                                                          method);
    byte_4B13007 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 7].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 7LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
}


void __fastcall QAAOtherObjStateController_StateNone___ctor(
        QAAOtherObjStateController_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController_StateNone__begin(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateNone__end(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateNone__update(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateQaaAnimation___ctor(
        QAAOtherObjStateController_StateQaaAnimation_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAAOtherObjStateController_StateQaaAnimation__begin(
        QAAOtherObjStateController_StateQaaAnimation_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v15; // x8
  System_Action_o *v16; // x21
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4B1300C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1BCA7E0(
                                                               &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                               v4,
                                                               v5);
    byte_4B1300C = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v7 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 6LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  v14 = sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  v15 = that->klass;
  v16 = (System_Action_o *)v14;
  v17 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v18 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    v19 = (__int64)&v15->vtable[*v18 + 8].method;
  }
  else
  {
LABEL_14:
    v19 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
  }
  System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
  v20 = that->klass;
  v21 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v22 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_20;
    }
    v23 = (__int64)(&v20->_1.interfaceOffsets + 2 * *v22 + 39);
  }
  else
  {
LABEL_20:
    v23 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, System_Action_o *, _QWORD))v23)(
    that,
    v10,
    v16,
    *(_QWORD *)(v23 + 8));
}


void __fastcall QAAOtherObjStateController_StateQaaBase___ctor(
        QAAOtherObjStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAAOtherObjStateController_StateQaaBase__begin(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateQaaBase__end(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateQaaBase__update(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAAOtherObjStateController_StateQaaDisp___ctor(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAAOtherObjStateController_StateQaaDisp__begin(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_StateQaaDisp_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  float Duration; // s8
  __int64 v16; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v17; // x8
  System_Action_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x3

  v4 = this;
  if ( (byte_4B1300A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          v5,
                                                          v6);
    byte_4B1300A = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v11 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v11 == 1 )
  {
    v22 = that->klass;
    v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v24 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*v24 + 8].method;
    }
    else
    {
LABEL_21:
      v25 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v25)(that, *(_QWORD *)(v25 + 8));
  }
  else if ( !v11 )
  {
    Duration = v4->fields.Duration;
    v16 = sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    v17 = that->klass;
    v18 = (System_Action_o *)v16;
    v19 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v20 = &v17->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v20 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v17->vtable[*v20 + 8].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v18, (Il2CppObject *)that, *(_QWORD *)(v21 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 1, Duration, v18, v26);
  }
}


void __fastcall QAAOtherObjStateController_StateQaaDisp__end(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B1300B & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that,
                                                          method);
    byte_4B1300B = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 10].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, _QWORD))p_method)(
    that,
    1LL,
    *(_QWORD *)(p_method + 8));
}


void __fastcall QAAOtherObjStateController_StateQaaHide___ctor(
        QAAOtherObjStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAAOtherObjStateController_StateQaaHide__begin(
        QAAOtherObjStateController_StateQaaHide_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_StateQaaHide_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  QAAOtherObjStateController_IBlankEarthObject_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  float Duration; // s8
  __int64 v20; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v21; // x8
  System_Action_o *v22; // x20
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x3

  v4 = this;
  if ( (byte_4B13008 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          v5,
                                                          v6);
    byte_4B13008 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v11 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v11 == 1 )
  {
    Duration = v4->fields.Duration;
    v20 = sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    v21 = that->klass;
    v22 = (System_Action_o *)v20;
    v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v24 = &v21->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v24 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = (__int64)&v21->vtable[*v24 + 8].method;
    }
    else
    {
LABEL_21:
      v25 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v22, (Il2CppObject *)that, *(_QWORD *)(v25 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 0, Duration, v22, v26);
  }
  else if ( !v11 )
  {
    v15 = that->klass;
    v16 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v17 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17 + 8].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v18)(that, *(_QWORD *)(v18 + 8));
  }
}


void __fastcall QAAOtherObjStateController_StateQaaHide__end(
        QAAOtherObjStateController_StateQaaHide_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13009 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1BCA7E0(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that,
                                                          method);
    byte_4B13009 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 10].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
}


void __fastcall QAAOtherObjStateController___c__DisplayClass8_0___ctor(
        QAAOtherObjStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController___c__DisplayClass8_0___SetQaaScaleAnim_b__0(
        QAAOtherObjStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}
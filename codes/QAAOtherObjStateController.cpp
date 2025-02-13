void __fastcall QAAOtherObjStateController___ctor(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController__Init(
        QAAOtherObjStateController_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        const MethodInfo *method)
{
  CStateManager_T__o *v5; // x21
  QAAOtherObjStateController_Fields *p_fields; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  CStateManager_T__o *stateManager; // x21
  QAAOtherObjStateController_StateNone_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  CStateManager_T__o *v17; // x21
  QAAOtherObjStateController_StateMapMain_o *v18; // x22
  CStateManager_T__o *v19; // x21
  QAAOtherObjStateController_StateQaaHide_o *v20; // x22
  CStateManager_T__o *v21; // x21
  QAAOtherObjStateController_StateQaaDisp_o *v22; // x22
  CStateManager_T__o *v23; // x21
  QAAOtherObjStateController_StateQaaHide_o *v24; // x22
  CStateManager_T__o *v25; // x21
  QAAOtherObjStateController_StateQaaDisp_o *v26; // x22
  CStateManager_T__o *v27; // x20
  QAAOtherObjStateController_StateQaaAnimation_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_4BD92D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
    sub_1C21E38(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
    sub_1C21E38(&CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_StateMapMain_TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_StateNone_TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_StateQaaAnimation_TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_StateQaaDisp_TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_StateQaaHide_TypeInfo);
    byte_4BD92D5 = 1;
  }
  v5 = (CStateManager_T__o *)sub_1C22084(CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo);
  CStateManager_object____ctor(
    v5,
    (Il2CppObject *)targetObject,
    7,
    (const MethodInfo_31E6A20 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
  this->fields.stateManager = (struct CStateManager_QAAOtherObjStateController_IBlankEarthObject__o *)v5;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v14 = (QAAOtherObjStateController_StateNone_o *)sub_1C22084(QAAOtherObjStateController_StateNone_TypeInfo);
  QAAOtherObjStateController_StateNone___ctor(v14, 0LL);
  if ( !stateManager )
    goto LABEL_11;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v14,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v17 = (CStateManager_T__o *)p_fields->stateManager;
  v18 = (QAAOtherObjStateController_StateMapMain_o *)sub_1C22084(QAAOtherObjStateController_StateMapMain_TypeInfo);
  QAAOtherObjStateController_StateMapMain___ctor(v18, 0LL);
  if ( !v17 )
    goto LABEL_11;
  CStateManager_object___add(
    v17,
    1,
    (IState_T__o *)v18,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v19 = (CStateManager_T__o *)p_fields->stateManager;
  v20 = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C22084(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  QAAOtherObjStateController_StateQaaHide___ctor(v20, 0, 0LL);
  if ( !v19 )
    goto LABEL_11;
  CStateManager_object___add(
    v19,
    2,
    (IState_T__o *)v20,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v21 = (CStateManager_T__o *)p_fields->stateManager;
  v22 = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C22084(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  QAAOtherObjStateController_StateQaaDisp___ctor(v22, 0, 0LL);
  if ( !v21 )
    goto LABEL_11;
  CStateManager_object___add(
    v21,
    3,
    (IState_T__o *)v22,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v23 = (CStateManager_T__o *)p_fields->stateManager;
  v24 = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C22084(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  QAAOtherObjStateController_StateQaaHide___ctor(v24, 1, 0LL);
  if ( !v23 )
    goto LABEL_11;
  CStateManager_object___add(
    v23,
    5,
    (IState_T__o *)v24,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v25 = (CStateManager_T__o *)p_fields->stateManager;
  v26 = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C22084(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  QAAOtherObjStateController_StateQaaDisp___ctor(v26, 1, 0LL);
  if ( !v25
    || (CStateManager_object___add(
          v25,
          6,
          (IState_T__o *)v26,
          (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__),
        v27 = (CStateManager_T__o *)p_fields->stateManager,
        v28 = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1C22084(QAAOtherObjStateController_StateQaaAnimation_TypeInfo),
        QAAOtherObjStateController_StateQaaAnimation___ctor(v28, 0, 0LL),
        !v27) )
  {
LABEL_11:
    sub_1C22094(v15, v16);
  }
  CStateManager_object___add(
    v27,
    4,
    (IState_T__o *)v28,
    (const MethodInfo_31E6AC8 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  QAAOtherObjStateController__SetState(this, 0, v29);
}


void __fastcall QAAOtherObjStateController__SetQaaScaleAnim(
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_GameObject_o *v22; // x22
  QAAOtherObjStateController_IBlankEarthObject_c *v23; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v25; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v29; // x10
  __int64 v30; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v31; // x8
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

  if ( (byte_4BD92D8 & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    sub_1C21E38(&Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_1C21E38(&QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenScale___);
    byte_4BD92D8 = 1;
  }
  v9 = sub_1C22084(QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo);
  QAAOtherObjStateController___c__DisplayClass8_0___ctor((QAAOtherObjStateController___c__DisplayClass8_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v19 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
    p_method = sub_1C73E18(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 5LL);
  }
  v22 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    v23 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v29 = &v23->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v29 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v25;
        v29 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v30 = (__int64)&v23->vtable[*v29 + 4].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1C73E18(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(v35) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v30)(
                       targetObject,
                       *(_QWORD *)(v30 + 8)));
    v37 = v36;
    v39 = v38;
  }
  else
  {
    v31 = targetObject->klass;
    v32 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v33 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_23;
      }
      v34 = (__int64)&v31->vtable[*v33 + 4].method;
    }
    else
    {
LABEL_23:
      v34 = sub_1C73E18(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v34)(
                     targetObject,
                     *(_QWORD *)(v34 + 8)));
    y = v40;
    z = v41;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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
    GameObjectExtensions__SetLocalScale(v22, v45, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
    return;
  }
  v10 = UITweener__Begin_object_(v22, time, (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_36:
    sub_1C22094(v10, v11);
  *(float *)&v10[8].klass = x;
  *((float *)&v10[8].klass + 1) = y;
  *(float *)&v10[8].monitor = z;
  *((float *)&v10[8].monitor + 1) = v35;
  *(float *)&v10[9].klass = v37;
  *((float *)&v10[9].klass + 1) = v39;
  LODWORD(v10[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v10[4].monitor;
  v44 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_47946052(monitor, v44, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAAOtherObjStateController__SetState(
        QAAOtherObjStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4BD92D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
    byte_4BD92D7 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
}


void __fastcall QAAOtherObjStateController__Update(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4BD92D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
    byte_4BD92D6 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C22094(0LL, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_31E6B30 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
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

  if ( (byte_4BD9338 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD9338 = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 0LL);
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
      v12 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 1LL);
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
      v14 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 3LL);
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

  if ( (byte_4BD9339 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD9339 = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 7LL);
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
    sub_1C22094(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v8; // w20
  __int64 v9; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v10; // x8
  System_Action_o *v11; // x21
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0

  if ( (byte_4BD933E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD933E = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 6LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = sub_1C22084(System_Action_TypeInfo);
  v10 = that->klass;
  v11 = (System_Action_o *)v9;
  v12 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v13 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_14;
    }
    v14 = (__int64)&v10->vtable[*v13 + 8].method;
  }
  else
  {
LABEL_14:
    v14 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
  }
  System_Action___ctor(v11, (Il2CppObject *)that, *(_QWORD *)(v14 + 8), 0LL);
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
        goto LABEL_20;
    }
    v18 = (__int64)(&v15->_1.interfaceOffsets + 2 * *v17 + 39);
  }
  else
  {
LABEL_20:
    v18 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, System_Action_o *, _QWORD))v18)(
    that,
    v8,
    v11,
    *(_QWORD *)(v18 + 8));
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
    sub_1C22094(v5, v6);
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
    sub_1C22094(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v9; // w0
  float Duration; // s8
  __int64 v11; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v12; // x8
  System_Action_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4BD933C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD933C = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
  klass = that->klass;
  v6 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  if ( v9 == 1 )
  {
    v17 = that->klass;
    v18 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v19 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19 + 8].method;
    }
    else
    {
LABEL_21:
      v20 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
  }
  else if ( !v9 )
  {
    Duration = v4->fields.Duration;
    v11 = sub_1C22084(System_Action_TypeInfo);
    v12 = that->klass;
    v13 = (System_Action_o *)v11;
    v14 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v15 = &v12->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v15 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v12->vtable[*v15 + 8].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v13, (Il2CppObject *)that, *(_QWORD *)(v16 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 1, Duration, v13, 0LL);
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

  if ( (byte_4BD933D & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD933D = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
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
    sub_1C22094(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v9; // w0
  QAAOtherObjStateController_IBlankEarthObject_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  float Duration; // s8
  __int64 v15; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v16; // x8
  System_Action_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4BD933A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD933A = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
  klass = that->klass;
  v6 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  if ( v9 == 1 )
  {
    Duration = v4->fields.Duration;
    v15 = sub_1C22084(System_Action_TypeInfo);
    v16 = that->klass;
    v17 = (System_Action_o *)v15;
    v18 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v19 = &v16->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v19 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v16->vtable[*v19 + 8].method;
    }
    else
    {
LABEL_21:
      v20 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v17, (Il2CppObject *)that, *(_QWORD *)(v20 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 0, Duration, v17, 0LL);
  }
  else if ( !v9 )
  {
    v10 = that->klass;
    v11 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v12 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12 + 8].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v13)(that, *(_QWORD *)(v13 + 8));
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

  if ( (byte_4BD933B & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C21E38(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4BD933B = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
    p_method = sub_1C73E18(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
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
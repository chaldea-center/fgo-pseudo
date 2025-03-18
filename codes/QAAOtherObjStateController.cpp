void __fastcall QAAOtherObjStateController___ctor(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAAOtherObjStateController__Init(
        QAAOtherObjStateController_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CStateManager_T__o *v12; // x21
  QAAOtherObjStateController_Fields *p_fields; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *stateManager; // x21
  QAAOtherObjStateController_StateNone_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  CStateManager_T__o *v24; // x21
  QAAOtherObjStateController_StateMapMain_o *v25; // x22
  CStateManager_T__o *v26; // x21
  QAAOtherObjStateController_StateQaaHide_o *v27; // x22
  CStateManager_T__o *v28; // x21
  QAAOtherObjStateController_StateQaaDisp_o *v29; // x22
  CStateManager_T__o *v30; // x21
  QAAOtherObjStateController_StateQaaHide_o *v31; // x22
  CStateManager_T__o *v32; // x21
  QAAOtherObjStateController_StateQaaDisp_o *v33; // x22
  CStateManager_T__o *v34; // x20
  QAAOtherObjStateController_StateQaaAnimation_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_4C1ECC4 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__, targetObject);
    sub_1C3B764(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__, v5);
    sub_1C3B764(&CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo, v6);
    sub_1C3B764(&QAAOtherObjStateController_StateMapMain_TypeInfo, v7);
    sub_1C3B764(&QAAOtherObjStateController_StateNone_TypeInfo, v8);
    sub_1C3B764(&QAAOtherObjStateController_StateQaaAnimation_TypeInfo, v9);
    sub_1C3B764(&QAAOtherObjStateController_StateQaaDisp_TypeInfo, v10);
    sub_1C3B764(&QAAOtherObjStateController_StateQaaHide_TypeInfo, v11);
    byte_4C1ECC4 = 1;
  }
  v12 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo);
  CStateManager_object____ctor(
    v12,
    (Il2CppObject *)targetObject,
    7,
    (const MethodInfo_3225B48 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
  this->fields.stateManager = (struct CStateManager_QAAOtherObjStateController_IBlankEarthObject__o *)v12;
  p_fields = &this->fields;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v21 = (QAAOtherObjStateController_StateNone_o *)sub_1C3B9B0(QAAOtherObjStateController_StateNone_TypeInfo);
  QAAOtherObjStateController_StateNone___ctor(v21, 0LL);
  if ( !stateManager )
    goto LABEL_11;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v21,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v24 = (CStateManager_T__o *)p_fields->stateManager;
  v25 = (QAAOtherObjStateController_StateMapMain_o *)sub_1C3B9B0(QAAOtherObjStateController_StateMapMain_TypeInfo);
  QAAOtherObjStateController_StateMapMain___ctor(v25, 0LL);
  if ( !v24 )
    goto LABEL_11;
  CStateManager_object___add(
    v24,
    1,
    (IState_T__o *)v25,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v26 = (CStateManager_T__o *)p_fields->stateManager;
  v27 = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C3B9B0(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  QAAOtherObjStateController_StateQaaHide___ctor(v27, 0, 0LL);
  if ( !v26 )
    goto LABEL_11;
  CStateManager_object___add(
    v26,
    2,
    (IState_T__o *)v27,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v28 = (CStateManager_T__o *)p_fields->stateManager;
  v29 = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C3B9B0(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  QAAOtherObjStateController_StateQaaDisp___ctor(v29, 0, 0LL);
  if ( !v28 )
    goto LABEL_11;
  CStateManager_object___add(
    v28,
    3,
    (IState_T__o *)v29,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v30 = (CStateManager_T__o *)p_fields->stateManager;
  v31 = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C3B9B0(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  QAAOtherObjStateController_StateQaaHide___ctor(v31, 1, 0LL);
  if ( !v30 )
    goto LABEL_11;
  CStateManager_object___add(
    v30,
    5,
    (IState_T__o *)v31,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v32 = (CStateManager_T__o *)p_fields->stateManager;
  v33 = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C3B9B0(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  QAAOtherObjStateController_StateQaaDisp___ctor(v33, 1, 0LL);
  if ( !v32
    || (CStateManager_object___add(
          v32,
          6,
          (IState_T__o *)v33,
          (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__),
        v34 = (CStateManager_T__o *)p_fields->stateManager,
        v35 = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1C3B9B0(QAAOtherObjStateController_StateQaaAnimation_TypeInfo),
        QAAOtherObjStateController_StateQaaAnimation___ctor(v35, 0, 0LL),
        !v34) )
  {
LABEL_11:
    sub_1C3B9C0(v22, v23);
  }
  CStateManager_object___add(
    v34,
    4,
    (IState_T__o *)v35,
    (const MethodInfo_3225BF0 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  QAAOtherObjStateController__SetState(this, 0, v36);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x22
  QAAOtherObjStateController_IBlankEarthObject_c *v29; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v31; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v35; // x10
  __int64 v36; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  float v41; // s12
  float v42; // s1
  float v43; // s13
  float v44; // s2
  float v45; // s14
  __int64 v46; // x1
  float v47; // s1
  float v48; // s2
  struct UnityEngine_Vector3_StaticFields *v49; // x8
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v51; // x21
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1ECC7 & 1) == 0 )
  {
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, isDisp);
    sub_1C3B764(&EventDelegate_TypeInfo, v9);
    sub_1C3B764(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo, v10);
    sub_1C3B764(&Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v11);
    sub_1C3B764(&QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo, v12);
    sub_1C3B764(&Method_UITweener_Begin_TweenScale___, v13);
    byte_4C1ECC7 = 1;
  }
  v14 = sub_1C3B9B0(QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo);
  QAAOtherObjStateController___c__DisplayClass8_0___ctor((QAAOtherObjStateController___c__DisplayClass8_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_36;
  *(_QWORD *)(v14 + 16) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v24 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C8D744(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 5LL);
  }
  v28 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_4C1C511 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v27);
      byte_4C1C511 = 1;
    }
    v29 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v31 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v35 = &v29->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v35 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v31;
        v35 += 4;
        if ( !v31 )
          goto LABEL_18;
      }
      v36 = (__int64)&v29->vtable[*v35 + 4].method;
    }
    else
    {
LABEL_18:
      v36 = sub_1C8D744(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(v41) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v36)(
                       targetObject,
                       *(_QWORD *)(v36 + 8)));
    v43 = v42;
    v45 = v44;
  }
  else
  {
    v37 = targetObject->klass;
    v38 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v39 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_23;
      }
      v40 = (__int64)&v37->vtable[*v39 + 4].method;
    }
    else
    {
LABEL_23:
      v40 = sub_1C8D744(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v40)(
                     targetObject,
                     *(_QWORD *)(v40 + 8)));
    y = v47;
    z = v48;
    if ( !byte_4C1C511 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v46);
      byte_4C1C511 = 1;
    }
    v49 = UnityEngine_Vector3_TypeInfo->static_fields;
    v41 = v49->zeroVector.fields.x;
    v43 = v49->zeroVector.fields.y;
    v45 = v49->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v52.fields.x = v41;
    v52.fields.y = v43;
    v52.fields.z = v45;
    GameObjectExtensions__SetLocalScale(v28, v52, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  v15 = UITweener__Begin_object_(v28, time, (const MethodInfo_30A5CE0 *)Method_UITweener_Begin_TweenScale___);
  if ( !v15 )
LABEL_36:
    sub_1C3B9C0(v15, v16);
  *(float *)&v15[8].klass = x;
  *((float *)&v15[8].klass + 1) = y;
  *(float *)&v15[8].monitor = z;
  *((float *)&v15[8].monitor + 1) = v41;
  *(float *)&v15[9].klass = v43;
  *((float *)&v15[9].klass + 1) = v45;
  LODWORD(v15[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v15[4].monitor;
  v51 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v51,
    (Il2CppObject *)v14,
    Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48207248(monitor, v51, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAAOtherObjStateController__SetState(
        QAAOtherObjStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C1ECC6 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__, *(_QWORD *)&state);
    byte_4C1ECC6 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C3B9C0(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
}


void __fastcall QAAOtherObjStateController__Update(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C1ECC5 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__, method);
    byte_4C1ECC5 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C3B9C0(0LL, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_3225C58 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
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

  if ( (byte_4C1ED29 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that);
    byte_4C1ED29 = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 0LL);
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
      v12 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 1LL);
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
      v14 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 3LL);
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

  if ( (byte_4C1ED2A & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that);
    byte_4C1ED2A = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 7LL);
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
    sub_1C3B9C0(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v9; // w20
  __int64 v10; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v11; // x8
  System_Action_o *v12; // x21
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  if ( (byte_4C1ED2F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    this = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1C3B764(
                                                               &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                               v4);
    byte_4C1ED2F = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 6LL);
  }
  v9 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v10 = sub_1C3B9B0(System_Action_TypeInfo);
  v11 = that->klass;
  v12 = (System_Action_o *)v10;
  v13 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v14 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = (__int64)&v11->vtable[*v14 + 8].method;
  }
  else
  {
LABEL_14:
    v15 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
  }
  System_Action___ctor(v12, (Il2CppObject *)that, *(_QWORD *)(v15 + 8), 0LL);
  v16 = that->klass;
  v17 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v18 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_20;
    }
    v19 = (__int64)(&v16->_1.interfaceOffsets + 2 * *v18 + 39);
  }
  else
  {
LABEL_20:
    v19 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, System_Action_o *, _QWORD))v19)(
    that,
    v9,
    v12,
    *(_QWORD *)(v19 + 8));
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
    sub_1C3B9C0(v5, v6);
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
    sub_1C3B9C0(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  float Duration; // s8
  __int64 v12; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v13; // x8
  System_Action_o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4C1ED2D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          v5);
    byte_4C1ED2D = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 == 1 )
  {
    v18 = that->klass;
    v19 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v20 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*v20 + 8].method;
    }
    else
    {
LABEL_21:
      v21 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v21)(that, *(_QWORD *)(v21 + 8));
  }
  else if ( !v10 )
  {
    Duration = v4->fields.Duration;
    v12 = sub_1C3B9B0(System_Action_TypeInfo);
    v13 = that->klass;
    v14 = (System_Action_o *)v12;
    v15 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v16 = &v13->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v16 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v13->vtable[*v16 + 8].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v14, (Il2CppObject *)that, *(_QWORD *)(v17 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 1, Duration, v14, 0LL);
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

  if ( (byte_4C1ED2E & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that);
    byte_4C1ED2E = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
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
    sub_1C3B9C0(v5, v6);
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
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w0
  QAAOtherObjStateController_IBlankEarthObject_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  float Duration; // s8
  __int64 v16; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v17; // x8
  System_Action_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4C1ED2B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          v5);
    byte_4C1ED2B = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v10 == 1 )
  {
    Duration = v4->fields.Duration;
    v16 = sub_1C3B9B0(System_Action_TypeInfo);
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
          goto LABEL_21;
      }
      v21 = (__int64)&v17->vtable[*v20 + 8].method;
    }
    else
    {
LABEL_21:
      v21 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    System_Action___ctor(v18, (Il2CppObject *)that, *(_QWORD *)(v21 + 8), 0LL);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 0, Duration, v18, 0LL);
  }
  else if ( !v10 )
  {
    v11 = that->klass;
    v12 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v13 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13 + 8].method;
    }
    else
    {
LABEL_16:
      v14 = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v14)(that, *(_QWORD *)(v14 + 8));
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

  if ( (byte_4C1ED2C & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C3B764(
                                                          &QAAOtherObjStateController_IBlankEarthObject_TypeInfo,
                                                          that);
    byte_4C1ED2C = 1;
  }
  if ( !that )
    sub_1C3B9C0(this, that);
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
    p_method = sub_1C8D744(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10LL);
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
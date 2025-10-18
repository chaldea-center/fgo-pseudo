void QAAOtherObjStateController___ctor(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAAOtherObjStateController__Init(
        QAAOtherObjStateController_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        const MethodInfo *method)
{
  CStateManager_T__o *v5; // x21
  QAAOtherObjStateController_Fields *p_fields; // x20
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
  CStateManager_T__o *v22; // x20
  __int64 v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4C3FC0F & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
    sub_1C37058(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
    sub_1C37058(&CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_StateMapMain_TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_StateNone_TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_StateQaaAnimation_TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_StateQaaDisp_TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_StateQaaHide_TypeInfo);
    byte_4C3FC0F = 1;
  }
  v5 = (CStateManager_T__o *)sub_1C372A4(CStateManager_QAAOtherObjStateController_IBlankEarthObject__TypeInfo);
  CStateManager_object____ctor(
    v5,
    (Il2CppObject *)targetObject,
    7,
    (const MethodInfo_332CF70 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject___ctor__);
  this->fields.stateManager = (struct CStateManager_QAAOtherObjStateController_IBlankEarthObject__o *)v5;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v7, v8);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v10 = (Il2CppObject *)sub_1C372A4(QAAOtherObjStateController_StateNone_TypeInfo);
  System_Object___ctor(v10, 0);
  if ( !stateManager )
    goto LABEL_16;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v10,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v12 = (CStateManager_T__o *)p_fields->stateManager;
  v13 = (Il2CppObject *)sub_1C372A4(QAAOtherObjStateController_StateMapMain_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v12 )
    goto LABEL_16;
  CStateManager_object___add(
    v12,
    1,
    (IState_T__o *)v13,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v14 = (CStateManager_T__o *)p_fields->stateManager;
  v15 = sub_1C372A4(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_16;
  *(_DWORD *)(v15 + 16) = 1056964608;
  if ( !v14 )
    goto LABEL_16;
  CStateManager_object___add(
    v14,
    2,
    (IState_T__o *)v15,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v16 = (CStateManager_T__o *)p_fields->stateManager;
  v17 = sub_1C372A4(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_16;
  *(_DWORD *)(v17 + 16) = 1056964608;
  if ( !v16 )
    goto LABEL_16;
  CStateManager_object___add(
    v16,
    3,
    (IState_T__o *)v17,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v18 = (CStateManager_T__o *)p_fields->stateManager;
  v19 = sub_1C372A4(QAAOtherObjStateController_StateQaaHide_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_16;
  *(_DWORD *)(v19 + 16) = 0;
  if ( !v18 )
    goto LABEL_16;
  CStateManager_object___add(
    v18,
    5,
    (IState_T__o *)v19,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  v20 = (CStateManager_T__o *)p_fields->stateManager;
  v21 = sub_1C372A4(QAAOtherObjStateController_StateQaaDisp_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21
    || (*(_DWORD *)(v21 + 16) = 0, !v20)
    || (CStateManager_object___add(
          v20,
          6,
          (IState_T__o *)v21,
          (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__),
        v22 = (CStateManager_T__o *)p_fields->stateManager,
        v23 = sub_1C372A4(QAAOtherObjStateController_StateQaaAnimation_TypeInfo),
        System_Object___ctor((Il2CppObject *)v23, 0),
        !v23)
    || (*(_DWORD *)(v23 + 16) = 1056964608, !v22) )
  {
LABEL_16:
    sub_1C372B4(v11);
  }
  CStateManager_object___add(
    v22,
    4,
    (IState_T__o *)v23,
    (const MethodInfo_332D018 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__add__);
  QAAOtherObjStateController__SetState(this, 0, v24);
}


void QAAOtherObjStateController__SetQaaScaleAnim(
        QAAOtherObjStateController_IBlankEarthObject_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  QAAOtherObjStateController_IBlankEarthObject_c *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v20; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v24; // x10
  __int64 v25; // x0
  QAAOtherObjStateController_IBlankEarthObject_c *v26; // x8
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

  if ( (byte_4C3FC12 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    sub_1C37058(&Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__);
    sub_1C37058(&QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo);
    sub_1C37058(&Method_UITweener_Begin_TweenScale___);
    byte_4C3FC12 = 1;
  }
  v9 = sub_1C372A4(QAAOtherObjStateController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v11, v12);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v14 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
  if ( *(_WORD *)&targetObject->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
    v16 = sub_1C87870(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 5);
  }
  v17 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v16)(
                                      targetObject,
                                      *(_QWORD *)(v16 + 8));
  if ( isDisp )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v24 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v25 = sub_1C87870(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4);
    }
    LODWORD(v30) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v25)(
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
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v28 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v29 = sub_1C87870(targetObject, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 4);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))*(_QWORD *)v29)(
                     targetObject,
                     *(_QWORD *)(v29 + 8)));
    y = v35;
    z = v36;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
  v10 = UITweener__Begin_object_(v17, time, (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenScale___);
  if ( !v10 )
LABEL_36:
    sub_1C372B4(v10);
  *(float *)&v10[8].klass = x;
  *((float *)&v10[8].klass + 1) = y;
  *(float *)&v10[8].monitor = z;
  *((float *)&v10[8].monitor + 1) = v30;
  *(float *)&v10[9].klass = v32;
  *((float *)&v10[9].klass + 1) = v34;
  LODWORD(v10[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v10[4].monitor;
  v39 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v39,
    (Il2CppObject *)v9,
    Method_QAAOtherObjStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49258620(monitor, v39, 0);
}


void QAAOtherObjStateController__SetState(QAAOtherObjStateController_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C3FC11 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
    byte_4C3FC11 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C372B4(0);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__setState__);
}


void QAAOtherObjStateController__Update(QAAOtherObjStateController_o *this, const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4C3FC10 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
    byte_4C3FC10 = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1C372B4(0);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_332D080 *)Method_CStateManager_QAAOtherObjStateController_IBlankEarthObject__update__);
}


void QAAOtherObjStateController_StateMapMain___ctor(
        QAAOtherObjStateController_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAAOtherObjStateController_StateMapMain__begin(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
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

  if ( (byte_4C3FC13 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC13 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
    v7 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v7)(
         that,
         *(_QWORD *)(v7 + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v11 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v12 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 1);
    }
    v16 = *(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, __int64))v12;
    v15 = *(_QWORD *)(v12 + 8);
    v17 = that;
    v18 = 0;
  }
  else
  {
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v13 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v13 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
      v14 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 3);
    }
    v16 = *(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v18 = 1;
    v17 = that;
  }
  v16(v17, v18, v15);
}


void QAAOtherObjStateController_StateMapMain__end(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateMapMain__update(
        QAAOtherObjStateController_StateMapMain_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3FC14 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateMapMain_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC14 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 7];
  }
  else
  {
LABEL_8:
    v7 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 7);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, _QWORD))v7)(
    that,
    0,
    *(_QWORD *)(v7 + 8));
}


void QAAOtherObjStateController_StateNone___ctor(
        QAAOtherObjStateController_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAAOtherObjStateController_StateNone__begin(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateNone__end(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateNone__update(
        QAAOtherObjStateController_StateNone_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateQaaAnimation___ctor(
        QAAOtherObjStateController_StateQaaAnimation_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C372B4(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAAOtherObjStateController_StateQaaAnimation__begin(
        QAAOtherObjStateController_StateQaaAnimation_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
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

  if ( (byte_4C3FC19 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaAnimation_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC19 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
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
    v7 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 6);
  }
  v8 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v7)(
         that,
         *(_QWORD *)(v7 + 8));
  v9 = sub_1C372A4(System_Action_TypeInfo);
  v10 = that->klass;
  v11 = (System_Action_o *)v9;
  v12 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v13 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_14;
    }
    v14 = (__int64)&v10->vtable[*v13 + 8];
  }
  else
  {
LABEL_14:
    v14 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8);
  }
  System_Action___ctor(v11, (Il2CppObject *)that, *(_QWORD *)(v14 + 8), 0);
  v15 = that->klass;
  v16 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
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
    v18 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 11);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, System_Action_o *, _QWORD))v18)(
    that,
    v8,
    v11,
    *(_QWORD *)(v18 + 8));
}


void QAAOtherObjStateController_StateQaaBase___ctor(
        QAAOtherObjStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C372B4(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAAOtherObjStateController_StateQaaBase__begin(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateQaaBase__end(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateQaaBase__update(
        QAAOtherObjStateController_StateQaaBase_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  ;
}


void QAAOtherObjStateController_StateQaaDisp___ctor(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C372B4(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAAOtherObjStateController_StateQaaDisp__begin(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_StateQaaDisp_o *v4; // x20
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
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
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4C3FC17 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC17 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v6 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 9];
  }
  else
  {
LABEL_8:
    v8 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9);
  }
  v9 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v8)(
         that,
         *(_QWORD *)(v8 + 8));
  if ( v9 == 1 )
  {
    v17 = that->klass;
    v18 = *(unsigned __int16 *)&that->klass->_2.rank;
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v19 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19 + 8];
    }
    else
    {
LABEL_21:
      v20 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v20)(that, *(_QWORD *)(v20 + 8));
  }
  else if ( !v9 )
  {
    Duration = v4->fields.Duration;
    v11 = sub_1C372A4(System_Action_TypeInfo);
    v12 = that->klass;
    v13 = (System_Action_o *)v11;
    v14 = *(unsigned __int16 *)&that->klass->_2.rank;
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v15 = &v12->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v15 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v12->vtable[*v15 + 8];
    }
    else
    {
LABEL_16:
      v16 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8);
    }
    System_Action___ctor(v13, (Il2CppObject *)that, *(_QWORD *)(v16 + 8), 0);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 1, Duration, v13, v21);
  }
}


void QAAOtherObjStateController_StateQaaDisp__end(
        QAAOtherObjStateController_StateQaaDisp_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3FC18 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaDisp_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC18 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 10];
  }
  else
  {
LABEL_8:
    v7 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, __int64, _QWORD))v7)(
    that,
    1,
    *(_QWORD *)(v7 + 8));
}


void QAAOtherObjStateController_StateQaaHide___ctor(
        QAAOtherObjStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  float v6; // s0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !this )
    sub_1C372B4(v5);
  v6 = 0.5;
  if ( isQuick )
    v6 = 0.0;
  this->fields.Duration = v6;
}


void QAAOtherObjStateController_StateQaaHide__begin(
        QAAOtherObjStateController_StateQaaHide_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_StateQaaHide_o *v4; // x20
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
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
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4C3FC15 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC15 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v6 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 9];
  }
  else
  {
LABEL_8:
    v8 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 9);
  }
  v9 = (*(__int64 (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v8)(
         that,
         *(_QWORD *)(v8 + 8));
  if ( v9 == 1 )
  {
    Duration = v4->fields.Duration;
    v15 = sub_1C372A4(System_Action_TypeInfo);
    v16 = that->klass;
    v17 = (System_Action_o *)v15;
    v18 = *(unsigned __int16 *)&that->klass->_2.rank;
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v19 = &v16->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v19 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v16->vtable[*v19 + 8];
    }
    else
    {
LABEL_21:
      v20 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8);
    }
    System_Action___ctor(v17, (Il2CppObject *)that, *(_QWORD *)(v20 + 8), 0);
    QAAOtherObjStateController__SetQaaScaleAnim(that, 0, Duration, v17, v21);
  }
  else if ( !v9 )
  {
    v10 = that->klass;
    v11 = *(unsigned __int16 *)&that->klass->_2.rank;
    if ( *(_WORD *)&that->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)v12 - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12 + 8];
    }
    else
    {
LABEL_16:
      v13 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 8);
    }
    (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD))v13)(that, *(_QWORD *)(v13 + 8));
  }
}


void QAAOtherObjStateController_StateQaaHide__end(
        QAAOtherObjStateController_StateQaaHide_o *this,
        QAAOtherObjStateController_IBlankEarthObject_o *that,
        const MethodInfo *method)
{
  QAAOtherObjStateController_IBlankEarthObject_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3FC16 & 1) == 0 )
  {
    this = (QAAOtherObjStateController_StateQaaHide_o *)sub_1C37058(&QAAOtherObjStateController_IBlankEarthObject_TypeInfo);
    byte_4C3FC16 = 1;
  }
  if ( !that )
    sub_1C372B4(this);
  klass = that->klass;
  v5 = *(unsigned __int16 *)&that->klass->_2.rank;
  if ( *(_WORD *)&that->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAAOtherObjStateController_IBlankEarthObject_c **)p_offset - 1) != QAAOtherObjStateController_IBlankEarthObject_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 10];
  }
  else
  {
LABEL_8:
    v7 = sub_1C87870(that, QAAOtherObjStateController_IBlankEarthObject_TypeInfo, 10);
  }
  (*(void (__fastcall **)(QAAOtherObjStateController_IBlankEarthObject_o *, _QWORD, _QWORD))v7)(
    that,
    0,
    *(_QWORD *)(v7 + 8));
}


void QAAOtherObjStateController___c__DisplayClass8_0___ctor(
        QAAOtherObjStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QAAOtherObjStateController___c__DisplayClass8_0___SetQaaScaleAnim_b__0(
        QAAOtherObjStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}
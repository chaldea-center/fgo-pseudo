void SpringPosition___ctor(SpringPosition_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  this->fields.strength = 10.0;
  *(_QWORD *)&this->fields.target.fields.x = v4;
  this->fields.target.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SpringPosition_o *SpringPosition__Begin(
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector3_o pos,
        float strength,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_GameObject_o *v8; // x20
  char *Component_object; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = go;
  if ( (byte_4C3C233 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_SpringPosition___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SpringPosition___);
    go = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C233 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                               v8,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_SpringPosition___);
    Component_object = (char *)go;
  }
  if ( !Component_object )
LABEL_12:
    sub_1C32E7C(go);
  *((float *)Component_object + 8) = x;
  *((float *)Component_object + 9) = y;
  *((float *)Component_object + 10) = z;
  *((float *)Component_object + 11) = strength;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(Component_object + 56), 0, v10, v11);
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
  {
    *((_DWORD *)Component_object + 22) = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  }
  return (SpringPosition_o *)Component_object;
}


void SpringPosition__NotifyListeners(SpringPosition_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct SpringPosition_OnFinished_o *onFinished; // x8
  UnityEngine_Object_o *eventReceiver; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C3C232 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SpringPosition_TypeInfo);
    byte_4C3C232 = 1;
  }
  SpringPosition_TypeInfo->static_fields->current = this;
  sub_1C32BC4((CGThumbnailListItem_o *)SpringPosition_TypeInfo->static_fields, (int32_t)this, v2, v3);
  onFinished = this->fields.onFinished;
  if ( onFinished )
    ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
      onFinished->fields.method_code,
      onFinished->fields.method);
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
  {
    v9 = this->fields.eventReceiver;
    if ( !v9 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SendMessage_71204432(v9, this->fields.callWhenFinished, (Il2CppObject *)this, 1, 0);
  }
  SpringPosition_TypeInfo->static_fields->current = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)SpringPosition_TypeInfo->static_fields, 0, v7, v8);
}


void SpringPosition__Start(SpringPosition_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3C230 & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C230 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  if ( this->fields.updateScrollView )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v7 = NGUITools__FindInParents_object_(
           gameObject,
           (const MethodInfo_31676B4 *)Method_NGUITools_FindInParents_UIScrollView___);
    this->fields.mSv = (struct UIScrollView_o *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSv, (int32_t)v7, v8, v9);
  }
}


void SpringPosition__Update(SpringPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  float deltaTime; // s0
  float v5; // s8
  float mThreshold; // s0
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_Transform_o *v10; // x20
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  const MethodInfo *v15; // x1
  float v16; // s9
  float v17; // s10
  float v18; // s11
  UnityEngine_Transform_o *v19; // x20
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float v23; // s11
  UnityEngine_Object_o *mSv; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C231 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C231 = 1;
  }
  if ( this->fields.ignoreTimeScale )
    deltaTime = RealTime__get_deltaTime(0);
  else
    deltaTime = UnityEngine_Time__get_deltaTime(0);
  v5 = deltaTime;
  mThreshold = this->fields.mThreshold;
  if ( this->fields.worldSpace )
  {
    if ( mThreshold == 0.0 )
    {
      mTrans = this->fields.mTrans;
      if ( !mTrans )
        goto LABEL_30;
      y = this->fields.target.fields.y;
      z = this->fields.target.fields.z;
      x = this->fields.target.fields.x;
      position = UnityEngine_Transform__get_position(mTrans, 0);
      this->fields.mThreshold = (float)((float)((float)(z - position.fields.z) * (float)(z - position.fields.z))
                                      + (float)((float)((float)(x - position.fields.x) * (float)(x - position.fields.x))
                                              + (float)((float)(y - position.fields.y) * (float)(y - position.fields.y))))
                              * 0.001;
    }
    v10 = this->fields.mTrans;
    if ( v10 )
    {
      v26 = UnityEngine_Transform__get_position(this->fields.mTrans, 0);
      v27 = NGUIMath__SpringLerp_49258892(v26, this->fields.target, this->fields.strength, v5, 0);
      UnityEngine_Transform__set_position(v10, v27, 0);
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        v12 = this->fields.target.fields.y;
        v11 = this->fields.target.fields.z;
        v13 = this->fields.target.fields.x;
        v14 = this->fields.mThreshold;
        v28 = UnityEngine_Transform__get_position(mTrans, 0);
        if ( v14 < (float)((float)((float)(v11 - v28.fields.z) * (float)(v11 - v28.fields.z))
                         + (float)((float)((float)(v13 - v28.fields.x) * (float)(v13 - v28.fields.x))
                                 + (float)((float)(v12 - v28.fields.y) * (float)(v12 - v28.fields.y)))) )
          goto LABEL_24;
        mTrans = this->fields.mTrans;
        if ( !mTrans )
          goto LABEL_30;
        UnityEngine_Transform__set_position(mTrans, this->fields.target, 0);
        goto LABEL_23;
      }
    }
LABEL_30:
    sub_1C32E7C(mTrans);
  }
  if ( mThreshold == 0.0 )
  {
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_30;
    v17 = this->fields.target.fields.y;
    v16 = this->fields.target.fields.z;
    v18 = this->fields.target.fields.x;
    localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
    this->fields.mThreshold = (float)((float)((float)(v16 - localPosition.fields.z)
                                            * (float)(v16 - localPosition.fields.z))
                                    + (float)((float)((float)(v18 - localPosition.fields.x)
                                                    * (float)(v18 - localPosition.fields.x))
                                            + (float)((float)(v17 - localPosition.fields.y)
                                                    * (float)(v17 - localPosition.fields.y))))
                            * 0.00001;
  }
  v19 = this->fields.mTrans;
  if ( !v19 )
    goto LABEL_30;
  v30 = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v31 = NGUIMath__SpringLerp_49258892(v30, this->fields.target, this->fields.strength, v5, 0);
  UnityEngine_Transform__set_localPosition(v19, v31, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_30;
  v21 = this->fields.target.fields.y;
  v20 = this->fields.target.fields.z;
  v22 = this->fields.target.fields.x;
  v23 = this->fields.mThreshold;
  v32 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  if ( v23 < (float)((float)((float)(v20 - v32.fields.z) * (float)(v20 - v32.fields.z))
                   + (float)((float)((float)(v22 - v32.fields.x) * (float)(v22 - v32.fields.x))
                           + (float)((float)(v21 - v32.fields.y) * (float)(v21 - v32.fields.y)))) )
    goto LABEL_24;
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(mTrans, this->fields.target, 0);
LABEL_23:
  SpringPosition__NotifyListeners(this, v15);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
LABEL_24:
  mSv = (UnityEngine_Object_o *)this->fields.mSv;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSv, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.mSv;
    if ( mTrans )
    {
      ((void (__fastcall *)(UnityEngine_Transform_o *, __int64, _QWORD))mTrans->klass[1]._1.this_arg.data)(
        mTrans,
        1,
        *(_QWORD *)&mTrans->klass[1]._1.this_arg.bits);
      return;
    }
    goto LABEL_30;
  }
}


void SpringPosition_OnFinished___ctor(
        SpringPosition_OnFinished_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7EF60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7EF20;
}


System_IAsyncResult_o *SpringPosition_OnFinished__BeginInvoke(
        SpringPosition_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void SpringPosition_OnFinished__EndInvoke(
        SpringPosition_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void SpringPosition_OnFinished__Invoke(SpringPosition_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
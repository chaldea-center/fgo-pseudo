void SpringPosition___ctor(SpringPosition_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = go;
  if ( (byte_4D3108D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_SpringPosition___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SpringPosition___);
    go = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3108D = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                               v8,
                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_SpringPosition___);
    Component_object = (char *)go;
  }
  if ( !Component_object )
LABEL_12:
    sub_1C942F0(go, method);
  *((float *)Component_object + 8) = x;
  *((float *)Component_object + 9) = y;
  *((float *)Component_object + 10) = z;
  *((float *)Component_object + 11) = strength;
  *((_QWORD *)Component_object + 7) = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(Component_object + 56), 0, v10, v11, v12, v13, v14, v15);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SpringPosition_OnFinished_o *onFinished; // x8
  UnityEngine_Object_o *eventReceiver; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_4D3108C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SpringPosition_TypeInfo);
    byte_4D3108C = 1;
  }
  SpringPosition_TypeInfo->static_fields->current = this;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SpringPosition_TypeInfo->static_fields,
    (int32_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    v18 = this->fields.eventReceiver;
    if ( !v18 )
      sub_1C942F0(0, v17);
    UnityEngine_GameObject__SendMessage_72091256(v18, this->fields.callWhenFinished, (Il2CppObject *)this, 1, 0);
  }
  SpringPosition_TypeInfo->static_fields->current = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)SpringPosition_TypeInfo->static_fields, 0, v11, v12, v13, v14, v15, v16);
}


void SpringPosition__Start(SpringPosition_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D3108A & 1) == 0 )
  {
    sub_1C94098(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D3108A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  if ( this->fields.updateScrollView )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v11 = NGUITools__FindInParents_object_(
            gameObject,
            (const MethodInfo_32274D4 *)Method_NGUITools_FindInParents_UIScrollView___);
    this->fields.mSv = (struct UIScrollView_o *)v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSv, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
}


void SpringPosition__Update(SpringPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  __int64 v4; // x1
  float deltaTime; // s0
  float v6; // s8
  float mThreshold; // s0
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_Transform_o *v11; // x20
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  const MethodInfo *v16; // x1
  float v17; // s9
  float v18; // s10
  float v19; // s11
  UnityEngine_Transform_o *v20; // x20
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UnityEngine_Object_o *mSv; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3108B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3108B = 1;
  }
  if ( this->fields.ignoreTimeScale )
    deltaTime = RealTime__get_deltaTime(0);
  else
    deltaTime = UnityEngine_Time__get_deltaTime(0);
  v6 = deltaTime;
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
    v11 = this->fields.mTrans;
    if ( v11 )
    {
      v27 = UnityEngine_Transform__get_position(this->fields.mTrans, 0);
      v28 = NGUIMath__SpringLerp_49992652(v27, this->fields.target, this->fields.strength, v6, 0);
      UnityEngine_Transform__set_position(v11, v28, 0);
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        v13 = this->fields.target.fields.y;
        v12 = this->fields.target.fields.z;
        v14 = this->fields.target.fields.x;
        v15 = this->fields.mThreshold;
        v29 = UnityEngine_Transform__get_position(mTrans, 0);
        if ( v15 < (float)((float)((float)(v12 - v29.fields.z) * (float)(v12 - v29.fields.z))
                         + (float)((float)((float)(v14 - v29.fields.x) * (float)(v14 - v29.fields.x))
                                 + (float)((float)(v13 - v29.fields.y) * (float)(v13 - v29.fields.y)))) )
          goto LABEL_24;
        mTrans = this->fields.mTrans;
        if ( !mTrans )
          goto LABEL_30;
        UnityEngine_Transform__set_position(mTrans, this->fields.target, 0);
        goto LABEL_23;
      }
    }
LABEL_30:
    sub_1C942F0(mTrans, v4);
  }
  if ( mThreshold == 0.0 )
  {
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_30;
    v18 = this->fields.target.fields.y;
    v17 = this->fields.target.fields.z;
    v19 = this->fields.target.fields.x;
    localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
    this->fields.mThreshold = (float)((float)((float)(v17 - localPosition.fields.z)
                                            * (float)(v17 - localPosition.fields.z))
                                    + (float)((float)((float)(v19 - localPosition.fields.x)
                                                    * (float)(v19 - localPosition.fields.x))
                                            + (float)((float)(v18 - localPosition.fields.y)
                                                    * (float)(v18 - localPosition.fields.y))))
                            * 0.00001;
  }
  v20 = this->fields.mTrans;
  if ( !v20 )
    goto LABEL_30;
  v31 = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v32 = NGUIMath__SpringLerp_49992652(v31, this->fields.target, this->fields.strength, v6, 0);
  UnityEngine_Transform__set_localPosition(v20, v32, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_30;
  v22 = this->fields.target.fields.y;
  v21 = this->fields.target.fields.z;
  v23 = this->fields.target.fields.x;
  v24 = this->fields.mThreshold;
  v33 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  if ( v24 < (float)((float)((float)(v21 - v33.fields.z) * (float)(v21 - v33.fields.z))
                   + (float)((float)((float)(v23 - v33.fields.x) * (float)(v23 - v33.fields.x))
                           + (float)((float)(v22 - v33.fields.y) * (float)(v22 - v33.fields.y)))) )
    goto LABEL_24;
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(mTrans, this->fields.target, 0);
LABEL_23:
  SpringPosition__NotifyListeners(this, v16);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AD083C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AD07FC;
}


System_IAsyncResult_o *SpringPosition_OnFinished__BeginInvoke(
        SpringPosition_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void SpringPosition_OnFinished__EndInvoke(
        SpringPosition_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SpringPosition_OnFinished__Invoke(SpringPosition_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
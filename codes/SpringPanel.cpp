void SpringPanel___ctor(SpringPanel_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4E70C99 )
  {
    sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  this->fields.strength = 10.0;
  *(_QWORD *)&this->fields.target.fields.x = v4;
  this->fields.target.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpringPanel__AdvanceTowardsPosition(SpringPanel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float unscaledDeltaTime; // s0
  UnityEngine_Transform_o *mTrans; // x0
  float v6; // s10
  float x; // s8
  float y; // s9
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  float v15; // s10
  float v16; // s11
  float z; // s12
  float v18; // s14
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Object_o *mDrag; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7BF49 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SpringPanel_TypeInfo);
    byte_4E7BF49 = 1;
  }
  unscaledDeltaTime = UnityEngine_Time__get_unscaledDeltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v6 = unscaledDeltaTime;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v41 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v42 = NGUIMath__SpringLerp_50702408(v41, this->fields.target, this->fields.strength, v6, 0);
  v15 = this->fields.target.fields.x;
  v16 = this->fields.target.fields.y;
  z = this->fields.target.fields.z;
  v18 = (float)((float)((float)(v42.fields.x - v15) * (float)(v42.fields.x - v15))
              + (float)((float)(v42.fields.y - v16) * (float)(v42.fields.y - v16)))
      + (float)((float)(v42.fields.z - z) * (float)(v42.fields.z - z));
  if ( v18 >= 0.01 )
  {
    z = v42.fields.z;
    v16 = v42.fields.y;
    v15 = v42.fields.x;
  }
  else
  {
    SpringPanel_TypeInfo->static_fields->current = this;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    SpringPanel_TypeInfo->static_fields->current = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v19, v20, v21, v22, v23, v24);
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v43.fields.x = v15;
  v43.fields.y = v16;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition(mTrans, v43, 0);
  mTrans = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mTrans )
    goto LABEL_20;
  v39.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(v15 - x);
  v39.fields.y = *(float *)&mTrans[14].klass - (float)(v16 - y);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v39, 0);
  mDrag = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDrag, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.mDrag;
    if ( !mTrans )
      goto LABEL_20;
    ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD))mTrans->klass[1]._1.this_arg.data)(
      mTrans,
      0,
      *(_QWORD *)&mTrans->klass[1]._1.this_arg.bits);
  }
  if ( v18 < 0.01 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = this;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v33, v34, v35, v36, v37, v38);
      return;
    }
LABEL_20:
    sub_1D0F30C(mTrans, v3);
  }
}


SpringPanel_o *SpringPanel__Begin(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x8
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = go;
  if ( (byte_4E7BF4A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)sub_1D0F0B4(&SpringPanel_TypeInfo);
    byte_4E7BF4A = 1;
  }
  if ( !v8 )
LABEL_15:
    sub_1D0F30C(go, method);
  Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                               v8,
                               (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    Component_object = (char *)go;
    if ( !go )
      goto LABEL_15;
  }
  else
  {
    if ( !Component_object )
      goto LABEL_15;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
    {
      SpringPanel_TypeInfo->static_fields->current = (struct SpringPanel_o *)Component_object;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
        (int32_t)Component_object,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v22 = *((_QWORD *)Component_object + 7);
      if ( v22 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 24))(*(_QWORD *)(v22 + 64), *(_QWORD *)(v22 + 40));
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v16, v17, v18, v19, v20, v21);
    }
  }
  *((float *)Component_object + 8) = x;
  *((float *)Component_object + 9) = y;
  *((float *)Component_object + 10) = z;
  *((float *)Component_object + 11) = strength;
  *((_QWORD *)Component_object + 6) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(Component_object + 48), 0, v10, v11, v12, v13, v14, v15);
  *((_QWORD *)Component_object + 7) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(Component_object + 56), 0, v23, v24, v25, v26, v27, v28);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  return (SpringPanel_o *)Component_object;
}


void SpringPanel__OnDisable(SpringPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct SpringPanel_OnFinished_o *onCanceled; // x8
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4E7BF48 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SpringPanel_TypeInfo);
    byte_4E7BF48 = 1;
  }
  if ( this->fields.onCanceled )
  {
    current = (UnityEngine_Object_o *)SpringPanel_TypeInfo->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      SpringPanel_TypeInfo->static_fields->current = this;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
        (int32_t)this,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9);
      onCanceled = this->fields.onCanceled;
      if ( !onCanceled )
        sub_1D0F30C(v10, v11);
      ((void (__fastcall *)(intptr_t, intptr_t))onCanceled->fields.invoke_impl)(
        onCanceled->fields.method_code,
        onCanceled->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v13, v14, v15, v16, v17, v18);
    }
  }
}


void SpringPanel__Start(SpringPanel_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4E7BF47 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    byte_4E7BF47 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mDrag = (struct UIScrollView_o *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mDrag, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v18, v19, v20, v21, v22, v23);
}


void SpringPanel__Update(SpringPanel_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(SpringPanel_o *, const MethodInfo *))this->klass->vtable._4_AdvanceTowardsPosition.methodPtr)(
    this,
    this->klass->vtable._4_AdvanceTowardsPosition.method);
}


void SpringPanel_OnFinished___ctor(
        SpringPanel_OnFinished_o *this,
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
  sub_1D0F058(
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
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B44DF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B44DB0;
}


System_IAsyncResult_o *SpringPanel_OnFinished__BeginInvoke(
        SpringPanel_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1D0F068(this, &v5, callback, object);
}


void SpringPanel_OnFinished__EndInvoke(
        SpringPanel_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void SpringPanel_OnFinished__Invoke(SpringPanel_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
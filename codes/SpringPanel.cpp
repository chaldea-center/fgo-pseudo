void SpringPanel___ctor(SpringPanel_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
  float x; // s10
  float y; // s11
  float z; // s12
  float v10; // s14
  UnityEngine_Object_o *mDrag; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v26; // 0:kr20_12.12
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35237 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_TypeInfo);
    byte_4D35237 = 1;
  }
  unscaledDeltaTime = UnityEngine_Time__get_unscaledDeltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v6 = unscaledDeltaTime;
  localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v29 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v26 = NGUIMath__SpringLerp_50025236(v29, this->fields.target, this->fields.strength, v6, 0);
  x = this->fields.target.fields.x;
  y = this->fields.target.fields.y;
  z = this->fields.target.fields.z;
  v10 = (float)((float)((float)(v26.fields.x - x) * (float)(v26.fields.x - x))
              + (float)((float)(v26.fields.y - y) * (float)(v26.fields.y - y)))
      + (float)((float)(v26.fields.z - z) * (float)(v26.fields.z - z));
  if ( v10 >= 0.01 )
  {
    z = v26.fields.z;
    y = v26.fields.y;
    x = v26.fields.x;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  UnityEngine_Transform__set_localPosition(mTrans, v28, 0);
  mTrans = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mTrans )
    goto LABEL_20;
  v27.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(x - *(float *)&localPosition);
  v27.fields.y = *(float *)&mTrans[14].klass - (float)(y - *((float *)&localPosition + 1));
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v27, 0);
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
  if ( v10 < 0.01 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = this;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_20:
    sub_1C93D2C(mTrans, v3);
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
  UnityEngine_GameObject_o *v8; // x19
  char *Component_object; // x20
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
  if ( (byte_4D35238 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    go = (UnityEngine_GameObject_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35238 = 1;
  }
  if ( !v8 )
    goto LABEL_10;
  Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                               v8,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    Component_object = (char *)go;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C93D2C(go, method);
  *((float *)Component_object + 8) = x;
  *((float *)Component_object + 9) = y;
  *((float *)Component_object + 10) = z;
  *((float *)Component_object + 11) = strength;
  *((_QWORD *)Component_object + 6) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(Component_object + 48), 0, v10, v11, v12, v13, v14, v15);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  return (SpringPanel_o *)Component_object;
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

  if ( (byte_4D35236 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    byte_4D35236 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mDrag = (struct UIScrollView_o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mDrag, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v18, v19, v20, v21, v22, v23);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AD0238;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AD01F8;
}


System_IAsyncResult_o *SpringPanel_OnFinished__BeginInvoke(
        SpringPanel_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void SpringPanel_OnFinished__EndInvoke(
        SpringPanel_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void SpringPanel_OnFinished__Invoke(SpringPanel_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
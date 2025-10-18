void SpringPanel___ctor(SpringPanel_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
  float unscaledDeltaTime; // s0
  UnityEngine_Transform_o *mTrans; // x0
  float v5; // s10
  float x; // s8
  float y; // s9
  float v8; // s10
  float v9; // s11
  float z; // s12
  float v11; // s14
  UnityEngine_Object_o *mDrag; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47736 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SpringPanel_TypeInfo);
    byte_4C47736 = 1;
  }
  unscaledDeltaTime = UnityEngine_Time__get_unscaledDeltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v5 = unscaledDeltaTime;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v20 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v21 = NGUIMath__SpringLerp_49302004(v20, this->fields.target, this->fields.strength, v5, 0);
  v8 = this->fields.target.fields.x;
  v9 = this->fields.target.fields.y;
  z = this->fields.target.fields.z;
  v11 = (float)((float)((float)(v21.fields.x - v8) * (float)(v21.fields.x - v8))
              + (float)((float)(v21.fields.y - v9) * (float)(v21.fields.y - v9)))
      + (float)((float)(v21.fields.z - z) * (float)(v21.fields.z - z));
  if ( v11 >= 0.01 )
  {
    z = v21.fields.z;
    v9 = v21.fields.y;
    v8 = v21.fields.x;
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_20;
  v22.fields.x = v8;
  v22.fields.y = v9;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(mTrans, v22, 0);
  mTrans = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mTrans )
    goto LABEL_20;
  v18.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(v8 - x);
  v18.fields.y = *(float *)&mTrans[14].klass - (float)(v9 - y);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v18, 0);
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
  if ( v11 < 0.01 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = this;
    sub_1C36FFC((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, (int32_t)this, v13, v14);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, 0, v16, v17);
      return;
    }
LABEL_20:
    sub_1C372B4(mTrans);
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
  const MethodInfo *v11; // x3

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v8 = go;
  if ( (byte_4C47737 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    go = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47737 = 1;
  }
  if ( !v8 )
    goto LABEL_10;
  Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                               v8,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_SpringPanel___);
    Component_object = (char *)go;
  }
  if ( !Component_object )
LABEL_10:
    sub_1C372B4(go);
  *((float *)Component_object + 8) = x;
  *((float *)Component_object + 9) = y;
  *((float *)Component_object + 10) = z;
  *((float *)Component_object + 11) = strength;
  *((_QWORD *)Component_object + 6) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(Component_object + 48), 0, v10, v11);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  return (SpringPanel_o *)Component_object;
}


void SpringPanel__Start(SpringPanel_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C47735 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    byte_4C47735 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mDrag = (struct UIScrollView_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mDrag, (int32_t)v6, v7, v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v10, v11);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8270C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A826CC;
}


System_IAsyncResult_o *SpringPanel_OnFinished__BeginInvoke(
        SpringPanel_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void SpringPanel_OnFinished__EndInvoke(
        SpringPanel_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void SpringPanel_OnFinished__Invoke(SpringPanel_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
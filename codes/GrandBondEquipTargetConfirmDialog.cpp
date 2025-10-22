void GrandBondEquipTargetConfirmDialog___ctor(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C595D7 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C595D7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandBondEquipTargetConfirmDialog__Awake(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandBondEquipTargetConfirmDialog__Callback(
        GrandBondEquipTargetConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v5; // x20
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void GrandBondEquipTargetConfirmDialog__Close(
        GrandBondEquipTargetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void GrandBondEquipTargetConfirmDialog__OnClickBond(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 1, v2);
}


void GrandBondEquipTargetConfirmDialog__OnClickCancel(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 2, v2);
}


void GrandBondEquipTargetConfirmDialog__OnClickNormal(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 0, v2);
}


void GrandBondEquipTargetConfirmDialog__OnEnable(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C595D6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15648/*"Window/Buttons/CancelButton"*/);
    byte_4C595D6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_15648/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandBondEquipTargetConfirmDialog__Open(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandBondEquipTargetConfirmDialog__add_callbackFunc(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandBondEquipTargetConfirmDialog_o *v11; // x0
  GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C595D4 & 1) == 0 )
  {
    sub_1C3E564(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_4C595D4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandBondEquipTargetConfirmDialog_CallbackFunc_c *)v8->klass != GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  GrandBondEquipTargetConfirmDialog__remove_callbackFunc(v11, v12, v13);
}


void GrandBondEquipTargetConfirmDialog__remove_callbackFunc(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandBondEquipTargetConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C595D5 & 1) == 0 )
  {
    sub_1C3E564(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_4C595D5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandBondEquipTargetConfirmDialog_CallbackFunc_c *)v8->klass != GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  GrandBondEquipTargetConfirmDialog__Awake(v11, v12);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc___ctor(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A85004;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A84FBC;
}


System_IAsyncResult_o *GrandBondEquipTargetConfirmDialog_CallbackFunc__BeginInvoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C595D8 & 1) == 0 )
  {
    sub_1C3E564(&GrandBondEquipTargetConfirmDialog_Result_TypeInfo);
    byte_4C595D8 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             GrandBondEquipTargetConfirmDialog_Result_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc__EndInvoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc__Invoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}
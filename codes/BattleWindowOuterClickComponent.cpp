void BattleWindowOuterClickComponent___ctor(BattleWindowOuterClickComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleWindowOuterClickComponent__OnClick(BattleWindowOuterClickComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetWindow; // x20
  __int64 v4; // x1
  BattleWindowComponent_o *v5; // x0
  struct BattleWindowOuterClickComponent_OuterClickCall_o *clickCallBack; // x8

  if ( (byte_4CB9AF3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9AF3 = 1;
  }
  targetWindow = (UnityEngine_Object_o *)this->fields.targetWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetWindow, 0, 0) )
    goto LABEL_8;
  v5 = this->fields.targetWindow;
  if ( !v5 )
    sub_1C6BC60(0, v4);
  if ( !BattleWindowComponent__isOpening(v5, 0) )
  {
LABEL_8:
    clickCallBack = this->fields.clickCallBack;
    if ( clickCallBack )
      ((void (__fastcall *)(intptr_t, intptr_t))clickCallBack->fields.invoke_impl)(
        clickCallBack->fields.method_code,
        clickCallBack->fields.method);
  }
}


void BattleWindowOuterClickComponent__SetTargetWindow(
        BattleWindowOuterClickComponent_o *this,
        BattleWindowComponent_o *window,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetWindow = window;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetWindow, (int32_t)window, (int32_t)method, v3);
}


void BattleWindowOuterClickComponent__setClickCallBack(
        BattleWindowOuterClickComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.clickCallBack = call;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickCallBack, (int32_t)call, (int32_t)method, v3);
}


void BattleWindowOuterClickComponent_OuterClickCall___ctor(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA5F70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1AA5F30;
}


System_IAsyncResult_o *BattleWindowOuterClickComponent_OuterClickCall__BeginInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void BattleWindowOuterClickComponent_OuterClickCall__EndInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void BattleWindowOuterClickComponent_OuterClickCall__Invoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
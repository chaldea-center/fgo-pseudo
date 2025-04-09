void __fastcall BattleWindowOuterClickComponent___ctor(
        BattleWindowOuterClickComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleWindowOuterClickComponent__OnClick(
        BattleWindowOuterClickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetWindow; // x20
  __int64 v4; // x1
  BattleWindowComponent_o *v5; // x0
  struct BattleWindowOuterClickComponent_OuterClickCall_o *clickCallBack; // x8

  if ( (byte_49BE28E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE28E = 1;
  }
  targetWindow = (UnityEngine_Object_o *)this->fields.targetWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetWindow, 0LL, 0LL) )
    goto LABEL_8;
  v5 = this->fields.targetWindow;
  if ( !v5 )
    sub_1B4D1EC(0LL, v4);
  if ( !BattleWindowComponent__isOpening(v5, 0LL) )
  {
LABEL_8:
    clickCallBack = this->fields.clickCallBack;
    if ( clickCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickCallBack->fields.m_target)(
        clickCallBack->fields.original_method_info,
        *(_QWORD *)&clickCallBack->fields.extra_arg);
  }
}


void __fastcall BattleWindowOuterClickComponent__SetTargetWindow(
        BattleWindowOuterClickComponent_o *this,
        BattleWindowComponent_o *window,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetWindow = window;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.targetWindow, (int32_t)window, (int32_t)method, v3);
}


void __fastcall BattleWindowOuterClickComponent__setClickCallBack(
        BattleWindowOuterClickComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.clickCallBack = call;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickCallBack, (int32_t)call, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowOuterClickComponent_OuterClickCall___ctor(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A0468;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19A0428;
}


System_IAsyncResult_o *__fastcall BattleWindowOuterClickComponent_OuterClickCall__BeginInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B4CF44(this, &v5, callback, object);
}


void __fastcall BattleWindowOuterClickComponent_OuterClickCall__EndInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall BattleWindowOuterClickComponent_OuterClickCall__Invoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}
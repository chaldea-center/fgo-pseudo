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
  struct BattleWindowOuterClickComponent_OuterClickCall_o *clickCallBack; // x8

  clickCallBack = this->fields.clickCallBack;
  if ( clickCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickCallBack->fields.m_target)(
      clickCallBack->fields.original_method_info,
      *(_QWORD *)&clickCallBack->fields.extra_arg);
}


void __fastcall BattleWindowOuterClickComponent__setClickCallBack(
        BattleWindowOuterClickComponent_o *this,
        BattleWindowOuterClickComponent_OuterClickCall_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.clickCallBack = call;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickCallBack, (int32_t)call, (int32_t)method, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AFD74;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19AFD34;
}


System_IAsyncResult_o *__fastcall BattleWindowOuterClickComponent_OuterClickCall__BeginInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall BattleWindowOuterClickComponent_OuterClickCall__EndInvoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall BattleWindowOuterClickComponent_OuterClickCall__Invoke(
        BattleWindowOuterClickComponent_OuterClickCall_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}
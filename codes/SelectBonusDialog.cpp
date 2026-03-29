void SelectBonusDialog___ctor(SelectBonusDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B053 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B053 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectBonusDialog__Awake(SelectBonusDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectBonusDialog__Close(SelectBonusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectBonusDialog__Close_32824224(this, 0, v2);
}


void SelectBonusDialog__Close_32824224(SelectBonusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4D2B051 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__);
    sub_1C93AD4(&SelectBonusDialog___c__DisplayClass10_0_TypeInfo);
    byte_4D2B051 = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(SelectBonusDialog___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C93A78(&v5[1].monitor, callback);
  this->fields.state = 3;
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void SelectBonusDialog__ExecClickedFunc(SelectBonusDialog_o *this, int32_t index, const MethodInfo *method)
{
  struct SelectBonusDialog_CallbackFunc_o *clickedFunc; // x8
  struct SelectBonusDialog_CallbackFunc_o **p_clickedFunc; // x19

  p_clickedFunc = &this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      index,
      clickedFunc->fields.method);
  *p_clickedFunc = 0;
  sub_1C93A78(p_clickedFunc, 0);
}


void SelectBonusDialog__Init(SelectBonusDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectBonusDialog__OnClickIndexButton(SelectBonusDialog_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2B052 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SelectBonusDialog_OnClickIndexButton__);
    byte_4D2B052 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectBonusDialog_OnClickIndexButton__;
    if ( (*((_BYTE *)Method_SelectBonusDialog_OnClickIndexButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_SelectBonusDialog_OnClickIndexButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    SelectBonusDialog__ExecClickedFunc(this, index, v7);
  }
}


void SelectBonusDialog__Open(
        SelectBonusDialog_o *this,
        SelectBonusDialog_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4D2B050 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SelectBonusDialog__Open_b__8_0__);
    byte_4D2B050 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.clickedFunc = clickedAction;
  sub_1C93A78(&this->fields.clickedFunc, clickedAction);
  this->fields.state = 1;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectBonusDialog__Open_b__8_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0, 0);
}


void SelectBonusDialog___Open_b__8_0(SelectBonusDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SelectBonusDialog__add_clickedFunc(
        SelectBonusDialog_o *this,
        SelectBonusDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectBonusDialog_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectBonusDialog_CallbackFunc_o *clickedFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectBonusDialog_o *v11; // x0
  SelectBonusDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B04E & 1) == 0 )
  {
    sub_1C93AD4(&SelectBonusDialog_CallbackFunc_TypeInfo);
    byte_4D2B04E = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectBonusDialog_CallbackFunc_c *)v8->klass != SelectBonusDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusDialog_o *)sub_1C940C8(v8);
  SelectBonusDialog__remove_clickedFunc(v11, v12, v13);
}


void SelectBonusDialog__remove_clickedFunc(
        SelectBonusDialog_o *this,
        SelectBonusDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectBonusDialog_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectBonusDialog_CallbackFunc_o *clickedFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectBonusDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B04F & 1) == 0 )
  {
    sub_1C93AD4(&SelectBonusDialog_CallbackFunc_TypeInfo);
    byte_4D2B04F = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectBonusDialog_CallbackFunc_c *)v8->klass != SelectBonusDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusDialog_o *)sub_1C940C8(v8);
  SelectBonusDialog__Awake(v11, v12);
}


void SelectBonusDialog_CallbackFunc___ctor(
        SelectBonusDialog_CallbackFunc_o *this,
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
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0098;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0050;
}


System_IAsyncResult_o *SelectBonusDialog_CallbackFunc__BeginInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = index;
  if ( (byte_4D2B054 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D2B054 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void SelectBonusDialog_CallbackFunc__EndInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void SelectBonusDialog_CallbackFunc__Invoke(
        SelectBonusDialog_CallbackFunc_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    index,
    this->fields.method);
}


void SelectBonusDialog___c__DisplayClass10_0___ctor(
        SelectBonusDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectBonusDialog___c__DisplayClass10_0___Close_b__0(
        SelectBonusDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct SelectBonusDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}
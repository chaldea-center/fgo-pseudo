void SelectBonusDialog___ctor(SelectBonusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932713 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932713 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectBonusDialog__Awake(SelectBonusDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectBonusDialog__Close(SelectBonusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectBonusDialog__Close_38415324(this, 0, v2);
}


void SelectBonusDialog__Close_38415324(SelectBonusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_5932711 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__);
    sub_21FFC50(&SelectBonusDialog___c__DisplayClass10_0_TypeInfo);
    byte_5932711 = 1;
  }
  v5 = sub_21FFEBC(SelectBonusDialog___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.state = 3;
  v21 = (System_Action_o *)sub_21FFEBC(v20);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


void SelectBonusDialog__ExecClickedFunc(SelectBonusDialog_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SelectBonusDialog_CallbackFunc_o *clickedFunc; // x8
  MissionNaviTransitionBoardItem_o *p_clickedFunc; // x19

  p_clickedFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      index,
      clickedFunc->fields.method);
  p_clickedFunc->klass = 0;
  sub_21FFBF4(p_clickedFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  if ( (byte_5932712 & 1) == 0 )
  {
    sub_21FFC50(&Method_SelectBonusDialog_OnClickIndexButton__);
    byte_5932712 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectBonusDialog_OnClickIndexButton__;
    if ( (*((_BYTE *)Method_SelectBonusDialog_OnClickIndexButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SelectBonusDialog_OnClickIndexButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Action_o *v13; // x20

  if ( (byte_5932710 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectBonusDialog__Open_b__8_0__);
    byte_5932710 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.clickedFunc = clickedAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc,
    (int32_t)clickedAction,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 1;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SelectBonusDialog__Open_b__8_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectBonusDialog_o *v13; // x0
  SelectBonusDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_593270E & 1) == 0 )
  {
    sub_21FFC50(&SelectBonusDialog_CallbackFunc_TypeInfo);
    byte_593270E = 1;
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
    v11 = sub_223767C(p_clickedFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectBonusDialog_o *)sub_220024C(v8, SelectBonusDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectBonusDialog__remove_clickedFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectBonusDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593270F & 1) == 0 )
  {
    sub_21FFC50(&SelectBonusDialog_CallbackFunc_TypeInfo);
    byte_593270F = 1;
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
    v11 = sub_223767C(p_clickedFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectBonusDialog_o *)sub_220024C(v8, SelectBonusDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectBonusDialog__Awake(v13, v14);
}


void SelectBonusDialog_CallbackFunc___ctor(
        SelectBonusDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FECF68;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FECF20;
}


System_IAsyncResult_o *SelectBonusDialog_CallbackFunc__BeginInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = index;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SelectBonusDialog_CallbackFunc__EndInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
    sub_21FFECC(0, method);
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}
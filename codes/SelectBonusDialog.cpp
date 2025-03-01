void __fastcall SelectBonusDialog___ctor(SelectBonusDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BF8415 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BF8415 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectBonusDialog__Awake(SelectBonusDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectBonusDialog__Close(SelectBonusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectBonusDialog__Close_31361348(this, 0LL, v2);
}


void __fastcall SelectBonusDialog__Close_31361348(
        SelectBonusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4BF8413 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__, v5);
    sub_1C2E12C(&SelectBonusDialog___c__DisplayClass10_0_TypeInfo, v6);
    byte_4BF8413 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2E378(SelectBonusDialog___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_1C2E388(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2E0D0(&v7[1]);
  v7[1].monitor = callback;
  sub_1C2E0D0(&v7[1].monitor);
  this->fields.state = 3;
  v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_SelectBonusDialog___c__DisplayClass10_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall SelectBonusDialog__ExecClickedFunc(SelectBonusDialog_o *this, int32_t index, const MethodInfo *method)
{
  struct SelectBonusDialog_CallbackFunc_o *clickedFunc; // x8
  struct SelectBonusDialog_CallbackFunc_o **p_clickedFunc; // x19

  p_clickedFunc = &this->fields.clickedFunc;
  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      index,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  *p_clickedFunc = 0LL;
  sub_1C2E0D0(p_clickedFunc);
}


void __fastcall SelectBonusDialog__Init(SelectBonusDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusDialog__OnClickIndexButton(
        SelectBonusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BF8414 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SelectBonusDialog_OnClickIndexButton__, *(_QWORD *)&index);
    byte_4BF8414 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectBonusDialog_OnClickIndexButton__;
    if ( (*((_BYTE *)Method_SelectBonusDialog_OnClickIndexButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2E144(Method_SelectBonusDialog_OnClickIndexButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    SelectBonusDialog__ExecClickedFunc(this, index, v7);
  }
}


void __fastcall SelectBonusDialog__Open(
        SelectBonusDialog_o *this,
        SelectBonusDialog_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4BF8412 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, clickedAction);
    sub_1C2E12C(&Method_SelectBonusDialog__Open_b__8_0__, v5);
    byte_4BF8412 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1C2E0D0(&this->fields.clickedFunc);
  this->fields.state = 1;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SelectBonusDialog__Open_b__8_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
}


void __fastcall SelectBonusDialog___Open_b__8_0(SelectBonusDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SelectBonusDialog__add_clickedFunc(
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

  if ( (byte_4BF8410 & 1) == 0 )
  {
    sub_1C2E12C(&SelectBonusDialog_CallbackFunc_TypeInfo, value);
    byte_4BF8410 = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectBonusDialog_CallbackFunc_c *)v8->klass != SelectBonusDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusDialog_o *)sub_1C2E648(v8);
  SelectBonusDialog__remove_clickedFunc(v11, v12, v13);
}


void __fastcall SelectBonusDialog__remove_clickedFunc(
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

  if ( (byte_4BF8411 & 1) == 0 )
  {
    sub_1C2E12C(&SelectBonusDialog_CallbackFunc_TypeInfo, value);
    byte_4BF8411 = 1;
  }
  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  v6 = (System_Delegate_o *)clickedFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectBonusDialog_CallbackFunc_c *)v8->klass != SelectBonusDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_clickedFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectBonusDialog_o *)sub_1C2E648(v8);
  SelectBonusDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusDialog_CallbackFunc___ctor(
        SelectBonusDialog_CallbackFunc_o *this,
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
  sub_1C2E0D0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A678F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A678A8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SelectBonusDialog_CallbackFunc__BeginInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = index;
  if ( (byte_4BF8416 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&index);
    byte_4BF8416 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall SelectBonusDialog_CallbackFunc__EndInvoke(
        SelectBonusDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
}


void __fastcall SelectBonusDialog_CallbackFunc__Invoke(
        SelectBonusDialog_CallbackFunc_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SelectBonusDialog___c__DisplayClass10_0___ctor(
        SelectBonusDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusDialog___c__DisplayClass10_0___Close_b__0(
        SelectBonusDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct SelectBonusDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(0LL, method);
  _4__this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}
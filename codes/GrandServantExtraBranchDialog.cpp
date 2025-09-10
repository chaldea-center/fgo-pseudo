void GrandServantExtraBranchDialog___ctor(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C220C1 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C220C1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandServantExtraBranchDialog__Awake(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandServantExtraBranchDialog__Callback(
        GrandServantExtraBranchDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct GrandServantExtraBranchDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct GrandServantExtraBranchDialog_CallbackFunc_o *v4; // x20
  struct GrandServantExtraBranchDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C2D434(p_callbackFunc);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
  }
}


void GrandServantExtraBranchDialog__Close(
        GrandServantExtraBranchDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void GrandServantExtraBranchDialog__OnClickCancel(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantExtraBranchDialog__Callback(this, 2, v2);
}


void GrandServantExtraBranchDialog__OnClickEx1(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantExtraBranchDialog__Callback(this, 0, v2);
}


void GrandServantExtraBranchDialog__OnClickEx2(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandServantExtraBranchDialog__Callback(this, 1, v2);
}


void GrandServantExtraBranchDialog__OnEnable(GrandServantExtraBranchDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C220BF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15635/*"Window/Buttons/CancelButton"*/);
    byte_4C220BF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15635/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandServantExtraBranchDialog__Open(
        GrandServantExtraBranchDialog_o *this,
        bool canSelectEx1,
        bool canSelectEx2,
        GrandServantExtraBranchDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UICommonButton_o *ex1ButtonCover; // x0
  __int64 v10; // x1
  struct UICommonButton_o *ex1Button; // x8
  __int64 v12; // kr00_8
  __int64 v13; // kr08_8
  struct UICommonButton_o *ex2Button; // x8
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C220C0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_410/*"#4D4D4D"*/);
    byte_4C220C0 = 1;
  }
  *(_QWORD *)&v15.fields.r = 0;
  *(_QWORD *)&v15.fields.b = 0;
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  ex1ButtonCover = (UICommonButton_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                         (System_String_o *)StringLiteral_410/*"#4D4D4D"*/,
                                         &v15,
                                         0);
  ex1Button = this->fields.ex1Button;
  if ( !ex1Button )
    goto LABEL_10;
  v12 = *(_QWORD *)&v15.fields.r;
  v13 = *(_QWORD *)&v15.fields.b;
  *(_QWORD *)&ex1Button->fields.specifyDisabledColor.fields.r = *(_QWORD *)&v15.fields.r;
  *(_QWORD *)&ex1Button->fields.specifyDisabledColor.fields.b = v13;
  ex2Button = this->fields.ex2Button;
  if ( !ex2Button )
    goto LABEL_10;
  *(_QWORD *)&ex2Button->fields.specifyDisabledColor.fields.r = v12;
  *(_QWORD *)&ex2Button->fields.specifyDisabledColor.fields.b = v13;
  ex1ButtonCover = this->fields.ex1Button;
  if ( !ex1ButtonCover
    || (UICommonButton__SetButtonEnable(ex1ButtonCover, canSelectEx1, 1, 0),
        (ex1ButtonCover = (UICommonButton_o *)this->fields.ex1ButtonCover) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ex1ButtonCover, !canSelectEx1, 0),
        (ex1ButtonCover = this->fields.ex2Button) == 0)
    || (UICommonButton__SetButtonEnable(ex1ButtonCover, canSelectEx2, 1, 0),
        (ex1ButtonCover = (UICommonButton_o *)this->fields.ex2ButtonCover) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(ex1ButtonCover, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ex1ButtonCover, !canSelectEx2, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandServantExtraBranchDialog__add_callbackFunc(
        GrandServantExtraBranchDialog_o *this,
        GrandServantExtraBranchDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantExtraBranchDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantExtraBranchDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantExtraBranchDialog_o *v11; // x0
  GrandServantExtraBranchDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C220BD & 1) == 0 )
  {
    sub_1C2D490(&GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
    byte_4C220BD = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantExtraBranchDialog_CallbackFunc_c *)v8->klass != GrandServantExtraBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantExtraBranchDialog_o *)sub_1C2D9AC(v8);
  GrandServantExtraBranchDialog__remove_callbackFunc(v11, v12, v13);
}


void GrandServantExtraBranchDialog__remove_callbackFunc(
        GrandServantExtraBranchDialog_o *this,
        GrandServantExtraBranchDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantExtraBranchDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantExtraBranchDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantExtraBranchDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C220BE & 1) == 0 )
  {
    sub_1C2D490(&GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
    byte_4C220BE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantExtraBranchDialog_CallbackFunc_c *)v8->klass != GrandServantExtraBranchDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantExtraBranchDialog_o *)sub_1C2D9AC(v8);
  GrandServantExtraBranchDialog__Awake(v11, v12);
}


void GrandServantExtraBranchDialog_CallbackFunc___ctor(
        GrandServantExtraBranchDialog_CallbackFunc_o *this,
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6A28C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A244;
}


System_IAsyncResult_o *GrandServantExtraBranchDialog_CallbackFunc__BeginInvoke(
        GrandServantExtraBranchDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C220C2 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantExtraBranchDialog_Result_TypeInfo);
    byte_4C220C2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandServantExtraBranchDialog_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void GrandServantExtraBranchDialog_CallbackFunc__EndInvoke(
        GrandServantExtraBranchDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void GrandServantExtraBranchDialog_CallbackFunc__Invoke(
        GrandServantExtraBranchDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}
void ChangeGenderTypeWindow___ctor(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B623 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B623 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ChangeGenderTypeWindow__Callback(
        ChangeGenderTypeWindow_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct ChangeGenderTypeWindow_CallbackFunc_o *v10; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
      0,
      *(System_String_o **)&changeType,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, bool, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      result,
      (unsigned int)this->fields.changeGenderType,
      v10->fields.method);
  }
}


void ChangeGenderTypeWindow__Close(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeGenderTypeWindow__Close_39923704(this, 0, v2);
}


void ChangeGenderTypeWindow__Close_39923704(
        ChangeGenderTypeWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596B622 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ChangeGenderTypeWindow_EndClose__);
    byte_596B622 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ChangeGenderTypeWindow__EndClose(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeGenderTypeWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ChangeGenderTypeWindow__EndOpen(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void ChangeGenderTypeWindow__Init(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ChangeGenderTypeWindow__OnClickFemale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 2;
  v3 = !System_Int32__Equals_77138484((_DWORD)this + 152, 2, 0);
  ChangeGenderTypeWindow__Callback(this, v3, v4, v5);
}


void ChangeGenderTypeWindow__OnClickMale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w8
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 1;
  v3 = System_Int32__Equals_77138484((_DWORD)this + 152, 1, 0);
  ChangeGenderTypeWindow__Callback(this, !v3, v4, v5);
}


void ChangeGenderTypeWindow__OpenChangeGenderWindow(
        ChangeGenderTypeWindow_o *this,
        int32_t currentType,
        ChangeGenderTypeWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLb; // x20
  UILabel_o *inputInfoLb; // x20
  UILabel_o *femaleTxt; // x20
  UILabel_o *maleTxt; // x20
  System_Action_c *v21; // x0
  System_Action_o *v22; // x20

  if ( (byte_596B621 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ChangeGenderTypeWindow_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8896/*"MALE_TEXT"*/);
    sub_2213A60(&StringLiteral_6671/*"FEMALE_TEXT"*/);
    sub_2213A60(&StringLiteral_3459/*"CHANGE_GENDER_INFO"*/);
    sub_2213A60(&StringLiteral_3460/*"CHANGE_GENDER_TITLE"*/);
    byte_596B621 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.currentGenderType = currentType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  titleLb = this->fields.titleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"CHANGE_GENDER_TITLE"*/, 0);
  if ( !titleLb )
    goto LABEL_11;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3459/*"CHANGE_GENDER_INFO"*/, 0);
  if ( !inputInfoLb
    || (UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0),
        femaleTxt = this->fields.femaleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6671/*"FEMALE_TEXT"*/, 0),
        !femaleTxt)
    || (UILabel__set_text(femaleTxt, (System_String_o *)gameObject, 0),
        maleTxt = this->fields.maleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MALE_TEXT"*/, 0),
        !maleTxt) )
  {
LABEL_11:
    sub_2213CDC(gameObject, v8);
  }
  UILabel__set_text(maleTxt, (System_String_o *)gameObject, 0);
  v21 = System_Action_TypeInfo;
  this->fields.state = 1;
  v22 = (System_Action_o *)sub_2213CCC(v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
}


void ChangeGenderTypeWindow__add_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ChangeGenderTypeWindow_o *v13; // x0
  ChangeGenderTypeWindow_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B61F & 1) == 0 )
  {
    sub_2213A60(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo);
    byte_596B61F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ChangeGenderTypeWindow_o *)sub_221405C(v8, ChangeGenderTypeWindow_CallbackFunc_TypeInfo, v9, v10);
  ChangeGenderTypeWindow__remove_callbackFunc(v13, v14, v15);
}


void ChangeGenderTypeWindow__remove_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ChangeGenderTypeWindow_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B620 & 1) == 0 )
  {
    sub_2213A60(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo);
    byte_596B620 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ChangeGenderTypeWindow_o *)sub_221405C(v8, ChangeGenderTypeWindow_CallbackFunc_TypeInfo, v9, v10);
  ChangeGenderTypeWindow__Init(v13, v14);
}


void ChangeGenderTypeWindow_CallbackFunc___ctor(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2002034;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001FDC;
}


System_IAsyncResult_o *ChangeGenderTypeWindow_CallbackFunc__BeginInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = changeType;
  v12[0] = result;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ChangeGenderTypeWindow_CallbackFunc__EndInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ChangeGenderTypeWindow_CallbackFunc__Invoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    changeType,
    this->fields.method);
}
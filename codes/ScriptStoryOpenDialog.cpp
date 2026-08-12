void ScriptStoryOpenDialog___ctor(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  if ( (byte_597292B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_597292B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScriptStoryOpenDialog__Callback(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptStoryOpenDialog_CallbackFunc_o *v9; // x19
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ScriptStoryOpenDialog__Close(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptStoryOpenDialog__Close_51917248(this, 0, v2);
}


void ScriptStoryOpenDialog__Close_51917248(
        ScriptStoryOpenDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5972929 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScriptStoryOpenDialog_EndClose__);
    byte_5972929 = 1;
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
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptStoryOpenDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ScriptStoryOpenDialog__EndClose(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptStoryOpenDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ScriptStoryOpenDialog__EndOpen(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ScriptStoryOpenDialog__Init(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5972927 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972927 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.infoLabel) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScriptStoryOpenDialog__OnClickClose(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_597292A & 1) == 0 )
  {
    sub_2213A60(&Method_ScriptStoryOpenDialog_OnClickClose__);
    byte_597292A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ScriptStoryOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ScriptStoryOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScriptStoryOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.state = 3;
    ScriptStoryOpenDialog__Callback(this, v5);
  }
}


void ScriptStoryOpenDialog__Open(
        ScriptStoryOpenDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        ScriptStoryOpenDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  UILabel_o *closeButton; // x0
  __int64 v15; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *infoLabel; // x21
  System_Action_o *v18; // x20

  if ( (byte_5972928 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ScriptStoryOpenDialog_EndOpen__);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_12985/*"SUMMON_OPEN_FRIENDQUEST_INFO"*/);
    byte_5972928 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      message,
      (System_String_o *)callback,
      canMaskTouchClose,
      (int32_t)method,
      v6,
      v7);
    closeButton = (UILabel_o *)this->fields.closeButton;
    if ( !closeButton )
      goto LABEL_14;
    ((void (__fastcall *)(UILabel_o *, _QWORD, _QWORD, const MethodInfo *))closeButton->klass->vtable._14_OnEnable.methodPtr)(
      closeButton,
      0,
      0,
      closeButton->klass->vtable._14_OnEnable.method);
    if ( !System_String__IsNullOrEmpty(title, 0) )
    {
      closeButton = this->fields.titleLabel;
      if ( !closeButton )
        goto LABEL_14;
      UILabel__set_text(closeButton, title, 0);
    }
    closeButton = this->fields.messageLabel;
    if ( closeButton )
    {
      UILabel__set_text(closeButton, message, 0);
      closeLabel = this->fields.closeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
      closeButton = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, (System_String_o *)closeButton, 0);
        infoLabel = this->fields.infoLabel;
        closeButton = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12985/*"SUMMON_OPEN_FRIENDQUEST_INFO"*/, 0);
        if ( infoLabel )
        {
          UILabel__set_text(infoLabel, (System_String_o *)closeButton, 0);
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
          this->fields.state = 1;
          v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptStoryOpenDialog_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(closeButton, v13);
  }
}


void ScriptStoryOpenDialog__add_callbackFunc(
        ScriptStoryOpenDialog_o *this,
        ScriptStoryOpenDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptStoryOpenDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ScriptStoryOpenDialog_o *v12; // x0
  ScriptStoryOpenDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5972925 & 1) == 0 )
  {
    sub_2213A60(&ScriptStoryOpenDialog_CallbackFunc_TypeInfo);
    byte_5972925 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptStoryOpenDialog_CallbackFunc_c *)v8->klass != ScriptStoryOpenDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, ScriptStoryOpenDialog_CallbackFunc_TypeInfo, v9);
  ScriptStoryOpenDialog__remove_callbackFunc(v12, v13, v14);
}


void ScriptStoryOpenDialog__remove_callbackFunc(
        ScriptStoryOpenDialog_o *this,
        ScriptStoryOpenDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptStoryOpenDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ScriptStoryOpenDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5972926 & 1) == 0 )
  {
    sub_2213A60(&ScriptStoryOpenDialog_CallbackFunc_TypeInfo);
    byte_5972926 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptStoryOpenDialog_CallbackFunc_c *)v8->klass != ScriptStoryOpenDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, ScriptStoryOpenDialog_CallbackFunc_TypeInfo, v9);
  ScriptStoryOpenDialog__Init(v12, v13);
}


void ScriptStoryOpenDialog_CallbackFunc___ctor(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
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
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20101C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2010188;
}


System_IAsyncResult_o *ScriptStoryOpenDialog_CallbackFunc__BeginInvoke(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void ScriptStoryOpenDialog_CallbackFunc__EndInvoke(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptStoryOpenDialog_CallbackFunc__Invoke(ScriptStoryOpenDialog_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}
void __fastcall ScriptStoryOpenDialog___ctor(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  if ( (byte_43576D0 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43576D0 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptStoryOpenDialog__Callback(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ScriptStoryOpenDialog_CallbackFunc_o *v9; // x19
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ScriptStoryOpenDialog_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall ScriptStoryOpenDialog__Close(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptStoryOpenDialog__Close_34679912(this, 0LL, v2);
}


void __fastcall ScriptStoryOpenDialog__Close_34679912(
        ScriptStoryOpenDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_43576CE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ScriptStoryOpenDialog_EndClose__);
    byte_43576CE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptStoryOpenDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ScriptStoryOpenDialog__EndClose(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptStoryOpenDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ScriptStoryOpenDialog__EndOpen(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ScriptStoryOpenDialog__Init(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_43576CC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43576CC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.infoLabel) == 0LL) )
  {
    sub_B7076C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptStoryOpenDialog__OnClickClose(ScriptStoryOpenDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_43576CF & 1) == 0 )
  {
    sub_B70694(&Method_ScriptStoryOpenDialog_OnClickClose__);
    byte_43576CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ScriptStoryOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ScriptStoryOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_ScriptStoryOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.state = 3;
    ScriptStoryOpenDialog__Callback(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptStoryOpenDialog__Open(
        ScriptStoryOpenDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        ScriptStoryOpenDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  UILabel_o *closeButton; // x0
  UILabel_o *closeLabel; // x21
  UILabel_o *infoLabel; // x21
  System_Action_o *v17; // x20

  if ( (byte_43576CD & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ScriptStoryOpenDialog_EndOpen__);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_12620/*"SUMMON_OPEN_FRIENDQUEST_INFO"*/);
    byte_43576CD = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)message,
      (System_String_array **)callback,
      (System_Boolean_array **)canMaskTouchClose,
      (System_Int32_array **)method,
      v6,
      v7);
    closeButton = (UILabel_o *)this->fields.closeButton;
    if ( !closeButton )
      goto LABEL_15;
    ((void (__fastcall *)(UILabel_o *, _QWORD, _QWORD, Il2CppMethodPointer))closeButton->klass->vtable._14_OnEnable.method)(
      closeButton,
      0LL,
      0LL,
      closeButton->klass->vtable._15_OnInit.methodPtr);
    if ( !System_String__IsNullOrEmpty(title, 0LL) )
    {
      closeButton = this->fields.titleLabel;
      if ( !closeButton )
        goto LABEL_15;
      UILabel__set_text(closeButton, title, 0LL);
    }
    closeButton = this->fields.messageLabel;
    if ( closeButton )
    {
      UILabel__set_text(closeButton, message, 0LL);
      closeLabel = this->fields.closeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      closeButton = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, (System_String_o *)closeButton, 0LL);
        infoLabel = this->fields.infoLabel;
        closeButton = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12620/*"SUMMON_OPEN_FRIENDQUEST_INFO"*/, 0LL);
        if ( infoLabel )
        {
          UILabel__set_text(infoLabel, (System_String_o *)closeButton, 0LL);
          BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
          this->fields.state = 1;
          v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)this, Method_ScriptStoryOpenDialog_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B7076C(closeButton, v13);
  }
}


void __fastcall ScriptStoryOpenDialog__add_callbackFunc(
        ScriptStoryOpenDialog_o *this,
        ScriptStoryOpenDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptStoryOpenDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptStoryOpenDialog_o *v11; // x0
  ScriptStoryOpenDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43576CA & 1) == 0 )
  {
    sub_B70694(&ScriptStoryOpenDialog_CallbackFunc_TypeInfo);
    byte_43576CA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptStoryOpenDialog_CallbackFunc_c *)v8->klass != ScriptStoryOpenDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ScriptStoryOpenDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptStoryOpenDialog__remove_callbackFunc(
        ScriptStoryOpenDialog_o *this,
        ScriptStoryOpenDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptStoryOpenDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptStoryOpenDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptStoryOpenDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_43576CB & 1) == 0 )
  {
    sub_B70694(&ScriptStoryOpenDialog_CallbackFunc_TypeInfo);
    byte_43576CB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptStoryOpenDialog_CallbackFunc_c *)v8->klass != ScriptStoryOpenDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ScriptStoryOpenDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptStoryOpenDialog_CallbackFunc___ctor(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ScriptStoryOpenDialog_CallbackFunc__BeginInvoke(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall ScriptStoryOpenDialog_CallbackFunc__EndInvoke(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall ScriptStoryOpenDialog_CallbackFunc__Invoke(
        ScriptStoryOpenDialog_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  ScriptStoryOpenDialog_CallbackFunc_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  ScriptStoryOpenDialog_CallbackFunc_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  ScriptStoryOpenDialog_CallbackFunc_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (ScriptStoryOpenDialog_CallbackFunc_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}
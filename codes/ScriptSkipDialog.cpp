void __fastcall ScriptSkipDialog___ctor(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418D038 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418D038 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptSkipDialog__Close(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptSkipDialog__Close_34005156(this, 0LL, v2);
}


void __fastcall ScriptSkipDialog__Close_34005156(
        ScriptSkipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418D033 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ScriptSkipDialog_EndClose__, v10);
    byte_418D033 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptSkipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ScriptSkipDialog__EndClose(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ScriptSkipDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ScriptSkipDialog__EndOpen(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ScriptSkipDialog__Init(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_418D031 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418D031 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.message2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonDecideLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonDecide2Label;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.buttonCancelLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonCancel2Label) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.buttonExitLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B2C434(messageLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScriptSkipDialog__OnClickCancel(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  ScriptSkipDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418D035 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418D035 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ScriptSkipDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall ScriptSkipDialog__OnClickDecide(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  ScriptSkipDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418D034 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418D034 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ScriptSkipDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall ScriptSkipDialog__OnClickExit(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ScriptSkipDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418D036 & 1) == 0 )
  {
    sub_B2C35C(&Method_ScriptSkipDialog_OnClickExit__, method);
    byte_418D036 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScriptSkipDialog_OnClickExit__;
    if ( (*((_BYTE *)Method_ScriptSkipDialog_OnClickExit__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_ScriptSkipDialog_OnClickExit__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ScriptSkipDialog_ClickDelegate__Invoke(clickFunc, 2, 0LL);
  }
}


void __fastcall ScriptSkipDialog__OnEnable(ScriptSkipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_418D037 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15484/*"Window/NormalBase/CancelButton"*/, v3);
    sub_B2C35C(&StringLiteral_15480/*"Window/ExitBase/CancelButton"*/, v4);
    byte_418D037 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15484/*"Window/NormalBase/CancelButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21105064(v6, (System_String_o *)StringLiteral_15480/*"Window/ExitBase/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSkipDialog__Open(
        ScriptSkipDialog_o *this,
        bool isUseExit,
        ScriptSkipDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *normalBase; // x0
  UILabel_o *message2Label; // x20
  UILabel_o *buttonDecide2Label; // x20
  UILabel_o *buttonCancel2Label; // x20
  UILabel_o *buttonExitLabel; // x20
  __int64 *v23; // x8
  UILabel_o *messageLabel; // x20
  UILabel_o *buttonDecideLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_418D032 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isUseExit);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_ScriptSkipDialog_EndOpen__, v12);
    sub_B2C35C(&StringLiteral_11604/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, v13);
    sub_B2C35C(&StringLiteral_11605/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/, v14);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v15);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v16);
    byte_418D032 = 1;
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)func,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  normalBase = this->fields.normalBase;
  if ( !normalBase )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(normalBase, !isUseExit, 0LL);
  normalBase = this->fields.exitBase;
  if ( !normalBase )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(normalBase, isUseExit, 0LL);
  if ( isUseExit )
  {
    message2Label = this->fields.message2Label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0LL);
    if ( message2Label )
    {
      UILabel__set_text(message2Label, (System_String_o *)normalBase, 0LL);
      buttonDecide2Label = this->fields.buttonDecide2Label;
      normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
      if ( buttonDecide2Label )
      {
        UILabel__set_text(buttonDecide2Label, (System_String_o *)normalBase, 0LL);
        buttonCancel2Label = this->fields.buttonCancel2Label;
        normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
        if ( buttonCancel2Label )
        {
          UILabel__set_text(buttonCancel2Label, (System_String_o *)normalBase, 0LL);
          buttonExitLabel = this->fields.buttonExitLabel;
          v23 = &StringLiteral_11605/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_21:
    sub_B2C434(normalBase, v17);
  }
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SCRIPT_ACTION_SKIP_CONFIRM_DETAIL"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, (System_String_o *)normalBase, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
  if ( !buttonDecideLabel )
    goto LABEL_21;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)normalBase, 0LL);
  buttonExitLabel = this->fields.buttonCancelLabel;
  v23 = &StringLiteral_3264/*"COMMON_CONFIRM_NO"*/;
LABEL_19:
  normalBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v23, 0LL);
  if ( !buttonExitLabel )
    goto LABEL_21;
  UILabel__set_text(buttonExitLabel, (System_String_o *)normalBase, 0LL);
  this->fields.isButtonEnable = 0;
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ScriptSkipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSkipDialog_ClickDelegate___ctor(
        ScriptSkipDialog_ClickDelegate_o *this,
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptSkipDialog_ClickDelegate__BeginInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_4185549 & 1) == 0 )
  {
    sub_B2C35C(&ScriptSkipDialog_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4185549 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ScriptSkipDialog_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ScriptSkipDialog_ClickDelegate__EndInvoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSkipDialog_ClickDelegate__Invoke(
        ScriptSkipDialog_ClickDelegate_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  ScriptSkipDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ScriptSkipDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  ScriptSkipDialog_ClickDelegate_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ScriptSkipDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}
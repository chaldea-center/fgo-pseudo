void __fastcall PresentBoxOverDialog___ctor(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AFB72 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AFB72 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxOverDialog__Close(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxOverDialog__Close_24674156(this, 0LL, v2);
}


void __fastcall PresentBoxOverDialog__Close_24674156(
        PresentBoxOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42AFB6E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PresentBoxOverDialog_EndClose__);
    byte_42AFB6E = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PresentBoxOverDialog__EndClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  PresentBoxOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B52920(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PresentBoxOverDialog__EndOpen(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentBoxOverDialog__Init(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *closeBtnLabel; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20

  if ( (byte_42AFB6C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFB6C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.closeBtnLabel;
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.presentBoxBtnLabel;
    if ( !titleLabel )
      goto LABEL_31;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_31:
    sub_B52A5C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxOverDialog__OnClickClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_clickFunc; // x19
  PresentBoxOverDialog_ClickDelegate_o *v12; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_42AFB6F & 1) == 0 )
  {
    sub_B52984(&Method_PresentBoxOverDialog_OnClickClose__);
    byte_42AFB6F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PresentBoxOverDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    v12 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0LL;
      sub_B52920(p_clickFunc, 0LL, v5, v6, v7, v8, v9, v10);
      PresentBoxOverDialog_ClickDelegate__Invoke(v12, 0, 0LL);
    }
  }
}


void __fastcall PresentBoxOverDialog__OnClickPresentBox(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_clickFunc; // x19
  PresentBoxOverDialog_ClickDelegate_o *v12; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_42AFB70 & 1) == 0 )
  {
    sub_B52984(&Method_PresentBoxOverDialog_OnClickPresentBox__);
    byte_42AFB70 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickPresentBox__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickPresentBox__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PresentBoxOverDialog_OnClickPresentBox__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    v12 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0LL;
      sub_B52920(p_clickFunc, 0LL, v5, v6, v7, v8, v9, v10);
      PresentBoxOverDialog_ClickDelegate__Invoke(v12, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxOverDialog__Open(
        PresentBoxOverDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        PresentBoxOverDialog_ClickDelegate_o *func,
        int32_t fontSize,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t MESSAGE_FONT_SIZE; // w21
  UnityEngine_Object_o *titleLabel; // x23
  __int64 v14; // x1
  UILabel_o *v15; // x0
  UnityEngine_Object_o *messageLabel; // x22
  UnityEngine_Object_o *closeBtnLabel; // x20
  UILabel_o *v18; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20
  UILabel_o *v20; // x20
  System_Action_o *v21; // x20

  MESSAGE_FONT_SIZE = fontSize;
  if ( (byte_42AFB6D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_PresentBoxOverDialog_EndOpen__);
    sub_B52984(&StringLiteral_9828/*"OPEN_PRESENT_BOX"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    byte_42AFB6D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.clickFunc = func;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.clickFunc,
      (System_Int32_array **)func,
      (System_String_array **)message,
      (System_String_array **)func,
      *(System_Boolean_array ***)&fontSize,
      (System_Int32_array **)method,
      v6,
      v7);
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
    {
      v15 = this->fields.titleLabel;
      if ( !v15 )
        goto LABEL_39;
      UILabel__set_text(v15, title, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      if ( !MESSAGE_FONT_SIZE )
        MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
      v15 = this->fields.messageLabel;
      if ( !v15 )
        goto LABEL_39;
      UILabel__set_fontSize(v15, MESSAGE_FONT_SIZE, 0LL);
      v15 = this->fields.messageLabel;
      if ( !v15 )
        goto LABEL_39;
      WrapControlText__textAdjust(v15, message, v15->fields.mFontSize, 0, 0, 0LL);
      v15 = this->fields.messageLabel;
      if ( !v15 )
        goto LABEL_39;
      UILabel__set_text(v15, message, 0LL);
    }
    closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
    {
      v18 = this->fields.closeBtnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v18 )
        goto LABEL_39;
      UILabel__set_text(v18, (System_String_o *)v15, 0LL);
    }
    presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0LL, 0LL) )
      goto LABEL_38;
    v20 = this->fields.presentBoxBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9828/*"OPEN_PRESENT_BOX"*/, 0LL);
    if ( v20 )
    {
      UILabel__set_text(v20, (System_String_o *)v15, 0LL);
LABEL_38:
      this->fields.state = 1;
      v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
      return;
    }
LABEL_39:
    sub_B52A5C(v15, v14);
  }
}


System_String_o *__fastcall PresentBoxOverDialog__get_closeBtnPath(
        PresentBoxOverDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AFB71 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42AFB71 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxOverDialog_ClickDelegate___ctor(
        PresentBoxOverDialog_ClickDelegate_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall PresentBoxOverDialog_ClickDelegate__BeginInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isPresentBoxOpen;
  if ( (byte_42AD441 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD441 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PresentBoxOverDialog_ClickDelegate__EndInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxOverDialog_ClickDelegate__Invoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PresentBoxOverDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PresentBoxOverDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PresentBoxOverDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PresentBoxOverDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isPresentBoxOpen, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isPresentBoxOpen, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, isPresentBoxOpen, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isPresentBoxOpen, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isPresentBoxOpen,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isPresentBoxOpen, v22);
    goto LABEL_37;
  }
}
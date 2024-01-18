void __fastcall SupportSelectConfirmCopyMenu___ctor(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AE76 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE76 = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__Close(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AE72 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, v3);
    byte_418AE72 = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__OnClickCancel(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_418AE74 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE74 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(onClickButton, 0, 0LL);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__OnClickDecide(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_418AE73 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE73 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(onClickButton, 1, 0LL);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__OnFinishedClose(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickButton = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectConfirmCopyMenu__OnFinishedOpen(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void __fastcall SupportSelectConfirmCopyMenu__Open(
        SupportSelectConfirmCopyMenu_o *this,
        SupportServantData_o *baseDeckData,
        SupportServantData_o *targetDeckData,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *titleLabel; // x23
  System_String_o *baseDeckObj; // x0
  __int64 v19; // x1
  UILabel_o *messageLabel; // x23
  UILabel_o *baseDeckTitleLabel; // x23
  UILabel_o *targetDeckTitleLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x4
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *v33; // x20

  if ( (byte_418AE71 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, baseDeckData);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, v10);
    sub_B2C35C(&StringLiteral_12512/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/, v11);
    sub_B2C35C(&StringLiteral_12511/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/, v12);
    sub_B2C35C(&StringLiteral_12513/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_12508/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/, v14);
    sub_B2C35C(&StringLiteral_12509/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/, v15);
    sub_B2C35C(&StringLiteral_12510/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/, v16);
    byte_418AE71 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    this->fields.currentState = 0;
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12513/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, baseDeckObj, 0LL);
    messageLabel = this->fields.messageLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12511/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_17;
    UILabel__set_text(messageLabel, baseDeckObj, 0LL);
    baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/, 0LL);
    if ( !baseDeckTitleLabel )
      goto LABEL_17;
    UILabel__set_text(baseDeckTitleLabel, baseDeckObj, 0LL);
    targetDeckTitleLabel = this->fields.targetDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12512/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/, 0LL);
    if ( !targetDeckTitleLabel )
      goto LABEL_17;
    UILabel__set_text(targetDeckTitleLabel, baseDeckObj, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12510/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLabel
      || (UILabel__set_text(decideButtonLabel, baseDeckObj, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12509/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel)
      || (UILabel__set_text(cancelButtonLabel, baseDeckObj, 0LL),
          (baseDeckObj = (System_String_o *)this->fields.baseDeckObj) == 0LL)
      || (SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
            baseDeckData,
            0,
            1,
            v25),
          (baseDeckObj = (System_String_o *)this->fields.targetDeckObj) == 0LL) )
    {
LABEL_17:
      sub_B2C434(baseDeckObj, v19);
    }
    SupportSelectDeckListViewItemDraw__SetSupportData(
      (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
      targetDeckData,
      0,
      1,
      v26);
    this->fields.onClickButton = onClickButton;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onClickButton,
      (System_Int32_array **)onClickButton,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__add_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmCopyMenu_o *v11; // x0
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AE6F & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, value);
    byte_418AE6F = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmCopyMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmCopyMenu__get_closeBtnPath(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE75 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, method);
    byte_418AE75 = 1;
  }
  return (System_String_o *)StringLiteral_4220/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall SupportSelectConfirmCopyMenu__remove_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmCopyMenu_o *v11; // x0
  SupportServantData_o *v12; // x1
  SupportServantData_o *v13; // x2
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_418AE70 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, value);
    byte_418AE70 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmCopyMenu__Open(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
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
System_IAsyncResult_o *__fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_41847CA & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_41847CA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **v8; // x25
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
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v20; // x8
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
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}
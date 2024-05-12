void __fastcall SupportSelectConfirmCopyMenu___ctor(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438F3F6 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438F3F6 = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__Close(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438F3F2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SupportSelectConfirmCopyMenu_OnFinishedClose__);
    byte_438F3F2 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__OnClickCancel(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438F3F4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F3F4 = 1;
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

  if ( (byte_438F3F3 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F3F3 = 1;
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
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
  UILabel_o *titleLabel; // x23
  System_String_o *baseDeckObj; // x0
  __int64 v11; // x1
  UILabel_o *messageLabel; // x23
  UILabel_o *baseDeckTitleLabel; // x23
  UILabel_o *targetDeckTitleLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x20

  if ( (byte_438F3F1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__);
    sub_B775C4(&StringLiteral_12745/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/);
    sub_B775C4(&StringLiteral_12744/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12746/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_12741/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/);
    sub_B775C4(&StringLiteral_12742/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12743/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/);
    byte_438F3F1 = 1;
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
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12746/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, baseDeckObj, 0LL);
    messageLabel = this->fields.messageLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12744/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_17;
    UILabel__set_text(messageLabel, baseDeckObj, 0LL);
    baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12741/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/, 0LL);
    if ( !baseDeckTitleLabel )
      goto LABEL_17;
    UILabel__set_text(baseDeckTitleLabel, baseDeckObj, 0LL);
    targetDeckTitleLabel = this->fields.targetDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12745/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/, 0LL);
    if ( !targetDeckTitleLabel )
      goto LABEL_17;
    UILabel__set_text(targetDeckTitleLabel, baseDeckObj, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12743/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLabel
      || (UILabel__set_text(decideButtonLabel, baseDeckObj, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12742/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel)
      || (UILabel__set_text(cancelButtonLabel, baseDeckObj, 0LL),
          (baseDeckObj = (System_String_o *)this->fields.baseDeckObj) == 0LL)
      || (SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
            baseDeckData,
            0,
            1,
            0LL),
          (baseDeckObj = (System_String_o *)this->fields.targetDeckObj) == 0LL) )
    {
LABEL_17:
      sub_B7769C(baseDeckObj, v11);
    }
    SupportSelectDeckListViewItemDraw__SetSupportData(
      (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
      targetDeckData,
      0,
      1,
      0LL);
    this->fields.onClickButton = onClickButton;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onClickButton,
      (System_Int32_array **)onClickButton,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
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

  if ( (byte_438F3EF & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    byte_438F3EF = 1;
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
    v9 = sub_B6BFDC(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  SupportSelectConfirmCopyMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmCopyMenu__get_closeBtnPath(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_438F3F5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4352/*"ConfirmWindow/CancelButton"*/);
    byte_438F3F5 = 1;
  }
  return (System_String_o *)StringLiteral_4352/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_438F3F0 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    byte_438F3F0 = 1;
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
    v9 = sub_B6BFDC(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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
  sub_B77560(p_method);
}


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
  if ( (byte_43886CF & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43886CF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}
void __fastcall SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB38B & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB38B = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EB387 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, v5, v6, v7);
    byte_42EB387 = 1;
  }
  this->fields.currentState = 2;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickCancel(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB389 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB389 = 1;
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
      SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(onClickButton, 0, 0LL);
  }
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickDecide(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB388 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB388 = 1;
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
      SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(onClickButton, 1, 0LL);
  }
}


void __fastcall SupportSelectConfirmDeckMenu__OnFinishedClose(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickButton = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectConfirmDeckMenu__OnFinishedOpen(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void __fastcall SupportSelectConfirmDeckMenu__Open(
        SupportSelectConfirmDeckMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportData,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  UILabel_o *v47; // x22
  UILabel_o *messageLabel; // x22
  __int64 *v49; // x8
  UILabel_o *v50; // x22
  UILabel_o *v51; // x22
  struct UILabel_o *nameLabel; // x22
  System_String_o *Empty; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v57; // x4
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Action_o *v64; // x20

  if ( (byte_42EB386 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)supportData, onClickButton);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12668/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12667/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12673/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12670/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12669/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12671/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12672/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12674/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12655/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, v42, v43, v44);
    byte_42EB386 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( kind == 2 )
    {
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12672/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_38;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v49 = &StringLiteral_12671/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( kind == 1 )
      {
        v50 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12670/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0LL);
        if ( !v50 )
          goto LABEL_38;
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        v51 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12669/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0LL);
        if ( !v51 )
          goto LABEL_38;
        UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
        nameLabel = this->fields.nameLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12668/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0LL);
        if ( !supportData )
          goto LABEL_38;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)supportData->fields._deckName_k__BackingField,
                                                   0LL);
        if ( !nameLabel )
          goto LABEL_38;
        Empty = (System_String_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)nameLabel;
        goto LABEL_30;
      }
      if ( kind )
      {
LABEL_31:
        decideButtonLabel = this->fields.decideButtonLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12667/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0LL);
        if ( decideButtonLabel )
        {
          UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
          cancelButtonLabel = this->fields.cancelButtonLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12655/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0LL);
          if ( cancelButtonLabel )
          {
            UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckInfoObj;
            if ( gameObject )
            {
              SupportSelectDeckListViewItemDraw__SetSupportData(
                (SupportSelectDeckListViewItemDraw_o *)gameObject,
                supportData,
                0,
                1,
                v57);
              this->fields.onClickButton = onClickButton;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.onClickButton,
                (System_Int32_array **)onClickButton,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63);
              v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v64, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B5D69C(gameObject, v46);
      }
      v47 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12674/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v47 )
        goto LABEL_38;
      UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v49 = &StringLiteral_12673/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v49, 0LL);
    if ( !messageLabel )
      goto LABEL_38;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_38;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_30:
    UILabel__set_text((UILabel_o *)gameObject, Empty, 0LL);
    goto LABEL_31;
  }
}


void __fastcall SupportSelectConfirmDeckMenu__add_onClickButton(
        SupportSelectConfirmDeckMenu_o *this,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectConfirmDeckMenu_o *v12; // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB384 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB384 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v7 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v9->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onClickButton, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v12, v13, v14);
}


System_String_o *__fastcall SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB38A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4291/*"ConfirmWindow/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42EB38A = 1;
  }
  return (System_String_o *)StringLiteral_4291/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall SupportSelectConfirmDeckMenu__remove_onClickButton(
        SupportSelectConfirmDeckMenu_o *this,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectConfirmDeckMenu_o *v12; // x0
  int32_t v13; // w1
  SupportServantData_o *v14; // x2
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_42EB385 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB385 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v7 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v9->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onClickButton, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectConfirmDeckMenu__Open(v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_42E6481 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E6481 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}
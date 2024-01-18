void __fastcall SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AE7E & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE7E = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AE7A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, v3);
    byte_418AE7A = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickCancel(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_418AE7C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE7C = 1;
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
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_418AE7B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE7B = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectConfirmDeckMenu__OnFinishedOpen(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu__Open(
        SupportSelectConfirmDeckMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportData,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UILabel_o *v23; // x22
  UILabel_o *messageLabel; // x22
  __int64 *v25; // x8
  UILabel_o *v26; // x22
  UILabel_o *v27; // x22
  struct UILabel_o *nameLabel; // x22
  System_String_o *Empty; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v33; // x4
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Action_o *v40; // x20

  if ( (byte_418AE79 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&string_TypeInfo, v10);
    sub_B2C35C(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, v11);
    sub_B2C35C(&StringLiteral_12520/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, v12);
    sub_B2C35C(&StringLiteral_12519/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/, v14);
    sub_B2C35C(&StringLiteral_12522/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_12521/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_12523/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_12526/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_12507/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, v20);
    byte_418AE79 = 1;
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_38;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12523/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( kind == 1 )
      {
        v26 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0LL);
        if ( !v26 )
          goto LABEL_38;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
        v27 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0LL);
        if ( !v27 )
          goto LABEL_38;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
        nameLabel = this->fields.nameLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0LL);
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
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0LL);
        if ( decideButtonLabel )
        {
          UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
          cancelButtonLabel = this->fields.cancelButtonLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0LL);
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
                v33);
              this->fields.onClickButton = onClickButton;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.onClickButton,
                (System_Int32_array **)onClickButton,
                v34,
                v35,
                v36,
                v37,
                v38,
                v39);
              v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v40, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B2C434(gameObject, v22);
      }
      v23 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v23 )
        goto LABEL_38;
      UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
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
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmDeckMenu_o *v11; // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AE77 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_418AE77 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE7D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, method);
    byte_418AE7D = 1;
  }
  return (System_String_o *)StringLiteral_4220/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall SupportSelectConfirmDeckMenu__remove_onClickButton(
        SupportSelectConfirmDeckMenu_o *this,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmDeckMenu_o *v11; // x0
  int32_t v12; // w1
  SupportServantData_o *v13; // x2
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_418AE78 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_418AE78 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmDeckMenu__Open(v11, v12, v13, v14, v15);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41847CB & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_41847CB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **v8; // x25
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
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v20; // x8
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
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **)(v4 + 32);
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
void __fastcall SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD4FA & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD4FA = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FD4F6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, v6);
    byte_40FD4F6 = 1;
  }
  this->fields.currentState = 2;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickCancel(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_40FD4F8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4F8 = 1;
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

  if ( (byte_40FD4F7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4F7 = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
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
  UILabel_o *v22; // x22
  System_String_o *v23; // x0
  UILabel_o *messageLabel; // x22
  __int64 *v25; // x8
  UILabel_o *v26; // x22
  System_String_o *v27; // x0
  UILabel_o *v28; // x22
  System_String_o *v29; // x0
  struct UILabel_o *nameLabel; // x22
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *Empty; // x1
  UILabel_o *v34; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *decideButtonLabel; // x22
  System_String_o *v39; // x0
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v41; // x0
  const MethodInfo *v42; // x4
  SupportSelectDeckListViewItemDraw_o *deckInfoObj; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_o *v54; // x20

  if ( (byte_40FD4F5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&string_TypeInfo, v10);
    sub_B16FFC(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, v11);
    sub_B16FFC(&StringLiteral_12464/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, v12);
    sub_B16FFC(&StringLiteral_12463/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, v13);
    sub_B16FFC(&StringLiteral_12469/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/, v14);
    sub_B16FFC(&StringLiteral_12466/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, v15);
    sub_B16FFC(&StringLiteral_12465/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, v16);
    sub_B16FFC(&StringLiteral_12467/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/, v17);
    sub_B16FFC(&StringLiteral_12468/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, v18);
    sub_B16FFC(&StringLiteral_12470/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_12451/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, v20);
    byte_40FD4F5 = 1;
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
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_38;
      UILabel__set_text(titleLabel, v36, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12467/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
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
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0LL);
        if ( !v26 )
          goto LABEL_38;
        UILabel__set_text(v26, v27, 0LL);
        v28 = this->fields.messageLabel;
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0LL);
        if ( !v28 )
          goto LABEL_38;
        UILabel__set_text(v28, v29, 0LL);
        nameLabel = this->fields.nameLabel;
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12464/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0LL);
        if ( !supportData )
          goto LABEL_38;
        v32 = System_String__Format(v31, (Il2CppObject *)supportData->fields._deckName_k__BackingField, 0LL);
        if ( !nameLabel )
          goto LABEL_38;
        Empty = v32;
        v34 = nameLabel;
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
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0LL);
        if ( decideButtonLabel )
        {
          UILabel__set_text(decideButtonLabel, v39, 0LL);
          cancelButtonLabel = this->fields.cancelButtonLabel;
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0LL);
          if ( cancelButtonLabel )
          {
            UILabel__set_text(cancelButtonLabel, v41, 0LL);
            deckInfoObj = this->fields.deckInfoObj;
            if ( deckInfoObj )
            {
              SupportSelectDeckListViewItemDraw__SetSupportData(deckInfoObj, supportData, 0, 1, v42);
              this->fields.onClickButton = onClickButton;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.onClickButton,
                (System_Int32_array **)onClickButton,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
              v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
              System_Action___ctor(v54, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B170D4();
      }
      v22 = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v22 )
        goto LABEL_38;
      UILabel__set_text(v22, v23, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12469/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    v37 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
    if ( !messageLabel )
      goto LABEL_38;
    UILabel__set_text(messageLabel, v37, 0LL);
    v34 = this->fields.nameLabel;
    if ( !v34 )
      goto LABEL_38;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_30:
    UILabel__set_text(v34, Empty, 0LL);
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

  if ( (byte_40FD4F3 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_40FD4F3 = 1;
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
    v9 = sub_B0BA14(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FD4F9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4202/*"ConfirmWindow/CancelButton"*/, method);
    byte_40FD4F9 = 1;
  }
  return (System_String_o *)StringLiteral_4202/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_40FD4F4 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_40FD4F4 = 1;
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
    v9 = sub_B0BA14(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportSelectConfirmDeckMenu__Open(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7A9A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7A9A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v18; // x8
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
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
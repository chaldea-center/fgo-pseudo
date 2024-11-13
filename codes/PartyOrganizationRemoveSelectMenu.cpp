void __fastcall PartyOrganizationRemoveSelectMenu___ctor(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B120C1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B120C1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_32797672(this, 0LL, v2);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close_32797672(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B120B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_EndClose__, v5, v6);
    byte_4B120B9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndClose(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndOpen(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationRemoveSelectMenu__Init(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B120B7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B120B7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.copyLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.removeAllLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.initAllLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.removeEquipLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.changeNameLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnChangeName(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnChangeName__, method, v2);
    byte_4B120BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnChangeName__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnChangeName__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 5, v6);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCancel(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__, method, v2);
    byte_4B120BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__, method, v2);
    byte_4B120BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 1, v6);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickInitAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__, method, v2);
    byte_4B120BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 3, v6);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__, method, v2);
    byte_4B120BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 2, v6);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveEquip(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B120BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__, method, v2);
    byte_4B120BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 4, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu__Open(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyListViewItem_o *partyItem,
        bool isEnableCopy,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callback,
        bool isEnableRemoveAll,
        bool isEnableRemoveEquip,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v39; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  unsigned int v42; // w25
  __int64 v43; // x1
  UILabel_o *nameLabel; // x24
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  System_String_o *v46; // x0
  __int64 v47; // x1
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v49; // x0
  float v50; // s0
  __int64 v51; // x1
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x8
  struct UICommonButton_o *v59; // x24
  struct UICommonButton_o *removeAllButton; // x24
  unsigned int v61; // w8
  __int64 v62; // x1
  struct UICommonButton_o *initAllButton; // x23
  struct UICommonButton_o *removeEquipButton; // x23
  unsigned int v65; // w8
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_o *v71; // x20

  if ( (byte_4B120B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, isEnableCopy);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10420/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10423/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10426/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10428/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10421/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10424/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10427/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10422/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_10425/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, v35, v36);
    byte_4B120B8 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( !partyItem )
        goto LABEL_67;
      menuKind = partyItem->fields.menuKind;
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v42 = menuKind & 0xFFFFFFF7;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      if ( v42 )
      {
        v39 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !nameLabel )
          goto LABEL_67;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10425/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v46,
                                                   (Il2CppObject *)partyItem->fields.deckName,
                                                   0LL);
        v39 = (System_String_o *)gameObject;
        if ( !nameLabel )
          goto LABEL_67;
      }
      UILabel__set_text(nameLabel, v39, 0LL);
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10424/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_67;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !gameObject )
        goto LABEL_67;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v50 = 117.5;
      if ( !v42 )
        v50 = 100.0;
      GameObjectExtensions__SetLocalPositionY(v49, v50, 0LL);
      copyLabel = this->fields.copyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10422/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0LL);
      if ( !copyLabel )
        goto LABEL_67;
      UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0LL);
      removeAllLabel = this->fields.removeAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0LL);
      if ( !removeAllLabel )
        goto LABEL_67;
      UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0LL);
      initAllLabel = this->fields.initAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10423/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0LL);
      if ( !initAllLabel )
        goto LABEL_67;
      UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0LL);
      removeEquipLabel = this->fields.removeEquipLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0LL);
      if ( !removeEquipLabel )
        goto LABEL_67;
      UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0LL);
      changeNameLabel = this->fields.changeNameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10421/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0LL);
      if ( !changeNameLabel )
        goto LABEL_67;
      UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10420/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_67;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      copyButton = this->fields.copyButton;
      if ( v42 )
        v59 = 0LL;
      else
        v59 = this->fields.copyButton;
      if ( !v42 && isEnableCopy )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v39 = 0LL;
          if ( !v59 )
            goto LABEL_67;
          goto LABEL_43;
        }
        copyButton = v59;
      }
      v39 = (System_String_o *)(&dword_0 + 3);
      v59 = copyButton;
      if ( !copyButton )
        goto LABEL_67;
LABEL_43:
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))v59->klass->vtable._14_SetState.method)(
        v59,
        v39,
        1LL,
        v59->klass->vtable._15_OnPress.methodPtr);
      removeAllButton = this->fields.removeAllButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
      if ( !removeAllButton )
        goto LABEL_67;
      if ( isEnableRemoveAll )
        v61 = 0;
      else
        v61 = 3;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
        v62 = v61;
      else
        v62 = 0LL;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                                 removeAllButton,
                                                 v62,
                                                 1LL,
                                                 removeAllButton->klass->vtable._15_OnPress.methodPtr);
      initAllButton = this->fields.initAllButton;
      if ( v42
        || (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0LL),
            ((unsigned __int8)gameObject & 1) != 0) )
      {
        v39 = (System_String_o *)(&dword_0 + 3);
        if ( !initAllButton )
          goto LABEL_67;
      }
      else
      {
        v39 = 0LL;
        if ( !initAllButton )
          goto LABEL_67;
      }
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))initAllButton->klass->vtable._14_SetState.method)(
        initAllButton,
        v39,
        1LL,
        initAllButton->klass->vtable._15_OnPress.methodPtr);
      removeEquipButton = this->fields.removeEquipButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0LL);
      if ( removeEquipButton )
      {
        v65 = isEnableRemoveEquip ? 0 : 3;
        v66 = ((unsigned __int8)gameObject & 1) != 0 ? v65 : 0LL;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
          removeEquipButton,
          v66,
          1LL,
          removeEquipButton->klass->vtable._15_OnPress.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
        if ( gameObject )
        {
          v67 = v42 == 0 && isEnableCopy ? 0LL : 3LL;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v67,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets);
            this->fields.state = 1;
            v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
            System_Action___ctor(v71, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v71, 0, 0LL);
            return;
          }
        }
      }
LABEL_67:
      sub_1BCAA3C(gameObject, v39);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_1BCA784(p_callbackFunc, callback);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      break;
    case 0:
      goto LABEL_6;
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__add_callbackFunc(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRemoveSelectMenu_o *v11; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B120B5 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B120B5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1BCACFC(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B120C0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3218/*"BaseWindow/CancelButton"*/, method, v2);
    byte_4B120C0 = 1;
  }
  return (System_String_o *)StringLiteral_3218/*"BaseWindow/CancelButton"*/;
}


bool __fastcall PartyOrganizationRemoveSelectMenu__isStateSelected(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.state == 3;
}


void __fastcall PartyOrganizationRemoveSelectMenu__remove_callbackFunc(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRemoveSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B120B6 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B120B6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1BCACFC(v8);
  PartyOrganizationRemoveSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07664;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0761C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B120C2 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B120C2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}
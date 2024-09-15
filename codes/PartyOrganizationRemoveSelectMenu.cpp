void __fastcall PartyOrganizationRemoveSelectMenu___ctor(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A29FD7 & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A29FD7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B76164(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_32078888(this, 0LL, v2);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close_32078888(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A29FCF & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_EndClose__, v6);
    byte_4A29FCF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndClose(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B76164(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4A29FCD & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A29FCD = 1;
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
    sub_1B7641C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnChangeName(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD4 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnChangeName__, method);
    byte_4A29FD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnChangeName__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 5, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCancel(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD5 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__, method);
    byte_4A29FD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD0 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__, method);
    byte_4A29FD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 1, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickInitAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD2 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__, method);
    byte_4A29FD2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 3, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD1 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__, method);
    byte_4A29FD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 2, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveEquip(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A29FD3 & 1) == 0 )
  {
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__, method);
    byte_4A29FD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 4, v5);
  }
}


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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v27; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  unsigned int v30; // w25
  UILabel_o *nameLabel; // x24
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  System_String_o *v33; // x0
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v35; // x0
  float v36; // s0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x8
  struct UICommonButton_o *v44; // x24
  struct UICommonButton_o *removeAllButton; // x24
  unsigned int v46; // w8
  __int64 v47; // x1
  struct UICommonButton_o *initAllButton; // x23
  struct UICommonButton_o *removeEquipButton; // x23
  unsigned int v50; // w8
  __int64 v51; // x1
  __int64 v52; // x1
  System_Action_o *v53; // x20

  if ( (byte_4A29FCE & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, partyItem);
    sub_1B761C0(&LocalizationManager_TypeInfo, v13);
    sub_1B761C0(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__, v14);
    sub_1B761C0(&StringLiteral_10284/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, v15);
    sub_1B761C0(&StringLiteral_10287/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, v16);
    sub_1B761C0(&StringLiteral_10290/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, v17);
    sub_1B761C0(&StringLiteral_10292/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, v18);
    sub_1B761C0(&StringLiteral_10285/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, v19);
    sub_1B761C0(&StringLiteral_1/*""*/, v20);
    sub_1B761C0(&StringLiteral_10288/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, v21);
    sub_1B761C0(&StringLiteral_10291/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, v22);
    sub_1B761C0(&StringLiteral_10286/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, v23);
    sub_1B761C0(&StringLiteral_10289/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, v24);
    byte_4A29FCE = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_1B76164(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (int32_t)callback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( !partyItem )
        goto LABEL_67;
      menuKind = partyItem->fields.menuKind;
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v30 = menuKind & 0xFFFFFFF7;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      nameLabel = this->fields.nameLabel;
      if ( v30 )
      {
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !nameLabel )
          goto LABEL_67;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10289/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v33,
                                                   (Il2CppObject *)partyItem->fields.deckName,
                                                   0LL);
        v27 = (System_String_o *)gameObject;
        if ( !nameLabel )
          goto LABEL_67;
      }
      UILabel__set_text(nameLabel, v27, 0LL);
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_67;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !gameObject )
        goto LABEL_67;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v36 = 117.5;
      if ( !v30 )
        v36 = 100.0;
      GameObjectExtensions__SetLocalPositionY(v35, v36, 0LL);
      copyLabel = this->fields.copyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0LL);
      if ( !copyLabel )
        goto LABEL_67;
      UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0LL);
      removeAllLabel = this->fields.removeAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0LL);
      if ( !removeAllLabel )
        goto LABEL_67;
      UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0LL);
      initAllLabel = this->fields.initAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10287/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0LL);
      if ( !initAllLabel )
        goto LABEL_67;
      UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0LL);
      removeEquipLabel = this->fields.removeEquipLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0LL);
      if ( !removeEquipLabel )
        goto LABEL_67;
      UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0LL);
      changeNameLabel = this->fields.changeNameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0LL);
      if ( !changeNameLabel )
        goto LABEL_67;
      UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0LL);
      cancelLabel = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0LL);
      if ( !cancelLabel )
        goto LABEL_67;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      copyButton = this->fields.copyButton;
      if ( v30 )
        v44 = 0LL;
      else
        v44 = this->fields.copyButton;
      if ( !v30 && isEnableCopy )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v27 = 0LL;
          if ( !v44 )
            goto LABEL_67;
          goto LABEL_43;
        }
        copyButton = v44;
      }
      v27 = (System_String_o *)(&dword_0 + 3);
      v44 = copyButton;
      if ( !copyButton )
        goto LABEL_67;
LABEL_43:
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))v44->klass->vtable._14_SetState.method)(
        v44,
        v27,
        1LL,
        v44->klass->vtable._15_OnPress.methodPtr);
      removeAllButton = this->fields.removeAllButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
      if ( !removeAllButton )
        goto LABEL_67;
      if ( isEnableRemoveAll )
        v46 = 0;
      else
        v46 = 3;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
        v47 = v46;
      else
        v47 = 0LL;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                                 removeAllButton,
                                                 v47,
                                                 1LL,
                                                 removeAllButton->klass->vtable._15_OnPress.methodPtr);
      initAllButton = this->fields.initAllButton;
      if ( v30
        || (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0LL),
            ((unsigned __int8)gameObject & 1) != 0) )
      {
        v27 = (System_String_o *)(&dword_0 + 3);
        if ( !initAllButton )
          goto LABEL_67;
      }
      else
      {
        v27 = 0LL;
        if ( !initAllButton )
          goto LABEL_67;
      }
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))initAllButton->klass->vtable._14_SetState.method)(
        initAllButton,
        v27,
        1LL,
        initAllButton->klass->vtable._15_OnPress.methodPtr);
      removeEquipButton = this->fields.removeEquipButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0LL);
      if ( removeEquipButton )
      {
        v50 = isEnableRemoveEquip ? 0 : 3;
        v51 = ((unsigned __int8)gameObject & 1) != 0 ? v50 : 0LL;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
          removeEquipButton,
          v51,
          1LL,
          removeEquipButton->klass->vtable._15_OnPress.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
        if ( gameObject )
        {
          v52 = v30 == 0 && isEnableCopy ? 0LL : 3LL;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v52,
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
            v53 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(v53, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
            return;
          }
        }
      }
LABEL_67:
      sub_1B7641C(gameObject, v27);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_1B76164(
        (ServantStatusBattleListViewItem_o *)p_callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (int32_t)callback);
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

  if ( (byte_4A29FCB & 1) == 0 )
  {
    sub_1B761C0(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A29FCB = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1B766DC(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A29FD6 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_3194/*"BaseWindow/CancelButton"*/, method);
    byte_4A29FD6 = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4A29FCC & 1) == 0 )
  {
    sub_1B761C0(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A29FCC = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1B766DC(v8);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B8210;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B81C8;
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
  if ( (byte_4A29FD8 & 1) == 0 )
  {
    sub_1B761C0(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4A29FD8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B76174(this, v9, callback, object);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
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
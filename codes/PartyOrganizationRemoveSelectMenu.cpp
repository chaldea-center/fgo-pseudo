void __fastcall PartyOrganizationRemoveSelectMenu___ctor(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5865 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5865 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B5D560(p_callbackFunc);
    PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_19501452(this, 0LL, v2);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close_19501452(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_42E585D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationRemoveSelectMenu_EndClose__, v6, v7, v8);
    byte_42E585D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndClose(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B5D560(p_closeCallbackFunc);
    System_Action__Invoke(v4, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E585B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E585B = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnChangeName(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E5862 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5862 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 5, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCancel(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E5863 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E5863 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E585E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E585E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 1, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickInitAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E5860 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5860 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 3, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E585F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E585F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 2, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveEquip(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E5861 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5861 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
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
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v51; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  int v54; // w25
  UILabel_o *nameLabel; // x24
  System_String_o *v56; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x24
  struct UICommonButton_o *removeAllButton; // x23
  unsigned int v68; // w8
  __int64 v69; // x1
  struct UICommonButton_o *initAllButton; // x22
  struct UICommonButton_o *removeEquipButton; // x22
  unsigned int v72; // w8
  __int64 v73; // x1
  System_Action_o *v74; // x20

  if ( (byte_42E585C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, isEnableCopy, callback);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10474/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10477/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10480/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_10482/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10475/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10478/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10481/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_10476/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_10479/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, v46, v47, v48);
    byte_42E585C = 1;
  }
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 3 )
    {
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_B5D560(p_callbackFunc);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      return;
    }
    if ( state )
      return;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(&this->fields.callbackFunc);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !partyItem )
    goto LABEL_62;
  menuKind = partyItem->fields.menuKind;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10482/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_62;
  v54 = menuKind | 8;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( v54 == 8 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v56, (Il2CppObject *)partyItem->fields.deckName, 0LL);
    v51 = (System_String_o *)gameObject;
    if ( !nameLabel )
      goto LABEL_62;
  }
  else
  {
    v51 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(nameLabel, v51, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10478/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_62;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !gameObject )
    goto LABEL_62;
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v59, flt_329F7A0[v54 == 8], 0LL);
  copyLabel = this->fields.copyLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10476/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0LL);
  if ( !copyLabel )
    goto LABEL_62;
  UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0LL);
  removeAllLabel = this->fields.removeAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10480/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0LL);
  if ( !removeAllLabel )
    goto LABEL_62;
  UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0LL);
  initAllLabel = this->fields.initAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10477/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0LL);
  if ( !initAllLabel )
    goto LABEL_62;
  UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0LL);
  removeEquipLabel = this->fields.removeEquipLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10481/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0LL);
  if ( !removeEquipLabel )
    goto LABEL_62;
  UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0LL);
  changeNameLabel = this->fields.changeNameLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10475/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0LL);
  if ( !changeNameLabel )
    goto LABEL_62;
  UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10474/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_62;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  copyButton = this->fields.copyButton;
  if ( v54 == 8
    && isEnableCopy
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v51 = 0LL;
    if ( !copyButton )
      goto LABEL_62;
  }
  else
  {
    v51 = (System_String_o *)(&dword_0 + 3);
    if ( !copyButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))copyButton->klass->vtable._14_SetState.method)(
    copyButton,
    v51,
    1LL,
    copyButton->klass->vtable._15_OnPress.methodPtr);
  removeAllButton = this->fields.removeAllButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
  if ( !removeAllButton )
    goto LABEL_62;
  v68 = isEnableRemoveAll ? 0 : 3;
  v69 = ((unsigned __int8)gameObject & 1) != 0 ? v68 : 0LL;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                             removeAllButton,
                                             v69,
                                             1LL,
                                             removeAllButton->klass->vtable._15_OnPress.methodPtr);
  initAllButton = this->fields.initAllButton;
  if ( v54 == 8
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v51 = 0LL;
    if ( !initAllButton )
      goto LABEL_62;
  }
  else
  {
    v51 = (System_String_o *)(&dword_0 + 3);
    if ( !initAllButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))initAllButton->klass->vtable._14_SetState.method)(
    initAllButton,
    v51,
    1LL,
    initAllButton->klass->vtable._15_OnPress.methodPtr);
  removeEquipButton = this->fields.removeEquipButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0LL);
  if ( !removeEquipButton
    || (!isEnableRemoveEquip ? (v72 = 3) : (v72 = 0),
        ((unsigned __int8)gameObject & 1) == 0 ? (v73 = 0LL) : (v73 = v72),
        (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
           removeEquipButton,
           v73,
           1LL,
           removeEquipButton->klass->vtable._15_OnPress.methodPtr),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton) == 0LL)
     || (((void (*)(void))gameObject->klass[1]._1.implementedInterfaces)(),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL)) )
  {
LABEL_62:
    sub_B5D69C(gameObject, v51);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
    gameObject,
    0LL,
    1LL,
    gameObject->klass[1]._1.interfaceOffsets);
  this->fields.state = 1;
  v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__add_callbackFunc(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationRemoveSelectMenu_o *v12; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E5859 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5859 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v9->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationRemoveSelectMenu_o *)sub_B5D990(v9);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5864 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2795/*"BaseWindow/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E5864 = 1;
  }
  return (System_String_o *)StringLiteral_2795/*"BaseWindow/CancelButton"*/;
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
  __int64 v3; // x3
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationRemoveSelectMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E585A & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E585A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v9->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationRemoveSelectMenu_o *)sub_B5D990(v9);
  PartyOrganizationRemoveSelectMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42E5A8B & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A8B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}
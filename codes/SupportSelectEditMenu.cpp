void SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D28D71 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D28D71 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D28D68 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_4D28D68 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D28D6F & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickCancel__);
    byte_4D28D6F = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4D28D6E & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickChangeName__);
    byte_4D28D6E = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        4,
        onClickButton->fields.method);
  }
}


void SupportSelectEditMenu__OnClickCopy(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4D28D6A & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickCopy__);
    byte_4D28D6A = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        0,
        onClickButton->fields.method);
  }
}


void SupportSelectEditMenu__OnClickInitAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4D28D6C & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickInitAll__);
    byte_4D28D6C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        2,
        onClickButton->fields.method);
  }
}


void SupportSelectEditMenu__OnClickRemoveAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4D28D6B & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickRemoveAll__);
    byte_4D28D6B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        1,
        onClickButton->fields.method);
  }
}


void SupportSelectEditMenu__OnClickRemoveEquip(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4D28D6D & 1) == 0 )
  {
    sub_1C94098(&Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    byte_4D28D6D = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        3,
        onClickButton->fields.method);
  }
}


void SupportSelectEditMenu__OnFinishedClose(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onClickButton = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onClickButton, 0, v2, v3, v4, v5, v6, v7);
}


void SupportSelectEditMenu__OnFinishedOpen(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void SupportSelectEditMenu__Open(
        SupportSelectEditMenu_o *this,
        SupportServantData_o *deckData,
        bool isEditting,
        SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v18; // x0
  const MethodInfo *v19; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v21; // x1
  SupportSelectEditMenu_o *v22; // x0
  const MethodInfo *v23; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v25; // x0
  const MethodInfo *v26; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v28; // x1
  SupportSelectEditMenu_o *v29; // x0
  const MethodInfo *v30; // x3
  SupportSelectEditMenu_o *v31; // x0
  const MethodInfo *v32; // x3
  SupportSelectEditMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4D28D67 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_1C94098(&StringLiteral_12600/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_1C94098(&StringLiteral_12597/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_1C94098(&StringLiteral_12598/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_1C94098(&StringLiteral_12603/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_1C94098(&StringLiteral_12601/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_1C94098(&StringLiteral_12599/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_1C94098(&StringLiteral_12596/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_1C94098(&StringLiteral_12595/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_1C94098(&StringLiteral_12602/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_4D28D67 = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.onClickButton,
      (int32_t)onClickButton,
      isEditting,
      (int32_t)onClickButton,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12603/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    supportNameLabel = this->fields.supportNameLabel;
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12601/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v16,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12602/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_32;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0) )
      v13 = 3;
    else
      v13 = 0;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_32;
    v18 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v13,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v18, this->fields.copyButton, (System_String_o *)StringLiteral_12597/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v19);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_32;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v21 = 3;
    else
      v21 = 0;
    v22 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeAllButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeAllButton,
                                       v21,
                                       1,
                                       removeAllButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(v22, this->fields.removeAllButton, (System_String_o *)StringLiteral_12599/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v23);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0);
    v13 = 0;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0) )
        v13 = 3;
      else
        v13 = 0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_32;
    v25 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v13,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v25, this->fields.initAllButton, (System_String_o *)StringLiteral_12598/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v26);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v28 = (_DWORD)gameObject ? 0LL : 3LL;
    v29 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeEquipButton,
                                       v28,
                                       1,
                                       removeEquipButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(
      v29,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12600/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v30);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_1C942F0(gameObject, v13);
    v31 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.nestedTypes)();
    SupportSelectEditMenu__SetButtonText(
      v31,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12596/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v32);
    SupportSelectEditMenu__SetButtonText(v33, this->fields.cancelButton, (System_String_o *)StringLiteral_12595/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v34);
    this->fields.currentState = 0;
    v35 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
  }
}


void SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__51981160; // x20

  if ( (byte_4D28D69 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D69 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51981160, 0, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0);
    if ( ComponentInChildren_object__51981160 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__51981160, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(this, target);
  }
}


bool SupportSelectEditMenu__get_IsEnableInput(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  return this->fields.currentState == 1;
}


UnityEngine_GameObject_o *SupportSelectEditMenu__get_closeBtnObject(
        SupportSelectEditMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D28D70 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D70 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C942F0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void SupportSelectEditMenu_OnClickButtonEvent___ctor(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC4F70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC4F28;
}


System_IAsyncResult_o *SupportSelectEditMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D28D72 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_4D28D72 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SupportSelectEditMenu_OnClickButtonEvent__Invoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}
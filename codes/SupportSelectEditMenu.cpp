void SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C34051 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C34051 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C34048 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_4C34048 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3404F & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickCancel__);
    byte_4C3404F = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4C3404E & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickChangeName__);
    byte_4C3404E = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3404A & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickCopy__);
    byte_4C3404A = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3404C & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickInitAll__);
    byte_4C3404C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3404B & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickRemoveAll__);
    byte_4C3404B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C3404D & 1) == 0 )
  {
    sub_1C32C20(&Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    byte_4C3404D = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  const MethodInfo *v3; // x3

  this->fields.onClickButton = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickButton, 0, v2, v3);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v12; // x0
  UILabel_o *messageLabel; // x22
  __int64 v14; // x1
  SupportSelectEditMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v18; // x1
  SupportSelectEditMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  bool IsEmpty; // w0
  __int64 v22; // x1
  SupportSelectEditMenu_o *v23; // x0
  const MethodInfo *v24; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v26; // x1
  SupportSelectEditMenu_o *v27; // x0
  const MethodInfo *v28; // x3
  SupportSelectEditMenu_o *v29; // x0
  const MethodInfo *v30; // x3
  SupportSelectEditMenu_o *v31; // x0
  const MethodInfo *v32; // x3
  System_Action_o *v33; // x20

  if ( (byte_4C34047 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_1C32C20(&StringLiteral_12544/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_1C32C20(&StringLiteral_12541/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_1C32C20(&StringLiteral_12542/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_1C32C20(&StringLiteral_12547/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_1C32C20(&StringLiteral_12545/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_1C32C20(&StringLiteral_12543/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_1C32C20(&StringLiteral_12540/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_1C32C20(&StringLiteral_12539/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_1C32C20(&StringLiteral_12546/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_4C34047 = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.onClickButton,
      (int32_t)onClickButton,
      isEditting,
      (const MethodInfo *)onClickButton);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12547/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    supportNameLabel = this->fields.supportNameLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12545/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v12,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12546/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_32;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0) )
      v14 = 3;
    else
      v14 = 0;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_32;
    v15 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v14,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v15, this->fields.copyButton, (System_String_o *)StringLiteral_12541/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v16);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_32;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v18 = 3;
    else
      v18 = 0;
    v19 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeAllButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeAllButton,
                                       v18,
                                       1,
                                       removeAllButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(v19, this->fields.removeAllButton, (System_String_o *)StringLiteral_12543/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v20);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0);
    v22 = 0;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0) )
        v22 = 3;
      else
        v22 = 0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_32;
    v23 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v22,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v23, this->fields.initAllButton, (System_String_o *)StringLiteral_12542/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v24);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v26 = (_DWORD)gameObject ? 0LL : 3LL;
    v27 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeEquipButton,
                                       v26,
                                       1,
                                       removeEquipButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(
      v27,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12544/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v28);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_1C32E7C(gameObject);
    v29 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.nestedTypes)();
    SupportSelectEditMenu__SetButtonText(
      v29,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12540/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v30);
    SupportSelectEditMenu__SetButtonText(v31, this->fields.cancelButton, (System_String_o *)StringLiteral_12539/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v32);
    this->fields.currentState = 0;
    v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
  }
}


void SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__51199524; // x20

  if ( (byte_4C34049 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34049 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51199524, 0, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0);
    if ( ComponentInChildren_object__51199524 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__51199524, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_1C32E7C(this);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C34050 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34050 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void SupportSelectEditMenu_OnClickButtonEvent___ctor(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A73EAC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A73E64;
}


System_IAsyncResult_o *SupportSelectEditMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C34052 & 1) == 0 )
  {
    sub_1C32C20(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_4C34052 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
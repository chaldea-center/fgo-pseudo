void SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C23980 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23980 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C23977 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_4C23977 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C2397E & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickCancel__);
    byte_4C2397E = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4C2397D & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickChangeName__);
    byte_4C2397D = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C23979 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickCopy__);
    byte_4C23979 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2397B & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickInitAll__);
    byte_4C2397B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2397A & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickRemoveAll__);
    byte_4C2397A = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2397C & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    byte_4C2397C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickButton, 0, v2, v3);
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
  __int64 v10; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v13; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v18; // x1
  SupportSelectEditMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v22; // x0
  const MethodInfo *v23; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v25; // x1
  SupportSelectEditMenu_o *v26; // x0
  const MethodInfo *v27; // x3
  SupportSelectEditMenu_o *v28; // x0
  const MethodInfo *v29; // x3
  SupportSelectEditMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x20

  if ( (byte_4C23976 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_1C2D490(&StringLiteral_12541/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_1C2D490(&StringLiteral_12538/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_1C2D490(&StringLiteral_12539/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_1C2D490(&StringLiteral_12544/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_1C2D490(&StringLiteral_12542/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_1C2D490(&StringLiteral_12540/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_1C2D490(&StringLiteral_12537/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_1C2D490(&StringLiteral_12536/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12543/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_4C23976 = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_1C2D434(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12544/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    supportNameLabel = this->fields.supportNameLabel;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12542/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v13,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12543/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_32;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0) )
      v10 = 3;
    else
      v10 = 0;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_32;
    v15 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v10,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v15, this->fields.copyButton, (System_String_o *)StringLiteral_12538/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v16);
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
    SupportSelectEditMenu__SetButtonText(v19, this->fields.removeAllButton, (System_String_o *)StringLiteral_12540/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v20);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0);
    v10 = 0;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0) )
        v10 = 3;
      else
        v10 = 0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_32;
    v22 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v10,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v22, this->fields.initAllButton, (System_String_o *)StringLiteral_12539/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v23);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v25 = (_DWORD)gameObject ? 0LL : 3LL;
    v26 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeEquipButton,
                                       v25,
                                       1,
                                       removeEquipButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(
      v26,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12541/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v27);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_1C2D6EC(gameObject, v10);
    v28 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.nestedTypes)();
    SupportSelectEditMenu__SetButtonText(
      v28,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12537/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v29);
    SupportSelectEditMenu__SetButtonText(v30, this->fields.cancelButton, (System_String_o *)StringLiteral_12536/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v31);
    this->fields.currentState = 0;
    v32 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0);
  }
}


void SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__51139460; // x20

  if ( (byte_4C23978 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23978 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51139460, 0, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0);
    if ( ComponentInChildren_object__51139460 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__51139460, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(this, target);
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

  if ( (byte_4C2397F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2397F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6E784;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E73C;
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
  if ( (byte_4C23981 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_4C23981 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
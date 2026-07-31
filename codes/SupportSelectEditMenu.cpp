void SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5934B19 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934B19 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.currentState = 2;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5934B10 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_5934B10 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5934B17 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickCancel__);
    byte_5934B17 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_5934B16 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickChangeName__);
    byte_5934B16 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934B12 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickCopy__);
    byte_5934B12 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934B14 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickInitAll__);
    byte_5934B14 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934B13 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickRemoveAll__);
    byte_5934B13 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5934B15 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    byte_5934B15 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickButton = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton, 0, v2, v3, v4, v5, v6, v7);
}


void SupportSelectEditMenu__OnFinishedOpen(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectEditMenu__Open(
        SupportSelectEditMenu_o *this,
        SupportServantData_o *deckData,
        bool isEditting,
        SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v18; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v20; // x0
  const MethodInfo *v21; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v23; // x1
  SupportSelectEditMenu_o *v24; // x0
  const MethodInfo *v25; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v27; // x0
  const MethodInfo *v28; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v30; // x1
  SupportSelectEditMenu_o *v31; // x0
  const MethodInfo *v32; // x3
  SupportSelectEditMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  SupportSelectEditMenu_o *v35; // x0
  const MethodInfo *v36; // x3
  System_Action_o *v37; // x20

  if ( (byte_5934B0F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_21FFC50(&StringLiteral_13046/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_21FFC50(&StringLiteral_13043/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_21FFC50(&StringLiteral_13044/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_21FFC50(&StringLiteral_13049/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_21FFC50(&StringLiteral_13047/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_21FFC50(&StringLiteral_13045/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_21FFC50(&StringLiteral_13042/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_21FFC50(&StringLiteral_13041/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_21FFC50(&StringLiteral_13048/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_5934B0F = 1;
  }
  if ( this->fields.currentState == 2 && deckData )
  {
    this->fields.onClickButton = onClickButton;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
      (int32_t)onClickButton,
      (System_String_o *)isEditting,
      (System_String_o *)onClickButton,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13049/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    supportNameLabel = this->fields.supportNameLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13047/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v18,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13048/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0);
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
    v20 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v13,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v20, this->fields.copyButton, (System_String_o *)StringLiteral_13043/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v21);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_32;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v23 = 3;
    else
      v23 = 0;
    v24 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeAllButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeAllButton,
                                       v23,
                                       1,
                                       removeAllButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(v24, this->fields.removeAllButton, (System_String_o *)StringLiteral_13045/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v25);
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
    v27 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                       gameObject,
                                       v13,
                                       1,
                                       gameObject->klass[1]._1.implementedInterfaces);
    SupportSelectEditMenu__SetButtonText(v27, this->fields.initAllButton, (System_String_o *)StringLiteral_13044/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v28);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v30 = (_DWORD)gameObject ? 0LL : 3LL;
    v31 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
                                       this->fields.removeEquipButton,
                                       v30,
                                       1,
                                       removeEquipButton->klass->vtable._14_SetState.method);
    SupportSelectEditMenu__SetButtonText(
      v31,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_13046/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v32);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_21FFECC(gameObject, v13);
    v33 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.nestedTypes)();
    SupportSelectEditMenu__SetButtonText(
      v33,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_13042/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v34);
    SupportSelectEditMenu__SetButtonText(v35, this->fields.cancelButton, (System_String_o *)StringLiteral_13041/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v36);
    this->fields.currentState = 0;
    v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, 0);
  }
}


void SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *ComponentInChildren_object__58644924; // x20
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_5934B11 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B11 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58644924, 0, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0);
    if ( ComponentInChildren_object__58644924 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__58644924, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(this, target);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5934B18 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B18 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void SupportSelectEditMenu_OnClickButtonEvent___ctor(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF427C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF4234;
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
  if ( (byte_5934B1A & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_5934B1A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
void __fastcall SupportSelectConfirmCopyMenu___ctor(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E77D & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1E77D = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__Close(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C1E779 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, v3);
    byte_4C1E779 = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectConfirmCopyMenu__OnClickCancel(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4C1E77B & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportSelectConfirmCopyMenu_OnClickCancel__, method);
    byte_4C1E77B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmCopyMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmCopyMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportSelectConfirmCopyMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        0LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__OnClickDecide(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4C1E77A & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportSelectConfirmCopyMenu_OnClickDecide__, method);
    byte_4C1E77A = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmCopyMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmCopyMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportSelectConfirmCopyMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        1LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__OnFinishedClose(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onClickButton = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectConfirmCopyMenu__OnFinishedOpen(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void __fastcall SupportSelectConfirmCopyMenu__Open(
        SupportSelectConfirmCopyMenu_o *this,
        SupportServantData_o *baseDeckData,
        SupportServantData_o *targetDeckData,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton,
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
  UILabel_o *titleLabel; // x23
  System_String_o *baseDeckObj; // x0
  __int64 v19; // x1
  UILabel_o *messageLabel; // x23
  UILabel_o *baseDeckTitleLabel; // x23
  UILabel_o *targetDeckTitleLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *v33; // x20

  if ( (byte_4C1E778 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, baseDeckData);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, v10);
    sub_1C3B764(&StringLiteral_12700/*"Stack overflow."*/, v11);
    sub_1C3B764(&StringLiteral_12699/*"Stack error: "*/, v12);
    sub_1C3B764(&StringLiteral_12701/*"StackTraceString"*/, v13);
    sub_1C3B764(&StringLiteral_12696/*"SslStream"*/, v14);
    sub_1C3B764(&StringLiteral_12697/*"StDev"*/, v15);
    sub_1C3B764(&StringLiteral_12698/*"Stack empty."*/, v16);
    byte_4C1E778 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    this->fields.currentState = 0;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12701/*"StackTraceString"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, baseDeckObj, 0LL);
    messageLabel = this->fields.messageLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12699/*"Stack error: "*/, 0LL);
    if ( !messageLabel )
      goto LABEL_16;
    UILabel__set_text(messageLabel, baseDeckObj, 0LL);
    baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12696/*"SslStream"*/, 0LL);
    if ( !baseDeckTitleLabel )
      goto LABEL_16;
    UILabel__set_text(baseDeckTitleLabel, baseDeckObj, 0LL);
    targetDeckTitleLabel = this->fields.targetDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12700/*"Stack overflow."*/, 0LL);
    if ( !targetDeckTitleLabel )
      goto LABEL_16;
    UILabel__set_text(targetDeckTitleLabel, baseDeckObj, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12698/*"Stack empty."*/, 0LL);
    if ( !decideButtonLabel
      || (UILabel__set_text(decideButtonLabel, baseDeckObj, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_12697/*"StDev"*/, 0LL),
          !cancelButtonLabel)
      || (UILabel__set_text(cancelButtonLabel, baseDeckObj, 0LL),
          (baseDeckObj = (System_String_o *)this->fields.baseDeckObj) == 0LL)
      || (SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
            baseDeckData,
            0,
            1,
            v25),
          (baseDeckObj = (System_String_o *)this->fields.targetDeckObj) == 0LL) )
    {
LABEL_16:
      sub_1C3B9C0(baseDeckObj, v19);
    }
    SupportSelectDeckListViewItemDraw__SetSupportData(
      (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
      targetDeckData,
      0,
      1,
      v26);
    this->fields.onClickButton = onClickButton;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.onClickButton,
      (int64_t)onClickButton,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v33 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
  }
}


void __fastcall SupportSelectConfirmCopyMenu__add_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmCopyMenu_o *v11; // x0
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C1E776 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, value);
    byte_4C1E776 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  SupportSelectConfirmCopyMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmCopyMenu__get_closeBtnPath(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1E77C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4760/*"Count must be positive and count must refer to a location within the string/array/collection."*/, method);
    byte_4C1E77C = 1;
  }
  return (System_String_o *)StringLiteral_4760/*"Count must be positive and count must refer to a location within the string/array/collection."*/;
}


void __fastcall SupportSelectConfirmCopyMenu__remove_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmCopyMenu_o *v11; // x0
  SupportServantData_o *v12; // x1
  SupportServantData_o *v13; // x2
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4C1E777 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, value);
    byte_4C1E777 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  SupportSelectConfirmCopyMenu__Open(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A78EA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A78E58;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C1E77E & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C1E77E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}
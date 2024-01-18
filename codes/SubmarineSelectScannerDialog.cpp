void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4185838 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185838 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4185833 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4185833 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B2C434(titleLabel, v5);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B2C2F8(&this->fields.closeAction, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4185835 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, v4);
    byte_4185835 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerDialog__OnSelectScanner(
        SubmarineSelectScannerDialog_o *this,
        int32_t scanId,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SubmarineSelectScannerDialog___c__DisplayClass11_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x21

  if ( (byte_4185836 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__, v8);
    sub_B2C35C(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, v9);
    byte_4185836 = 1;
  }
  v10 = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_B2C42C(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.scanId = scanId;
  if ( this->fields.state == 2 )
  {
    if ( isEnabled )
    {
      this->fields.state = 3;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)v10,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerDialog__Open(
        SubmarineSelectScannerDialog_o *this,
        int32_t eventId,
        System_Action_int__o *closeAction,
        System_Action_o *openFinishedAction,
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
  SubmarineSelectScannerDialog___c__DisplayClass9_0_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v25; // x2
  struct SubmarineSelectScannerListViewManager_o *v26; // x22
  System_Action_int__bool__o *v27; // x20
  System_Action_o *v28; // x20

  if ( (byte_4185834 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__bool___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Action_int__bool__TypeInfo, v9);
    sub_B2C35C(&System_Action_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v13);
    sub_B2C35C(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__, v14);
    sub_B2C35C(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_5728/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_5730/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, v17);
    byte_4185834 = 1;
  }
  v18 = (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)sub_B2C42C(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_18;
  v18->fields.openFinishedAction = openFinishedAction;
  sub_B2C2F8(&v18->fields, openFinishedAction);
  v18->fields.__4__this = this;
  sub_B2C2F8(&v18->fields.__4__this, this);
  SubmarineSelectScannerDialog__Init(this, v21);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeAction = closeAction;
  sub_B2C2F8(&this->fields.closeAction, closeAction);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      SubmarineSelectScannerListViewManager__CreateList(
        (SubmarineSelectScannerListViewManager_o *)gameObject,
        eventId,
        v25);
      v26 = this->fields.listViewManager;
      v27 = (System_Action_int__bool__o *)sub_B2C42C(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v27,
        (Il2CppObject *)this,
        Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        (const MethodInfo_24C8168 *)Method_System_Action_int__bool___ctor__);
      if ( v26 )
      {
        v26->fields._OnClickItemAction_k__BackingField = v27;
        sub_B2C2F8(&v26->fields._OnClickItemAction_k__BackingField, v27);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B2C434(gameObject, v20);
  }
LABEL_17:
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v18,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4185839 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_int___, method);
    byte_4185839 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2D65AF8 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4185837 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185837 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(
        SubmarineSelectScannerDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___c__DisplayClass11_0___OnSelectScanner_b__0(
        SubmarineSelectScannerDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  SubmarineSelectScannerDialog___c__DisplayClass11_0_o *v2; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8
  System_Action_T__o *closeAction; // x0

  v2 = this;
  if ( (byte_41847AD & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_B2C35C(
                                                                     &Method_ActionExtensions_Call_int___,
                                                                     method);
    byte_41847AD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v2->fields.scanId,
      (const MethodInfo_2D65AF8 *)Method_ActionExtensions_Call_int___);
}


void __fastcall SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(
        SubmarineSelectScannerDialog___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___c__DisplayClass9_0___Open_b__0(
        SubmarineSelectScannerDialog___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *openFinishedAction; // x0
  struct SubmarineSelectScannerDialog_o *_4__this; // x8

  openFinishedAction = this->fields.openFinishedAction;
  if ( !openFinishedAction
    || (System_Action__Invoke(openFinishedAction, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(openFinishedAction, method);
  }
  _4__this->fields.state = 2;
}
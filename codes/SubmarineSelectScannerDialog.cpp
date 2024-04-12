void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AEE9D & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AEE9D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AEE98 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEE98 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B52A5C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AEE9A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__);
    byte_42AEE9A = 1;
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
    v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


void __fastcall SubmarineSelectScannerDialog__OnSelectScanner(
        SubmarineSelectScannerDialog_o *this,
        int32_t scanId,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x21

  if ( (byte_42AEE9B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__);
    sub_B52984(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
    byte_42AEE9B = 1;
  }
  v7 = sub_B52A54(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = scanId;
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
      v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v7,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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


void __fastcall SubmarineSelectScannerDialog__Open(
        SubmarineSelectScannerDialog_o *this,
        int32_t eventId,
        System_Action_int__o *closeAction,
        System_Action_o *openFinishedAction,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *listViewManager; // x22
  struct SubmarineSelectScannerListViewManager_o *v34; // x22
  System_Action_int__bool__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_o *v42; // x20

  if ( (byte_42AEE99 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__bool___ctor__);
    sub_B52984(&System_Action_int__bool__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SubmarineSelectScannerDialog_OnSelectScanner__);
    sub_B52984(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__);
    sub_B52984(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
    sub_B52984(&StringLiteral_5770/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/);
    sub_B52984(&StringLiteral_5772/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/);
    byte_42AEE99 = 1;
  }
  v9 = sub_B52A54(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 16) = openFinishedAction;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)openFinishedAction,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  SubmarineSelectScannerDialog__Init(this, v24);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeAction = closeAction;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
        0LL);
      v34 = this->fields.listViewManager;
      v35 = (System_Action_int__bool__o *)sub_B52A54(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v35,
        (Il2CppObject *)this,
        Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        (const MethodInfo_2633E10 *)Method_System_Action_int__bool___ctor__);
      if ( v34 )
      {
        v34->fields._OnClickItemAction_k__BackingField = v35;
        sub_B52920(
          (BattleServantConfConponent_o *)&v34->fields._OnClickItemAction_k__BackingField,
          (System_Int32_array **)v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B52A5C(gameObject, v11);
  }
LABEL_17:
  v42 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v9,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_42AEE9E & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_int___);
    byte_42AEE9E = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2D61644 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42AEE9C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEE9C = 1;
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
    sub_B52A5C(0LL, v4);
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
  if ( (byte_42ADD89 & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_B52984(&Method_ActionExtensions_Call_int___);
    byte_42ADD89 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v2->fields.scanId,
      (const MethodInfo_2D61644 *)Method_ActionExtensions_Call_int___);
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
    sub_B52A5C(openFinishedAction, method);
  }
  _4__this->fields.state = 2;
}
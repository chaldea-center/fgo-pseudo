void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F7CCC & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7CCC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7CC7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F7CC7 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(closeLabel, v8, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F7CC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, v4);
    byte_40F7CC9 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerDialog__OnSelectScanner(
        SubmarineSelectScannerDialog_o *this,
        int32_t scanId,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21

  if ( (byte_40F7CCA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__, v9);
    sub_B16FFC(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, v10);
    byte_40F7CCA = 1;
  }
  v11 = sub_B170CC(
          SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo,
          *(_QWORD *)&scanId,
          isEnabled,
          method,
          v4);
  SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = scanId;
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
      v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v11,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
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
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x23
  System_String_o *v34; // x0
  UILabel_o *messageLabel; // x23
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *listViewManager; // x22
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  SubmarineSelectScannerListViewManager_o *v48; // x0
  struct SubmarineSelectScannerListViewManager_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_int__bool__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Action_o *v61; // x20

  if ( (byte_40F7CC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__bool___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Action_int__bool__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v13);
    sub_B16FFC(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__, v14);
    sub_B16FFC(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_5710, v16);
    sub_B16FFC(&StringLiteral_5712, v17);
    byte_40F7CC8 = 1;
  }
  v18 = sub_B170CC(
          SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo,
          *(_QWORD *)&eventId,
          closeAction,
          openFinishedAction,
          method);
  SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_18;
  *(_QWORD *)(v18 + 16) = openFinishedAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)openFinishedAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v18 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  SubmarineSelectScannerDialog__Init(this, v31);
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
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5712, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, v34, 0LL);
  messageLabel = this->fields.messageLabel;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5710, 0LL);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, v36, 0LL);
  this->fields.closeAction = closeAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    v48 = this->fields.listViewManager;
    if ( v48 )
    {
      SubmarineSelectScannerListViewManager__CreateList(v48, eventId, v45);
      v49 = this->fields.listViewManager;
      v54 = (System_Action_int__bool__o *)sub_B170CC(System_Action_int__bool__TypeInfo, v50, v51, v52, v53);
      System_Action_int__bool____ctor(
        v54,
        (Il2CppObject *)this,
        Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        (const MethodInfo_24C333C *)Method_System_Action_int__bool___ctor__);
      if ( v49 )
      {
        v49->fields._OnClickItemAction_k__BackingField = v54;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v49->fields._OnClickItemAction_k__BackingField,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_17:
  v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v18,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_40F7CCD & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, method);
    byte_40F7CCD = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F7CCB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7CCB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  struct SubmarineSelectScannerDialog_o *_4__this; // x8
  System_Action_T__o *closeAction; // x0

  if ( (byte_40F7A7C & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, method);
    byte_40F7A7C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      this->fields.scanId,
      (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
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
    sub_B170D4();
  }
  _4__this->fields.state = 2;
}
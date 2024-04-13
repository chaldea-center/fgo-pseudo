void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BC4 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BC4 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E7BBF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E7BBF = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B5D69C(titleLabel, v11);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v14, v15, v16, v17, v18, v19);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E7BC1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, v8, v9, v10);
    byte_42E7BC1 = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall SubmarineSelectScannerDialog__OnSelectScanner(
        SubmarineSelectScannerDialog_o *this,
        int32_t scanId,
        bool isEnabled,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *v25; // x21

  if ( (byte_42E7BC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, scanId, isEnabled, method);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__, v10, v11, v12);
    sub_B5D5C4(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, v13, v14, v15);
    byte_42E7BC2 = 1;
  }
  v16 = sub_B5D694(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)v16,
    0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = scanId;
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
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v16,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v25, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Object_o *listViewManager; // x22
  struct SubmarineSelectScannerListViewManager_o *v61; // x22
  System_Action_int__bool__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Action_o *v69; // x20

  if ( (byte_42E7BC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__bool___ctor__, eventId, (_DWORD)closeAction, openFinishedAction);
    sub_B5D5C4(&System_Action_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Action_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v21, v22, v23);
    sub_B5D5C4(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__, v24, v25, v26);
    sub_B5D5C4(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_5805/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_5807/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, v33, v34, v35);
    byte_42E7BC0 = 1;
  }
  v36 = sub_B5D694(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(
    (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_18;
  *(_QWORD *)(v36 + 16) = openFinishedAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 16),
    (System_Int32_array **)openFinishedAction,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)(v36 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)this, v45, v46, v47, v48, v49, v50);
  SubmarineSelectScannerDialog__Init(this, v51);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5807/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeAction = closeAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
      v61 = this->fields.listViewManager;
      v62 = (System_Action_int__bool__o *)sub_B5D694(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v62,
        (Il2CppObject *)this,
        Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        (const MethodInfo_25979B0 *)Method_System_Action_int__bool___ctor__);
      if ( v61 )
      {
        v61->fields._OnClickItemAction_k__BackingField = v62;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v61->fields._OnClickItemAction_k__BackingField,
          (System_Int32_array **)v62,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B5D69C(gameObject, v38);
  }
LABEL_17:
  v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v69,
    (Il2CppObject *)v36,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_T__o *closeAction; // x0

  if ( (byte_42E7BC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, (_DWORD)method, v2, v3);
    byte_42E7BC5 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7BC3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BC3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SubmarineSelectScannerDialog___c__DisplayClass11_0_o *v4; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8
  System_Action_T__o *closeAction; // x0

  v4 = this;
  if ( (byte_42E6463 & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_B5D5C4(
                                                                     &Method_ActionExtensions_Call_int___,
                                                                     (_DWORD)method,
                                                                     v2,
                                                                     v3);
    byte_42E6463 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v4->fields.scanId,
      (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
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
    sub_B5D69C(openFinishedAction, method);
  }
  _4__this->fields.state = 2;
}
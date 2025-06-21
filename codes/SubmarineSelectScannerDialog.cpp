void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B18F34 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B18F34 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B18F2F & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B18F2F = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1BCB254(titleLabel, v5);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v8, v9);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B18F31 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog_OnClickCloseButton__, v3);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, v4);
    byte_4B18F31 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v5 = Method_SubmarineSelectScannerDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_Action_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4B18F32 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v7);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__, v8);
    sub_1BCAFF8(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, v9);
    byte_4B18F32 = 1;
  }
  v10 = sub_1BCB244(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = scanId;
  if ( this->fields.state == 2 )
  {
    if ( isEnabled )
    {
      this->fields.state = 3;
      v15 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCB010(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v10,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
    }
    else
    {
      v18 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCB010(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0LL);
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
  __int64 v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v30; // x2
  struct SubmarineSelectScannerListViewManager_o *v31; // x22
  System_Action_int__bool__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4B18F30 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__bool__TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&System_Action_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v12);
    sub_1BCAFF8(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__, v13);
    sub_1BCAFF8(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_5680/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, v15);
    sub_1BCAFF8(&StringLiteral_5682/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, v16);
    byte_4B18F30 = 1;
  }
  v17 = sub_1BCB244(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v17 + 16) = openFinishedAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)openFinishedAction, v20, v21);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v22, v23);
  SubmarineSelectScannerDialog__Init(this, v24);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_16;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)closeAction, v27, v28);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      SubmarineSelectScannerListViewManager__CreateList(
        (SubmarineSelectScannerListViewManager_o *)gameObject,
        eventId,
        v30);
      v31 = this->fields.listViewManager;
      v32 = (System_Action_int__bool__o *)sub_1BCB244(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        0LL);
      if ( v31 )
      {
        v31->fields._OnClickItemAction_k__BackingField = v32;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v31->fields._OnClickItemAction_k__BackingField, (int32_t)v32, v33, v34);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1BCB254(gameObject, v19);
  }
LABEL_15:
  v35 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v17,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4B18F35 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int___, method);
    byte_4B18F35 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2F6A04C *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B18F33 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18F33 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
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
  if ( (byte_4B18F36 & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_1BCAFF8(
                                                                     &Method_ActionExtensions_Call_int___,
                                                                     method);
    byte_4B18F36 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v2->fields.scanId,
      (const MethodInfo_2F6A04C *)Method_ActionExtensions_Call_int___);
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
  struct System_Action_o *openFinishedAction; // x8
  SubmarineSelectScannerDialog___c__DisplayClass9_0_o *v3; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8

  openFinishedAction = this->fields.openFinishedAction;
  if ( !openFinishedAction
    || (v3 = this,
        this = (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openFinishedAction->fields.m_target)(
                                                                        openFinishedAction->fields.original_method_info,
                                                                        *(_QWORD *)&openFinishedAction->fields.extra_arg),
        (_4__this = v3->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  _4__this->fields.state = 2;
}
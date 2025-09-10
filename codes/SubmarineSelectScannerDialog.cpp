void SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C23C98 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23C98 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23C93 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23C93 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_9:
    sub_1C2D6EC(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  this->fields.closeAction = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void SubmarineSelectScannerDialog__OnClickCloseButton(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C23C95 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__);
    byte_4C23C95 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_SubmarineSelectScannerDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void SubmarineSelectScannerDialog__OnSelectScanner(
        SubmarineSelectScannerDialog_o *this,
        int32_t scanId,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_Action_o *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_4C23C96 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog_OnSelectScanner__);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__);
    sub_1C2D490(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
    byte_4C23C96 = 1;
  }
  v7 = sub_1C2D6DC(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = scanId;
  if ( this->fields.state == 2 )
  {
    if ( isEnabled )
    {
      this->fields.state = 3;
      v12 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C2D4A8(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)v7,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0);
      BaseDialog__Close((BaseDialog_o *)this, v14, 0);
    }
    else
    {
      v15 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C2D4A8(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
    }
  }
}


void SubmarineSelectScannerDialog__Open(
        SubmarineSelectScannerDialog_o *this,
        int32_t eventId,
        System_Action_int__o *closeAction,
        System_Action_o *openFinishedAction,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v22; // x2
  struct SubmarineSelectScannerListViewManager_o *v23; // x22
  System_Action_int__bool__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x20

  if ( (byte_4C23C94 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__bool__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog_OnSelectScanner__);
    sub_1C2D490(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__);
    sub_1C2D490(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5717/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_5719/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/);
    byte_4C23C94 = 1;
  }
  v9 = sub_1C2D6DC(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = openFinishedAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)openFinishedAction, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  SubmarineSelectScannerDialog__Init(this, v16);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5719/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_16;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  this->fields.closeAction = closeAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)closeAction, v19, v20);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      SubmarineSelectScannerListViewManager__CreateList(
        (SubmarineSelectScannerListViewManager_o *)gameObject,
        eventId,
        v22);
      v23 = this->fields.listViewManager;
      v24 = (System_Action_int__bool__o *)sub_1C2D6DC(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        0);
      if ( v23 )
      {
        v23->fields._OnClickItemAction_k__BackingField = v24;
        sub_1C2D434((CGThumbnailListItem_o *)&v23->fields._OnClickItemAction_k__BackingField, (int32_t)v24, v25, v26);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C2D6EC(gameObject, v11);
  }
LABEL_15:
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0);
}


void SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4C23C99 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C23C99 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C23C97 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23C97 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void SubmarineSelectScannerDialog___c__DisplayClass11_0___ctor(
        SubmarineSelectScannerDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSelectScannerDialog___c__DisplayClass11_0___OnSelectScanner_b__0(
        SubmarineSelectScannerDialog___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  SubmarineSelectScannerDialog___c__DisplayClass11_0_o *v2; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8
  System_Action_T__o *closeAction; // x0

  v2 = this;
  if ( (byte_4C23C9A & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C23C9A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v2->fields.scanId,
      (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
}


void SubmarineSelectScannerDialog___c__DisplayClass9_0___ctor(
        SubmarineSelectScannerDialog___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSelectScannerDialog___c__DisplayClass9_0___Open_b__0(
        SubmarineSelectScannerDialog___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *openFinishedAction; // x8
  SubmarineSelectScannerDialog___c__DisplayClass9_0_o *v3; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8

  openFinishedAction = this->fields.openFinishedAction;
  if ( !openFinishedAction
    || (v3 = this,
        this = (SubmarineSelectScannerDialog___c__DisplayClass9_0_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))openFinishedAction->fields.invoke_impl)(
                                                                        openFinishedAction->fields.method_code,
                                                                        openFinishedAction->fields.method),
        (_4__this = v3->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  _4__this->fields.state = 2;
}
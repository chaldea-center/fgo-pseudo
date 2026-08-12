void SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CF73 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CF73 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *closeLabel; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596CF6E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CF6E = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_9:
    sub_2213CDC(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v8, v9, v10, v11, v12, v13);
}


void SubmarineSelectScannerDialog__OnClickCloseButton(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596CF70 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    sub_2213A60(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__);
    byte_596CF70 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_SubmarineSelectScannerDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t state; // w8
  _BYTE *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  System_Action_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_596CF71 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineSelectScannerDialog_OnSelectScanner__);
    sub_2213A60(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__);
    sub_2213A60(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
    byte_596CF71 = 1;
  }
  v7 = sub_2213CCC(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  state = this->fields.state;
  *(_DWORD *)(v7 + 24) = scanId;
  if ( state == 2 )
  {
    if ( isEnabled )
    {
      v17 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      this->fields.state = 3;
      if ( (v17[83] & 2) != 0 )
        v17 = (_BYTE *)sub_2213A78(v17);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, *((_QWORD *)v17 + 4));
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v7,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0);
      BaseDialog__Close((BaseDialog_o *)this, v19, 0);
    }
    else
    {
      v20 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_2213A78(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v38; // x2
  struct SubmarineSelectScannerListViewManager_o *v39; // x22
  System_Action_int__bool__o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Action_o *v47; // x20

  if ( (byte_596CF6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SubmarineSelectScannerDialog_OnSelectScanner__);
    sub_2213A60(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__);
    sub_2213A60(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
    sub_2213A60(&StringLiteral_5957/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5959/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/);
    byte_596CF6F = 1;
  }
  v9 = sub_2213CCC(SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = openFinishedAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)openFinishedAction, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  SubmarineSelectScannerDialog__Init(this, v24);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5959/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5957/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_16;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
  this->fields.closeAction = closeAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      SubmarineSelectScannerListViewManager__CreateList(
        (SubmarineSelectScannerListViewManager_o *)gameObject,
        eventId,
        v38);
      v39 = this->fields.listViewManager;
      v40 = (System_Action_int__bool__o *)sub_2213CCC(System_Action_int__bool__TypeInfo);
      System_Action_int__bool____ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        0);
      if ( v39 )
      {
        v39->fields._OnClickItemAction_k__BackingField = v40;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v39->fields._OnClickItemAction_k__BackingField,
          (int32_t)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, v11);
  }
LABEL_15:
  v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v9,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
}


void SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_596CF74 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    byte_596CF74 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596CF72 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CF72 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  if ( (byte_596CF75 & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_2213A60(&Method_ActionExtensions_Call_int___);
    byte_596CF75 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v2->fields.scanId,
      (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
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
    sub_2213CDC(this, method);
  }
  _4__this->fields.state = 2;
}
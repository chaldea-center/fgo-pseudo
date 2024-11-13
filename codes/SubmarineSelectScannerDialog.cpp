void __fastcall SubmarineSelectScannerDialog___ctor(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12E03 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12E03 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerDialog__Init(SubmarineSelectScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12DFE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B12DFE = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1BCAA3C(titleLabel, v8);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall SubmarineSelectScannerDialog__OnClickCloseButton(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B12E00 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__, v6, v7);
    byte_4B12E00 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v8 = Method_SubmarineSelectScannerDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SubmarineSelectScannerDialog_OnClickCloseButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SubmarineSelectScannerDialog__OnClickCloseButton_b__10_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0

  if ( (byte_4B12E01 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&scanId, isEnabled);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v7, v8);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__, v9, v10);
    sub_1BCA7E0(&SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, v11, v12);
    byte_4B12E01 = 1;
  }
  v13 = sub_1BCAA2C(SubmarineSelectScannerDialog___c__DisplayClass11_0_TypeInfo, *(_QWORD *)&scanId, isEnabled, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 24) = scanId;
  if ( this->fields.state == 2 )
  {
    if ( isEnabled )
    {
      this->fields.state = 3;
      v22 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BCA7F8(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v13,
        Method_SubmarineSelectScannerDialog___c__DisplayClass11_0__OnSelectScanner_b__0__,
        0LL);
      BaseDialog__Close((BaseDialog_o *)this, v27, 0LL);
    }
    else
    {
      v28 = Method_SubmarineSelectScannerDialog_OnSelectScanner__;
      if ( (*((_BYTE *)Method_SubmarineSelectScannerDialog_OnSelectScanner__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BCA7F8(Method_SubmarineSelectScannerDialog_OnSelectScanner__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *messageLabel; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  UnityEngine_Object_o *listViewManager; // x22
  const MethodInfo *v52; // x2
  __int64 v53; // x3
  struct SubmarineSelectScannerListViewManager_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Action_int__bool__o *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Action_o *v65; // x20

  if ( (byte_4B12DFF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__bool__TypeInfo, *(_QWORD *)&eventId, closeAction);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog_OnSelectScanner__, v15, v16);
    sub_1BCA7E0(&Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__, v17, v18);
    sub_1BCA7E0(&SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_5805/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5807/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, v23, v24);
    byte_4B12DFF = 1;
  }
  v25 = sub_1BCAA2C(
          SubmarineSelectScannerDialog___c__DisplayClass9_0_TypeInfo,
          *(_QWORD *)&eventId,
          closeAction,
          openFinishedAction);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = openFinishedAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)openFinishedAction, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)this, v34, v35, v36, v37, v38, v39);
  SubmarineSelectScannerDialog__Init(this, v40);
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5807/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_16;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeAction,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( gameObject )
    {
      SubmarineSelectScannerListViewManager__CreateList(
        (SubmarineSelectScannerListViewManager_o *)gameObject,
        eventId,
        v52);
      v54 = this->fields.listViewManager;
      v58 = (System_Action_int__bool__o *)sub_1BCAA2C(System_Action_int__bool__TypeInfo, v55, v56, v57);
      System_Action_int__bool____ctor(
        v58,
        (Il2CppObject *)this,
        (intptr_t)Method_SubmarineSelectScannerDialog_OnSelectScanner__,
        0LL);
      if ( v54 )
      {
        v54->fields._OnClickItemAction_k__BackingField = v58;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v54->fields._OnClickItemAction_k__BackingField,
          (int64_t)v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1BCAA3C(gameObject, v27);
  }
LABEL_15:
  v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v52, v53);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v25,
    Method_SubmarineSelectScannerDialog___c__DisplayClass9_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
}


void __fastcall SubmarineSelectScannerDialog___OnClickCloseButton_b__10_0(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_T__o *closeAction; // x0

  if ( (byte_4B12E04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, method, v2);
    byte_4B12E04 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(closeAction, 0, (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerDialog__get_closeBtnObject(
        SubmarineSelectScannerDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B12E02 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E02 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
  __int64 v2; // x2
  SubmarineSelectScannerDialog___c__DisplayClass11_0_o *v3; // x19
  struct SubmarineSelectScannerDialog_o *_4__this; // x8
  System_Action_T__o *closeAction; // x0

  v3 = this;
  if ( (byte_4B12E05 & 1) == 0 )
  {
    this = (SubmarineSelectScannerDialog___c__DisplayClass11_0_o *)sub_1BCA7E0(
                                                                     &Method_ActionExtensions_Call_int___,
                                                                     method,
                                                                     v2);
    byte_4B12E05 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  closeAction = (System_Action_T__o *)_4__this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_int_(
      closeAction,
      v3->fields.scanId,
      (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
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
    sub_1BCAA3C(this, method);
  }
  _4__this->fields.state = 2;
}
void __fastcall SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12A40 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12A40 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__Callback(
        SupportDeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct SupportDeckNameInputMenu_CallbackFunc_o *v9; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)name, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      name,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SupportDeckNameInputMenu__Close(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportDeckNameInputMenu__Close_33827392(this, 0LL, v2);
}


void __fastcall SupportDeckNameInputMenu__Close_33827392(
        SupportDeckNameInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  UnityEngine_Component_o *inputTarget; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x20

  if ( (byte_4B12A3A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v10, v11);
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_EndClose__, v12, v13);
    byte_4B12A3A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   inputTarget,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(inputTarget, v14);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0LL);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
}


void __fastcall SupportDeckNameInputMenu__EndClose(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportDeckNameInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_4B12A39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    byte_4B12A39 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     inputTarget,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1BCAA3C(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B12A35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    byte_4B12A35 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v5);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B12A37 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12A37 = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B12A3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_OnClickCancel__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12A3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportDeckNameInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_SupportDeckNameInputMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v8);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B12A3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_OnClickClear__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12A3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportDeckNameInputMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_SupportDeckNameInputMenu_OnClickClear__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1BCAA3C(0LL, v8);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    SupportDeckNameInputMenu__OnChangeInput(this, v10);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  System_String_o *changeName; // x20
  System_String_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4B12A3B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_OnClickDecide__, v4, v5);
    byte_4B12A3B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportDeckNameInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_SupportDeckNameInputMenu_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    changeName = this->fields.changeName;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v10 = LocalizationManager__ReplaceNameTag(changeName, 1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 1, v10, v11);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickInit(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B12A3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_OnClickInit__, method, v2);
    byte_4B12A3E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportDeckNameInputMenu_OnClickInit__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickInit__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportDeckNameInputMenu_OnClickInit__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1BCAA3C(0LL, v6);
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v8);
  }
}


void __fastcall SupportDeckNameInputMenu__Open(
        SupportDeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initLabel; // x21
  PartyOrganizationUtility_o *inputTarget; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  UIInput_OnValidate_o *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Action_o *v78; // x20

  if ( (byte_4B12A36 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, deckName, initName);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v9, v10);
    sub_1BCA7E0(&Method_EmojiUtility_ValidateNameText__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UIInput_OnValidate_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_EndOpen__, v17, v18);
    sub_1BCA7E0(&StringLiteral_12607/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12608/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12611/*"SUPPORT_SELECT_NAME_CLEAR"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12592/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, v29, v30);
    byte_4B12A36 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.changeName, (int64_t)deckName, v33, v34, v35, v36, v37, v38);
  this->fields.baseName = deckName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)deckName, v39, v40, v41, v42, v43, v44);
  this->fields.initName = initName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.initName, (int64_t)initName, v45, v46, v47, v48, v49, v50);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v51, v52, v53, v54, v55, v56);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12607/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_18;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12611/*"SUPPORT_SELECT_NAME_CLEAR"*/, 0LL);
  if ( !clearLabel )
    goto LABEL_18;
  UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
  initLabel = this->fields.initLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12592/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, 0LL);
  if ( !initLabel )
    goto LABEL_18;
  UILabel__set_text(initLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  UIInput__set_value((UIInput_o *)gameObject, deckName, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = (PartyOrganizationUtility_o *)this->fields.inputTarget;
  v66 = (UIInput_OnValidate_o *)sub_1BCAA2C(UIInput_OnValidate_TypeInfo, v63, v64, v65);
  UIInput_OnValidate___ctor(v66, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_18;
  inputTarget[1].klass = (PartyOrganizationUtility_c *)v66;
  sub_1BCA784(inputTarget + 1, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(gameObject, v32);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v75, v76, v77);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


void __fastcall SupportDeckNameInputMenu__add_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B12A33 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12A33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportDeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  System_String_o *Text; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  UILineInput_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_String_o **p_changeName; // x20
  System_String_o *v16; // x0
  _BOOL4 v17; // w8
  System_String_o *v18; // x20
  int32_t v19; // w21
  uint16_t Chars; // w0
  __int64 v21; // x1
  System_String_o *name; // x20
  System_String_o *v23; // x0

  Text = initName;
  if ( (byte_4B12A38 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, initName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B12A38 = 1;
  }
  IsNullOrEmpty = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = this->fields.nameInput;
    if ( !IsNullOrEmpty )
      goto LABEL_23;
    Text = UILineInput__GetText(IsNullOrEmpty, 0LL);
  }
  else if ( !this )
  {
    goto LABEL_23;
  }
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.changeName, (int64_t)Text, v9, v10, v11, v12, v13, v14);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_23;
  v16 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0LL);
  if ( System_String__op_Equality(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_11;
  v18 = *p_changeName;
  if ( !v18 )
    goto LABEL_23;
  if ( v18->fields._stringLength >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v18, v19, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v19 >= v18->fields._stringLength )
        goto LABEL_19;
    }
LABEL_11:
    LOBYTE(v17) = 0;
    goto LABEL_12;
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  IsNullOrEmpty = (UILineInput_o *)LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !IsNullOrEmpty )
LABEL_23:
    sub_1BCAA3C(IsNullOrEmpty, v8);
  v23 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0LL);
  v17 = !System_String__IsNullOrEmpty(v23, 0LL);
LABEL_12:
  IsNullOrEmpty = (UILineInput_o *)this->fields.decideButton;
  if ( !IsNullOrEmpty )
    goto LABEL_23;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, void *))IsNullOrEmpty->klass[1]._1.namespaze)(
    IsNullOrEmpty,
    v17,
    IsNullOrEmpty->klass[1]._1.byval_arg.data);
}


System_String_o *__fastcall SupportDeckNameInputMenu__get_closeBtnPath(
        SupportDeckNameInputMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12A3F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3216/*"BaseWindow/ButtonRoot/CancleButton"*/, method, v2);
    byte_4B12A3F = 1;
  }
  return (System_String_o *)StringLiteral_3216/*"BaseWindow/ButtonRoot/CancleButton"*/;
}


void __fastcall SupportDeckNameInputMenu__remove_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B12A34 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12A34 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportDeckNameInputMenu__Init(v11, v12);
}


void __fastcall SupportDeckNameInputMenu__setCallbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportDeckNameInputMenu_CallbackFunc___ctor(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09274;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0921C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportDeckNameInputMenu_CallbackFunc__BeginInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4B12A41 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, changeName);
    byte_4B12A41 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__Invoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    changeName,
    *(_QWORD *)&this->fields.extra_arg);
}
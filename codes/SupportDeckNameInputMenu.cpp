void __fastcall SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E773 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1E773 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1C3B708(p_callbackFunc, 0LL, (int64_t)name, (int32_t)method, v4, v5, v6, v7);
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

  SupportDeckNameInputMenu__Close_34523476(this, 0LL, v2);
}


void __fastcall SupportDeckNameInputMenu__Close_34523476(
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v14; // x20

  if ( (byte_4C1E76D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_1C3B764(&Method_SupportDeckNameInputMenu_EndClose__, v11);
    byte_4C1E76D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
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
                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1C3B9C0(inputTarget, v12);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0LL);
  v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C3B708(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_4C1E76C & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4C1E76C = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     inputTarget,
                                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1C3B9C0(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C1E768 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4C1E768 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1C3B9C0(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C1E76A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1E76A = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C1E76F & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportDeckNameInputMenu_OnClickCancel__, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1E76F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportDeckNameInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_SupportDeckNameInputMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v6);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C1E770 & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportDeckNameInputMenu_OnClickClear__, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1E770 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportDeckNameInputMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_SupportDeckNameInputMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C3B9C0(0LL, v6);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    SupportDeckNameInputMenu__OnChangeInput(this, v8);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_String_o *changeName; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4C1E76E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&Method_SupportDeckNameInputMenu_OnClickDecide__, v3);
    byte_4C1E76E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportDeckNameInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_SupportDeckNameInputMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    changeName = this->fields.changeName;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__ReplaceNameTag(changeName, 1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 1, v7, v8);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickInit(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C1E771 & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportDeckNameInputMenu_OnClickInit__, method);
    byte_4C1E771 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckNameInputMenu_OnClickInit__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickInit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportDeckNameInputMenu_OnClickInit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C3B9C0(0LL, v5);
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
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
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initLabel; // x21
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v60; // x20

  if ( (byte_4C1E769 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, deckName);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, v9);
    sub_1C3B764(&Method_EmojiUtility_ValidateNameText__, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&UIInput_OnValidate_TypeInfo, v12);
    sub_1C3B764(&Method_SupportDeckNameInputMenu_EndOpen__, v13);
    sub_1C3B764(&StringLiteral_12732/*"StartVoice"*/, v14);
    sub_1C3B764(&StringLiteral_12733/*"StartWhite"*/, v15);
    sub_1C3B764(&StringLiteral_12736/*"Started deserializing {0} with converter {1}."*/, v16);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v17);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v18);
    sub_1C3B764(&StringLiteral_12717/*"StartBattleSoundMode"*/, v19);
    byte_4C1E769 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.changeName, (int64_t)deckName, v22, v23, v24, v25, v26, v27);
  this->fields.baseName = deckName;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)deckName, v28, v29, v30, v31, v32, v33);
  this->fields.initName = initName;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.initName, (int64_t)initName, v34, v35, v36, v37, v38, v39);
  this->fields.callbackFunc = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v40, v41, v42, v43, v44, v45);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12733/*"StartWhite"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12732/*"StartVoice"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_18;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12736/*"Started deserializing {0} with converter {1}."*/, 0LL);
  if ( !clearLabel )
    goto LABEL_18;
  UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
  initLabel = this->fields.initLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12717/*"StartBattleSoundMode"*/, 0LL);
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
                                             (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v51 = (UIInput_OnValidate_o *)sub_1C3B9B0(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v51, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_18;
  inputTarget->fields.onValidate = v51;
  sub_1C3B708((PartyOrganizationUtility_o *)&inputTarget->fields.onValidate, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_18:
    sub_1C3B9C0(gameObject, v21);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  v60 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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

  if ( (byte_4C1E766 & 1) == 0 )
  {
    sub_1C3B764(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E766 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  SupportDeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  System_String_o *Text; // x21
  __int64 v5; // x1
  UILineInput_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o **p_changeName; // x20
  System_String_o *v15; // x0
  _BOOL4 v16; // w8
  System_String_o *v17; // x20
  int32_t v18; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v21; // x0

  Text = initName;
  if ( (byte_4C1E76B & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, initName);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C1E76B = 1;
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.changeName, (int64_t)Text, v8, v9, v10, v11, v12, v13);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_23;
  v15 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0LL);
  if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_11;
  v17 = *p_changeName;
  if ( !v17 )
    goto LABEL_23;
  if ( v17->fields._stringLength >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v17, v18, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v18 >= v17->fields._stringLength )
        goto LABEL_19;
    }
LABEL_11:
    LOBYTE(v16) = 0;
    goto LABEL_12;
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = (UILineInput_o *)LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !IsNullOrEmpty )
LABEL_23:
    sub_1C3B9C0(IsNullOrEmpty, v7);
  v21 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0LL);
  v16 = !System_String__IsNullOrEmpty(v21, 0LL);
LABEL_12:
  IsNullOrEmpty = (UILineInput_o *)this->fields.decideButton;
  if ( !IsNullOrEmpty )
    goto LABEL_23;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, void *))IsNullOrEmpty->klass[1]._1.namespaze)(
    IsNullOrEmpty,
    v16,
    IsNullOrEmpty->klass[1]._1.byval_arg.data);
}


System_String_o *__fastcall SupportDeckNameInputMenu__get_closeBtnPath(
        SupportDeckNameInputMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1E772 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3226/*"Breadcrumbs storage path is null or empty"*/, method);
    byte_4C1E772 = 1;
  }
  return (System_String_o *)StringLiteral_3226/*"Breadcrumbs storage path is null or empty"*/;
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

  if ( (byte_4C1E767 & 1) == 0 )
  {
    sub_1C3B764(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E767 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
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
  sub_1C3B708(
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
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A78E0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A78DB4;
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
  if ( (byte_4C1E774 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1E774 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, changeName, callback, object);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_1C3B718(this, v11, callback, object);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
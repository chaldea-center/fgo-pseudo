void __fastcall SelectMyServantOrNpcDialog___ctor(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12293 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12293 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__Callback(
        SelectMyServantOrNpcDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *v9; // x20
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SelectMyServantOrNpcDialog__Close(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectMyServantOrNpcDialog__Close_33023004(this, 0LL, v2);
}


void __fastcall SelectMyServantOrNpcDialog__Close_33023004(
        SelectMyServantOrNpcDialog_o *this,
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
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1228F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SelectMyServantOrNpcDialog_EndClose__, v10, v11);
    byte_4B1228F = 1;
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
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__EndClose(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectMyServantOrNpcDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall SelectMyServantOrNpcDialog__EndOpen(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SelectMyServantOrNpcDialog__Init(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B1228D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1228D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__OnClickCancel(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SelectMyServantOrNpcDialog_OnClickCancel__, method, v2);
    byte_4B12292 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SelectMyServantOrNpcDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 2, v6);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickMyServant(
        SelectMyServantOrNpcDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12290 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SelectMyServantOrNpcDialog_OnClickMyServant__, method, v2);
    byte_4B12290 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SelectMyServantOrNpcDialog_OnClickMyServant__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickMyServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 0, v6);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickNpc(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12291 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SelectMyServantOrNpcDialog_OnClickNpc__, method, v2);
    byte_4B12291 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SelectMyServantOrNpcDialog_OnClickNpc__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickNpc__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 1, v6);
  }
}


void __fastcall SelectMyServantOrNpcDialog__Open(
        SelectMyServantOrNpcDialog_o *this,
        System_String_o *name,
        SelectMyServantOrNpcDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        bool isSelectableSupport,
        bool isNotIndividuality,
        const MethodInfo *method)
{
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
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UnityEngine_Object_o *titleLabel; // x24
  __int64 v43; // x1
  UILabel_o *v44; // x24
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v46; // x1
  UILabel_o *v47; // x24
  __int64 *v48; // x8
  System_String_o *v49; // x0
  UnityEngine_Object_o *closeBtnLabel; // x21
  __int64 v51; // x1
  UILabel_o *v52; // x21
  UnityEngine_Object_o *myServantBtnLabel; // x21
  __int64 v54; // x1
  UILabel_o *v55; // x21
  UnityEngine_Object_o *npcBtnLabel; // x21
  __int64 v57; // x1
  UILabel_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_o *v62; // x20

  if ( (byte_4B1228E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, callback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SelectMyServantOrNpcDialog_EndOpen__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10472/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10469/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10468/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10470/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10473/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10471/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, v31, v32);
    byte_4B1228E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v35, v36, v37, v38, v39, v40);
  this->fields.state = 1;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v44 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, 0LL);
    if ( !v44 )
      goto LABEL_46;
    UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_24;
  v47 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isSelectableSupport )
      goto LABEL_16;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    if ( isSelectableSupport )
    {
LABEL_16:
      if ( isNotIndividuality )
        v48 = &StringLiteral_10473/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/;
      else
        v48 = &StringLiteral_10472/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
      if ( !v47 )
        goto LABEL_46;
      goto LABEL_23;
    }
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v49, (Il2CppObject *)name, 0LL);
  if ( !v47 )
    goto LABEL_46;
LABEL_23:
  UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
LABEL_24:
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
  {
    v52 = this->fields.closeBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !v52 )
      goto LABEL_46;
    UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
  }
  myServantBtnLabel = (UnityEngine_Object_o *)this->fields.myServantBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(myServantBtnLabel, 0LL, 0LL) )
  {
    v55 = this->fields.myServantBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, 0LL);
    if ( !v55 )
      goto LABEL_46;
    UILabel__set_text(v55, (System_String_o *)gameObject, 0LL);
  }
  npcBtnLabel = (UnityEngine_Object_o *)this->fields.npcBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  if ( UnityEngine_Object__op_Inequality(npcBtnLabel, 0LL, 0LL) )
  {
    v58 = this->fields.npcBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10470/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, 0LL);
    if ( v58 )
    {
      UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1BCAA3C(gameObject, v34);
  }
LABEL_45:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v59, v60, v61);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__add_callbackFunc(
        SelectMyServantOrNpcDialog_o *this,
        SelectMyServantOrNpcDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectMyServantOrNpcDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectMyServantOrNpcDialog_o *v11; // x0
  SelectMyServantOrNpcDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1228B & 1) == 0 )
  {
    sub_1BCA7E0(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B1228B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1BCACFC(v8);
  SelectMyServantOrNpcDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SelectMyServantOrNpcDialog__remove_callbackFunc(
        SelectMyServantOrNpcDialog_o *this,
        SelectMyServantOrNpcDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectMyServantOrNpcDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectMyServantOrNpcDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1228C & 1) == 0 )
  {
    sub_1BCA7E0(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B1228C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1BCACFC(v8);
  SelectMyServantOrNpcDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectMyServantOrNpcDialog_CallbackFunc___ctor(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07B84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07B3C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SelectMyServantOrNpcDialog_CallbackFunc__BeginInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B12294 & 1) == 0 )
  {
    sub_1BCA7E0(&SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B12294 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SelectMyServantOrNpcDialog_CallbackFunc__EndInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall SelectMyServantOrNpcDialog_CallbackFunc__Invoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}
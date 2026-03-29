void SelectMyServantOrNpcDialog___ctor(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C5F3 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2C5F3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectMyServantOrNpcDialog__Awake(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectMyServantOrNpcDialog__Callback(SelectMyServantOrNpcDialog_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *v9; // x20
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void SelectMyServantOrNpcDialog__Close(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectMyServantOrNpcDialog__Close_35242200(this, 0, v2);
}


void SelectMyServantOrNpcDialog__Close_35242200(
        SelectMyServantOrNpcDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2C5EF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SelectMyServantOrNpcDialog_EndClose__);
    byte_4D2C5EF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SelectMyServantOrNpcDialog__EndClose(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectMyServantOrNpcDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SelectMyServantOrNpcDialog__EndOpen(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SelectMyServantOrNpcDialog__Init(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2C5ED & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C5ED = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectMyServantOrNpcDialog__OnClickCancel(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2C5F2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    byte_4D2C5F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SelectMyServantOrNpcDialog__Callback(this, 2, v5);
  }
}


void SelectMyServantOrNpcDialog__OnClickMyServant(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2C5F0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    byte_4D2C5F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickMyServant__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickMyServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SelectMyServantOrNpcDialog__Callback(this, 0, v5);
  }
}


void SelectMyServantOrNpcDialog__OnClickNpc(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2C5F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    byte_4D2C5F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickNpc__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickNpc__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SelectMyServantOrNpcDialog__Callback(this, 1, v5);
  }
}


void SelectMyServantOrNpcDialog__Open(
        SelectMyServantOrNpcDialog_o *this,
        System_String_o *name,
        SelectMyServantOrNpcDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        bool isSelectableSupport,
        bool isNotIndividuality,
        bool isGrandRestriction,
        bool haveCanOrganizationServant,
        System_String_o *title,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v11; // x24
  System_String_o *v12; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *titleLabel; // x28
  UILabel_o *v28; // x28
  UnityEngine_Object_o *messageLabel; // x27
  UILabel_o *v30; // x27
  __int64 *v31; // x8
  System_String_o *v32; // x0
  struct UILabel_o *v33; // x22
  System_String_o *mText; // x23
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  UnityEngine_Object_o *closeBtnLabel; // x22
  UILabel_o *v38; // x22
  UnityEngine_Object_o *myServantBtnLabel; // x22
  UILabel_o *v40; // x22
  UnityEngine_Object_o *npcBtnLabel; // x22
  UILabel_o *v42; // x22
  UnityEngine_Object_o *MyServantBtn; // x22
  UnityEngine_Object_o *MyServantBtnMaskLabel; // x21
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Object_o *v46; // x22
  UnityEngine_GameObject_o *v47; // x21
  char v48; // w8
  System_Action_o *v49; // x20

  v12 = title;
  v11 = message;
  if ( (byte_4D2C5EE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SelectMyServantOrNpcDialog_EndOpen__);
    sub_1C93AD4(&StringLiteral_10388/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_NOT_HAVE_GRAND_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_10384/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10383/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10385/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_10389/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_10386/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/);
    byte_4D2C5EE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.state = 1;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v28 = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(title, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, 0);
      v12 = (System_String_o *)gameObject;
    }
    if ( !v28 )
      goto LABEL_74;
    UILabel__set_text(v28, v12, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_35;
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(message, 0);
  v30 = this->fields.messageLabel;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !v30 )
      goto LABEL_74;
    goto LABEL_29;
  }
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isSelectableSupport )
      goto LABEL_19;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isSelectableSupport )
    {
LABEL_19:
      if ( isNotIndividuality )
        v31 = &StringLiteral_10389/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/;
      else
        v31 = &StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v31, 0);
      if ( !v30 )
        goto LABEL_74;
      goto LABEL_28;
    }
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v32, (Il2CppObject *)name, 0);
  if ( !v30 )
    goto LABEL_74;
LABEL_28:
  v11 = (System_String_o *)gameObject;
LABEL_29:
  UILabel__set_text(v30, v11, 0);
  if ( isGrandRestriction && !haveCanOrganizationServant )
  {
    v33 = this->fields.messageLabel;
    if ( !v33 )
      goto LABEL_74;
    mText = v33->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_NOT_HAVE_GRAND_MESSAGE"*/, 0);
    v36 = System_String__Concat_64425724(mText, v35, 0);
    UILabel__set_text(v33, v36, 0);
  }
LABEL_35:
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
  {
    v38 = this->fields.closeBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !v38 )
      goto LABEL_74;
    UILabel__set_text(v38, (System_String_o *)gameObject, 0);
  }
  myServantBtnLabel = (UnityEngine_Object_o *)this->fields.myServantBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myServantBtnLabel, 0, 0) )
  {
    v40 = this->fields.myServantBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10384/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, 0);
    if ( !v40 )
      goto LABEL_74;
    UILabel__set_text(v40, (System_String_o *)gameObject, 0);
  }
  npcBtnLabel = (UnityEngine_Object_o *)this->fields.npcBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcBtnLabel, 0, 0) )
  {
    v42 = this->fields.npcBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10385/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, 0);
    if ( !v42 )
      goto LABEL_74;
    UILabel__set_text(v42, (System_String_o *)gameObject, 0);
  }
  MyServantBtn = (UnityEngine_Object_o *)this->fields.MyServantBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MyServantBtn, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtn;
    if ( !gameObject )
      goto LABEL_74;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))gameObject->klass[1]._1.name)(
      gameObject,
      haveCanOrganizationServant,
      gameObject->klass[1]._1.namespaze);
  }
  MyServantBtnMaskLabel = (UnityEngine_Object_o *)this->fields.MyServantBtnMaskLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MyServantBtnMaskLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtnMaskLabel;
    if ( !gameObject )
      goto LABEL_74;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    v46 = (UnityEngine_Object_o *)this->fields.MyServantBtn;
    v47 = v45;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtn;
      if ( !gameObject )
        goto LABEL_74;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[1]._1.image)(
                                                 gameObject,
                                                 gameObject->klass[1]._1.gc_desc);
      v48 = (unsigned __int8)gameObject ^ 1;
    }
    else
    {
      v48 = 0;
    }
    if ( v47 )
    {
      UnityEngine_GameObject__SetActive(v47, v48 & 1, 0);
      goto LABEL_73;
    }
LABEL_74:
    sub_1C93D2C(gameObject, v20);
  }
LABEL_73:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  v49 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0, 0);
}


void SelectMyServantOrNpcDialog__add_callbackFunc(
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

  if ( (byte_4D2C5EB & 1) == 0 )
  {
    sub_1C93AD4(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_4D2C5EB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1C940C8(v8);
  SelectMyServantOrNpcDialog__remove_callbackFunc(v11, v12, v13);
}


void SelectMyServantOrNpcDialog__remove_callbackFunc(
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

  if ( (byte_4D2C5EC & 1) == 0 )
  {
    sub_1C93AD4(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_4D2C5EC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1C940C8(v8);
  SelectMyServantOrNpcDialog__Awake(v11, v12);
}


void SelectMyServantOrNpcDialog_CallbackFunc___ctor(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC3414;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC33CC;
}


System_IAsyncResult_o *SelectMyServantOrNpcDialog_CallbackFunc__BeginInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D2C5F4 & 1) == 0 )
  {
    sub_1C93AD4(&SelectMyServantOrNpcDialog_ResultClicked_TypeInfo);
    byte_4D2C5F4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void SelectMyServantOrNpcDialog_CallbackFunc__EndInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void SelectMyServantOrNpcDialog_CallbackFunc__Invoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}
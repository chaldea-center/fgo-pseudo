void SelectMyServantOrNpcDialog___ctor(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C2A2 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C2A2 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectMyServantOrNpcDialog__Awake(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SelectMyServantOrNpcDialog__Callback(SelectMyServantOrNpcDialog_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *v9; // x20
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void SelectMyServantOrNpcDialog__Close(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectMyServantOrNpcDialog__Close_41370740(this, 0, v2);
}


void SelectMyServantOrNpcDialog__Close_41370740(
        SelectMyServantOrNpcDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596C29E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SelectMyServantOrNpcDialog_EndClose__);
    byte_596C29E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void SelectMyServantOrNpcDialog__EndClose(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectMyServantOrNpcDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596C29C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C29C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596C2A1 & 1) == 0 )
  {
    sub_2213A60(&Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    byte_596C2A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SelectMyServantOrNpcDialog__Callback(this, 2, v5);
  }
}


void SelectMyServantOrNpcDialog__OnClickMyServant(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C29F & 1) == 0 )
  {
    sub_2213A60(&Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    byte_596C29F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickMyServant__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickMyServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SelectMyServantOrNpcDialog__Callback(this, 0, v5);
  }
}


void SelectMyServantOrNpcDialog__OnClickNpc(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C2A0 & 1) == 0 )
  {
    sub_2213A60(&Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    byte_596C2A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickNpc__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickNpc__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_c *v29; // x0
  UnityEngine_Object_o *titleLabel; // x28
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *v33; // x28
  __int64 v34; // x2
  UnityEngine_Object_o *messageLabel; // x27
  __int64 v36; // x2
  __int64 v37; // x2
  UILabel_o *v38; // x27
  int v39; // w8
  __int64 *v40; // x8
  System_String_o *v41; // x0
  struct UILabel_o *v42; // x22
  System_String_o *mText; // x23
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  UnityEngine_Object_o *closeBtnLabel; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *v49; // x22
  UnityEngine_Object_o *myServantBtnLabel; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *v53; // x22
  UnityEngine_Object_o *npcBtnLabel; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  UILabel_o *v57; // x22
  UnityEngine_Object_o *MyServantBtn; // x22
  __int64 v59; // x2
  UnityEngine_Object_o *MyServantBtnMaskLabel; // x21
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  UnityEngine_Object_o *v64; // x22
  UnityEngine_GameObject_o *v65; // x21
  char v66; // w8
  System_Action_o *v67; // x20

  v12 = title;
  v11 = message;
  if ( (byte_596C29D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SelectMyServantOrNpcDialog_EndOpen__);
    sub_2213A60(&StringLiteral_10737/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_NOT_HAVE_GRAND_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10736/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_10733/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/);
    sub_2213A60(&StringLiteral_10732/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10734/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/);
    sub_2213A60(&StringLiteral_10738/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10735/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/);
    byte_596C29D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = UnityEngine_Object_TypeInfo;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  this->fields.state = 1;
  if ( !*(&v29->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v29, v27, v28);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v33 = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(title, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v34);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10735/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, 0);
      v12 = (System_String_o *)gameObject;
    }
    if ( !v33 )
      goto LABEL_78;
    UILabel__set_text(v33, v12, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(message, 0);
    v38 = this->fields.messageLabel;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v39 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( isSelectableSupport )
      {
        if ( isNotIndividuality )
        {
          if ( !v39 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v37);
          v40 = &StringLiteral_10738/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/;
        }
        else
        {
          if ( !v39 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v37);
          v40 = &StringLiteral_10736/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/;
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v40, 0);
        if ( !v38 )
          goto LABEL_78;
      }
      else
      {
        if ( !v39 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v37);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10732/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, 0);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(v41, (Il2CppObject *)name, 0);
        if ( !v38 )
          goto LABEL_78;
      }
      v11 = (System_String_o *)gameObject;
    }
    else if ( !v38 )
    {
      goto LABEL_78;
    }
    UILabel__set_text(v38, v11, 0);
    if ( isGrandRestriction && !haveCanOrganizationServant )
    {
      v42 = this->fields.messageLabel;
      if ( !v42 )
        goto LABEL_78;
      mText = v42->fields.mText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v36);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10737/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_NOT_HAVE_GRAND_MESSAGE"*/, 0);
      v45 = System_String__Concat_75651716(mText, v44, 0);
      UILabel__set_text(v42, v45, 0);
    }
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v36);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
  {
    v49 = this->fields.closeBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !v49 )
      goto LABEL_78;
    UILabel__set_text(v49, (System_String_o *)gameObject, 0);
  }
  myServantBtnLabel = (UnityEngine_Object_o *)this->fields.myServantBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
  if ( UnityEngine_Object__op_Inequality(myServantBtnLabel, 0, 0) )
  {
    v53 = this->fields.myServantBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10733/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, 0);
    if ( !v53 )
      goto LABEL_78;
    UILabel__set_text(v53, (System_String_o *)gameObject, 0);
  }
  npcBtnLabel = (UnityEngine_Object_o *)this->fields.npcBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
  if ( UnityEngine_Object__op_Inequality(npcBtnLabel, 0, 0) )
  {
    v57 = this->fields.npcBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10734/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, 0);
    if ( !v57 )
      goto LABEL_78;
    UILabel__set_text(v57, (System_String_o *)gameObject, 0);
  }
  MyServantBtn = (UnityEngine_Object_o *)this->fields.MyServantBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
  if ( UnityEngine_Object__op_Inequality(MyServantBtn, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtn;
    if ( !gameObject )
      goto LABEL_78;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))gameObject->klass[1]._1.name)(
      gameObject,
      haveCanOrganizationServant,
      gameObject->klass[1]._1.namespaze);
  }
  MyServantBtnMaskLabel = (UnityEngine_Object_o *)this->fields.MyServantBtnMaskLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v59);
  if ( UnityEngine_Object__op_Inequality(MyServantBtnMaskLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtnMaskLabel;
    if ( !gameObject )
      goto LABEL_78;
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    v64 = (UnityEngine_Object_o *)this->fields.MyServantBtn;
    v65 = v61;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62, v63);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v64, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.MyServantBtn;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[1]._1.image)(
                                                 gameObject,
                                                 gameObject->klass[1]._1.gc_desc);
      v66 = (unsigned __int8)gameObject ^ 1;
    }
    else
    {
      v66 = 0;
    }
    if ( v65 )
    {
      UnityEngine_GameObject__SetActive(v65, v66 & 1, 0);
      goto LABEL_77;
    }
LABEL_78:
    sub_2213CDC(gameObject, v20);
  }
LABEL_77:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  v67 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectMyServantOrNpcDialog_o *v13; // x0
  SelectMyServantOrNpcDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C29A & 1) == 0 )
  {
    sub_2213A60(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_596C29A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectMyServantOrNpcDialog_o *)sub_221405C(v8, SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectMyServantOrNpcDialog__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SelectMyServantOrNpcDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C29B & 1) == 0 )
  {
    sub_2213A60(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_596C29B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SelectMyServantOrNpcDialog_o *)sub_221405C(v8, SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, v9, v10);
  SelectMyServantOrNpcDialog__Awake(v13, v14);
}


void SelectMyServantOrNpcDialog_CallbackFunc___ctor(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2004D2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004CE4;
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
  if ( (byte_596C2A3 & 1) == 0 )
  {
    sub_2213A60(&SelectMyServantOrNpcDialog_ResultClicked_TypeInfo);
    byte_596C2A3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void SelectMyServantOrNpcDialog_CallbackFunc__EndInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
void __fastcall SelectMyServantOrNpcDialog___ctor(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B40834 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B40834 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__Callback(
        SelectMyServantOrNpcDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *v5; // x20
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SelectMyServantOrNpcDialog__Close(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectMyServantOrNpcDialog__Close_33734364(this, 0LL, v2);
}


void __fastcall SelectMyServantOrNpcDialog__Close_33734364(
        SelectMyServantOrNpcDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B40830 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_SelectMyServantOrNpcDialog_EndClose__, v6);
    byte_4B40830 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__EndClose(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectMyServantOrNpcDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SelectMyServantOrNpcDialog__EndOpen(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SelectMyServantOrNpcDialog__Init(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4B4082E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B4082E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BDBAD4(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__OnClickCancel(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B40833 & 1) == 0 )
  {
    sub_1BDB878(&Method_SelectMyServantOrNpcDialog_OnClickCancel__, method);
    byte_4B40833 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SelectMyServantOrNpcDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 2, v5);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickMyServant(
        SelectMyServantOrNpcDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B40831 & 1) == 0 )
  {
    sub_1BDB878(&Method_SelectMyServantOrNpcDialog_OnClickMyServant__, method);
    byte_4B40831 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickMyServant__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickMyServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SelectMyServantOrNpcDialog_OnClickMyServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 0, v5);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickNpc(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B40832 & 1) == 0 )
  {
    sub_1BDB878(&Method_SelectMyServantOrNpcDialog_OnClickNpc__, method);
    byte_4B40832 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectMyServantOrNpcDialog_OnClickNpc__;
    if ( (*((_BYTE *)Method_SelectMyServantOrNpcDialog_OnClickNpc__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_SelectMyServantOrNpcDialog_OnClickNpc__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 1, v5);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v28; // x24
  UnityEngine_Object_o *messageLabel; // x24
  UILabel_o *v30; // x24
  __int64 *v31; // x8
  System_String_o *v32; // x0
  UnityEngine_Object_o *closeBtnLabel; // x21
  UILabel_o *v34; // x21
  UnityEngine_Object_o *myServantBtnLabel; // x21
  UILabel_o *v36; // x21
  UnityEngine_Object_o *npcBtnLabel; // x21
  UILabel_o *v38; // x21
  System_Action_o *v39; // x20

  if ( (byte_4B4082F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, name);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v14);
    sub_1BDB878(&Method_SelectMyServantOrNpcDialog_EndOpen__, v15);
    sub_1BDB878(&StringLiteral_10321/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/, v16);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1BDB878(&StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, v18);
    sub_1BDB878(&StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, v19);
    sub_1BDB878(&StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, v20);
    sub_1BDB878(&StringLiteral_10322/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/, v21);
    sub_1BDB878(&StringLiteral_10320/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, v22);
    byte_4B4082F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  this->fields.state = 1;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v28 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10320/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, 0LL);
    if ( !v28 )
      goto LABEL_46;
    UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    goto LABEL_24;
  v30 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isSelectableSupport )
      goto LABEL_16;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isSelectableSupport )
    {
LABEL_16:
      if ( isNotIndividuality )
        v31 = &StringLiteral_10322/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/;
      else
        v31 = &StringLiteral_10321/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
      if ( !v30 )
        goto LABEL_46;
      goto LABEL_23;
    }
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v32, (Il2CppObject *)name, 0LL);
  if ( !v30 )
    goto LABEL_46;
LABEL_23:
  UILabel__set_text(v30, (System_String_o *)gameObject, 0LL);
LABEL_24:
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
  {
    v34 = this->fields.closeBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !v34 )
      goto LABEL_46;
    UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
  }
  myServantBtnLabel = (UnityEngine_Object_o *)this->fields.myServantBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myServantBtnLabel, 0LL, 0LL) )
  {
    v36 = this->fields.myServantBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, 0LL);
    if ( !v36 )
      goto LABEL_46;
    UILabel__set_text(v36, (System_String_o *)gameObject, 0LL);
  }
  npcBtnLabel = (UnityEngine_Object_o *)this->fields.npcBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcBtnLabel, 0LL, 0LL) )
  {
    v38 = this->fields.npcBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, 0LL);
    if ( v38 )
    {
      UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1BDBAD4(gameObject, v24);
  }
LABEL_45:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v39 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
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

  if ( (byte_4B4082C & 1) == 0 )
  {
    sub_1BDB878(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, value);
    byte_4B4082C = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1BDBD94(v8);
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

  if ( (byte_4B4082D & 1) == 0 )
  {
    sub_1BDB878(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, value);
    byte_4B4082D = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_1BDBD94(v8);
  SelectMyServantOrNpcDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectMyServantOrNpcDialog_CallbackFunc___ctor(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1FC10;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1FBC8;
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
  if ( (byte_4B40835 & 1) == 0 )
  {
    sub_1BDB878(&SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4B40835 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall SelectMyServantOrNpcDialog_CallbackFunc__EndInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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
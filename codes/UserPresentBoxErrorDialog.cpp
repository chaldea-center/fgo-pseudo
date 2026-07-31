void UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v2; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v3; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x8

  if ( (byte_593731F & 1) == 0 )
  {
    sub_21FFC50(&UserPresentBoxErrorDialog_TypeInfo);
    byte_593731F = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0;
  v2 = UserPresentBoxErrorDialog_TypeInfo;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->MESSAGE_COMMAND_CODE_POS.fields.x = 0xC220000000000000LL;
  v3->MESSAGE_COMMAND_CODE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->SHOP_POS.fields.x = 0xC322000000000000LL;
  v4->SHOP_POS.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->SHOP_COMMAND_CODE_POS.fields.x = 0xC322000043200000LL;
  v5->SHOP_COMMAND_CODE_POS.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->EXIT_POS.fields.x = 0xC2A40000C36B0000LL;
  v6->EXIT_POS.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->EXIT_COMMAND_CODE_POS.fields.x = 0xC3220000C3200000LL;
  v7->EXIT_COMMAND_CODE_POS.fields.z = 0.0;
}


void UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593731E & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593731E = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserPresentBoxErrorDialog__ChangeScene(UserPresentBoxErrorDialog_o *this, int32_t scene, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _BYTE *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int v16; // w8
  int32_t v17; // w23
  Il2CppObject *v18; // x21
  SceneJumpInfo_o *v19; // x0
  SceneJumpInfo_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w22
  Il2CppObject *v23; // x21
  SceneJumpInfo_o *v24; // x0
  bool v25; // zf
  int32_t jumpType; // w21
  Il2CppObject *v27; // x21
  int32_t v28; // w1
  __int64 *v29; // x8
  Il2CppObject *v30; // x3
  System_Action_o *v31; // x21

  if ( (byte_593731C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__);
    sub_21FFC50(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxErrorDialog_ChangeScene__);
    sub_21FFC50(&StringLiteral_13240/*"ServantEquipList"*/);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13239/*"ServantEQCombine"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_593731C = 1;
  }
  v5 = sub_21FFEBC(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  *(_DWORD *)(v5 + 24) = scene;
  if ( (v14[83] & 2) != 0 )
    v14 = (_BYTE *)sub_21FFC68(v14);
  v15 = (System_Reflection_MethodBase_o *)sub_21FFC34(v14, *((_QWORD *)v14 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  v16 = *(_DWORD *)(v5 + 24);
  switch ( v16 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v25 = jumpType == 1;
      v27 = Instance;
      if ( !v25 )
      {
        if ( Instance )
        {
          v28 = 71;
          v30 = 0;
LABEL_26:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v28, 1, v30, 0);
          break;
        }
        goto LABEL_28;
      }
      v20 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v20, (System_String_o *)StringLiteral_13240/*"ServantEquipList"*/, 0);
      if ( !v27 )
        goto LABEL_28;
      Instance = v27;
      v28 = 71;
LABEL_25:
      v30 = (Il2CppObject *)v20;
      goto LABEL_26;
    case 32:
      v22 = this->fields.jumpType;
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v24 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      v25 = v22 == 1;
      v20 = v24;
      if ( v25 )
        v29 = &StringLiteral_13239/*"ServantEQCombine"*/;
      else
        v29 = &StringLiteral_13235/*"ServantCombine"*/;
      SceneJumpInfo___ctor_48427084(v24, (System_String_o *)*v29, 0);
      if ( !v23 )
        goto LABEL_28;
      Instance = v23;
      v28 = 32;
      goto LABEL_25;
    case 22:
      v17 = this->fields.jumpType;
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      v20 = v19;
      if ( v17 == 2 )
        v21 = 2;
      else
        v21 = v17 == 1;
      SceneJumpInfo___ctor_48427172(v19, (System_String_o *)StringLiteral_13198/*"SellServant"*/, v21, 0);
      if ( v18 )
      {
        Instance = v18;
        v28 = 22;
        goto LABEL_25;
      }
LABEL_28:
      sub_21FFECC(Instance, v7);
  }
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v31, 0);
}


void UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *messageLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  __int64 v11; // x2
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_5937319 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UserPresentBoxErrorDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_12699/*"SHORT_SERVANT_SELL"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12702/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_21FFC50(&StringLiteral_12684/*"SHORT_SERVANT_COMBINE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937319 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12699/*"SHORT_SERVANT_SELL"*/, 0);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12684/*"SHORT_SERVANT_COMBINE"*/, 0);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SHORT_SERVANT_WAREHOUSE"*/, 0);
  if ( !warehouseLabel )
    goto LABEL_30;
  UILabel__set_text(warehouseLabel, (System_String_o *)messageLabel, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0);
  v12 = (UnityEngine_Transform_o *)messageLabel;
  if ( !*(&UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo, v3, v11);
  if ( !v12 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v12, UserPresentBoxErrorDialog_TypeInfo->static_fields->MESSAGE_POS, 0);
  messageLabel = this->fields.closeLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_POS,
    0);
  messageLabel = this->fields.shopLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_POS,
    0);
  messageLabel = this->fields.combineLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
  if ( !messageLabel
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0)) == 0
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0),
        (messageLabel = this->fields.warehouseLabel) == 0)
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0)) == 0
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0)) == 0
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0)) == 0 )
  {
LABEL_30:
    sub_21FFECC(messageLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
  this->fields.jumpType = 0;
}


void UserPresentBoxErrorDialog__OnClickCloseButton(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_593731A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__);
    byte_593731A = 1;
  }
  v3 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void UserPresentBoxErrorDialog__OnClickCombineButton(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 32, v2);
}


void UserPresentBoxErrorDialog__OnClickShopButton(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 22, v2);
}


void UserPresentBoxErrorDialog__OnClickWarehouseButton(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 71, v2);
}


void UserPresentBoxErrorDialog__Open(
        UserPresentBoxErrorDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_21FFECC(0, v5);
  UILabel__set_text(messageLabel, message, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))OnErrorDialogClosed->fields.invoke_impl)(
      OnErrorDialogClosed->fields.method_code,
      0xFFFFFFFFLL,
      OnErrorDialogClosed->fields.method);
}


void UserPresentBoxErrorDialog__add_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v8; // x0
  System_Action_SceneList_Type__c *v9; // x23
  System_Delegate_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x0
  bool v15; // zf
  UserPresentBoxErrorDialog_o *v16; // x0
  System_Action_SceneList_Type__o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_5937317 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SceneList_Type__TypeInfo);
    byte_5937317 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    v9 = System_Action_SceneList_Type__TypeInfo;
    v10 = v8;
    v11 = sub_21FFDA4(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v11 )
      break;
LABEL_8:
    v14 = sub_223767C(p_OnErrorDialogClosed, v11, v6);
    v15 = v14 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v14;
    if ( v15 )
      return;
  }
  sub_220024C(v10, v9, v12, v13);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v16, v17, v18);
}


System_String_o *UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_593731D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16231/*"Window/ExitButton"*/);
    byte_593731D = 1;
  }
  return (System_String_o *)StringLiteral_16231/*"Window/ExitButton"*/;
}


void UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v8; // x0
  System_Action_SceneList_Type__c *v9; // x23
  System_Delegate_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x0
  bool v15; // zf
  UserPresentBoxErrorDialog_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_5937318 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SceneList_Type__TypeInfo);
    byte_5937318 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    v9 = System_Action_SceneList_Type__TypeInfo;
    v10 = v8;
    v11 = sub_21FFDA4(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v11 )
      break;
LABEL_8:
    v14 = sub_223767C(p_OnErrorDialogClosed, v11, v6);
    v15 = v14 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v14;
    if ( v15 )
      return;
  }
  sub_220024C(v10, v9, v12, v13);
  UserPresentBoxErrorDialog__Init(v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxErrorDialog__setJumpType(UserPresentBoxErrorDialog_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v6; // x2
  UnityEngine_Transform_o *v7; // x20

  if ( (byte_593731B & 1) == 0 )
  {
    sub_21FFC50(&UserPresentBoxErrorDialog_TypeInfo);
    byte_593731B = 1;
  }
  this->fields.jumpType = type;
  if ( type == 2 )
  {
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0);
    v7 = (UnityEngine_Transform_o *)messageLabel;
    if ( !*(&UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type, v6);
    if ( !v7 )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      v7,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->MESSAGE_COMMAND_CODE_POS,
      0);
    messageLabel = (UnityEngine_Component_o *)this->fields.closeLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_COMMAND_CODE_POS,
      0);
    messageLabel = (UnityEngine_Component_o *)this->fields.shopLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_COMMAND_CODE_POS,
      0);
    messageLabel = (UnityEngine_Component_o *)this->fields.combineLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0);
    if ( !messageLabel
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0)) == 0
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0),
          (messageLabel = (UnityEngine_Component_o *)this->fields.warehouseLabel) == 0)
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0)) == 0
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0)) == 0
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0 )
    {
LABEL_25:
      sub_21FFECC(messageLabel, *(_QWORD *)&type);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  }
}


void UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserPresentBoxErrorDialog___c__DisplayClass23_0___ChangeScene_b__0(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *_4__this; // x0
  struct UserPresentBoxErrorDialog_o *v4; // x8
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, method), (v4 = this->fields.__4__this) == 0) )
    sub_21FFECC(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))OnErrorDialogClosed->fields.invoke_impl)(
      OnErrorDialogClosed->fields.method_code,
      (unsigned int)this->fields.scene,
      OnErrorDialogClosed->fields.method);
}
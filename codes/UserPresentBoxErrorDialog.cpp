void UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v2; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v3; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x8

  if ( (byte_4CC60A7 & 1) == 0 )
  {
    sub_1C713B0(&UserPresentBoxErrorDialog_TypeInfo);
    byte_4CC60A7 = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v2 = UserPresentBoxErrorDialog_TypeInfo;
  v3 = UserPresentBoxErrorDialog_TypeInfo->static_fields;
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
  if ( (byte_4CC60A6 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC60A6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserPresentBoxErrorDialog__ChangeScene(UserPresentBoxErrorDialog_o *this, int32_t scene, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int v16; // w8
  int32_t v17; // w22
  Il2CppObject *v18; // x21
  SceneJumpInfo_o *v19; // x0
  SceneJumpInfo_o *v20; // x22
  int32_t v21; // w2
  System_String_o *v22; // x1
  int32_t jumpType; // w21
  bool v24; // zf
  int32_t v25; // w1
  int32_t v26; // w22
  SceneJumpInfo_o *v27; // x0
  Il2CppObject *v28; // x3
  __int64 *v29; // x8
  System_Action_o *v30; // x21

  if ( (byte_4CC60A4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__);
    sub_1C713B0(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
    sub_1C713B0(&Method_UserPresentBoxErrorDialog_ChangeScene__);
    sub_1C713B0(&StringLiteral_12737/*"ServantEquipList"*/);
    sub_1C713B0(&StringLiteral_12697/*"SellServant"*/);
    sub_1C713B0(&StringLiteral_12736/*"ServantEQCombine"*/);
    sub_1C713B0(&StringLiteral_12733/*"ServantCombine"*/);
    byte_4CC60A4 = 1;
  }
  v5 = sub_1C715FC(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = scene;
  v14 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_ChangeScene__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C713C8(Method_UserPresentBoxErrorDialog_ChangeScene__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C71394(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  v16 = *(_DWORD *)(v5 + 24);
  switch ( v16 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v24 = jumpType == 1;
      v18 = Instance;
      if ( !v24 )
      {
        if ( Instance )
        {
          v25 = 71;
          v28 = 0;
LABEL_28:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v25, 1, v28, 0);
          break;
        }
        goto LABEL_30;
      }
      v20 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41756140(v20, (System_String_o *)StringLiteral_12737/*"ServantEquipList"*/, 0);
      if ( !v18 )
        goto LABEL_30;
      v25 = 71;
LABEL_27:
      Instance = v18;
      v28 = (Il2CppObject *)v20;
      goto LABEL_28;
    case 32:
      v26 = this->fields.jumpType;
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v27 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
      v24 = v26 == 1;
      v20 = v27;
      if ( v24 )
        v29 = &StringLiteral_12736/*"ServantEQCombine"*/;
      else
        v29 = &StringLiteral_12733/*"ServantCombine"*/;
      SceneJumpInfo___ctor_41756140(v27, (System_String_o *)*v29, 0);
      if ( !v18 )
        goto LABEL_30;
      v25 = 32;
      goto LABEL_27;
    case 22:
      v17 = this->fields.jumpType;
      if ( v17 == 1 )
      {
        v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v19 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
        v20 = v19;
        v21 = 1;
        v22 = (System_String_o *)StringLiteral_12697/*"SellServant"*/;
      }
      else
      {
        v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v19 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
        v24 = v17 == 2;
        v20 = v19;
        v22 = (System_String_o *)StringLiteral_12697/*"SellServant"*/;
        if ( v24 )
          v21 = 2;
        else
          v21 = 0;
      }
      SceneJumpInfo___ctor_41756228(v19, v22, v21, 0);
      if ( v18 )
      {
        v25 = 22;
        goto LABEL_27;
      }
LABEL_30:
      sub_1C71608(Instance, v7);
  }
  v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v30, 0);
}


void UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UserPresentBoxErrorDialog_c *v9; // x8
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_4CC60A1 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UserPresentBoxErrorDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_12214/*"SHORT_SERVANT_SELL"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_12217/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_1C713B0(&StringLiteral_12199/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC60A1 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHORT_SERVANT_SELL"*/, 0);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SHORT_SERVANT_COMBINE"*/, 0);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHORT_SERVANT_WAREHOUSE"*/, 0);
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
  v9 = UserPresentBoxErrorDialog_TypeInfo;
  v10 = (UnityEngine_Transform_o *)messageLabel;
  if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v9 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v10, v9->static_fields->MESSAGE_POS, 0);
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
    sub_1C71608(messageLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
  this->fields.jumpType = 0;
}


void UserPresentBoxErrorDialog__OnClickCloseButton(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC60A2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
    sub_1C713B0(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__);
    byte_4CC60A2 = 1;
  }
  v3 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
    sub_1C71608(0, v5);
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
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  UserPresentBoxErrorDialog_o *v13; // x0
  System_Action_SceneList_Type__o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CC609F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_SceneList_Type__TypeInfo);
    byte_4CC609F = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C714EC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CCD184(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C719A4(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v13, v14, v15);
}


System_String_o *UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC60A5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15649/*"Window/ExitButton"*/);
    byte_4CC60A5 = 1;
  }
  return (System_String_o *)StringLiteral_15649/*"Window/ExitButton"*/;
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
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  UserPresentBoxErrorDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CC60A0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_SceneList_Type__TypeInfo);
    byte_4CC60A0 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C714EC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CCD184(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C719A4(v9);
  UserPresentBoxErrorDialog__Init(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentBoxErrorDialog__setJumpType(UserPresentBoxErrorDialog_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_Transform_o *v6; // x20
  UserPresentBoxErrorDialog_c *v7; // x8

  if ( (byte_4CC60A3 & 1) == 0 )
  {
    sub_1C713B0(&UserPresentBoxErrorDialog_TypeInfo);
    byte_4CC60A3 = 1;
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
    v6 = (UnityEngine_Transform_o *)messageLabel;
    v7 = UserPresentBoxErrorDialog_TypeInfo;
    if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v7 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !v6 )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(v6, v7->static_fields->MESSAGE_COMMAND_CODE_POS, 0);
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
      sub_1C71608(messageLabel, *(_QWORD *)&type);
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
    sub_1C71608(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))OnErrorDialogClosed->fields.invoke_impl)(
      OnErrorDialogClosed->fields.method_code,
      (unsigned int)this->fields.scene,
      OnErrorDialogClosed->fields.method);
}
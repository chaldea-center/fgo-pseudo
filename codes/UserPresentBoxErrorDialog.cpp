void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v2; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v3; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x8

  if ( (byte_4A59E9C & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxErrorDialog_TypeInfo);
    byte_4A59E9C = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0LL;
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


void __fastcall UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A59E9B & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A59E9B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int v12; // w8
  int32_t v13; // w22
  Il2CppObject *v14; // x21
  SceneJumpInfo_o *v15; // x0
  SceneJumpInfo_o *v16; // x22
  int32_t v17; // w2
  System_String_o *v18; // x1
  int32_t jumpType; // w21
  bool v20; // zf
  int32_t v21; // w1
  int32_t v22; // w22
  SceneJumpInfo_o *v23; // x0
  Il2CppObject *v24; // x3
  __int64 *v25; // x8
  System_Action_o *v26; // x21

  if ( (byte_4A59E99 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__);
    sub_1B885B0(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxErrorDialog_ChangeScene__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A59E99 = 1;
  }
  v5 = sub_1B887FC(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = scene;
  v10 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_ChangeScene__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxErrorDialog_ChangeScene__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v12 = *(_DWORD *)(v5 + 24);
  switch ( v12 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v20 = jumpType == 1;
      v14 = Instance;
      if ( !v20 )
      {
        if ( Instance )
        {
          v21 = 71;
          v24 = 0LL;
LABEL_28:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v21, 1, v24, 0LL);
          break;
        }
        goto LABEL_30;
      }
      v16 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v16, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      if ( !v14 )
        goto LABEL_30;
      v21 = 71;
LABEL_27:
      Instance = v14;
      v24 = (Il2CppObject *)v16;
      goto LABEL_28;
    case 32:
      v22 = this->fields.jumpType;
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v23 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      v20 = v22 == 1;
      v16 = v23;
      if ( v20 )
        v25 = &StringLiteral_12626/*"ServantEQCombine"*/;
      else
        v25 = &StringLiteral_12623/*"ServantCombine"*/;
      SceneJumpInfo___ctor_38664344(v23, (System_String_o *)*v25, 0LL);
      if ( !v14 )
        goto LABEL_30;
      v21 = 32;
      goto LABEL_27;
    case 22:
      v13 = this->fields.jumpType;
      if ( v13 == 1 )
      {
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v15 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
        v16 = v15;
        v17 = 1;
        v18 = (System_String_o *)StringLiteral_12586/*"SellServant"*/;
      }
      else
      {
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v15 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
        v20 = v13 == 2;
        v16 = v15;
        v18 = (System_String_o *)StringLiteral_12586/*"SellServant"*/;
        if ( v20 )
          v17 = 2;
        else
          v17 = 0;
      }
      SceneJumpInfo___ctor_38664432(v15, v18, v17, 0LL);
      if ( v14 )
      {
        v21 = 22;
        goto LABEL_27;
      }
LABEL_30:
      sub_1B8880C(Instance, v7);
  }
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v26, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UserPresentBoxErrorDialog_c *v9; // x8
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_4A59E96 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UserPresentBoxErrorDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_12129/*"SHORT_SERVANT_SELL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_12132/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_1B885B0(&StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E96 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
  if ( !warehouseLabel )
    goto LABEL_30;
  UILabel__set_text(warehouseLabel, (System_String_o *)messageLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  v9 = UserPresentBoxErrorDialog_TypeInfo;
  v10 = (UnityEngine_Transform_o *)messageLabel;
  if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v9 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v10, v9->static_fields->MESSAGE_POS, 0LL);
  messageLabel = this->fields.closeLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_POS,
    0LL);
  messageLabel = this->fields.shopLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_POS,
    0LL);
  messageLabel = this->fields.combineLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL),
        (messageLabel = this->fields.warehouseLabel) == 0LL)
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL )
  {
LABEL_30:
    sub_1B8880C(messageLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A59E97 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__);
    byte_4A59E97 = 1;
  }
  v3 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__OnClickCombineButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 32, v2);
}


void __fastcall UserPresentBoxErrorDialog__OnClickShopButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 22, v2);
}


void __fastcall UserPresentBoxErrorDialog__OnClickWarehouseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 71, v2);
}


void __fastcall UserPresentBoxErrorDialog__Open(
        UserPresentBoxErrorDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1B8880C(0LL, v5);
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      0xFFFFFFFFLL,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
}


void __fastcall UserPresentBoxErrorDialog__add_OnErrorDialogClosed(
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

  if ( (byte_4A59E94 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SceneList_Type__TypeInfo);
    byte_4A59E94 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1B886EC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1BC3AA0(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B88ACC(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v13, v14, v15);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A59E9A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15645/*"Window/ExitButton"*/);
    byte_4A59E9A = 1;
  }
  return (System_String_o *)StringLiteral_15645/*"Window/ExitButton"*/;
}


void __fastcall UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(
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

  if ( (byte_4A59E95 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SceneList_Type__TypeInfo);
    byte_4A59E95 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1B886EC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1BC3AA0(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B88ACC(v9);
  UserPresentBoxErrorDialog__Init(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__setJumpType(
        UserPresentBoxErrorDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_Transform_o *v6; // x20
  UserPresentBoxErrorDialog_c *v7; // x8

  if ( (byte_4A59E98 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxErrorDialog_TypeInfo);
    byte_4A59E98 = 1;
  }
  this->fields.jumpType = type;
  if ( type == 2 )
  {
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    v6 = (UnityEngine_Transform_o *)messageLabel;
    v7 = UserPresentBoxErrorDialog_TypeInfo;
    if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v7 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !v6 )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(v6, v7->static_fields->MESSAGE_COMMAND_CODE_POS, 0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.closeLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.shopLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.combineLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL),
          (messageLabel = (UnityEngine_Component_o *)this->fields.warehouseLabel) == 0LL)
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL )
    {
LABEL_25:
      sub_1B8880C(messageLabel, *(_QWORD *)&type);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  }
}


void __fastcall UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___c__DisplayClass23_0___ChangeScene_b__0(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *_4__this; // x0
  struct UserPresentBoxErrorDialog_o *v4; // x8
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, method), (v4 = this->fields.__4__this) == 0LL) )
    sub_1B8880C(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      (unsigned int)this->fields.scene,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
}
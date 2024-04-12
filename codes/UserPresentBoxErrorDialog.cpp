void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x9
  UserPresentBoxErrorDialog_c *v2; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v3; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x8

  if ( (byte_42AEFE8 & 1) == 0 )
  {
    sub_B52984(&UserPresentBoxErrorDialog_TypeInfo);
    byte_42AEFE8 = 1;
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
  if ( (byte_42AEFE7 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AEFE7 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int v14; // w8
  int32_t v15; // w22
  WebViewManager_o *v16; // x21
  SceneJumpInfo_o *v17; // x0
  SceneJumpInfo_o *v18; // x22
  int32_t v19; // w2
  System_String_o *v20; // x1
  int32_t v21; // w22
  SceneJumpInfo_o *v22; // x0
  bool v23; // zf
  int32_t jumpType; // w21
  int32_t v25; // w1
  __int64 *v26; // x8
  Il2CppObject *v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_42AEFE5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__);
    sub_B52984(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
    sub_B52984(&StringLiteral_12803/*"ServantEquipList"*/);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    sub_B52984(&StringLiteral_12802/*"ServantEQCombine"*/);
    sub_B52984(&StringLiteral_12799/*"ServantCombine"*/);
    byte_42AEFE5 = 1;
  }
  v5 = sub_B52A54(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor((UserPresentBoxErrorDialog___c__DisplayClass23_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = scene;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v14 = *(_DWORD *)(v5 + 24);
  switch ( v14 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v23 = jumpType == 1;
      v16 = (WebViewManager_o *)Instance;
      if ( !v23 )
      {
        if ( Instance )
        {
          v25 = 71;
          v27 = 0LL;
LABEL_29:
          AvalonSceneManager__transitionScene(Instance, v25, 1, v27, 0LL);
          break;
        }
        goto LABEL_31;
      }
      v18 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v18, (System_String_o *)StringLiteral_12803/*"ServantEquipList"*/, 0LL);
      if ( !v16 )
        goto LABEL_31;
      v25 = 71;
LABEL_28:
      Instance = (AvalonSceneManager_o *)v16;
      v27 = (Il2CppObject *)v18;
      goto LABEL_29;
    case 32:
      v21 = this->fields.jumpType;
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v22 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      v23 = v21 == 1;
      v18 = v22;
      if ( v23 )
        v26 = &StringLiteral_12802/*"ServantEQCombine"*/;
      else
        v26 = &StringLiteral_12799/*"ServantCombine"*/;
      SceneJumpInfo___ctor_17466128(v22, (System_String_o *)*v26, 0LL);
      if ( !v16 )
        goto LABEL_31;
      v25 = 32;
      goto LABEL_28;
    case 22:
      v15 = this->fields.jumpType;
      if ( v15 == 1 )
      {
        v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
        v18 = v17;
        v19 = 1;
        v20 = (System_String_o *)StringLiteral_12759/*"SellServant"*/;
      }
      else
      {
        v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
        v23 = v15 == 2;
        v18 = v17;
        v20 = (System_String_o *)StringLiteral_12759/*"SellServant"*/;
        if ( v23 )
          v19 = 2;
        else
          v19 = 0;
      }
      SceneJumpInfo___ctor_17466224(v17, v20, v19, 0LL);
      if ( v16 )
      {
        v25 = 22;
        goto LABEL_28;
      }
LABEL_31:
      sub_B52A5C(Instance, v7);
  }
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UnityEngine_Transform_o *v9; // x20
  UserPresentBoxErrorDialog_c *v10; // x8

  if ( (byte_42AEFE2 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UserPresentBoxErrorDialog_TypeInfo);
    sub_B52984(&StringLiteral_12322/*"SHORT_SERVANT_SELL"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_12325/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_B52984(&StringLiteral_12308/*"SHORT_SERVANT_COMBINE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEFE2 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_32;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_32;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12322/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_32;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12308/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_32;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12325/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
  if ( !warehouseLabel )
    goto LABEL_32;
  UILabel__set_text(warehouseLabel, (System_String_o *)messageLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  v9 = (UnityEngine_Transform_o *)messageLabel;
  v10 = UserPresentBoxErrorDialog_TypeInfo;
  if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v10 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v9, v10->static_fields->MESSAGE_POS, 0LL);
  messageLabel = this->fields.closeLabel;
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_POS,
    0LL);
  messageLabel = this->fields.shopLabel;
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_32;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_POS,
    0LL);
  messageLabel = this->fields.combineLabel;
  if ( !messageLabel )
    goto LABEL_32;
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
LABEL_32:
    sub_B52A5C(messageLabel, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AEFE3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__);
    byte_42AEFE3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
    sub_B52A5C(0LL, v5);
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x0

  if ( (byte_42AEFE9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_SceneList_Type__Invoke__);
    byte_42AEFE9 = 1;
  }
  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)OnErrorDialogClosed,
      -1,
      (const MethodInfo_26264D8 *)Method_System_Action_SceneList_Type__Invoke__);
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
  __int64 v9; // x0
  bool v10; // zf
  UserPresentBoxErrorDialog_o *v11; // x0
  System_Action_SceneList_Type__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42AEFE0 & 1) == 0 )
  {
    sub_B52984(&System_Action_SceneList_Type__TypeInfo);
    byte_42AEFE0 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_SceneList_Type__c *)v8->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B52D50(v8);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v11, v12, v13);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEFE6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15586/*"Window/ExitButton"*/);
    byte_42AEFE6 = 1;
  }
  return (System_String_o *)StringLiteral_15586/*"Window/ExitButton"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  UserPresentBoxErrorDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42AEFE1 & 1) == 0 )
  {
    sub_B52984(&System_Action_SceneList_Type__TypeInfo);
    byte_42AEFE1 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_SceneList_Type__c *)v8->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B52D50(v8);
  UserPresentBoxErrorDialog__Init(v11, v12);
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

  if ( (byte_42AEFE4 & 1) == 0 )
  {
    sub_B52984(&UserPresentBoxErrorDialog_TypeInfo);
    byte_42AEFE4 = 1;
  }
  this->fields.jumpType = type;
  if ( type == 2 )
  {
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    v6 = (UnityEngine_Transform_o *)messageLabel;
    v7 = UserPresentBoxErrorDialog_TypeInfo;
    if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v7 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !v6 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v6, v7->static_fields->MESSAGE_COMMAND_CODE_POS, 0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.closeLabel;
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.shopLabel;
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_26;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.combineLabel;
    if ( !messageLabel )
      goto LABEL_26;
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
LABEL_26:
      sub_B52A5C(messageLabel, *(_QWORD *)&type);
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
  System_Action_ShopRootConstants_State__o *OnErrorDialogClosed; // x0

  if ( (byte_42AE592 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_SceneList_Type__Invoke__);
    byte_42AE592 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B52A5C(_4__this, method);
  OnErrorDialogClosed = (System_Action_ShopRootConstants_State__o *)v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      OnErrorDialogClosed,
      this->fields.scene,
      (const MethodInfo_26264D8 *)Method_System_Action_SceneList_Type__Invoke__);
}
void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x9
  UserPresentBoxErrorDialog_c *v3; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x8

  if ( (byte_42137CC & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentBoxErrorDialog_TypeInfo, v1);
    byte_42137CC = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0LL;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v3 = UserPresentBoxErrorDialog_TypeInfo;
  v4 = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_COMMAND_CODE_POS.fields.x = 0xC220000000000000LL;
  v4->MESSAGE_COMMAND_CODE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->SHOP_POS.fields.x = 0xC322000000000000LL;
  v5->SHOP_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->SHOP_COMMAND_CODE_POS.fields.x = 0xC322000043200000LL;
  v6->SHOP_COMMAND_CODE_POS.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->EXIT_POS.fields.x = 0xC2A40000C36B0000LL;
  v7->EXIT_POS.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->EXIT_COMMAND_CODE_POS.fields.x = 0xC3220000C3200000LL;
  v8->EXIT_COMMAND_CODE_POS.fields.z = 0.0;
}


void __fastcall UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42137CB & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42137CB = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  AvalonSceneManager_o *Instance; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w8
  int32_t v25; // w22
  WebViewManager_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  SceneJumpInfo_o *v29; // x0
  SceneJumpInfo_o *v30; // x22
  int32_t v31; // w2
  System_String_o *v32; // x1
  int32_t v33; // w22
  __int64 v34; // x1
  __int64 v35; // x2
  SceneJumpInfo_o *v36; // x0
  bool v37; // zf
  int32_t jumpType; // w21
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w1
  __int64 *v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *v45; // x3
  System_Action_o *v46; // x21

  if ( (byte_42137C9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&scene);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v8);
    sub_B0D8A4(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v10);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v11);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v12);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v13);
    byte_42137C9 = 1;
  }
  v14 = sub_B0D974(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&scene, method);
  UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor((UserPresentBoxErrorDialog___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_31;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v14 + 24) = scene;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v24 = *(_DWORD *)(v14 + 24);
  switch ( v24 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v37 = jumpType == 1;
      v26 = (WebViewManager_o *)Instance;
      if ( !v37 )
      {
        if ( Instance )
        {
          v41 = 71;
          v45 = 0LL;
LABEL_29:
          AvalonSceneManager__transitionScene(Instance, v41, 1, v45, 0LL);
          break;
        }
        goto LABEL_31;
      }
      v30 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v39, v40);
      SceneJumpInfo___ctor_16651556(v30, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
      if ( !v26 )
        goto LABEL_31;
      v41 = 71;
LABEL_28:
      Instance = (AvalonSceneManager_o *)v26;
      v45 = (Il2CppObject *)v30;
      goto LABEL_29;
    case 32:
      v33 = this->fields.jumpType;
      v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v36 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v34, v35);
      v37 = v33 == 1;
      v30 = v36;
      if ( v37 )
        v42 = &StringLiteral_12749/*"ServantEQCombine"*/;
      else
        v42 = &StringLiteral_12746/*"ServantCombine"*/;
      SceneJumpInfo___ctor_16651556(v36, (System_String_o *)*v42, 0LL);
      if ( !v26 )
        goto LABEL_31;
      v41 = 32;
      goto LABEL_28;
    case 22:
      v25 = this->fields.jumpType;
      if ( v25 == 1 )
      {
        v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v29 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v27, v28);
        v30 = v29;
        v31 = 1;
        v32 = (System_String_o *)StringLiteral_12706/*"SellServant"*/;
      }
      else
      {
        v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v29 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v43, v44);
        v37 = v25 == 2;
        v30 = v29;
        v32 = (System_String_o *)StringLiteral_12706/*"SellServant"*/;
        if ( v37 )
          v31 = 2;
        else
          v31 = 0;
      }
      SceneJumpInfo___ctor_16651652(v29, v32, v31, 0LL);
      if ( v26 )
      {
        v41 = 22;
        goto LABEL_28;
      }
LABEL_31:
      sub_B0D97C(Instance);
  }
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v46, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UnityEngine_Transform_o *v14; // x20
  UserPresentBoxErrorDialog_c *v15; // x8

  if ( (byte_42137C6 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&UserPresentBoxErrorDialog_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12271/*"SHORT_SERVANT_SELL"*/, v4);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_B0D8A4(&StringLiteral_12274/*"SHORT_SERVANT_WAREHOUSE"*/, v6);
    sub_B0D8A4(&StringLiteral_12257/*"SHORT_SERVANT_COMBINE"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42137C6 = 1;
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
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_32;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_32;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_32;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12274/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
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
  v14 = (UnityEngine_Transform_o *)messageLabel;
  v15 = UserPresentBoxErrorDialog_TypeInfo;
  if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v15 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v14, v15->static_fields->MESSAGE_POS, 0LL);
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
    sub_B0D97C(messageLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_42137C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v4);
    byte_42137C7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B0D97C(0LL);
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x0

  if ( (byte_42137CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type__Invoke__, method);
    byte_42137CD = 1;
  }
  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)OnErrorDialogClosed,
      -1,
      (const MethodInfo_246D794 *)Method_System_Action_SceneList_Type__Invoke__);
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

  if ( (byte_42137C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, value);
    byte_42137C4 = 1;
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
    v9 = sub_B022BC(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B0DC70(v8);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v11, v12, v13);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42137CA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15528/*"Window/ExitButton"*/, method);
    byte_42137CA = 1;
  }
  return (System_String_o *)StringLiteral_15528/*"Window/ExitButton"*/;
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

  if ( (byte_42137C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, value);
    byte_42137C5 = 1;
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
    v9 = sub_B022BC(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B0DC70(v8);
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

  if ( (byte_42137C8 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type);
    byte_42137C8 = 1;
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
      sub_B0D97C(messageLabel);
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

  if ( (byte_421262A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type__Invoke__, method);
    byte_421262A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B0D97C(_4__this);
  OnErrorDialogClosed = (System_Action_ShopRootConstants_State__o *)v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      OnErrorDialogClosed,
      this->fields.scene,
      (const MethodInfo_246D794 *)Method_System_Action_SceneList_Type__Invoke__);
}
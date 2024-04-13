void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x9
  UserPresentBoxErrorDialog_c *v5; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v9; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v10; // x8

  if ( (byte_42E71E8 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxErrorDialog_TypeInfo, v1, v2, v3);
    byte_42E71E8 = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0LL;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v5 = UserPresentBoxErrorDialog_TypeInfo;
  v6 = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&v6->MESSAGE_COMMAND_CODE_POS.fields.x = 0xC220000000000000LL;
  v6->MESSAGE_COMMAND_CODE_POS.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->SHOP_POS.fields.x = 0xC322000000000000LL;
  v7->SHOP_POS.fields.z = 0.0;
  v8 = v5->static_fields;
  *(_QWORD *)&v8->SHOP_COMMAND_CODE_POS.fields.x = 0xC322000043200000LL;
  v8->SHOP_COMMAND_CODE_POS.fields.z = 0.0;
  v9 = v5->static_fields;
  *(_QWORD *)&v9->EXIT_POS.fields.x = 0xC2A40000C36B0000LL;
  v9->EXIT_POS.fields.z = 0.0;
  v10 = v5->static_fields;
  *(_QWORD *)&v10->EXIT_COMMAND_CODE_POS.fields.x = 0xC3220000C3200000LL;
  v10->EXIT_COMMAND_CODE_POS.fields.z = 0.0;
}


void __fastcall UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71E7 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71E7 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w8
  int32_t v43; // w22
  WebViewManager_o *v44; // x21
  SceneJumpInfo_o *v45; // x0
  SceneJumpInfo_o *v46; // x22
  int32_t v47; // w2
  System_String_o *v48; // x1
  int32_t v49; // w22
  SceneJumpInfo_o *v50; // x0
  bool v51; // zf
  int32_t jumpType; // w21
  int32_t v53; // w1
  __int64 *v54; // x8
  Il2CppObject *v55; // x3
  System_Action_o *v56; // x21

  if ( (byte_42E71E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, scene, (_DWORD)method, v3);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v15, v16, v17);
    sub_B5D5C4(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v30, v31, v32);
    byte_42E71E5 = 1;
  }
  v33 = sub_B5D694(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor((UserPresentBoxErrorDialog___c__DisplayClass23_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_31;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v33 + 24) = scene;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v42 = *(_DWORD *)(v33 + 24);
  switch ( v42 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v51 = jumpType == 1;
      v44 = (WebViewManager_o *)Instance;
      if ( !v51 )
      {
        if ( Instance )
        {
          v53 = 71;
          v55 = 0LL;
LABEL_29:
          AvalonSceneManager__transitionScene(Instance, v53, 1, v55, 0LL);
          break;
        }
        goto LABEL_31;
      }
      v46 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v46, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
      if ( !v44 )
        goto LABEL_31;
      v53 = 71;
LABEL_28:
      Instance = (AvalonSceneManager_o *)v44;
      v55 = (Il2CppObject *)v46;
      goto LABEL_29;
    case 32:
      v49 = this->fields.jumpType;
      v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v50 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      v51 = v49 == 1;
      v46 = v50;
      if ( v51 )
        v54 = &StringLiteral_12861/*"ServantEQCombine"*/;
      else
        v54 = &StringLiteral_12858/*"ServantCombine"*/;
      SceneJumpInfo___ctor_17508984(v50, (System_String_o *)*v54, 0LL);
      if ( !v44 )
        goto LABEL_31;
      v53 = 32;
      goto LABEL_28;
    case 22:
      v43 = this->fields.jumpType;
      if ( v43 == 1 )
      {
        v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v45 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        v46 = v45;
        v47 = 1;
        v48 = (System_String_o *)StringLiteral_12818/*"SellServant"*/;
      }
      else
      {
        v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v45 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        v51 = v43 == 2;
        v46 = v45;
        v48 = (System_String_o *)StringLiteral_12818/*"SellServant"*/;
        if ( v51 )
          v47 = 2;
        else
          v47 = 0;
      }
      SceneJumpInfo___ctor_17509080(v45, v48, v47, 0LL);
      if ( v44 )
      {
        v53 = 22;
        goto LABEL_28;
      }
LABEL_31:
      sub_B5D69C(Instance, v35);
  }
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v33,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v56, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UnityEngine_Transform_o *v29; // x20
  UserPresentBoxErrorDialog_c *v30; // x8

  if ( (byte_42E71E2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserPresentBoxErrorDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12383/*"SHORT_SERVANT_WAREHOUSE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E71E2 = 1;
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
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_32;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_32;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_32;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
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
  v29 = (UnityEngine_Transform_o *)messageLabel;
  v30 = UserPresentBoxErrorDialog_TypeInfo;
  if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v30 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v29 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v29, v30->static_fields->MESSAGE_POS, 0LL);
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
    sub_B5D69C(messageLabel, v23);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E71E3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v8, v9, v10);
    byte_42E71E3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B5D69C(0LL, v5);
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x0

  if ( (byte_42E71E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type__Invoke__, (_DWORD)method, v2, v3);
    byte_42E71E9 = 1;
  }
  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)OnErrorDialogClosed,
      -1,
      (const MethodInfo_258A078 *)Method_System_Action_SceneList_Type__Invoke__);
}


void __fastcall UserPresentBoxErrorDialog__add_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserPresentBoxErrorDialog_o *v12; // x0
  System_Action_SceneList_Type__o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E71E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E71E0 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v7 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_SceneList_Type__c *)v9->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_OnErrorDialogClosed, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserPresentBoxErrorDialog_o *)sub_B5D990(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v12, v13, v14);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71E6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15671/*"Window/ExitButton"*/, (_DWORD)method, v2, v3);
    byte_42E71E6 = 1;
  }
  return (System_String_o *)StringLiteral_15671/*"Window/ExitButton"*/;
}


void __fastcall UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserPresentBoxErrorDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E71E1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E71E1 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v7 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_SceneList_Type__c *)v9->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_OnErrorDialogClosed, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserPresentBoxErrorDialog_o *)sub_B5D990(v9);
  UserPresentBoxErrorDialog__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__setJumpType(
        UserPresentBoxErrorDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_Transform_o *v7; // x20
  UserPresentBoxErrorDialog_c *v8; // x8

  if ( (byte_42E71E4 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxErrorDialog_TypeInfo, type, (_DWORD)method, v3);
    byte_42E71E4 = 1;
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
    v7 = (UnityEngine_Transform_o *)messageLabel;
    v8 = UserPresentBoxErrorDialog_TypeInfo;
    if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v8 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !v7 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(v7, v8->static_fields->MESSAGE_COMMAND_CODE_POS, 0LL);
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
      sub_B5D69C(messageLabel, *(_QWORD *)&type);
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
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxErrorDialog_o *_4__this; // x0
  struct UserPresentBoxErrorDialog_o *v6; // x8
  System_Action_ShopRootConstants_State__o *OnErrorDialogClosed; // x0

  if ( (byte_42E7005 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type__Invoke__, (_DWORD)method, v2, v3);
    byte_42E7005 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, 0LL), (v6 = this->fields.__4__this) == 0LL) )
    sub_B5D69C(_4__this, method);
  OnErrorDialogClosed = (System_Action_ShopRootConstants_State__o *)v6->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      OnErrorDialogClosed,
      this->fields.scene,
      (const MethodInfo_258A078 *)Method_System_Action_SceneList_Type__Invoke__);
}
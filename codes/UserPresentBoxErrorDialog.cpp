void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v4; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v9; // x8

  if ( (byte_4B14FD1 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxErrorDialog_TypeInfo, v1, v2);
    byte_4B14FD1 = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0LL;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v4 = UserPresentBoxErrorDialog_TypeInfo;
  v5 = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&v5->MESSAGE_COMMAND_CODE_POS.fields.x = 0xC220000000000000LL;
  v5->MESSAGE_COMMAND_CODE_POS.fields.z = 0.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->SHOP_POS.fields.x = 0xC322000000000000LL;
  v6->SHOP_POS.fields.z = 0.0;
  v7 = v4->static_fields;
  *(_QWORD *)&v7->SHOP_COMMAND_CODE_POS.fields.x = 0xC322000043200000LL;
  v7->SHOP_COMMAND_CODE_POS.fields.z = 0.0;
  v8 = v4->static_fields;
  *(_QWORD *)&v8->EXIT_POS.fields.x = 0xC2A40000C36B0000LL;
  v8->EXIT_POS.fields.z = 0.0;
  v9 = v4->static_fields;
  *(_QWORD *)&v9->EXIT_COMMAND_CODE_POS.fields.x = 0xC3220000C3200000LL;
  v9->EXIT_COMMAND_CODE_POS.fields.z = 0.0;
}


void __fastcall UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FD0 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14FD0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x20
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int v38; // w8
  int32_t v39; // w22
  Il2CppObject *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  SceneJumpInfo_o *v44; // x0
  SceneJumpInfo_o *v45; // x22
  int32_t v46; // w2
  System_String_o *v47; // x1
  int32_t jumpType; // w21
  __int64 v49; // x2
  __int64 v50; // x3
  bool v51; // zf
  int32_t v52; // w1
  int32_t v53; // w22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  SceneJumpInfo_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  Il2CppObject *v61; // x3
  __int64 *v62; // x8
  System_Action_o *v63; // x21

  if ( (byte_4B14FCE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&scene, method);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v10, v11);
    sub_1BCA7E0(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UserPresentBoxErrorDialog_ChangeScene__, v14, v15);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v22, v23);
    byte_4B14FCE = 1;
  }
  v24 = sub_1BCAA2C(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&scene, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_30;
  *(_QWORD *)(v24 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)this, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v24 + 24) = scene;
  v33 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_ChangeScene__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxErrorDialog_ChangeScene__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
  v38 = *(_DWORD *)(v24 + 24);
  switch ( v38 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v51 = jumpType == 1;
      v40 = Instance;
      if ( !v51 )
      {
        if ( Instance )
        {
          v52 = 71;
          v61 = 0LL;
LABEL_28:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v52, 1, v61, 0LL);
          break;
        }
        goto LABEL_30;
      }
      v45 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v26, v49, v50);
      SceneJumpInfo___ctor_39380796(v45, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      if ( !v40 )
        goto LABEL_30;
      v52 = 71;
LABEL_27:
      Instance = v40;
      v61 = (Il2CppObject *)v45;
      goto LABEL_28;
    case 32:
      v53 = this->fields.jumpType;
      v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v57 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v54, v55, v56);
      v51 = v53 == 1;
      v45 = v57;
      if ( v51 )
        v62 = &StringLiteral_12784/*"ServantEQCombine"*/;
      else
        v62 = &StringLiteral_12781/*"ServantCombine"*/;
      SceneJumpInfo___ctor_39380796(v57, (System_String_o *)*v62, 0LL);
      if ( !v40 )
        goto LABEL_30;
      v52 = 32;
      goto LABEL_27;
    case 22:
      v39 = this->fields.jumpType;
      if ( v39 == 1 )
      {
        v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v44 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v41, v42, v43);
        v45 = v44;
        v46 = 1;
        v47 = (System_String_o *)StringLiteral_12744/*"SellServant"*/;
      }
      else
      {
        v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v44 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v58, v59, v60);
        v51 = v39 == 2;
        v45 = v44;
        v47 = (System_String_o *)StringLiteral_12744/*"SellServant"*/;
        if ( v51 )
          v46 = 2;
        else
          v46 = 0;
      }
      SceneJumpInfo___ctor_39380884(v44, v47, v46, 0LL);
      if ( v40 )
      {
        v52 = 22;
        goto LABEL_27;
      }
LABEL_30:
      sub_1BCAA3C(Instance, v26);
  }
  v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v24,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v63, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  UILabel_o *messageLabel; // x0
  __int64 v18; // x1
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UserPresentBoxErrorDialog_c *v23; // x8
  UnityEngine_Transform_o *v24; // x20

  if ( (byte_4B14FCB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UserPresentBoxErrorDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12288/*"SHORT_SERVANT_WAREHOUSE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B14FCB = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
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
  v23 = UserPresentBoxErrorDialog_TypeInfo;
  v24 = (UnityEngine_Transform_o *)messageLabel;
  if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo, v16);
    v23 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v24, v23->static_fields->MESSAGE_POS, 0LL);
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
    sub_1BCAA3C(messageLabel, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B14FCC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v6, v7);
    byte_4B14FCC = 1;
  }
  v8 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_1BCAA3C(0LL, v5);
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

  if ( (byte_4B14FC9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, value, method);
    byte_4B14FC9 = 1;
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
    v10 = sub_1BCA91C(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05CD0(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCACFC(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v13, v14, v15);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FCF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15812/*"Window/ExitButton"*/, method, v2);
    byte_4B14FCF = 1;
  }
  return (System_String_o *)StringLiteral_15812/*"Window/ExitButton"*/;
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

  if ( (byte_4B14FCA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, value, method);
    byte_4B14FCA = 1;
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
    v10 = sub_1BCA91C(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C05CD0(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BCACFC(v9);
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

  if ( (byte_4B14FCD & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type, method);
    byte_4B14FCD = 1;
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
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type);
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
      sub_1BCAA3C(messageLabel, *(_QWORD *)&type);
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
    sub_1BCAA3C(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      (unsigned int)this->fields.scene,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
}
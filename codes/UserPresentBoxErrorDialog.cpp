void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v3; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x8

  if ( (byte_4B65978 & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentBoxErrorDialog_TypeInfo, v1);
    byte_4B65978 = 1;
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
  if ( (byte_4B65977 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B65977 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  int v25; // w8
  int32_t v26; // w22
  Il2CppObject *v27; // x21
  SceneJumpInfo_o *v28; // x0
  SceneJumpInfo_o *v29; // x22
  int32_t v30; // w2
  System_String_o *v31; // x1
  int32_t jumpType; // w21
  bool v33; // zf
  int32_t v34; // w1
  int32_t v35; // w22
  SceneJumpInfo_o *v36; // x0
  Il2CppObject *v37; // x3
  __int64 *v38; // x8
  System_Action_o *v39; // x21

  if ( (byte_4B65975 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&scene);
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v7);
    sub_1BE4ACC(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v8);
    sub_1BE4ACC(&Method_UserPresentBoxErrorDialog_ChangeScene__, v9);
    sub_1BE4ACC(&StringLiteral_12822/*"ServantEquipList"*/, v10);
    sub_1BE4ACC(&StringLiteral_12781/*"SellServant"*/, v11);
    sub_1BE4ACC(&StringLiteral_12821/*"ServantEQCombine"*/, v12);
    sub_1BE4ACC(&StringLiteral_12818/*"ServantCombine"*/, v13);
    byte_4B65975 = 1;
  }
  v14 = sub_1BE4D18(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_30;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 24) = scene;
  v23 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_ChangeScene__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BE4AE4(Method_UserPresentBoxErrorDialog_ChangeScene__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  v25 = *(_DWORD *)(v14 + 24);
  switch ( v25 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v33 = jumpType == 1;
      v27 = Instance;
      if ( !v33 )
      {
        if ( Instance )
        {
          v34 = 71;
          v37 = 0LL;
LABEL_28:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v34, 1, v37, 0LL);
          break;
        }
        goto LABEL_30;
      }
      v29 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39576768(v29, (System_String_o *)StringLiteral_12822/*"ServantEquipList"*/, 0LL);
      if ( !v27 )
        goto LABEL_30;
      v34 = 71;
LABEL_27:
      Instance = v27;
      v37 = (Il2CppObject *)v29;
      goto LABEL_28;
    case 32:
      v35 = this->fields.jumpType;
      v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v36 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
      v33 = v35 == 1;
      v29 = v36;
      if ( v33 )
        v38 = &StringLiteral_12821/*"ServantEQCombine"*/;
      else
        v38 = &StringLiteral_12818/*"ServantCombine"*/;
      SceneJumpInfo___ctor_39576768(v36, (System_String_o *)*v38, 0LL);
      if ( !v27 )
        goto LABEL_30;
      v34 = 32;
      goto LABEL_27;
    case 22:
      v26 = this->fields.jumpType;
      if ( v26 == 1 )
      {
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v28 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        v29 = v28;
        v30 = 1;
        v31 = (System_String_o *)StringLiteral_12781/*"SellServant"*/;
      }
      else
      {
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v28 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        v33 = v26 == 2;
        v29 = v28;
        v31 = (System_String_o *)StringLiteral_12781/*"SellServant"*/;
        if ( v33 )
          v30 = 2;
        else
          v30 = 0;
      }
      SceneJumpInfo___ctor_39576856(v28, v31, v30, 0LL);
      if ( v27 )
      {
        v34 = 22;
        goto LABEL_27;
      }
LABEL_30:
      sub_1BE4D28(Instance, v16);
  }
  v39 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v14,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v39, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UserPresentBoxErrorDialog_c *v15; // x8
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_4B65972 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&UserPresentBoxErrorDialog_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_12317/*"SHORT_SERVANT_SELL"*/, v4);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_1BE4ACC(&StringLiteral_12320/*"SHORT_SERVANT_WAREHOUSE"*/, v6);
    sub_1BE4ACC(&StringLiteral_12302/*"SHORT_SERVANT_COMBINE"*/, v7);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B65972 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12320/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
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
  v15 = UserPresentBoxErrorDialog_TypeInfo;
  v16 = (UnityEngine_Transform_o *)messageLabel;
  if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v15 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v16, v15->static_fields->MESSAGE_POS, 0LL);
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
    sub_1BE4D28(messageLabel, v9);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B65973 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__, v3);
    sub_1BE4ACC(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v4);
    byte_4B65973 = 1;
  }
  v5 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
  __int64 v5; // x1
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1BE4D28(0LL, v5);
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

  if ( (byte_4B65970 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_SceneList_Type__TypeInfo, value);
    byte_4B65970 = 1;
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
    v10 = sub_1BE4C08(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C1FFBC(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BE4FE8(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v13, v14, v15);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B65976 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15852/*"Window/ExitButton"*/, method);
    byte_4B65976 = 1;
  }
  return (System_String_o *)StringLiteral_15852/*"Window/ExitButton"*/;
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

  if ( (byte_4B65971 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_SceneList_Type__TypeInfo, value);
    byte_4B65971 = 1;
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
    v10 = sub_1BE4C08(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C1FFBC(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1BE4FE8(v9);
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

  if ( (byte_4B65974 & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type);
    byte_4B65974 = 1;
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
      sub_1BE4D28(messageLabel, *(_QWORD *)&type);
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
    sub_1BE4D28(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      (unsigned int)this->fields.scene,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
}